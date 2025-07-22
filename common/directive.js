exports.rules = {
  preproc_define: $ => seq('#define', alias(/[^\n]*/, $.args)),
  preproc_call: $ =>
    seq(
      field('directive', $.preproc_directive),
      field('argument', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),
  preproc_directive: _ => /#[ \t]*[a-zA-Z0-9]\w*/,
  preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
  preproc_include: $ =>
    seq(
      alias(preprocessor('include'), $.keyword_include),
      field(
        'path',
        choice($.string_literal, $.system_lib_string, $.identifier),
      ),
      token.immediate(/\r?\n/),
    ),
  system_lib_string: $ => seq('<', $.system_lib_path, '>'),
  system_lib_path: _ => token(repeat(choice(/[^>\n]/, '\\>'))),
};

/**
 * Creates a preprocessor regex rule
 *
 * @param {RegExp|Rule|String} command
 *
 * @return {TokenRule}
 */
function preprocessor(command) {
  return token(prec(1, new RegExp('#[ \t]*' + command)));
}
