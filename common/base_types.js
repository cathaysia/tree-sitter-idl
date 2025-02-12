exports.rules = {
  signed_short_int: _ =>
    choice(
      'short',
      'int16', // idl 7.4.13
    ),
  signed_long_int: _ =>
    choice(
      'long',
      'int32', // idl 7.4.13
    ),
  signed_longlong_int: _ =>
    choice(
      'long long',
      'int64', // idl 7.4.13
    ),
  unsigned_int: $ =>
    choice(
      $.unsigned_short_int,
      $.unsigned_long_int,
      $.unsigned_longlong_int,
      $.unsigned_tiny_int, // idl 7.4.13
    ),
  unsigned_tiny_int: _ => 'uint8', // idl 7.4.13
  boolean_type: _ => 'boolean',
  fixed_pt_const_type: $ => 'fixed',
  octet_type: _ => 'octet',
  integer_type: $ => choice($.signed_int, $.unsigned_int),
  signed_int: $ =>
    choice(
      $.signed_short_int,
      $.signed_long_int,
      $.signed_longlong_int,
      $.signed_tiny_int, // idl 7.4.13
    ),

  signed_tiny_int: _ => 'int8', // idl 7.4.13
  unsigned_short_int: _ =>
    choice(
      'unsigned short',
      'uint16', //  idl 7.4.13
    ),
  unsigned_long_int: _ =>
    choice(
      'unsigned long',
      'uint32', // idl 7.4.13
    ),
  unsigned_longlong_int: _ =>
    choice(
      'unsigned long long',
      'uint64', // idl 7.4.13
    ),

  floating_pt_type: _ => choice('float', 'double', 'long double'),
  char_type: _ => 'char',
  wide_char_type: _ => 'wchar',
  scoped_name: $ =>
    choice(
      $.identifier,
      seq('::', $.identifier),
      seq($.scoped_name, '::', $.identifier),
    ),
  string_type: $ =>
    seq('string', optional(seq('<', $.positive_int_const, '>'))),
  wide_string_type: $ =>
    seq('wstring', optional(seq('<', $.positive_int_const, '>'))),
  type_spec: $ =>
    choice(
      $.simple_type_spec,
      $.template_type_spec, // 7.4.14
    ),
  simple_type_spec: $ => choice($.base_type_spec, $.scoped_name),
  base_type_spec: $ =>
    choice(
      $.integer_type,
      $.floating_pt_type,
      $.char_type,
      $.wide_char_type,
      $.boolean_type,
      $.octet_type,
      $.any_type, // IDL 7.4.2
      $.object_type, // IDL 7.4.6
      $.value_base_type, // IDL 7.4.7
    ),
  any_type: _ => 'any',
  fixed_pt_type: $ =>
    seq('fixed', '<', $.positive_int_const, ',', $.positive_int_const, '>'),
  template_type_spec: $ =>
    choice(
      $.sequence_type,
      $.string_type,
      $.wide_string_type,
      $.fixed_pt_type,
      $.map_type, // idl 7.4.13
    ),
  sequence_type: $ =>
    seq(
      'sequence',
      '<',
      seq($.type_spec, optional(seq(',', $.positive_int_const))),
      '>',
    ),
  map_type: (
    $, // idl 7.4.13
  ) =>
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
