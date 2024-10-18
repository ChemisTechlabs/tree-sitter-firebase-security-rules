module.exports = grammar({
  name: "firebase_rules",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => seq($.rule_declaration, $.service_declaration),

    rule_declaration: ($) => seq("rules_version", "=", $.string, ";"),

    service_declaration: ($) =>
      seq("service", $.service_name, "{", repeat($.match_block), "}"),

    match_block: ($) => seq("match", $.path, "{", repeat($.rule), "}"),

    path: ($) =>
      seq(
        "/",
        choice($.segment, $.identifier),
        repeat(seq("/", choice($.segment, $.identifier))),
      ),

    segment: ($) => seq("{", $.identifier, optional("=**"), "}"),

    rule: ($) => choice($.allow_rule, $.function_declaration, $.match_block),

    allow_rule: ($) =>
      seq("allow", $.operation_list, ":", "if", $.expression, ";"),

    operation_list: ($) => seq($.operation, repeat(seq(",", $.operation))),

    operation: ($) =>
      choice("read", "write", "create", "update", "delete", "get", "list"),

    function_declaration: ($) =>
      seq(
        "function",
        $.identifier,
        "(",
        optional($.parameter_list),
        ")",
        "{",
        repeat($.statement),
        "}",
      ),

    parameter_list: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    statement: ($) =>
      choice(
        $.variable_declaration,
        $.return_statement,
        $.expression,
        $.if_statement,
      ),

    if_statement: ($) =>
      seq(
        "if",
        "(",
        $.expression,
        ")",
        "{",
        repeat($.statement),
        "}",
        optional(
          seq(
            "else",
            choice(seq("{", repeat($.statement), "}"), $.if_statement),
          ),
        ),
      ),

    variable_declaration: ($) =>
      seq(choice("let", "const"), $.identifier, "=", $.expression, ";"),

    return_statement: ($) => seq("return", $.expression, ";"),

    expression: ($) =>
      prec.left(
        1,
        choice(
          $.field_access,
          $.binary_expression,
          $.ternary_expression,
          $.function_call,
          $.identifier,
          $.string,
          $.number,
          $.boolean,
          $.array,
          $.index_call,
        ),
      ),

    binary_expression: ($) =>
      prec.left(
        1,
        seq(
          $.expression,
          choice(
            "&&",
            "||",
            "==",
            "!=",
            "<",
            ">",
            "<=",
            ">=",
            "+",
            "-",
            "/",
            "*",
            "%",
            "in",
            "is",
          ),
          $.expression,
        ),
      ),

    ternary_expression: ($) =>
      prec.left(1, seq($.expression, "?", $.expression, ":", $.expression)),

    function_call: ($) =>
      seq(
        $.identifier,
        "(",
        optional(choice($.argument_list, $.database_path)),
        ")",
      ),

    index_call: ($) => seq($.identifier, "[", $.expression, "]"),

    argument_list: ($) => seq($.expression, repeat(seq(",", $.expression))),
    database_path: ($) =>
      seq(
        "/databases/",
        "$(database)",
        repeat(seq("/", choice($.identifier, seq("$(", $.expression, ")")))),
      ),
    field_access: ($) =>
      prec.left(
        2,
        seq(
          choice($.identifier, $.function_call),
          repeat1(seq(".", choice($.identifier, $.function_call))),
        ),
      ),

    identifier: ($) => prec(0, /[a-zA-Z_][a-zA-Z0-9_]*/),
    string: ($) => /'[^']*'|"[^"]*"/,
    number: ($) => /\d+/,
    boolean: ($) => choice("true", "false"),
    array: ($) =>
      seq(
        "[",
        optional($.expression),
        optional(repeat(seq(",", $.expression))),
        "]",
      ),

    service_name: ($) => choice("cloud.firestore", "firebase.storage"),
    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
