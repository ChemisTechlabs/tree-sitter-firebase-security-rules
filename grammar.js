/**
 * Tree-sitter grammar for Firebase Security Rules
 *
 * This grammar handles the syntax for Firebase Security Rules which are used to
 * define access control and data validation rules for Firebase services.
 */
module.exports = grammar({
  name: "firebase_rules",

  /**
   * Elements to be ignored during parsing
   */
  extras: ($) => [$.comment, /\s/],

  rules: {
    /**
     * The root node of the grammar
     * A Firebase Rules file consists of a version declaration followed by service declarations
     */
    source_file: ($) => seq($.rule_declaration, $.service_declaration),

    /**
     * Declares the rules version, e.g. rules_version = '2';
     */
    rule_declaration: ($) => seq("rules_version", "=", $.string, ";"),

    /**
     * Declares a Firebase service and its rules
     * Example: service cloud.firestore { ... }
     */
    service_declaration: ($) =>
      seq("service", $.service_name, "{", repeat($.match_block), "}"),

    /**
     * Match blocks define rules for specific paths in the database
     * Example: match /users/{userId} { ... }
     */
    match_block: ($) => seq("match", $.match_path, "{", repeat($.rule), "}"),

    /**
     * The path pattern in a match block
     * Can include static segments and path variables (segments)
     */
    match_path: ($) =>
      seq(
        "/",
        choice($.segment, $.identifier),
        repeat(seq("/", choice($.segment, $.identifier))),
      ),

    /**
     * Path variable in a match pattern, e.g. {userId} or {docId=**}
     * The =** suffix matches all descendants
     */
    segment: ($) => seq("{", $.identifier, optional("=**"), "}"),

    /**
     * A rule can be an allow statement, function declaration, or nested match block
     */
    rule: ($) => choice($.allow_rule, $.function_declaration, $.match_block),

    /**
     * Allow rule defines permissions, e.g. allow read, write: if true;
     */
    allow_rule: ($) =>
      seq("allow", $.method_sequence, ":", "if", $.expression, ";"),

    /**
     * A sequence of methods for an allow rule, e.g. read, write or get, list
     */
    method_sequence: ($) => seq($.method, repeat(seq(",", $.method))),

    /**
     * Access methods that can be allowed or denied
     * read = get, list; write = create, update, delete
     */
    method: (_) =>
      choice("get", "list", "create", "update", "delete", "read", "write"),

    /**
     * Custom function declaration for reusable rule logic
     */
    function_declaration: ($) =>
      seq(
        "function",
        $.identifier,
        "(",
        optional($.parameter_list),
        ")",
        "{",
        repeat($.statement),
        $.return_statement,
        "}",
      ),

    /**
     * Function parameters list
     */
    parameter_list: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    /**
     * A statement within a function body
     */
    statement: ($) =>
      choice(
        $.variable_declaration,
        $.variable_attribution,
        $.expression,
        $.if_statement,
      ),

    /**
     * If-else statement for conditional logic
     */
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

    /**
     * Variable declaration using let or const
     */
    variable_declaration: ($) =>
      seq(choice("let", "const"), $.identifier, "=", $.expression, ";"),

    /**
     * Variable assignment
     */
    variable_attribution: ($) => seq($.identifier, "=", $.expression, ";"),

    /**
     * Return statement in a function
     */
    return_statement: ($) => seq("return", $.expression, ";"),

    /**
     * Expression - the building block of rule conditions
     */
    expression: ($) =>
      prec.left(
        1,
        choice(
          $.field_access,
          $.operators,
          $.scoped_firestore_function,
          $.built_in_variable,
          $.identifier,
          $.string,
          $.number,
          $.boolean,
          $.array,
          $.map,
        ),
      ),

    /**
     * Various operators used in expressions
     */
    operators: ($) =>
      choice(
        $.operator_index,
        $.operator_call,
        $.operator_unary_negation,
        $.operator_multiplicative,
        $.operator_additive,
        $.operator_relational,
        $.operator_existence_in,
        $.operator_type_comparison,
        $.operator_comparison,
        $.operator_and,
        $.operator_or,
        $.operator_ternary,
      ),

    /**
     * Array or map indexing operation, e.g. users[userId]
     */
    operator_index: ($) =>
      seq($.expression, choice($.array_access, $.map_access)),

    /**
     * Function call operation
     */
    operator_call: ($) =>
      seq($.expression, "(", optional(choice($.argument_list)), ")"),

    /**
     * Unary negation: logical (!) or arithmetic (-)
     */
    operator_unary_negation: ($) => seq(choice("!", "-"), $.expression),

    /**
     * Multiplicative operators: *, /, %
     */
    operator_multiplicative: ($) =>
      seq($.expression, choice("/", "%", "*"), $.expression),

    /**
     * Additive operators: +, -
     */
    operator_additive: ($) => seq($.expression, choice("+", "-"), $.expression),

    /**
     * Relational operators: >, <, >=, <=
     */
    operator_relational: ($) =>
      seq($.expression, choice(">", "<", ">=", "<="), $.expression),

    /**
     * Membership testing with 'in' operator
     */
    operator_existence_in: ($) => seq($.expression, "in", $.expression),

    /**
     * Type checking with 'is' operator
     */
    operator_type_comparison: ($) => seq($.expression, "is", $.type),

    /**
     * Equality operators: ==, !=
     */
    operator_comparison: ($) =>
      seq($.expression, choice("==", "!="), $.expression),

    /**
     * Logical AND operator
     */
    operator_and: ($) => seq($.expression, "&&", $.expression),

    /**
     * Logical OR operator
     */
    operator_or: ($) => seq($.expression, "||", $.expression),

    /**
     * Ternary conditional operator
     */
    operator_ternary: ($) =>
      seq($.expression, "?", $.expression, ":", $.expression),

    /**
     * Firestore built-in functions: get(), exists(), path()
     */
    scoped_firestore_function: ($) =>
      seq(choice("get", "exists", "path"), "(", $.path, ")"),

    /**
     * Firebase Rules built-in variables
     */
    built_in_variable: ($) => choice($.request_object, $.resource_object),

    /**
     * The resource object represents the requested document
     */
    resource_object: ($) => seq("resource", $.map_access),

    /**
     * The request object contains details about the current request
     */
    request_object: ($) =>
      seq(
        "request",
        ".",
        choice(
          $.request_auth,
          field("request_method", "method"),
          $.request_params,
          field("request_path", "path"),
          $.request_query,
          $.request_resource,
          $.request_time,
        ),
      ),

    /**
     * Authentication information about the client making the request
     */
    request_auth: ($) => seq("auth", optional($.map_access)),

    /**
     * Path parameters from the URL
     */
    request_params: ($) => seq("params", optional($.array_access)),

    /**
     * Query parameters from the URL
     */
    request_query: ($) => seq("query", optional($.map_access)),

    /**
     * The resource being written (for write operations)
     */
    request_resource: ($) => seq("resource", optional($.field_access)),

    /**
     * The time when the request was received
     */
    request_time: ($) => seq("time", optional($.field_access)),

    /**
     * Function arguments list
     */
    argument_list: ($) => seq($.expression, repeat(seq(",", $.expression))),

    /**
     * Access to object fields using dot notation
     */
    field_access: ($) =>
      prec.left(
        11,
        seq(
          choice($.identifier, $.boolean, $.number, $.string, $.array, $.map),
          repeat1(seq(".", choice($.identifier, $.operator_call))),
        ),
      ),

    /**
     * Variable or function identifier
     */
    identifier: (_) => prec(0, /[a-zA-Z_][a-zA-Z0-9_]*/),

    /**
     * String literal, supports both single and double quotes
     */
    string: (_) => /'[^']*'|"[^"]*"/,

    /**
     * Numeric literal
     */
    number: (_) => /\d+/,

    /**
     * Boolean literal: true or false
     */
    boolean: (_) => choice("true", "false"),

    /**
     * Type literals for use with 'is' operator
     */
    type: (_) =>
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

    /**
     * Array literal
     */
    array: ($) =>
      seq(
        "[",
        optional($.expression),
        optional(repeat(seq(",", $.expression))),
        "]",
      ),

    /**
     * Map/object literal
     */
    map: ($) =>
      seq(
        "{",
        optional(seq($.string, ":", $.expression)),
        optional(repeat(seq(",", $.string, ":", $.expression))),
        "}",
      ),

    /**
     * Array index access using bracketed numeric index
     */
    array_access: ($) => seq("[", field("index", $.number), "]"),

    /**
     * Map property access using either bracket notation or dot notation
     */
    map_access: ($) =>
      choice(seq("[", field("key", $.expression), "]"), seq(".", $.expression)),

    /**
     * Database document path format
     */
    path: ($) =>
      seq(
        "/databases/",
        optional("$"),
        "(database)",
        repeat(seq("/", choice($.identifier, seq("$(", $.expression, ")")))),
      ),

    /**
     * Firebase service name
     */
    service_name: (_) => choice("cloud.firestore", "firebase.storage"),

    /**
     * Comments: both line comments and block comments
     */
    comment: (_) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
