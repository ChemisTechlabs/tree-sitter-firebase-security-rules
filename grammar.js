/**
 * @file Firebase Security Rules grammar for tree-sitter
 * @author Guilherme Caldas <gcaldas@chemis.tech>
 * @license BSD-3-Clause
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "firebase_rules",
  extras: ($) => [$.comment, /\s/],
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
      seq("function", $.identifier, $.argument_list, $.function_block),

    argument_list: ($) => seq("(", optional($.identifier), ")"),

    function_block: ($) => seq("{", repeat1($._statement), "}"),

    // return 1 is number;
    return_statement: ($) => seq("return", $._expression, ";"),

    // allow read: if true;
    // allow update: if request.auth != null;
    // allow create, delete: if isAdmin() || canCreate();
    rule_definition: ($) =>
      seq(
        "allow",
        seq($.action, repeat(seq(",", $.action))),
        ":",
        "if",
        $._expression,
        ";",
      ),

    action: () =>
      choice("read", "write", "create", "update", "delete", "get", "list"),

    // any kind of expression
    _expression: ($) =>
      prec(
        13,
        choice(
          $.identifier,
          $.primitives,
          $.parenthesized_expression,
          $.index_expression,
          $.call_expression,
          $.member_expression,
          $.unary_expression,
          $.binary_expression,
          $.ternary_expression,
        ),
      ),

    _boolean_expression: ($) =>
      choice(
        $._unary_boolean,
        $._binary_boolean,
        $.identifier,
        $.boolean,
        $.parenthesized_expression,
        $.index_expression,
        $.call_expression,
        $.member_expression,
        $.ternary_expression,
      ),

    _non_boolean_expression: ($) =>
      prec(
        2,
        choice(
          $._unary_non_boolean,
          $._binary_non_boolean,
          $.identifier,
          $.primitives,
          $.parenthesized_expression,
          $.index_expression,
          $.call_expression,
          $.member_expression,
          $.ternary_expression,
        ),
      ),

    // (1 + 1)
    parenthesized_expression: ($) => seq("(", $._expression, ")"),

    // list[index]
    index_expression: ($) =>
      seq($._expression, "[", choice($._expression, $.range_expression), "]"),

    range_expression: ($) => seq($._range_item, ":", $._range_item),

    _range_item: ($) =>
      choice(
        $.number,
        $.identifier,
        $.call_expression,
        $.parenthesized_expression,
        $.member_expression,
      ),

    // call()
    call_expression: ($) => seq($.identifier, $.parameter_list),
    parameter_list: ($) => seq("(", optional(choice($._list, $.path)), ")"),

    // foo.bar
    // foo.call()
    // foo.bar[0].call()
    // call().foo
    member_expression: ($) =>
      prec.left(
        14,
        seq(
          $._expression,
          ".",
          choice($.identifier, $.call_expression, $.index_expression),
        ),
      ),

    // !foo()
    // -10
    unary_expression: ($) => choice($._unary_boolean, $._unary_non_boolean),

    _unary_boolean: ($) => prec.left(12, seq("!", $._expression)),
    _unary_non_boolean: ($) => prec.left(12, seq("-", $._expression)),

    // 1 * 2
    // foo > bar
    // a && b
    binary_expression: ($) => choice($._binary_boolean, $._binary_non_boolean),

    _binary_non_boolean: ($) =>
      choice(
        prec.left(10, seq($._expression, choice("*", "/", "%"), $._expression)),
        prec.left(9, seq($._expression, choice("+", "-"), $._expression)),
      ),

    _binary_boolean: ($) =>
      choice(
        prec.left(
          8,
          seq($._expression, choice(">", ">=", "<", "<="), $._expression),
        ),
        prec.left(7, seq($._expression, choice("==", "!="), $._expression)),
        prec.left(6, seq($._expression, "in", $._non_boolean_expression)),
        prec.left(5, seq($._expression, "is", $.type)),
        prec.left(4, seq($._expression, "&&", $._expression)),
        prec.left(3, seq($._expression, "||", $._expression)),
      ),

    // foo == true ? x() : y()
    ternary_expression: ($) =>
      prec.left(2, seq($._expression, "?", $._expression, ":", $._expression)),

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
        seq("/", "$(", $._expression, ")"),
        seq("/", "(", $.segment_identifier, ")"),
      ),

    // primitive types
    primitives: ($) =>
      choice($.string, $.number, $.boolean, $.list, $.map, $.null),

    // "string"
    string: () => /'[^']*'|"[^"]*"/,

    // 1
    // 2.1
    number: () => /(\d+|\d+\.\d+)/,

    // true
    // false
    boolean: () => choice("true", "false"),

    // []
    // [1, 2, 3]
    list: ($) => seq("[", optional($._list), "]"),

    // null
    null: () => "null",

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

    type: () =>
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

    service_name: () => choice("cloud.firestore", "firebase.storage"),

    segment_identifier: () => prec(0, /[a-zA-Z\s\-\_\.]+/),
    identifier: () => prec(0, /[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
