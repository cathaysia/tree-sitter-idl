; https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups

(annotation_comment)@comment

(annotation_appl
  "@" @property
  (scoped_name)@property
)

[ "(" ")" ] @punctuation.bracket
[ "=" ] @operator

[ (char_literal) (string_literal) ] @character

(identifier)@property
