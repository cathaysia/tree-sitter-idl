exports.rules = {
  literal: $ =>
    choice(
      $.integer_literal,
      $.floating_pt_literal,
      $.fixed_pt_literal,
      $.char_literal,
      $.wide_character_literal,
      $.string_literal,
      $.wide_string_literal,
      $.boolean_literal,
    ),
  // 7.2.6.1 Integer Literals
  integer_literal: $ =>
    seq(
      optional($.integer_sign),
      choice($.bin_number, $.oct_number, $.dec_number, $.hex_number),
    ),
  integer_sign: $ => choice('-', '+'),
  bin_number: $ => /[0b01]+/i, // extend
  oct_number: $ =>
    choice(
      /0[0-8]+/,
      /0o[0-8]+/, // extend
    ),
  dec_number: $ => choice('0', /[1-9]\d*/),
  hex_number: $ => /0x[0-9a-fA-F]+/i,
  // 7.2.6.4 Floating-point Literals
  floating_pt_literal: $ =>
    seq(optional($.integer_sign), $.dec_number, '.', $.dec_number, /e/i),
  // 7.2.6.5 Fixed-Point Literals
  fixed_pt_literal: $ =>
    seq(optional($.integer_sign), $.dec_number, '.', $.dec_number, /d/i),

  escape_sequence: _ =>
    token(
      prec(
        1,
        seq(
          '\\',
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),
    ),

  string_literal: $ =>
    seq(
      '"',
      repeat(
        choice(
          alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content),
          $.escape_sequence,
        ),
      ),
      '"',
    ),
  wide_string_literal: $ => seq('L', $.string_literal),
  char_literal: $ =>
    seq(
      "'",
      repeat1(
        choice(
          $.escape_sequence,
          alias(token.immediate(/[^\n']/), $.character),
        ),
      ),
      "'",
    ),
  wide_character_literal: $ => seq('L', $.char_literal),
  boolean_literal: _ => choice('TRUE', 'FALSE'),
}
