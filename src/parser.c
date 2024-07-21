#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  sym_name = 3,
  anon_sym_const = 4,
  anon_sym_BANG = 5,
  anon_sym_i8 = 6,
  anon_sym_i16 = 7,
  anon_sym_i32 = 8,
  anon_sym_i64 = 9,
  anon_sym_u8 = 10,
  anon_sym_u16 = 11,
  anon_sym_u32 = 12,
  anon_sym_u64 = 13,
  anon_sym_int = 14,
  anon_sym_uint = 15,
  anon_sym_size = 16,
  anon_sym_uintptr = 17,
  anon_sym_f32 = 18,
  anon_sym_f64 = 19,
  anon_sym_bool = 20,
  anon_sym_done = 21,
  anon_sym_never = 22,
  anon_sym_opaque = 23,
  anon_sym_rune = 24,
  anon_sym_str = 25,
  anon_sym_valist = 26,
  anon_sym_void = 27,
  anon_sym_1 = 28,
  anon_sym_export = 29,
  anon_sym_let = 30,
  anon_sym_COMMA = 31,
  anon_sym_COLON = 32,
  anon_sym_EQ = 33,
  anon_sym_use = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_STAR = 38,
  sym_source_file = 39,
  sym__import_or_declaration = 40,
  sym_type = 41,
  sym__storage_class = 42,
  sym__primitive_type = 43,
  sym__expression = 44,
  sym_expression = 45,
  sym__declaration = 46,
  sym_global_declaration = 47,
  sym_global_binding = 48,
  sym_use_directive = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_global_declaration_repeat1 = 51,
  aux_sym_use_directive_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [anon_sym_const] = "const",
  [anon_sym_BANG] = "!",
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
  [anon_sym_bool] = "bool",
  [anon_sym_done] = "done",
  [anon_sym_never] = "never",
  [anon_sym_opaque] = "opaque",
  [anon_sym_rune] = "rune",
  [anon_sym_str] = "str",
  [anon_sym_valist] = "valist",
  [anon_sym_void] = "void",
  [anon_sym_1] = "1",
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_use] = "use",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [sym_source_file] = "source_file",
  [sym__import_or_declaration] = "_import_or_declaration",
  [sym_type] = "type",
  [sym__storage_class] = "_storage_class",
  [sym__primitive_type] = "_primitive_type",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_opaque] = anon_sym_opaque,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_valist] = anon_sym_valist,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_source_file] = sym_source_file,
  [sym__import_or_declaration] = sym__import_or_declaration,
  [sym_type] = sym_type,
  [sym__storage_class] = sym__storage_class,
  [sym__primitive_type] = sym__primitive_type,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [anon_sym_1] = {
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
  [anon_sym_STAR] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '!', 68,
        '*', 102,
        ',', 94,
        '1', 91,
        ':', 96,
        ';', 64,
        '=', 97,
        'b', 39,
        'c', 35,
        'd', 36,
        'e', 59,
        'f', 6,
        'i', 1,
        'l', 24,
        'n', 18,
        'o', 40,
        'r', 57,
        's', 26,
        'u', 2,
        'v', 15,
        '{', 100,
        '}', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'q') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'z') ADVANCE(22);
      END_STATE();
    case 61:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '=') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_valist);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_valist] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__import_or_declaration] = STATE(24),
    [sym__declaration] = STATE(24),
    [sym_global_declaration] = STATE(24),
    [sym_use_directive] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(11),
  },
  [2] = {
    [sym_type] = STATE(18),
    [sym__storage_class] = STATE(15),
    [sym__primitive_type] = STATE(15),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
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
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_uint,
    STATE(11), 2,
      sym__storage_class,
      sym__primitive_type,
    ACTIONS(23), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [34] = 3,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(10), 2,
      sym__storage_class,
      sym__primitive_type,
    ACTIONS(27), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [65] = 3,
    ACTIONS(25), 1,
      anon_sym_uint,
    STATE(11), 2,
      sym__storage_class,
      sym__primitive_type,
    ACTIONS(23), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [96] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(33), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [116] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(33), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [136] = 4,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(33), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [153] = 3,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [164] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [171] = 1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [178] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [189] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [200] = 3,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(29), 1,
      sym_global_binding,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [211] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [218] = 3,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(29), 1,
      sym_global_binding,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [229] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [240] = 2,
    ACTIONS(66), 1,
      anon_sym_EQ,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [249] = 2,
    STATE(38), 1,
      sym_global_declaration,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
  [257] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_use_directive_repeat1,
  [267] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_use_directive_repeat1,
  [277] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
  [287] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [293] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
  [303] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_use_directive_repeat1,
  [313] = 2,
    ACTIONS(92), 1,
      anon_sym_1,
    STATE(28), 2,
      sym__expression,
      sym_expression,
  [321] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [327] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [333] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [339] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
  [349] = 2,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(12), 1,
      sym_global_binding,
  [356] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [361] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [366] = 2,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_STAR,
  [373] = 2,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      anon_sym_EQ,
  [380] = 2,
    ACTIONS(92), 1,
      anon_sym_1,
    STATE(23), 1,
      sym_expression,
  [387] = 2,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(29), 1,
      sym_global_binding,
  [394] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [399] = 2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_name,
  [406] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [411] = 1,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [416] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [421] = 2,
    ACTIONS(110), 1,
      sym_name,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [428] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [433] = 1,
    ACTIONS(120), 1,
      sym_name,
  [437] = 1,
    ACTIONS(102), 1,
      sym_identifier,
  [441] = 1,
    ACTIONS(122), 1,
      sym_identifier,
  [445] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [449] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [453] = 1,
    ACTIONS(110), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 240,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 277,
  [SMALL_STATE(23)] = 287,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 303,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 339,
  [SMALL_STATE(31)] = 349,
  [SMALL_STATE(32)] = 356,
  [SMALL_STATE(33)] = 361,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 380,
  [SMALL_STATE(37)] = 387,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 399,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 411,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 421,
  [SMALL_STATE(44)] = 428,
  [SMALL_STATE(45)] = 433,
  [SMALL_STATE(46)] = 437,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 445,
  [SMALL_STATE(49)] = 449,
  [SMALL_STATE(50)] = 453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
