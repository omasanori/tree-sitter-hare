#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_export = 2,
  sym_identifier = 3,
  sym_name = 4,
  anon_sym_1 = 5,
  anon_sym_let = 6,
  anon_sym_const = 7,
  anon_sym_COMMA = 8,
  anon_sym_ATthreadlocal = 9,
  anon_sym_EQ = 10,
  anon_sym_use = 11,
  anon_sym_COLON_COLON = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_STAR = 15,
  sym_source_file = 16,
  sym__import_or_declaration = 17,
  sym__expression = 18,
  sym_expression = 19,
  sym_declaration = 20,
  sym_global_declaration = 21,
  sym_global_binding = 22,
  sym_use_directive = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_global_declaration_repeat1 = 25,
  aux_sym_use_directive_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_export] = "export",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [anon_sym_1] = "1",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATthreadlocal] = "@threadlocal",
  [anon_sym_EQ] = "=",
  [anon_sym_use] = "use",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [sym_source_file] = "source_file",
  [sym__import_or_declaration] = "_import_or_declaration",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym_declaration] = "declaration",
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
  [anon_sym_export] = anon_sym_export,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATthreadlocal] = anon_sym_ATthreadlocal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_source_file] = sym_source_file,
  [sym__import_or_declaration] = sym__import_or_declaration,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym_declaration] = sym_declaration,
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
  [anon_sym_export] = {
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
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '*', 45,
        ',', 38,
        '1', 35,
        ':', 1,
        ';', 31,
        '=', 40,
        '@', 22,
        'c', 14,
        'e', 26,
        'l', 9,
        'u', 20,
        '{', 43,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '@') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ATthreadlocal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
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
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATthreadlocal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__import_or_declaration] = STATE(12),
    [sym_declaration] = STATE(12),
    [sym_global_declaration] = STATE(30),
    [sym_use_directive] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    STATE(26), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [22] = 6,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    STATE(26), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [44] = 5,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    STATE(30), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
    STATE(26), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [63] = 4,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_ATthreadlocal,
    STATE(21), 1,
      sym_global_binding,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [77] = 4,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_ATthreadlocal,
    STATE(21), 1,
      sym_global_binding,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [91] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [102] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [113] = 3,
    ACTIONS(36), 1,
      anon_sym_EQ,
    ACTIONS(38), 1,
      anon_sym_COLON_COLON,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [124] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [135] = 3,
    STATE(29), 1,
      sym_declaration,
    STATE(30), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_let,
      anon_sym_const,
  [146] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
  [156] = 3,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_ATthreadlocal,
    STATE(21), 1,
      sym_global_binding,
  [166] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [172] = 1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [178] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_use_directive_repeat1,
  [188] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
  [198] = 2,
    ACTIONS(57), 1,
      anon_sym_1,
    STATE(15), 2,
      sym__expression,
      sym_expression,
  [206] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_use_directive_repeat1,
  [216] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_use_directive_repeat1,
  [226] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [232] = 2,
    ACTIONS(57), 1,
      anon_sym_1,
    STATE(14), 2,
      sym__expression,
      sym_expression,
  [240] = 3,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_ATthreadlocal,
    STATE(7), 1,
      sym_global_binding,
  [250] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
  [260] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [266] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [271] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_STAR,
  [278] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [283] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [288] = 1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [293] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_name,
  [300] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [305] = 1,
    ACTIONS(53), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [310] = 1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [315] = 2,
    ACTIONS(84), 1,
      sym_name,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
  [322] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [327] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [331] = 1,
    ACTIONS(76), 1,
      sym_identifier,
  [335] = 1,
    ACTIONS(94), 1,
      anon_sym_EQ,
  [339] = 1,
    ACTIONS(96), 1,
      sym_name,
  [343] = 1,
    ACTIONS(98), 1,
      sym_identifier,
  [347] = 1,
    ACTIONS(100), 1,
      anon_sym_EQ,
  [351] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [355] = 1,
    ACTIONS(104), 1,
      sym_identifier,
  [359] = 1,
    ACTIONS(84), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 146,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 232,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 250,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 283,
  [SMALL_STATE(30)] = 288,
  [SMALL_STATE(31)] = 293,
  [SMALL_STATE(32)] = 300,
  [SMALL_STATE(33)] = 305,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 315,
  [SMALL_STATE(36)] = 322,
  [SMALL_STATE(37)] = 327,
  [SMALL_STATE(38)] = 331,
  [SMALL_STATE(39)] = 335,
  [SMALL_STATE(40)] = 339,
  [SMALL_STATE(41)] = 343,
  [SMALL_STATE(42)] = 347,
  [SMALL_STATE(43)] = 351,
  [SMALL_STATE(44)] = 355,
  [SMALL_STATE(45)] = 359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_or_declaration, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
