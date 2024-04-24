import { commaSep, commaSep1 } from './common'

const rules = {
  bitset_dcl: $ =>
    seq(
      'bitset',
      $.identifier,
      optional(seq(':', $.scoped_name)),
      '{',
      repeat($.bitfield),
      '}',
    ),
  bitfield: $ => seq($.bitfield_spec, repeat($.identifier), ';'),
  bitfield_spec: $ =>
    seq(
      'bitfield',
      '<',
      $.positive_int_const,
      optional(seq(',', $.destination_type)),
      '>',
    ),
  destination_type: $ => choice($.boolean_type, $.octet_type, $.integer_type),

  bitmask_dcl: $ =>
    seq(
      repeat($.annotation_appl),
      'bitmask',
      $.identifier,
      '{',
      commaSep(seq(repeat($.annotation_appl), $.bit_value)),
      '}',
    ),
  bit_value: $ => $.identifier,
}

export default {
  rules: rules,
}
