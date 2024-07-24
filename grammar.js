// Copyright 2024 Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepo = (rule, s) => seq(sep(rule, s), optional(s));
const sep1o = (rule, s) => seq(sep1(rule, s), optional(s));
const sep = (rule, s) => optional(sep1(rule, s));
const sep1 = (rule, s) => seq(rule, repeat(seq(s, rule)));

const name = /[a-zA-Z_][0-9a-zA-Z_]*/;

module.exports = grammar({
  name: 'hare',

  word: $ => $.name,

  extras: $ => [
    / |\t|\n/,
    $.comment,
  ],

  rules: {

    // NOTE: This parser permits use directives after declarations on purpose.
    //       For instance, it accepts the following example:
    //
    // ```hare
    // // Before
    // use foo;
    // fn f(...): ... = ...;
    //
    // // After
    // use bar;
    // fn g(...): ... = ...;
    // ```

    source_file: $ => sepo($._import_or_declaration, ';'),

    _import_or_declaration: $ => choice(
      $.use_directive,               // §6.13 Units
      $.declaration,                 // §6.12 Declarations
      // $.static_assertion_expression, // §6.7.21 Assertions
    ),

    // §6.2 Lexical analysis

    comment: $ => token(seq('//', /[^\n]*/)),

    // §6.5 Identifiers

    identifier: $ => token(sep1(name, '::')),

    name: $ => name,

    // §6.6 Types

    type: $ => seq(
      optional('const'),
      optional('!'),
      $._storage_class,
    ),

    _storage_class: $ => choice(
      $._primitive_type,
      $.pointer_type,
      // $.struct_union_type,
      // $.tuple_type,
      // $.tagged_union_type,
      // $.slice_array_type,
      // $.function_type,
      // $.alias_type,
      // $.unwrapped_alias,
    ),

    _primitive_type: $ => choice(
      $._integer_type,
      $._floating_type,
      'bool',
      'done',
      'never',
      'opaque',
      'rune',
      'str',
      'valist',
      'void',
    ),

    _integer_type: $ => choice(
      'i8',
      'i16',
      'i32',
      'i64',
      'u8',
      'u16',
      'u32',
      'u64',
      'int',
      'uint',
      'size',
      'uintptr',
    ),

    _floating_type: $ => choice(
      'f32',
      'f64',
    ),

    pointer_type: $ => seq(optional('nullable'), '*', $.type),

    // §6.7 Expressions

    _expression: $ => choice(
      // $.assignment,
      $.expression,
      // $.if_expression,
      // $.for_loop,
      // $.control_expression,
    ),

    expression: $ => choice(
      $._plain_expression,
      // and others
    ),

    _plain_expression: $ => choice(
      $.identifier,
      $.literal,
    ),

    literal: $ => choice(
      // $.integer_literal,
      // $.floating_literal,
      // $.rune_literal,
      $.string_literal,
      // $.array_literal,
      // $.struct_literal,
      // $.tuple_literal,
      'true',
      'false',
      'null',
      'void',
      'done',
    ),

    escape_sequence: $ => token.immediate(choice(
      /\\[0abfnrtv\\'"]/,
      // TODO: Implement others
    )),

    string_literal: $ => repeat1(choice(
      $.string_section,
      $.raw_string_section,
    )),

    string_section: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"]+/)),
        $.escape_sequence,
      )),
      token.immediate('"'),
    ),

    raw_string_section: $ => /`[^`]*`/,

    // §6.12 Declarations

    declaration: $ => seq(
      optional('export'),
      choice(
        $.global_declaration,
        // $.constant_declaration,
        // $.type_declaration,
        // $.function_declaration,
      ),
    ),

    global_declaration: $ => seq(
      choice('let', 'const'),
      sep1o($.global_binding, ','),
    ),

    global_binding: $ => seq(
      optional($.decl_attr),
      optional('@threadlocal'),
      choice(
        seq($.identifier, ':', $.type),
        seq($.identifier, ':', $.type, '=', $.expression),
        seq($.identifier, '=', $._expression),
      ),
    ),

    decl_attr: $ => seq('@symbol', '(', $.string_literal, ')'),

    // §6.13 Units

    use_directive: $ => seq(
      'use',
      choice(
        $.identifier,
        // BUG: In the spec, it is seq($.name, '=', $.identifier). The rule
        //      below accepts `use foo::bar = baz;` but it is harmless to us.
        seq($.identifier, '=', $.identifier),
        seq($.identifier, '::', '{', sep1o($.name, ','), '}'),
        seq($.identifier, '::', '*'),
      ),
    ),
  }
});
