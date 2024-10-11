module.exports = grammar({
  name: "firebase_rules",

  rules: {
    source_file: ($) => repeat($.rule_declaration),

    rule_declaration: ($) =>
      seq(
        "rules_version",
        "=",
        $.string,
        ";",
        "service",
        $.identifier,
        "{",
        repeat($.match_block),
        "}",
      ),

    match_block: ($) => seq("match", $.path, "{", repeat($.rule), "}"),

    path: ($) => /\/[^{]+/,

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
      choice($.variable_declaration, $.return_statement, $.expression),

    variable_declaration: ($) =>
      seq(choice("let", "const"), $.identifier, "=", $.expression, ";"),

    return_statement: ($) => seq("return", $.expression, ";"),

    expression: ($) =>
      choice(
        $.binary_expression,
        $.function_call,
        $.identifier,
        $.string,
        $.number,
        $.boolean,
      ),

    binary_expression: ($) =>
      prec.left(
        1,
        seq(
          $.expression,
          choice("&&", "||", "==", "!=", "<", ">", "<=", ">="),
          $.expression,
        ),
      ),

    function_call: ($) =>
      seq($.identifier, "(", optional($.argument_list), ")"),

    argument_list: ($) => seq($.expression, repeat(seq(",", $.expression))),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string: ($) => /'[^']*'|"[^"]*"/,
    number: ($) => /\d+/,
    boolean: ($) => choice("true", "false"),

    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
