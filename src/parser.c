#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_SEMI = 2,
  sym_identifier = 3,
  anon_sym_const = 4,
  anon_sym_BANG = 5,
  anon_sym_bool = 6,
  anon_sym_done = 7,
  anon_sym_never = 8,
  anon_sym_opaque = 9,
  anon_sym_rune = 10,
  anon_sym_str = 11,
  anon_sym_valist = 12,
  anon_sym_void = 13,
  anon_sym_i8 = 14,
  anon_sym_i16 = 15,
  anon_sym_i32 = 16,
  anon_sym_i64 = 17,
  anon_sym_u8 = 18,
  anon_sym_u16 = 19,
  anon_sym_u32 = 20,
  anon_sym_u64 = 21,
  anon_sym_int = 22,
  anon_sym_uint = 23,
  anon_sym_size = 24,
  anon_sym_uintptr = 25,
  anon_sym_f32 = 26,
  anon_sym_f64 = 27,
  anon_sym_nullable = 28,
  anon_sym_STAR = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  anon_sym_null = 32,
  sym_escape_sequence = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_section_token1 = 35,
  anon_sym_DQUOTE2 = 36,
  sym_raw_string_section = 37,
  anon_sym_export = 38,
  anon_sym_let = 39,
  anon_sym_COMMA = 40,
  anon_sym_ATthreadlocal = 41,
  anon_sym_COLON = 42,
  anon_sym_EQ = 43,
  anon_sym_ATsymbol = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  anon_sym_use = 47,
  anon_sym_COLON_COLON = 48,
  anon_sym_LBRACE = 49,
  anon_sym_RBRACE = 50,
  sym_source_file = 51,
  sym__import_or_declaration = 52,
  sym_type = 53,
  sym__storage_class = 54,
  sym__primitive_type = 55,
  sym__integer_type = 56,
  sym__floating_type = 57,
  sym_pointer_type = 58,
  sym__expression = 59,
  sym_expression = 60,
  sym__plain_expression = 61,
  sym_literal = 62,
  sym_string_literal = 63,
  sym_string_section = 64,
  sym__declaration = 65,
  sym_global_declaration = 66,
  sym_global_binding = 67,
  sym_decl_attr = 68,
  sym_use_directive = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_string_literal_repeat1 = 71,
  aux_sym_string_section_repeat1 = 72,
  aux_sym_global_declaration_repeat1 = 73,
  aux_sym_use_directive_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [anon_sym_const] = "const",
  [anon_sym_BANG] = "!",
  [anon_sym_bool] = "bool",
  [anon_sym_done] = "done",
  [anon_sym_never] = "never",
  [anon_sym_opaque] = "opaque",
  [anon_sym_rune] = "rune",
  [anon_sym_str] = "str",
  [anon_sym_valist] = "valist",
  [anon_sym_void] = "void",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_size] = "size",
  [anon_sym_uintptr] = "uintptr",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_nullable] = "nullable",
  [anon_sym_STAR] = "*",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_section_token1] = "string_section_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_raw_string_section] = "raw_string_section",
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATthreadlocal] = "@threadlocal",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_ATsymbol] = "@symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_use] = "use",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__import_or_declaration] = "_import_or_declaration",
  [sym_type] = "type",
  [sym__storage_class] = "_storage_class",
  [sym__primitive_type] = "_primitive_type",
  [sym__integer_type] = "_integer_type",
  [sym__floating_type] = "_floating_type",
  [sym_pointer_type] = "pointer_type",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym__plain_expression] = "_plain_expression",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_string_section] = "string_section",
  [sym__declaration] = "_declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_global_binding] = "global_binding",
  [sym_decl_attr] = "decl_attr",
  [sym_use_directive] = "use_directive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_section_repeat1] = "string_section_repeat1",
  [aux_sym_global_declaration_repeat1] = "global_declaration_repeat1",
  [aux_sym_use_directive_repeat1] = "use_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_opaque] = anon_sym_opaque,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_valist] = anon_sym_valist,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_uintptr] = anon_sym_uintptr,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_section_token1] = aux_sym_string_section_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_raw_string_section] = sym_raw_string_section,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATthreadlocal] = anon_sym_ATthreadlocal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ATsymbol] = anon_sym_ATsymbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__import_or_declaration] = sym__import_or_declaration,
  [sym_type] = sym_type,
  [sym__storage_class] = sym__storage_class,
  [sym__primitive_type] = sym__primitive_type,
  [sym__integer_type] = sym__integer_type,
  [sym__floating_type] = sym__floating_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym__plain_expression] = sym__plain_expression,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_section] = sym_string_section,
  [sym__declaration] = sym__declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_global_binding] = sym_global_binding,
  [sym_decl_attr] = sym_decl_attr,
  [sym_use_directive] = sym_use_directive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_section_repeat1] = aux_sym_string_section_repeat1,
  [aux_sym_global_declaration_repeat1] = aux_sym_global_declaration_repeat1,
  [aux_sym_use_directive_repeat1] = aux_sym_use_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opaque] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_string_section] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATthreadlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsymbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__import_or_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__storage_class] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_type] = {
    .visible = false,
    .named = true,
  },
  [sym__floating_type] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__plain_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_section] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_global_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [21] = 21,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 64,
        '"', 79,
        '(', 87,
        ')', 88,
        '*', 69,
        ',', 81,
        ':', 84,
        ';', 29,
        '=', 85,
        '@', 21,
        '\\', 23,
        '`', 6,
        'd', 57,
        'f', 47,
        'n', 61,
        't', 59,
        'v', 58,
        '{', 90,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(80);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 76,
        '\'', 76,
        '0', 76,
        '\\', 76,
        'a', 76,
        'b', 76,
        'f', 76,
        'n', 76,
        'r', 76,
        't', 76,
        'v', 76,
      );
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 64,
        '"', 77,
        '(', 87,
        ')', 88,
        '*', 69,
        ',', 81,
        ':', 84,
        ';', 29,
        '=', 85,
        '@', 21,
        '`', 6,
        'd', 57,
        'f', 47,
        'n', 61,
        't', 59,
        'v', 58,
        '{', 90,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 77,
        ')', 88,
        ',', 81,
        ':', 4,
        ';', 29,
        '=', 85,
        '`', 6,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '@') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_done);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_raw_string_section);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATthreadlocal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATsymbol);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
        'b', 1,
        'c', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'l', 6,
        'n', 7,
        'o', 8,
        'r', 9,
        's', 10,
        'u', 11,
        'v', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_valist);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_valist] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_uintptr] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_raw_string_section] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATthreadlocal] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ATsymbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym__import_or_declaration] = STATE(44),
    [sym__declaration] = STATE(44),
    [sym_global_declaration] = STATE(44),
    [sym_use_directive] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_uint,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    STATE(38), 1,
      sym_type,
    STATE(34), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(17), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [49] = 8,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_uint,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    STATE(31), 1,
      sym_type,
    STATE(34), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(17), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [98] = 8,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_uint,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    STATE(39), 1,
      sym_type,
    STATE(34), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(17), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [147] = 8,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_uint,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_type,
    STATE(34), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(17), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [196] = 8,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_uint,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    STATE(29), 1,
      sym_type,
    STATE(34), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(17), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [245] = 6,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(27), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [288] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(27), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [328] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_uint,
    STATE(37), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(31), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [368] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(52), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    STATE(51), 2,
      sym__expression,
      sym_expression,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [400] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(52), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym__expression,
      sym_expression,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [432] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(52), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(47), 2,
      sym__expression,
      sym_expression,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [464] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(47), 1,
      sym_expression,
    STATE(52), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [495] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(46), 1,
      sym_expression,
    STATE(52), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [526] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(52), 1,
      sym_string_literal,
    STATE(55), 1,
      sym_expression,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [557] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(68), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [577] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(68), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [597] = 4,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(68), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [614] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_raw_string_section,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [631] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_raw_string_section,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [648] = 6,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(65), 1,
      anon_sym_ATsymbol,
    STATE(45), 1,
      sym_global_binding,
    STATE(65), 1,
      sym_decl_attr,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [668] = 6,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(65), 1,
      anon_sym_ATsymbol,
    STATE(45), 1,
      sym_global_binding,
    STATE(65), 1,
      sym_decl_attr,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [688] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [697] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [706] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_raw_string_section,
    STATE(73), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
  [720] = 5,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(65), 1,
      anon_sym_ATsymbol,
    STATE(45), 1,
      sym_global_binding,
    STATE(65), 1,
      sym_decl_attr,
  [736] = 5,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(65), 1,
      anon_sym_ATsymbol,
    STATE(32), 1,
      sym_global_binding,
    STATE(65), 1,
      sym_decl_attr,
  [752] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [763] = 2,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [772] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE2,
    STATE(41), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(82), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [783] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [790] = 3,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [801] = 2,
    ACTIONS(94), 1,
      anon_sym_EQ,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [810] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [817] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [824] = 3,
    ACTIONS(102), 1,
      anon_sym_DQUOTE2,
    STATE(30), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(100), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [835] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [842] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [849] = 2,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [858] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [869] = 3,
    ACTIONS(117), 1,
      anon_sym_DQUOTE2,
    STATE(41), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(114), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [880] = 3,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [891] = 2,
    STATE(66), 1,
      sym_global_declaration,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
  [899] = 3,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      aux_sym_source_file_repeat1,
  [909] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [915] = 1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [921] = 1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [927] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
  [937] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [943] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_use_directive_repeat1,
  [953] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [959] = 1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [965] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_use_directive_repeat1,
  [975] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
  [985] = 1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [991] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [997] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_use_directive_repeat1,
  [1007] = 2,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      anon_sym_EQ,
  [1014] = 1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1019] = 1,
    ACTIONS(161), 2,
      sym_identifier,
      anon_sym_ATthreadlocal,
  [1024] = 2,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [1031] = 1,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1036] = 2,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [1043] = 2,
    ACTIONS(173), 1,
      sym_name,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
  [1050] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_ATthreadlocal,
  [1057] = 1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1062] = 1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1067] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1072] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1077] = 2,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [1084] = 1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1089] = 2,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      sym_name,
  [1096] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [1100] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [1104] = 1,
    ACTIONS(195), 1,
      anon_sym_STAR,
  [1108] = 1,
    ACTIONS(197), 1,
      sym_identifier,
  [1112] = 1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
  [1116] = 1,
    ACTIONS(201), 1,
      sym_name,
  [1120] = 1,
    ACTIONS(203), 1,
      sym_identifier,
  [1124] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [1128] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [1132] = 1,
    ACTIONS(177), 1,
      sym_identifier,
  [1136] = 1,
    ACTIONS(173), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 526,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 597,
  [SMALL_STATE(19)] = 614,
  [SMALL_STATE(20)] = 631,
  [SMALL_STATE(21)] = 648,
  [SMALL_STATE(22)] = 668,
  [SMALL_STATE(23)] = 688,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 720,
  [SMALL_STATE(27)] = 736,
  [SMALL_STATE(28)] = 752,
  [SMALL_STATE(29)] = 763,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 783,
  [SMALL_STATE(32)] = 790,
  [SMALL_STATE(33)] = 801,
  [SMALL_STATE(34)] = 810,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 824,
  [SMALL_STATE(37)] = 835,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 869,
  [SMALL_STATE(42)] = 880,
  [SMALL_STATE(43)] = 891,
  [SMALL_STATE(44)] = 899,
  [SMALL_STATE(45)] = 909,
  [SMALL_STATE(46)] = 915,
  [SMALL_STATE(47)] = 921,
  [SMALL_STATE(48)] = 927,
  [SMALL_STATE(49)] = 937,
  [SMALL_STATE(50)] = 943,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 959,
  [SMALL_STATE(53)] = 965,
  [SMALL_STATE(54)] = 975,
  [SMALL_STATE(55)] = 985,
  [SMALL_STATE(56)] = 991,
  [SMALL_STATE(57)] = 997,
  [SMALL_STATE(58)] = 1007,
  [SMALL_STATE(59)] = 1014,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1024,
  [SMALL_STATE(62)] = 1031,
  [SMALL_STATE(63)] = 1036,
  [SMALL_STATE(64)] = 1043,
  [SMALL_STATE(65)] = 1050,
  [SMALL_STATE(66)] = 1057,
  [SMALL_STATE(67)] = 1062,
  [SMALL_STATE(68)] = 1067,
  [SMALL_STATE(69)] = 1072,
  [SMALL_STATE(70)] = 1077,
  [SMALL_STATE(71)] = 1084,
  [SMALL_STATE(72)] = 1089,
  [SMALL_STATE(73)] = 1096,
  [SMALL_STATE(74)] = 1100,
  [SMALL_STATE(75)] = 1104,
  [SMALL_STATE(76)] = 1108,
  [SMALL_STATE(77)] = 1112,
  [SMALL_STATE(78)] = 1116,
  [SMALL_STATE(79)] = 1120,
  [SMALL_STATE(80)] = 1124,
  [SMALL_STATE(81)] = 1128,
  [SMALL_STATE(82)] = 1132,
  [SMALL_STATE(83)] = 1136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 7, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 6, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_attr, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_hare(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
