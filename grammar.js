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

    _imports: $ => seq($.use_directive),

    use_directive: $ => seq(
      'use',
      $._use_clause,
      ';',
    ),

    _use_clause: $ => choice(
      $.identifier,
      $.use_alias,
      // TODO: Implement other variants
    ),

    use_alias: $ => seq(
      field('alias', $.name),
      '=',
      field('path', $.identifier),
    ),

    identifier: $ => seq(
      field('path', optional(repeat(seq($.name, '::')))),
      field('name', $.name),
    ),

    name: $ => /[a-zA-Z_][0-9a-zA-Z_]*/,
  }
});
