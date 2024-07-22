#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_export = 33,
  anon_sym_let = 34,
  anon_sym_COMMA = 35,
  anon_sym_ATthreadlocal = 36,
  anon_sym_COLON = 37,
  anon_sym_EQ = 38,
  anon_sym_use = 39,
  anon_sym_COLON_COLON = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  sym_source_file = 43,
  sym__import_or_declaration = 44,
  sym_type = 45,
  sym__storage_class = 46,
  sym__primitive_type = 47,
  sym__integer_type = 48,
  sym__floating_type = 49,
  sym_pointer_type = 50,
  sym__expression = 51,
  sym_expression = 52,
  sym__plain_expression = 53,
  sym_literal = 54,
  sym__declaration = 55,
  sym_global_declaration = 56,
  sym_global_binding = 57,
  sym_use_directive = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_global_declaration_repeat1 = 60,
  aux_sym_use_directive_repeat1 = 61,
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
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATthreadlocal] = "@threadlocal",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
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
  [sym__declaration] = "_declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_global_binding] = "global_binding",
  [sym_use_directive] = "use_directive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATthreadlocal] = anon_sym_ATthreadlocal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym__declaration] = sym__declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_global_binding] = sym_global_binding,
  [sym_use_directive] = sym_use_directive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '!', 55,
        '*', 60,
        ',', 67,
        ':', 70,
        ';', 20,
        '=', 71,
        '@', 15,
        'd', 48,
        'f', 38,
        'n', 52,
        't', 50,
        'v', 49,
        '{', 73,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 16:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '}') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '@') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_done);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATthreadlocal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
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
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
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
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATthreadlocal] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__import_or_declaration] = STATE(37),
    [sym__declaration] = STATE(37),
    [sym_global_declaration] = STATE(37),
    [sym_use_directive] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(11),
  },
  [2] = {
    [sym_type] = STATE(23),
    [sym__storage_class] = STATE(28),
    [sym__primitive_type] = STATE(28),
    [sym__integer_type] = STATE(28),
    [sym__floating_type] = STATE(28),
    [sym_pointer_type] = STATE(28),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
  [3] = {
    [sym_type] = STATE(25),
    [sym__storage_class] = STATE(28),
    [sym__primitive_type] = STATE(28),
    [sym__integer_type] = STATE(28),
    [sym__floating_type] = STATE(28),
    [sym_pointer_type] = STATE(28),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
  [4] = {
    [sym_type] = STATE(27),
    [sym__storage_class] = STATE(28),
    [sym__primitive_type] = STATE(28),
    [sym__integer_type] = STATE(28),
    [sym__floating_type] = STATE(28),
    [sym_pointer_type] = STATE(28),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
  [5] = {
    [sym_type] = STATE(24),
    [sym__storage_class] = STATE(28),
    [sym__primitive_type] = STATE(28),
    [sym__integer_type] = STATE(28),
    [sym__floating_type] = STATE(28),
    [sym_pointer_type] = STATE(28),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(20), 5,
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
  [43] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_uint,
    STATE(26), 5,
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
  [83] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(20), 5,
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
  [123] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(33), 2,
      sym__plain_expression,
      sym_literal,
    STATE(43), 2,
      sym__expression,
      sym_expression,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [142] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(29), 2,
      sym__expression,
      sym_expression,
    STATE(33), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [161] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    STATE(33), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [179] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(53), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [199] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(53), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [219] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
    STATE(33), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(37), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [237] = 4,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(53), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [254] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_ATthreadlocal,
    STATE(36), 1,
      sym_global_binding,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [268] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_ATthreadlocal,
    STATE(36), 1,
      sym_global_binding,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [282] = 3,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [293] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [304] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [311] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [322] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [333] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [340] = 2,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [349] = 2,
    ACTIONS(78), 1,
      anon_sym_EQ,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [358] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [365] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [372] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [379] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [385] = 3,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_source_file_repeat1,
  [395] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [401] = 2,
    STATE(48), 1,
      sym_global_declaration,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
  [409] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [415] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_source_file_repeat1,
  [425] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [431] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [437] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
  [447] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_ATthreadlocal,
    STATE(19), 1,
      sym_global_binding,
  [457] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_use_directive_repeat1,
  [467] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_use_directive_repeat1,
  [477] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_ATthreadlocal,
    STATE(36), 1,
      sym_global_binding,
  [487] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_use_directive_repeat1,
  [497] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [503] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [509] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [514] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [519] = 2,
    ACTIONS(120), 1,
      sym_name,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [526] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [531] = 2,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(128), 1,
      anon_sym_EQ,
  [538] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [543] = 2,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(134), 1,
      anon_sym_EQ,
  [550] = 2,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
  [557] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [562] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [567] = 2,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      sym_name,
  [574] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [579] = 1,
    ACTIONS(136), 1,
      sym_identifier,
  [583] = 1,
    ACTIONS(144), 1,
      anon_sym_STAR,
  [587] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [591] = 1,
    ACTIONS(146), 1,
      sym_identifier,
  [595] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [599] = 1,
    ACTIONS(150), 1,
      sym_identifier,
  [603] = 1,
    ACTIONS(152), 1,
      sym_name,
  [607] = 1,
    ACTIONS(120), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 304,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 349,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 372,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 401,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 431,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 447,
  [SMALL_STATE(39)] = 457,
  [SMALL_STATE(40)] = 467,
  [SMALL_STATE(41)] = 477,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 497,
  [SMALL_STATE(44)] = 503,
  [SMALL_STATE(45)] = 509,
  [SMALL_STATE(46)] = 514,
  [SMALL_STATE(47)] = 519,
  [SMALL_STATE(48)] = 526,
  [SMALL_STATE(49)] = 531,
  [SMALL_STATE(50)] = 538,
  [SMALL_STATE(51)] = 543,
  [SMALL_STATE(52)] = 550,
  [SMALL_STATE(53)] = 557,
  [SMALL_STATE(54)] = 562,
  [SMALL_STATE(55)] = 567,
  [SMALL_STATE(56)] = 574,
  [SMALL_STATE(57)] = 579,
  [SMALL_STATE(58)] = 583,
  [SMALL_STATE(59)] = 587,
  [SMALL_STATE(60)] = 591,
  [SMALL_STATE(61)] = 595,
  [SMALL_STATE(62)] = 599,
  [SMALL_STATE(63)] = 603,
  [SMALL_STATE(64)] = 607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 6, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
