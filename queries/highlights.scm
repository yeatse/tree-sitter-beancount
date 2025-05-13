; Basic elements
((bool) @boolean)
((date) @constant)
((key) @property)
((tag) @markup)
((link) @markup.link)
((string) @string)
((currency) @string)
((flag) @string.special.symbol)
((account) @variable)
((comment) @comment)

[
  (number)
  (paren_num_expr)
  (unary_num_expr)
  (binary_num_expr)
] @number

; Highlighting directives as keywords
[
  "INCLUDE"
  "OPTION"
  "PLUGIN"
  "PUSHTAG"
  "POPTAG"
  "PUSHMETA"
  "POPMETA"
  "BALANCE"
  "CLOSE"
  "COMMODITY"
  "CUSTOM"
  "DOCUMENT"
  "EVENT"
  "NOTE"
  "OPEN"
  "PAD"
  "PRICE"
  "TXN"
  "QUERY"
] @keyword

; Operators
[
  "@" "@@"
] @operator

[
  "{" "}" "{{" "}}"
] @punctuation.bracket
