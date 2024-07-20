#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_use = 1,
  anon_sym_SEMI = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_STAR = 7,
  anon_sym_COMMA = 8,
  sym_identifier = 9,
  sym_name = 10,
  sym_source_file = 11,
  sym__sub_unit = 12,
  sym__imports = 13,
  sym_use_directive = 14,
  sym_member_list = 15,
  sym__member_list = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__sub_unit] = "_sub_unit",
  [sym__imports] = "_imports",
  [sym_use_directive] = "use_directive",
  [sym_member_list] = "member_list",
  [sym__member_list] = "_member_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__sub_unit] = sym__sub_unit,
  [sym__imports] = sym__imports,
  [sym_use_directive] = sym_use_directive,
  [sym_member_list] = sym_member_list,
  [sym__member_list] = sym__member_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_member_list] = {
    .visible = true,
    .named = true,
  },
  [sym__member_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '*', 15,
        ',', 16,
        ':', 1,
        ';', 10,
        '=', 11,
        'u', 4,
        '{', 13,
        '}', 14,
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
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(14);
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
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__sub_unit] = STATE(2),
    [sym__imports] = STATE(2),
    [sym_use_directive] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [13] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_use,
    STATE(3), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [26] = 3,
    ACTIONS(14), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      sym_name,
    STATE(19), 1,
      sym__member_list,
  [36] = 3,
    ACTIONS(16), 1,
      sym_name,
    STATE(14), 1,
      sym_member_list,
    STATE(15), 1,
      sym__member_list,
  [46] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [51] = 2,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      sym_name,
  [58] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [63] = 2,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      anon_sym_COLON_COLON,
  [70] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [75] = 2,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_STAR,
  [82] = 2,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_COMMA,
  [89] = 1,
    ACTIONS(34), 1,
      sym_identifier,
  [93] = 1,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
  [97] = 1,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
  [101] = 1,
    ACTIONS(44), 1,
      anon_sym_SEMI,
  [105] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(48), 1,
      anon_sym_SEMI,
  [113] = 1,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
  [117] = 1,
    ACTIONS(52), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 93,
  [SMALL_STATE(15)] = 97,
  [SMALL_STATE(16)] = 101,
  [SMALL_STATE(17)] = 105,
  [SMALL_STATE(18)] = 109,
  [SMALL_STATE(19)] = 113,
  [SMALL_STATE(20)] = 117,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__member_list, 2, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 5, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__member_list, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_list, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__member_list, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
