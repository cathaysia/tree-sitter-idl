; https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups
(annotation_comment) @comment.documentation

(annotation_appl
  "@" @property
  (scoped_name) @property)

[
  "-"
  "*"
  "+"
  "="
  "<<"
  ">>"
  "%"
  "~"
  "|"
  "^"
  "$"
] @operator

[
  "::"
  ";"
  ":"
  ","
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

(char_literal) @character

(string_literal) @string

(number_literal) @number

(boolean_literal) @boolean

(identifier) @property
