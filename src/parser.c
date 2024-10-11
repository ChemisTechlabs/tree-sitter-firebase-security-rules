#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_rules_version = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_service = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_function = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_match = 12,
  anon_sym_allow = 13,
  anon_sym_COLON = 14,
  anon_sym_if = 15,
  anon_sym_return = 16,
  sym_expression = 17,
  sym_path = 18,
  sym_service_type = 19,
  sym_comment = 20,
  sym_string = 21,
  sym_number = 22,
  sym_rules = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_version_definition = 26,
  sym_service_definition = 27,
  sym_service_block = 28,
  sym_function_definition = 29,
  sym_function_block = 30,
  sym_match_definition = 31,
  sym_match_block = 32,
  sym_condition = 33,
  sym_return_statement = 34,
  sym_expression_statement = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_service_block_repeat1 = 37,
  aux_sym_function_definition_repeat1 = 38,
  aux_sym_function_block_repeat1 = 39,
  aux_sym_match_block_repeat1 = 40,
  aux_sym_condition_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_rules_version] = "rules_version",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_match] = "match",
  [anon_sym_allow] = "allow",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_return] = "return",
  [sym_expression] = "expression",
  [sym_path] = "path",
  [sym_service_type] = "service_type",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_rules] = "rules",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_version_definition] = "version_definition",
  [sym_service_definition] = "service_definition",
  [sym_service_block] = "service_block",
  [sym_function_definition] = "function_definition",
  [sym_function_block] = "function_block",
  [sym_match_definition] = "match_definition",
  [sym_match_block] = "match_block",
  [sym_condition] = "condition",
  [sym_return_statement] = "return_statement",
  [sym_expression_statement] = "expression_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_service_block_repeat1] = "service_block_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_block_repeat1] = "function_block_repeat1",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_rules_version] = anon_sym_rules_version,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_return] = anon_sym_return,
  [sym_expression] = sym_expression,
  [sym_path] = sym_path,
  [sym_service_type] = sym_service_type,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_rules] = sym_rules,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_version_definition] = sym_version_definition,
  [sym_service_definition] = sym_service_definition,
  [sym_service_block] = sym_service_block,
  [sym_function_definition] = sym_function_definition,
  [sym_function_block] = sym_function_block,
  [sym_match_definition] = sym_match_definition,
  [sym_match_block] = sym_match_block,
  [sym_condition] = sym_condition,
  [sym_return_statement] = sym_return_statement,
  [sym_expression_statement] = sym_expression_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_service_block_repeat1] = aux_sym_service_block_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_block_repeat1] = aux_sym_function_block_repeat1,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rules_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_service_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_version_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_service_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_service_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym_match_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_version = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 2},
  [1] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        ' ', 3,
        '"', 8,
        '\'', 9,
        '(', 55,
        ')', 57,
        ',', 56,
        '/', 10,
        ':', 58,
        ';', 51,
        '=', 50,
        'c', 91,
        'r', 87,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 3,
        '"', 8,
        '\'', 9,
        '(', 55,
        ')', 57,
        ',', 56,
        '/', 10,
        ':', 58,
        ';', 51,
        '=', 50,
        'c', 91,
        'f', 90,
        'r', 87,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 3,
        '"', 8,
        '\'', 9,
        '(', 55,
        ')', 57,
        ',', 56,
        '/', 10,
        ':', 58,
        ';', 51,
        '=', 50,
        'c', 91,
        'r', 87,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '{') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == '{') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 's') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '/' ||
          lookahead == '}') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '{') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_service_type);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'd', 2,
        'f', 3,
        'i', 4,
        'm', 5,
        'r', 6,
        's', 7,
        'u', 8,
        'w', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_rules);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_rules_version);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_rules_version] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_service_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_rules] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__definition] = STATE(2),
    [sym_version_definition] = STATE(2),
    [sym_service_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_rules_version] = ACTIONS(5),
    [anon_sym_service] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_rules_version,
    ACTIONS(7), 1,
      anon_sym_service,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    STATE(3), 4,
      sym__definition,
      sym_version_definition,
      sym_service_definition,
      aux_sym_source_file_repeat1,
  [19] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_rules_version,
    ACTIONS(20), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym_comment,
    STATE(3), 4,
      sym__definition,
      sym_version_definition,
      sym_service_definition,
      aux_sym_source_file_repeat1,
  [38] = 5,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_function,
    ACTIONS(30), 1,
      anon_sym_match,
    ACTIONS(32), 1,
      sym_comment,
    STATE(11), 3,
      sym_function_definition,
      sym_match_definition,
      aux_sym_service_block_repeat1,
  [56] = 5,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      sym_expression,
    ACTIONS(42), 1,
      sym_comment,
    STATE(5), 3,
      sym_return_statement,
      sym_expression_statement,
      aux_sym_function_block_repeat1,
  [74] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      sym_expression,
    ACTIONS(51), 1,
      sym_comment,
    STATE(5), 3,
      sym_return_statement,
      sym_expression_statement,
      aux_sym_function_block_repeat1,
  [92] = 5,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_match,
    ACTIONS(58), 1,
      anon_sym_allow,
    ACTIONS(61), 1,
      sym_comment,
    STATE(7), 3,
      sym_match_definition,
      sym_condition,
      aux_sym_match_block_repeat1,
  [110] = 5,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      sym_expression,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_comment,
    STATE(6), 3,
      sym_return_statement,
      sym_expression_statement,
      aux_sym_function_block_repeat1,
  [128] = 5,
    ACTIONS(28), 1,
      anon_sym_function,
    ACTIONS(30), 1,
      anon_sym_match,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_comment,
    STATE(4), 3,
      sym_function_definition,
      sym_match_definition,
      aux_sym_service_block_repeat1,
  [146] = 5,
    ACTIONS(30), 1,
      anon_sym_match,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_allow,
    ACTIONS(76), 1,
      sym_comment,
    STATE(7), 3,
      sym_match_definition,
      sym_condition,
      aux_sym_match_block_repeat1,
  [164] = 5,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_function,
    ACTIONS(83), 1,
      anon_sym_match,
    ACTIONS(86), 1,
      sym_comment,
    STATE(11), 3,
      sym_function_definition,
      sym_match_definition,
      aux_sym_service_block_repeat1,
  [182] = 5,
    ACTIONS(30), 1,
      anon_sym_match,
    ACTIONS(74), 1,
      anon_sym_allow,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym_comment,
    STATE(10), 3,
      sym_match_definition,
      sym_condition,
      aux_sym_match_block_repeat1,
  [200] = 1,
    ACTIONS(93), 5,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      anon_sym_allow,
      sym_comment,
  [208] = 1,
    ACTIONS(95), 5,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      anon_sym_allow,
      sym_comment,
  [216] = 1,
    ACTIONS(97), 5,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      anon_sym_allow,
      sym_comment,
  [224] = 1,
    ACTIONS(99), 4,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      sym_comment,
  [231] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_rules_version,
      anon_sym_service,
      sym_comment,
  [238] = 1,
    ACTIONS(103), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      sym_comment,
  [245] = 1,
    ACTIONS(105), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      sym_comment,
  [252] = 1,
    ACTIONS(107), 4,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      sym_comment,
  [259] = 1,
    ACTIONS(109), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_expression,
      sym_comment,
  [266] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_rules_version,
      anon_sym_service,
      sym_comment,
  [273] = 1,
    ACTIONS(113), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_expression,
      sym_comment,
  [280] = 1,
    ACTIONS(115), 4,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      sym_comment,
  [287] = 1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_rules_version,
      anon_sym_service,
      sym_comment,
  [294] = 1,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_rules_version,
      anon_sym_service,
      sym_comment,
  [301] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_match,
      sym_comment,
  [308] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 2,
      anon_sym_COLON,
      sym_rules,
  [316] = 3,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_function_definition_repeat1,
  [326] = 3,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_function_definition_repeat1,
  [336] = 3,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_function_definition_repeat1,
  [346] = 2,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(138), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [354] = 3,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      sym_rules,
    STATE(33), 1,
      aux_sym_condition_repeat1,
  [364] = 3,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(149), 1,
      sym_rules,
    STATE(33), 1,
      aux_sym_condition_repeat1,
  [374] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_function_block,
  [381] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_function_block,
  [388] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_service_block,
  [395] = 1,
    ACTIONS(142), 2,
      anon_sym_COLON,
      sym_rules,
  [400] = 1,
    ACTIONS(130), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [405] = 2,
    ACTIONS(149), 1,
      sym_rules,
    STATE(34), 1,
      aux_sym_condition_repeat1,
  [412] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_match_block,
  [419] = 2,
    ACTIONS(157), 1,
      sym_expression,
    STATE(19), 1,
      sym_expression_statement,
  [426] = 1,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [430] = 1,
    ACTIONS(161), 1,
      sym_string,
  [434] = 1,
    ACTIONS(163), 1,
      sym_expression,
  [438] = 1,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [442] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [446] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [450] = 1,
    ACTIONS(171), 1,
      anon_sym_if,
  [454] = 1,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [458] = 1,
    ACTIONS(175), 1,
      sym_service_type,
  [462] = 1,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
  [466] = 1,
    ACTIONS(179), 1,
      sym_path,
  [470] = 1,
    ACTIONS(181), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 238,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 346,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 364,
  [SMALL_STATE(35)] = 374,
  [SMALL_STATE(36)] = 381,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 395,
  [SMALL_STATE(39)] = 400,
  [SMALL_STATE(40)] = 405,
  [SMALL_STATE(41)] = 412,
  [SMALL_STATE(42)] = 419,
  [SMALL_STATE(43)] = 426,
  [SMALL_STATE(44)] = 430,
  [SMALL_STATE(45)] = 434,
  [SMALL_STATE(46)] = 438,
  [SMALL_STATE(47)] = 442,
  [SMALL_STATE(48)] = 446,
  [SMALL_STATE(49)] = 450,
  [SMALL_STATE(50)] = 454,
  [SMALL_STATE(51)] = 458,
  [SMALL_STATE(52)] = 462,
  [SMALL_STATE(53)] = 466,
  [SMALL_STATE(54)] = 470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_definition, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_block, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_block, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_definition, 4, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_definition, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 1, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_firebaserules(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
