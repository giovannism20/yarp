#ifndef YARP_TOKEN_TYPE_H
#define YARP_TOKEN_TYPE_H

typedef enum yp_token_type {
  YP_TOKEN_EOF = 0,                   // final token in the file
  YP_TOKEN_INVALID,                   // an invalid token
  YP_TOKEN_AMPERSAND,                 // &
  YP_TOKEN_AMPERSAND_AMPERSAND,       // &&
  YP_TOKEN_AMPERSAND_AMPERSAND_EQUAL, // &&=
  YP_TOKEN_AMPERSAND_EQUAL,           // &=
  YP_TOKEN_BACK_REFERENCE,            // a back reference
  YP_TOKEN_BACKTICK,                  // `
  YP_TOKEN_BANG,                      // !
  YP_TOKEN_BANG_AT,                   // !@
  YP_TOKEN_BANG_EQUAL,                // !=
  YP_TOKEN_BANG_TILDE,                // !~
  YP_TOKEN_BRACE_LEFT,                // {
  YP_TOKEN_BRACE_RIGHT,               // }
  YP_TOKEN_BRACKET_LEFT,              // [
  YP_TOKEN_BRACKET_LEFT_RIGHT,        // []
  YP_TOKEN_BRACKET_RIGHT,             // ]
  YP_TOKEN_CARET,                     // ^
  YP_TOKEN_CARET_EQUAL,               // ^=
  YP_TOKEN_CHARACTER_LITERAL,         // a character literal
  YP_TOKEN_CLASS_VARIABLE,            // a class variable
  YP_TOKEN_COLON,                     // :
  YP_TOKEN_COLON_COLON,               // ::
  YP_TOKEN_COMMA,                     // ,
  YP_TOKEN_COMMENT,                   // a comment
  YP_TOKEN_CONSTANT,                  // a constant
  YP_TOKEN_DOT,                       // .
  YP_TOKEN_DOT_DOT,                   // ..
  YP_TOKEN_DOT_DOT_DOT,               // ...
  YP_TOKEN_EMBDOC_BEGIN,              // =begin
  YP_TOKEN_EMBDOC_END,                // =end
  YP_TOKEN_EMBDOC_LINE,               // a line inside of embedded documentation
  YP_TOKEN_EMBEXPR_BEGIN,             // #{
  YP_TOKEN_EMBEXPR_END,               // }
  YP_TOKEN_EQUAL,                     // =
  YP_TOKEN_EQUAL_EQUAL,               // ==
  YP_TOKEN_EQUAL_EQUAL_EQUAL,         // ===
  YP_TOKEN_EQUAL_GREATER,             // =>
  YP_TOKEN_EQUAL_TILDE,               // =~
  YP_TOKEN_FLOAT,                     // a floating point number
  YP_TOKEN_GREATER,                   // >
  YP_TOKEN_GREATER_EQUAL,             // >=
  YP_TOKEN_GREATER_GREATER,           // >>
  YP_TOKEN_GREATER_GREATER_EQUAL,     // >>=
  YP_TOKEN_GLOBAL_VARIABLE,           // a global variable
  YP_TOKEN_IDENTIFIER,                // an identifier
  YP_TOKEN_IMAGINARY_NUMBER,          // an imaginary number literal
  YP_TOKEN_INSTANCE_VARIABLE,         // an instance variable
  YP_TOKEN_INTEGER,                   // an integer (any base)
  YP_TOKEN_KEYWORD___ENCODING__,      // __ENCODING__
  YP_TOKEN_KEYWORD___LINE__,          // __LINE__
  YP_TOKEN_KEYWORD___FILE__,          // __FILE__
  YP_TOKEN_KEYWORD_ALIAS,             // alias
  YP_TOKEN_KEYWORD_AND,               // and
  YP_TOKEN_KEYWORD_BEGIN,             // begin
  YP_TOKEN_KEYWORD_BEGIN_UPCASE,      // BEGIN
  YP_TOKEN_KEYWORD_BREAK,             // break
  YP_TOKEN_KEYWORD_CASE,              // case
  YP_TOKEN_KEYWORD_CLASS,             // class
  YP_TOKEN_KEYWORD_DEF,               // def
  YP_TOKEN_KEYWORD_DEFINED,           // defined?
  YP_TOKEN_KEYWORD_DO,                // do
  YP_TOKEN_KEYWORD_ELSE,              // else
  YP_TOKEN_KEYWORD_ELSIF,             // elsif
  YP_TOKEN_KEYWORD_END,               // end
  YP_TOKEN_KEYWORD_END_UPCASE,        // END
  YP_TOKEN_KEYWORD_ENSURE,            // ensure
  YP_TOKEN_KEYWORD_FALSE,             // false
  YP_TOKEN_KEYWORD_FOR,               // for
  YP_TOKEN_KEYWORD_IF,                // if
  YP_TOKEN_KEYWORD_IN,                // in
  YP_TOKEN_KEYWORD_MODULE,            // module
  YP_TOKEN_KEYWORD_NEXT,              // next
  YP_TOKEN_KEYWORD_NIL,               // nil
  YP_TOKEN_KEYWORD_NOT,               // not
  YP_TOKEN_KEYWORD_OR,                // or
  YP_TOKEN_KEYWORD_REDO,              // redo
  YP_TOKEN_KEYWORD_RESCUE,            // rescue
  YP_TOKEN_KEYWORD_RETRY,             // retry
  YP_TOKEN_KEYWORD_RETURN,            // return
  YP_TOKEN_KEYWORD_SELF,              // self
  YP_TOKEN_KEYWORD_SUPER,             // super
  YP_TOKEN_KEYWORD_THEN,              // then
  YP_TOKEN_KEYWORD_TRUE,              // true
  YP_TOKEN_KEYWORD_UNDEF,             // undef
  YP_TOKEN_KEYWORD_UNLESS,            // unless
  YP_TOKEN_KEYWORD_UNTIL,             // until
  YP_TOKEN_KEYWORD_WHEN,              // when
  YP_TOKEN_KEYWORD_WHILE,             // while
  YP_TOKEN_KEYWORD_YIELD,             // yield
  YP_TOKEN_LABEL,                     // a label
  YP_TOKEN_LAMBDA_BEGIN,              // {
  YP_TOKEN_LESS,                      // <
  YP_TOKEN_LESS_EQUAL,                // <=
  YP_TOKEN_LESS_EQUAL_GREATER,        // <=>
  YP_TOKEN_LESS_LESS,                 // <<
  YP_TOKEN_LESS_LESS_EQUAL,           // <<=
  YP_TOKEN_MINUS,                     // -
  YP_TOKEN_MINUS_AT,                  // -@
  YP_TOKEN_MINUS_EQUAL,               // -=
  YP_TOKEN_MINUS_GREATER,             // ->
  YP_TOKEN_NEWLINE,                   // a newline character outside of other tokens
  YP_TOKEN_NTH_REFERENCE,             // an nth global variable reference
  YP_TOKEN_PARENTHESIS_LEFT,          // (
  YP_TOKEN_PARENTHESIS_RIGHT,         // )
  YP_TOKEN_PERCENT,                   // %
  YP_TOKEN_PERCENT_EQUAL,             // %=
  YP_TOKEN_PERCENT_LOWER_I,           // %i
  YP_TOKEN_PERCENT_LOWER_W,           // %w
  YP_TOKEN_PERCENT_LOWER_X,           // %x
  YP_TOKEN_PERCENT_UPPER_I,           // %I
  YP_TOKEN_PERCENT_UPPER_W,           // %W
  YP_TOKEN_PIPE,                      // |
  YP_TOKEN_PIPE_EQUAL,                // |=
  YP_TOKEN_PIPE_PIPE,                 // ||
  YP_TOKEN_PIPE_PIPE_EQUAL,           // ||=
  YP_TOKEN_PLUS,                      // +
  YP_TOKEN_PLUS_AT,                   // +@
  YP_TOKEN_PLUS_EQUAL,                // +=
  YP_TOKEN_QUESTION_MARK,             // ?
  YP_TOKEN_RATIONAL_NUMBER,           // a rational number literal
  YP_TOKEN_REGEXP_BEGIN,              // the beginning of a regular expression
  YP_TOKEN_REGEXP_END,                // the end of a regular expression
  YP_TOKEN_SEMICOLON,                 // ;
  YP_TOKEN_SLASH,                     // /
  YP_TOKEN_SLASH_EQUAL,               // /=
  YP_TOKEN_STAR,                      // *
  YP_TOKEN_STAR_EQUAL,                // *=
  YP_TOKEN_STAR_STAR,                 // **
  YP_TOKEN_STAR_STAR_EQUAL,           // **=
  YP_TOKEN_STRING_BEGIN,              // the beginning of a string
  YP_TOKEN_STRING_CONTENT,            // the contents of a string
  YP_TOKEN_STRING_END,                // the end of a string
  YP_TOKEN_SYMBOL_BEGIN,              // the beginning of a symbol
  YP_TOKEN_TILDE,                     // ~
  YP_TOKEN_TILDE_AT,                  // ~@
  YP_TOKEN_WORDS_SEP,                 // a separator between words in a list
  YP_TOKEN_MAXIMUM,                   // the maximum token value
} yp_token_type_t;

const char *
token_type_to_str(yp_token_type_t token_type);
yp_token_type_t
token_type_from_str(const char *s);

#endif // YARP_TOKEN_TYPE_H
