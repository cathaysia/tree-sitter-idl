exports.rules = {
  signed_short_int: _ => 'short',
  signed_long_int: _ => 'long',
  signed_longlong_int: _ => 'long long',
  unsigned_int: $ =>
    choice($.unsigned_short_int, $.unsigned_long_int, $.unsigned_longlong_int),
  boolean_type: _ => 'boolean',
  fixed_pt_const_type: $ => 'fixed',
  octet_type: _ => 'octet',
  integer_type: $ => choice($.signed_int, $.unsigned_int),
  signed_int: $ =>
    choice($.signed_short_int, $.signed_long_int, $.signed_longlong_int),

  unsigned_short_int: _ => 'unsigned short',
  unsigned_long_int: _ => 'unsigned long',
  unsigned_longlong_int: _ => 'unsigned long long',

  floating_pt_type: _ => choice('float', 'double', 'long double'),
  char_type: _ => choice('char', 'wchar'),
  scoped_name: $ =>
    choice(
      $.identifier,
      seq('::', $.identifier),
      seq($.scoped_name, $.identifier),
    ),
  string_type: $ =>
    seq(
      choice('string', 'wstring'),
      optional(seq('<', $.positive_int_const, '>')),
    ),
  type_spec: $ => choice($.simple_type_spec, $.template_type_spec),
  simple_type_spec: $ => prec.left(1, choice($.base_type_spec, $.scoped_name)),
  base_type_spec: $ =>
    choice(
      $.integer_type,
      $.floating_pt_type,
      $.char_type,
      $.boolean_type,
      $.octet_type,
    ),
  fixed_pt_type: $ =>
    seq('fixed', '<', $.positive_int_const, ',', $.positive_int_const, '>'),
  template_type_spec: $ =>
    choice($.sequence_type, $.string_type, $.fixed_pt_type, $.map_type),
  sequence_type: $ =>
    seq(
      'sequence',
      '<',
      choice($.type_spec, optional(seq(',', $.positive_int_const))),
      '>',
    ),
  map_type: $ =>
    seq(
      'map',
      '<',
      $.type_spec,
      ',',
      $.type_spec,
      optional(seq(',', $.positive_int_const)),
      '>',
    ),
}
