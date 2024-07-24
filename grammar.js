// Copyright 2024 Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepo = (rule, s) => seq(sep(rule, s), optional(s));
const sep1o = (rule, s) => seq(sep1(rule, s), optional(s));
const sep = (rule, s) => optional(sep1(rule, s));
const sep1 = (rule, s) => seq(rule, repeat(seq(s, rule)));

const name = /[a-zA-Z_][0-9a-zA-Z_]*/;
const decimal_digits_without_separators = /[0-9]+/;
const decimal_digits = /[0-9]([0-9]|_[0-9])*/;
const nonzero_decimal_digits = /0|([1-9]([0-9]|_[0-9])*)/;
const hex_digits = /[0-9A-Fa-f]([0-9A-Fa-f]|_[0-9A-Fa-f])*/;
const octal_digits = /[0-7]([0-7]|_[0-7])*/;
const binary_digits = /[01]([01]|_[01])*/;
const decimal_exponent = /[Ee][+-]?[0-9]+/;
const positive_decimal_exponent = /[Ee]\+?[0-9]+/;
const binary_exponent = /[Pp][+-]?[0-9]+/;
const integer_suffix = /i|u|z|i8|i16|i32|i64|u8|u16|u32|u64/;
const floating_suffix = /f32|f64/;

module.exports = grammar({
  name: 'hare',

  word: $ => $.name,

  // NOTE: In the spec, only U+0009, U+000A and U+0020 are treated as white-
  // space characters. This parser accepts other white-space characters too.

  extras: $ => [
    /\s/,
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
      $.integer_literal,
      $.floating_literal,
      $.rune_literal,
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

    integer_literal: $ => token(choice(
      seq('0x', hex_digits, optional(integer_suffix)),
      seq('0o', octal_digits, optional(integer_suffix)),
      seq('0b', binary_digits, optional(integer_suffix)),
      seq(
        nonzero_decimal_digits,
        optional(positive_decimal_exponent),
        optional(integer_suffix),
      ),
    )),

    floating_literal: $ => token(choice(
      seq(
        nonzero_decimal_digits,
        '.',
        decimal_digits,
        optional(decimal_exponent),
        optional(floating_suffix),
      ),
      seq(
        nonzero_decimal_digits,
        optional(decimal_exponent),
        floating_suffix,
      ),
      seq(
        '0x',
        hex_digits,
        '.',
        hex_digits,
        binary_exponent,
        optional(floating_suffix),
      ),
      seq(
        '0x',
        hex_digits,
        binary_exponent,
        optional(floating_suffix),
      ),
    )),

    rune_literal: $ => seq(
      "'",
      choice(
        token.immediate(/[^\']/),
        $.escape_sequence,
      ),
      token.immediate("'"),
    ),

    escape_sequence: $ => token.immediate(choice(
      /\\[0abfnrtv\\'"]/,
      /\\x[0-9A-Fa-f]{2}/,
      /\\u[0-9A-Fa-f]{4}/,
      /\\U[0-9A-Fa-f]{8}/,
    )),

    string_literal: $ => repeat1(choice(
      $.string_section,
      $.raw_string_section,
    )),

    string_section: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^\\"]+/),
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
