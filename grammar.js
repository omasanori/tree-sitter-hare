// Copyright 2024 Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'hare',

  rules: {
    source_file: $ => repeat($._sub_unit),

    _sub_unit: $ => seq(
      $._imports
      // TODO: Implement declarations
    ),

    _imports: $ => seq($.import),

    import: $ => choice(
      seq('use', $.identifier, ';'),
      seq('use', $.name, '=', $.identifier, ';'),
      seq('use', $.identifier, '::', '{', $.member_list, '}', ';'),
      seq('use', $.identifier, '::', '*', ';')
    ),

    member_list: $ => $._member_list,

    _member_list: $ => choice(
      $.name,
      seq($.name, ','),
      seq($.name, ',', $._member_list)
    ),

    // identifier: $ => choice($.name, repeat(seq($.name, '::', $.identifier)))
    identifier: $ => /[a-zA-Z_][0-9a-zA-Z_]*(?:::[a-zA-Z_][0-9a-zA-Z_]*)*/,

    name: $ => /[a-zA-Z_][0-9a-zA-Z_]*/,
  }
});
