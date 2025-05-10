/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "firebase_rules",
  extras: ($) => [$.comment, /\s/],
  // word: ($) => $.identifier,
  conflicts: ($) => [[$.call_expression, $.access_expression]],
  rules: {
    source_file: ($) => seq($.version_definition, $.service_definition),

    //  rules_version = '2';
    version_definition: ($) => seq("rules_version", "=", $.string, ";"),

    // service cloud.firestore { ... }
    service_definition: ($) => seq("service", $.service_name, $.service_block),

    service_block: ($) =>
      seq("{", repeat(choice($.match_definition, $.function_definition)), "}"),

    // match /databases/{database}/documents { ... }
    // match /documents/{doc} { ... }
    match_definition: ($) => seq("match", $.path, $.match_block),

    match_block: ($) =>
      seq(
        "{",
        repeat(
          choice($.rule_definition, $.function_definition, $.match_definition),
        ),
        "}",
      ),

    // function myFunction(param1, param2) { ... }
    // function test() { ... }
    function_definition: ($) =>
      seq("function", $.identifier, $.parameters_list, $.function_block),

    parameters_list: ($) => seq("(", optional($._list), ")"),

    function_block: ($) => seq("{", repeat1($._statement), "}"),

    // return 1 is number;
    return_statement: ($) => seq("return", $._expression, ";"),

    // allow read: if true;
    // allow update: if request.auth != null;
    // allow create, delete: if isAdmin() || canCreate();
    rule_definition: ($) =>
      seq(
        "allow",
        seq($._rule, repeat(seq(",", $._rule))),
        ":",
        "if",
        $._expression,
        ";",
      ),

    _rule: () =>
      choice("read", "write", "create", "update", "delete", "get", "list"),

    // any kind of expression
    _expression: ($) =>
      choice(
        $.identifier,
        $._primitives,
        $.index_expression,
        $.call_expression,
        $.access_expression,
        $.unary_expression,
        $.binary_expression,
        $.ternary_expression,
      ),

    // list[index]
    // list[1]
    index_expression: ($) => seq($._expression, "[", $._expression, "]"),

    // call()
    call_expression: ($) => seq($._expression, $.parameters_list),

    // foo.bar
    // foo.call()
    // foo.bar[0].call()
    // call().foo
    access_expression: ($) =>
      seq($._expression, repeat1(seq(".", $._expression))),

    // !foo()
    // -10
    unary_expression: ($) =>
      prec(2, choice(seq("!", $._expression), seq("-", $._expression))),

    // 1 * 2
    // foo > bar
    // a && b
    binary_expression: ($) =>
      choice(
        $.multiplicative_operation,
        $.additive_operation,
        $.relational_operation,
        $.existence_operation,
        $.type_operation,
        $.comparison_operation,
        $.conditional_and_operation,
        $.conditional_or_operation,
      ),

    multiplicative_operation: ($) =>
      choice(
        seq($._expression, "/", $._expression),
        seq($._expression, "%", $._expression),
        seq($._expression, "*", $._expression),
      ),

    additive_operation: ($) =>
      choice(
        seq($._expression, "+", $._expression),
        seq($._expression, "-", $._expression),
      ),

    relational_operation: ($) =>
      choice(
        seq($._expression, ">", $._expression),
        seq($._expression, ">=", $._expression),
        seq($._expression, "<", $._expression),
        seq($._expression, "<=", $._expression),
      ),

    existence_operation: ($) => choice(seq($._expression, "in", $._expression)),

    type_operation: ($) => choice(seq($._expression, "is", $._type)),

    comparison_operation: ($) =>
      choice(
        seq($._expression, "==", $._expression),
        seq($._expression, "!=", $._expression),
      ),

    conditional_and_operation: ($) =>
      choice(seq($._expression, "&&", $._expression)),

    conditional_or_operation: ($) =>
      choice(seq($._expression, "||", $._expression)),

    // foo == true ? x() : y()
    ternary_expression: ($) =>
      prec.left(3, seq($._expression, "?", $._expression, ":", $._expression)),

    // any kind of statement
    _statement: ($) =>
      choice(
        $.variable_declaration,
        $.variable_attribution,
        $.return_statement,
      ),

    // let foo = 1;
    // let bar = get();
    variable_declaration: ($) =>
      seq("let", $.identifier, "=", $._expression, ";"),

    // foo = 2;
    variable_attribution: ($) => seq($.identifier, "=", $._expression, ";"),

    // /databases/{database}/documents
    // /databases/(default)/documents/users/$(request.auth.uid)
    // /b/{bucket}/o
    // /{allPaths=**}
    path: ($) => repeat1($.path_segment),

    path_segment: ($) =>
      choice(
        seq("/", $.segment_identifier),
        seq("/", "{", $.segment_identifier, optional("=**"), "}"),
        seq("/", "(", $.segment_identifier, ")"),
        seq("/", "$(", $._expression, ")"),
      ),

    // primitive types
    _primitives: ($) => choice($.string, $.number, $.boolean, $.list, $.map),

    // "string"
    string: ($) => /'[^']*'|"[^"]*"/,

    // 1
    // 2.1
    number: ($) => /(\d+|\d+\.\d+)/,

    // true
    // false
    boolean: ($) => choice("true", "false"),

    // []
    // [1, 2, 3]
    list: ($) => seq("[", optional($._list), "]"),

    // {}
    // {"a":1, "b":2 }
    map: ($) => seq("{", optional(seq($.key_value)), "}"),
    key_value: ($) =>
      seq(
        field("key", $.string),
        ":",
        field("value", $._expression),
        repeat(
          seq(
            ",",
            field("key", $.identifier),
            ":",
            field("value", $._expression),
          ),
        ),
        optional(","),
      ),

    // 1, 2, 3
    // a, b, c
    _list: ($) => seq($._expression, repeat(seq(",", $._expression))),

    _type: ($) =>
      choice(
        "bool",
        "int",
        "float",
        "number",
        "string",
        "list",
        "map",
        "timestamp",
        "duration",
        "path",
        "latlng",
      ),

    service_name: ($) => choice("cloud.firestore", "firebase.storage"),

    segment_identifier: ($) => prec(0, /[a-zA-Z\s\-\_\.]+/),
    identifier: ($) => prec(0, /[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
