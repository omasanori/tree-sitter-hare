// Copyright 2024 Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'hare',

  rules: {
    source_file: $ => repeat($._sub_unit),

    _sub_unit: $ => seq(
      $.import
      // TODO: Implement declarations
    ),

    import: $ => choice(
      seq('use', $.identifier, ';')
      // TODO: Implement other variants
    ),

    // identifier: $ => choice($.name, seq($.name, '::', $.identifier))
    identifier: $ => /[a-zA-Z_][0-9a-zA-Z_]*(?:::[a-zA-Z_][0-9a-zA-Z_]*)*/,

    name: $ => /[a-zA-Z_][0-9a-zA-Z_]*/,
  }
});
