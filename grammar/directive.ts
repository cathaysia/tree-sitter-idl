var rules = {
  preproc_call: $ =>
    seq(
      field('directive', $.preproc_directive),
      field('argument', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),
  preproc_directive: _ => /#[ \t]*[a-zA-Z0-9]\w*/,
  preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
}

export default rules
