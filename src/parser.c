#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_use = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_STAR = 8,
  sym_identifier = 9,
  sym_name = 10,
  sym_source_file = 11,
  sym__sub_unit = 12,
  sym_use_directive = 13,
  sym__use_clause = 14,
  sym_use_alias = 15,
  sym_use_list = 16,
  sym_use_wildcard = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_use_list_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_use] = "use",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__sub_unit] = "_sub_unit",
  [sym_use_directive] = "use_directive",
  [sym__use_clause] = "_use_clause",
  [sym_use_alias] = "use_alias",
  [sym_use_list] = "use_list",
  [sym_use_wildcard] = "use_wildcard",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_list_repeat1] = "use_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__sub_unit] = sym__sub_unit,
  [sym_use_directive] = sym_use_directive,
  [sym__use_clause] = sym__use_clause,
  [sym_use_alias] = sym_use_alias,
  [sym_use_list] = sym_use_list,
  [sym_use_wildcard] = sym_use_wildcard,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_list_repeat1] = aux_sym_use_list_repeat1,
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_COMMA] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sub_unit] = {
    .visible = false,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__use_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_use_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_use_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_wildcard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_list_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '*', 16,
        ',', 14,
        ':', 1,
        ';', 9,
        '=', 11,
        'u', 4,
        '{', 13,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__sub_unit] = STATE(8),
    [sym_use_directive] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(13), 4,
      sym__use_clause,
      sym_use_alias,
      sym_use_list,
      sym_use_wildcard,
  [10] = 3,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym__sub_unit,
      sym_use_directive,
  [21] = 3,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [32] = 3,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym__sub_unit,
      sym_use_directive,
  [43] = 3,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_use_list_repeat1,
  [53] = 3,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_use_list_repeat1,
  [63] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
  [73] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
  [83] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_use_list_repeat1,
  [93] = 2,
    ACTIONS(7), 1,
      anon_sym_use,
    STATE(16), 2,
      sym__sub_unit,
      sym_use_directive,
  [101] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
  [111] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [116] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [121] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [126] = 1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [131] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_STAR,
  [138] = 2,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_name,
  [145] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [150] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [155] = 1,
    ACTIONS(24), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [160] = 2,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [167] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [172] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(65), 1,
      sym_name,
  [180] = 1,
    ACTIONS(67), 1,
      sym_identifier,
  [184] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [188] = 1,
    ACTIONS(55), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 21,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 43,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 111,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 131,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 155,
  [SMALL_STATE(22)] = 160,
  [SMALL_STATE(23)] = 167,
  [SMALL_STATE(24)] = 172,
  [SMALL_STATE(25)] = 176,
  [SMALL_STATE(26)] = 180,
  [SMALL_STATE(27)] = 184,
  [SMALL_STATE(28)] = 188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_clause, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_alias, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_wildcard, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 7, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
