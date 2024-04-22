#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
    anon_sym_short = 1,
    anon_sym_long = 2,
    sym_unsigned_tiny_int = 3,
    sym_boolean_type = 4,
    anon_sym_fixed = 5,
    sym_octet_type = 6,
    anon_sym_uint16 = 7,
    anon_sym_uint32 = 8,
    anon_sym_uint64 = 9,
    anon_sym_float = 10,
    anon_sym_double = 11,
    anon_sym_char = 12,
    anon_sym_wchar = 13,
    anon_sym_COLON_COLON = 14,
    anon_sym_string = 15,
    anon_sym_wstring = 16,
    anon_sym_LT = 17,
    anon_sym_GT = 18,
    anon_sym_any = 19,
    anon_sym_COMMA = 20,
    anon_sym_sequence = 21,
    anon_sym_map = 22,
    anon_sym_PIPE = 23,
    anon_sym_CARET = 24,
    anon_sym_DOLLAR = 25,
    anon_sym_GT_GT = 26,
    anon_sym_LT_LT = 27,
    anon_sym_PLUS = 28,
    anon_sym_DASH = 29,
    anon_sym_STAR = 30,
    anon_sym_SLASH = 31,
    anon_sym_PERCENT = 32,
    anon_sym_LPAREN = 33,
    anon_sym_RPAREN = 34,
    anon_sym_TILDE = 35,
    anon_sym_L = 36,
    anon_sym_DQUOTE = 37,
    aux_sym_string_literal_token1 = 38,
    anon_sym_SQUOTE = 39,
    aux_sym_char_literal_token1 = 40,
    anon_sym_TRUE = 41,
    anon_sym_FALSE = 42,
    sym_number_literal = 43,
    sym_preproc_arg = 44,
    anon_sym_exception = 45,
    anon_sym_LBRACE = 46,
    anon_sym_RBRACE = 47,
    anon_sym_local = 48,
    anon_sym_COLON = 49,
    anon_sym_SEMI = 50,
    anon_sym_void = 51,
    anon_sym_in = 52,
    anon_sym_out = 53,
    anon_sym_raises = 54,
    anon_sym_readonly = 55,
    anon_sym_attribute = 56,
    anon_sym_getraises = 57,
    anon_sym_setraises = 58,
    anon_sym_bitset = 59,
    anon_sym_bitfield = 60,
    anon_sym_bitmask = 61,
    anon_sym_default = 62,
    anon_sym_AT = 63,
    anon_sym_EQ = 64,
    anon_sym_module = 65,
    anon_sym_typename = 66,
    anon_sym_valuetype = 67,
    anon_sym_eventtype = 68,
    anon_sym_struct = 69,
    anon_sym_union = 70,
    anon_sym_enum = 71,
    anon_sym_const = 72,
    anon_sym_alias = 73,
    anon_sym_supports = 74,
    anon_sym_public = 75,
    anon_sym_private = 76,
    anon_sym_factory = 77,
    anon_sym_typedef = 78,
    anon_sym_LBRACK = 79,
    anon_sym_RBRACK = 80,
    anon_sym_switch = 81,
    anon_sym_case = 82,
    anon_sym_SLASH_SLASH = 83,
    anon_sym_native = 84,
    anon_sym_POUNDdefine = 85,
    sym_identifier = 86,
    sym_specification = 87,
    sym_scoped_name = 88,
    sym_const_expr = 89,
    sym_or_expr = 90,
    sym_xor_expr = 91,
    sym_and_expr = 92,
    sym_shift_expr = 93,
    sym_add_expr = 94,
    sym_mult_expr = 95,
    sym_unary_expr = 96,
    sym_unary_operator = 97,
    sym_literal = 98,
    sym_string_literal = 99,
    sym_char_literal = 100,
    sym_boolean_literal = 101,
    sym_annotation_appl = 102,
    sym_annotation_appl_params = 103,
    sym_annotation_appl_param = 104,
    sym_annotation_comment = 105,
    aux_sym_specification_repeat1 = 106,
    aux_sym_interface_def_repeat1 = 107,
    aux_sym_annotation_appl_params_repeat1 = 108,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_short] = "short",
    [anon_sym_long] = "long",
    [sym_unsigned_tiny_int] = "unsigned_tiny_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [anon_sym_uint16] = "uint16",
    [anon_sym_uint32] = "uint32",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_any] = "any",
    [anon_sym_COMMA] = ",",
    [anon_sym_sequence] = "sequence",
    [anon_sym_map] = "map",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_DOLLAR] = "$",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_STAR] = "*",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_TILDE] = "~",
    [anon_sym_L] = "L",
    [anon_sym_DQUOTE] = "\"",
    [aux_sym_string_literal_token1] = "string_literal_token1",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_TRUE] = "TRUE",
    [anon_sym_FALSE] = "FALSE",
    [sym_number_literal] = "number_literal",
    [sym_preproc_arg] = "preproc_arg",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_local] = "local",
    [anon_sym_COLON] = ":",
    [anon_sym_SEMI] = ";",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_default] = "default",
    [anon_sym_AT] = "@",
    [anon_sym_EQ] = "=",
    [anon_sym_module] = "module",
    [anon_sym_typename] = "typename",
    [anon_sym_valuetype] = "valuetype",
    [anon_sym_eventtype] = "eventtype",
    [anon_sym_struct] = "struct",
    [anon_sym_union] = "union",
    [anon_sym_enum] = "enum",
    [anon_sym_const] = "const",
    [anon_sym_alias] = "alias",
    [anon_sym_supports] = "supports",
    [anon_sym_public] = "public",
    [anon_sym_private] = "private",
    [anon_sym_factory] = "factory",
    [anon_sym_typedef] = "typedef",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_SLASH_SLASH] = "//",
    [anon_sym_native] = "native",
    [anon_sym_POUNDdefine] = "#define",
    [sym_identifier] = "identifier",
    [sym_specification] = "specification",
    [sym_scoped_name] = "scoped_name",
    [sym_const_expr] = "const_expr",
    [sym_or_expr] = "or_expr",
    [sym_xor_expr] = "xor_expr",
    [sym_and_expr] = "and_expr",
    [sym_shift_expr] = "shift_expr",
    [sym_add_expr] = "add_expr",
    [sym_mult_expr] = "mult_expr",
    [sym_unary_expr] = "unary_expr",
    [sym_unary_operator] = "unary_operator",
    [sym_literal] = "literal",
    [sym_string_literal] = "string_literal",
    [sym_char_literal] = "char_literal",
    [sym_boolean_literal] = "boolean_literal",
    [sym_annotation_appl] = "annotation_appl",
    [sym_annotation_appl_params] = "annotation_appl_params",
    [sym_annotation_appl_param] = "annotation_appl_param",
    [sym_annotation_comment] = "annotation_comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_annotation_appl_params_repeat1] = "annotation_appl_params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_long] = anon_sym_long,
    [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_any] = anon_sym_any,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_CARET] = anon_sym_CARET,
    [anon_sym_DOLLAR] = anon_sym_DOLLAR,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [anon_sym_PLUS] = anon_sym_PLUS,
    [anon_sym_DASH] = anon_sym_DASH,
    [anon_sym_STAR] = anon_sym_STAR,
    [anon_sym_SLASH] = anon_sym_SLASH,
    [anon_sym_PERCENT] = anon_sym_PERCENT,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_TRUE] = anon_sym_TRUE,
    [anon_sym_FALSE] = anon_sym_FALSE,
    [sym_number_literal] = sym_number_literal,
    [sym_preproc_arg] = sym_preproc_arg,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_typename] = anon_sym_typename,
    [anon_sym_valuetype] = anon_sym_valuetype,
    [anon_sym_eventtype] = anon_sym_eventtype,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_const] = anon_sym_const,
    [anon_sym_alias] = anon_sym_alias,
    [anon_sym_supports] = anon_sym_supports,
    [anon_sym_public] = anon_sym_public,
    [anon_sym_private] = anon_sym_private,
    [anon_sym_factory] = anon_sym_factory,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [sym_identifier] = sym_identifier,
    [sym_specification] = sym_specification,
    [sym_scoped_name] = sym_scoped_name,
    [sym_const_expr] = sym_const_expr,
    [sym_or_expr] = sym_or_expr,
    [sym_xor_expr] = sym_xor_expr,
    [sym_and_expr] = sym_and_expr,
    [sym_shift_expr] = sym_shift_expr,
    [sym_add_expr] = sym_add_expr,
    [sym_mult_expr] = sym_mult_expr,
    [sym_unary_expr] = sym_unary_expr,
    [sym_unary_operator] = sym_unary_operator,
    [sym_literal] = sym_literal,
    [sym_string_literal] = sym_string_literal,
    [sym_char_literal] = sym_char_literal,
    [sym_boolean_literal] = sym_boolean_literal,
    [sym_annotation_appl] = sym_annotation_appl,
    [sym_annotation_appl_params] = sym_annotation_appl_params,
    [sym_annotation_appl_param] = sym_annotation_appl_param,
    [sym_annotation_comment] = sym_annotation_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_annotation_appl_params_repeat1] = aux_sym_annotation_appl_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [sym_unsigned_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [sym_octet_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wchar] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wstring] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_any] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sequence] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_map] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_CARET] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PERCENT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_TILDE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_L] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_string_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_TRUE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_FALSE] = {
        .visible = true,
        .named = false,
    },
    [sym_number_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_preproc_arg] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_exception] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_void] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_in] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_out] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_attribute] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_getraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_setraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitset] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitfield] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitmask] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typename] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_valuetype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_eventtype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_union] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_const] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_alias] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_supports] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_factory] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typedef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_switch] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_case] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUNDdefine] = {
        .visible = true,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [sym_specification] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_const_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_or_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_xor_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_and_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_shift_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_add_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_mult_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_operator] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_params] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_param] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_comment] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_specification_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_appl_params_repeat1] = {
        .visible = false,
        .named = false,
    },
};

enum ts_field_identifiers {
    field_value = 1,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_value, 1 },
    [1] = { field_value, 2 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
    [0] = 0,
    [1] = 1,
    [2] = 2,
    [3] = 3,
    [4] = 4,
    [5] = 5,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
    [10] = 10,
    [11] = 11,
    [12] = 12,
    [13] = 13,
    [14] = 14,
    [15] = 15,
    [16] = 16,
    [17] = 17,
    [18] = 18,
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
    [23] = 23,
    [24] = 24,
    [25] = 25,
    [26] = 26,
    [27] = 27,
    [28] = 28,
    [29] = 29,
    [30] = 30,
    [31] = 31,
    [32] = 32,
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 48,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
};

static TSCharacterRange sym_number_literal_character_set_13[] = {
    { '0', '9' },
    { 'B', 'B' },
    { 'D', 'D' },
    { 'F', 'F' },
    { 'L', 'L' },
    { 'U', 'U' },
    { 'W', 'W' },
    { 'b', 'b' },
    { 'd', 'd' },
    { 'f', 'f' },
    { 'l', 'l' },
    { 'u', 'u' },
    { 'w', 'w' },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(17);
            ADVANCE_MAP(
                '"', 58,
                '#', 150,
                '$', 42,
                '%', 52,
                '\'', 60,
                '(', 53,
                ')', 54,
                '*', 49,
                '+', 45,
                ',', 37,
                '-', 47,
                '/', 51,
                ':', 313,
                ';', 314,
                '<', 34,
                '=', 328,
                '>', 35,
                '@', 327,
                'F', 62,
                'L', 56,
                'T', 63,
                '[', 343,
                ']', 344,
                '^', 41,
                'a', 77,
                'b', 75,
                'c', 64,
                'd', 72,
                'e', 79,
                'f', 67,
                'g', 74,
                'i', 78,
                'l', 80,
                'm', 65,
                'n', 69,
                'o', 71,
                'p', 81,
                'r', 68,
                's', 73,
                't', 82,
                'u', 76,
                'v', 66,
                'w', 70,
                '{', 310,
                '|', 40,
                '}', 311,
                '~', 55,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(61);
            if(lookahead != 0)
                ADVANCE(307);
            END_STATE();
        case 1:
            ADVANCE_MAP(
                '$', 42,
                '%', 52,
                ')', 54,
                '*', 49,
                '+', 45,
                ',', 37,
                '-', 47,
                '/', 50,
                ':', 4,
                '<', 5,
                '=', 328,
                '>', 6,
                '^', 41,
                '|', 40,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(59);
            END_STATE();
        case 2:
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(91);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(93);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(107);
            END_STATE();
        case 3:
            if(lookahead == '/')
                ADVANCE(347);
            END_STATE();
        case 4:
            if(lookahead == ':')
                ADVANCE(31);
            END_STATE();
        case 5:
            if(lookahead == '<')
                ADVANCE(44);
            END_STATE();
        case 6:
            if(lookahead == '>')
                ADVANCE(43);
            END_STATE();
        case 7:
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(7);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(61);
            END_STATE();
        case 8:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            END_STATE();
        case 9:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(87);
            END_STATE();
        case 10:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(93);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(107);
            END_STATE();
        case 11:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(101);
            END_STATE();
        case 12:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(107);
            END_STATE();
        case 13:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(89);
            END_STATE();
        case 14:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(307);
            END_STATE();
        case 15:
            if(eof)
                ADVANCE(17);
            ADVANCE_MAP(
                '"', 58,
                '$', 42,
                '\'', 60,
                '(', 53,
                ')', 54,
                '+', 46,
                ',', 37,
                '-', 48,
                '.', 9,
                '/', 3,
                '0', 94,
                ':', 4,
                '<', 5,
                '=', 328,
                '>', 6,
                '@', 327,
                'F', 351,
                'L', 57,
                'T', 355,
                '^', 41,
                '|', 40,
                '~', 55,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(15);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 16:
            if(eof)
                ADVANCE(17);
            ADVANCE_MAP(
                '$', 42,
                '%', 52,
                '(', 53,
                ')', 54,
                '*', 49,
                '+', 45,
                ',', 37,
                '-', 47,
                '/', 51,
                ':', 4,
                '<', 5,
                '>', 6,
                '@', 327,
                '^', 41,
                '|', 40,
            );
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 17:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 18:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 19:
            ACCEPT_TOKEN(anon_sym_long);
            END_STATE();
        case 20:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 21:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 22:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 23:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 24:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 25:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 26:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 27:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 28:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 29:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 30:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 31:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 32:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 33:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 34:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(44);
            END_STATE();
        case 35:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 36:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 37:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 38:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 39:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 40:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 41:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 42:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 43:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 44:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 45:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 46:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(95);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            END_STATE();
        case 47:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 48:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(95);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            END_STATE();
        case 49:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 50:
            ACCEPT_TOKEN(anon_sym_SLASH);
            END_STATE();
        case 51:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(347);
            END_STATE();
        case 52:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 53:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 54:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 55:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 56:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 57:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 58:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 59:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(59);
            END_STATE();
        case 60:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 61:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 62:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(124);
            END_STATE();
        case 63:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(126);
            END_STATE();
        case 64:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(263);
            if(lookahead == 'h')
                ADVANCE(130);
            if(lookahead == 'o')
                ADVANCE(223);
            END_STATE();
        case 65:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(239);
            if(lookahead == 'o')
                ADVANCE(154);
            END_STATE();
        case 66:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(211);
            if(lookahead == 'o')
                ADVANCE(197);
            END_STATE();
        case 67:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(146);
            if(lookahead == 'i')
                ADVANCE(301);
            if(lookahead == 'l')
                ADVANCE(233);
            END_STATE();
        case 68:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(204);
            if(lookahead == 'e')
                ADVANCE(128);
            END_STATE();
        case 69:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(284);
            END_STATE();
        case 70:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(191);
            if(lookahead == 's')
                ADVANCE(288);
            END_STATE();
        case 71:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(282);
            if(lookahead == 'u')
                ADVANCE(269);
            END_STATE();
        case 72:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(184);
            if(lookahead == 'o')
                ADVANCE(294);
            END_STATE();
        case 73:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(246);
            if(lookahead == 'h')
                ADVANCE(234);
            if(lookahead == 't')
                ADVANCE(247);
            if(lookahead == 'u')
                ADVANCE(240);
            if(lookahead == 'w')
                ADVANCE(201);
            END_STATE();
        case 74:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(281);
            END_STATE();
        case 75:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(268);
            if(lookahead == 'o')
                ADVANCE(231);
            END_STATE();
        case 76:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(227);
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 77:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(195);
            if(lookahead == 'n')
                ADVANCE(302);
            if(lookahead == 't')
                ADVANCE(279);
            END_STATE();
        case 78:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(316);
            END_STATE();
        case 79:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(292);
            if(lookahead == 'v')
                ADVANCE(181);
            if(lookahead == 'x')
                ADVANCE(145);
            END_STATE();
        case 80:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 81:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(192);
            if(lookahead == 'u')
                ADVANCE(140);
            END_STATE();
        case 82:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(241);
            END_STATE();
        case 83:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 84:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 85:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 86:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 87:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(9);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(87);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(116);
            END_STATE();
        case 88:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 13,
                'B', 88,
                'D', 88,
                'F', 88,
                'b', 88,
                'd', 88,
                'f', 88,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(88);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 89:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 13,
                'B', 89,
                'D', 89,
                'F', 89,
                'b', 89,
                'd', 89,
                'f', 89,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(89);
            END_STATE();
        case 90:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 10,
                '.', 112,
                'B', 104,
                'b', 104,
                'E', 102,
                'e', 102,
                'P', 110,
                'p', 110,
                'X', 358,
                'x', 358,
                'A', 105,
                'C', 105,
                'a', 105,
                'c', 105,
                'D', 105,
                'F', 105,
                'd', 105,
                'f', 105,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 91:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 10,
                '.', 112,
                'B', 106,
                'b', 106,
                'E', 103,
                'e', 103,
                'P', 111,
                'p', 111,
                'X', 12,
                'x', 12,
                'A', 107,
                'C', 107,
                'a', 107,
                'c', 107,
                'D', 107,
                'F', 107,
                'd', 107,
                'f', 107,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(93);
            END_STATE();
        case 92:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 10,
                '.', 112,
                'E', 102,
                'e', 102,
                'P', 110,
                'p', 110,
                'A', 105,
                'C', 105,
                'a', 105,
                'c', 105,
                'B', 105,
                'D', 105,
                'F', 105,
                'b', 105,
                'd', 105,
                'f', 105,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 93:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 10,
                '.', 112,
                'E', 103,
                'e', 103,
                'P', 111,
                'p', 111,
                'A', 107,
                'C', 107,
                'a', 107,
                'c', 107,
                'B', 107,
                'D', 107,
                'F', 107,
                'b', 107,
                'd', 107,
                'f', 107,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(93);
            END_STATE();
        case 94:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 8,
                '.', 112,
                'B', 108,
                'b', 108,
                'X', 350,
                'x', 350,
                'E', 110,
                'P', 110,
                'e', 110,
                'p', 110,
                'D', 115,
                'F', 115,
                'L', 115,
                'U', 115,
                'W', 115,
                'd', 115,
                'f', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 95:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 8,
                '.', 112,
                'B', 109,
                'b', 109,
                'X', 2,
                'x', 2,
                'E', 111,
                'P', 111,
                'e', 111,
                'p', 111,
                'D', 116,
                'F', 116,
                'L', 116,
                'U', 116,
                'W', 116,
                'd', 116,
                'f', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            END_STATE();
        case 96:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 8,
                '.', 112,
                'B', 113,
                'b', 113,
                'X', 358,
                'x', 358,
                'E', 110,
                'P', 110,
                'e', 110,
                'p', 110,
                'D', 115,
                'F', 115,
                'L', 115,
                'U', 115,
                'W', 115,
                'd', 115,
                'f', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 97:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 8,
                '.', 112,
                'B', 114,
                'b', 114,
                'X', 12,
                'x', 12,
                'E', 111,
                'P', 111,
                'e', 111,
                'p', 111,
                'D', 116,
                'F', 116,
                'L', 116,
                'U', 116,
                'W', 116,
                'd', 116,
                'f', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            END_STATE();
        case 98:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(8);
            if(lookahead == '.')
                ADVANCE(112);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(110);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 99:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(8);
            if(lookahead == '.')
                ADVANCE(112);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(111);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(116);
            END_STATE();
        case 100:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 11,
                '+', 13,
                '-', 13,
                'E', 100,
                'e', 100,
                'P', 111,
                'p', 111,
                'B', 101,
                'D', 101,
                'F', 101,
                'b', 101,
                'd', 101,
                'f', 101,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(101);
            END_STATE();
        case 101:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 11,
                'E', 100,
                'e', 100,
                'P', 111,
                'p', 111,
                'B', 101,
                'D', 101,
                'F', 101,
                'b', 101,
                'd', 101,
                'f', 101,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(101);
            END_STATE();
        case 102:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                '+', 13,
                '-', 13,
                'E', 102,
                'e', 102,
                'P', 110,
                'p', 110,
                'B', 105,
                'D', 105,
                'F', 105,
                'b', 105,
                'd', 105,
                'f', 105,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(105);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 103:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                '+', 13,
                '-', 13,
                'E', 103,
                'e', 103,
                'P', 111,
                'p', 111,
                'B', 107,
                'D', 107,
                'F', 107,
                'b', 107,
                'd', 107,
                'f', 107,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(107);
            END_STATE();
        case 104:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                'E', 102,
                'e', 102,
                'P', 110,
                'p', 110,
                'A', 105,
                'C', 105,
                'a', 105,
                'c', 105,
                'B', 105,
                'D', 105,
                'F', 105,
                'b', 105,
                'd', 105,
                'f', 105,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 105:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                'E', 102,
                'e', 102,
                'P', 110,
                'p', 110,
                'B', 105,
                'D', 105,
                'F', 105,
                'b', 105,
                'd', 105,
                'f', 105,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(105);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 106:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                'E', 103,
                'e', 103,
                'P', 111,
                'p', 111,
                'A', 107,
                'C', 107,
                'a', 107,
                'c', 107,
                'B', 107,
                'D', 107,
                'F', 107,
                'b', 107,
                'd', 107,
                'f', 107,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(93);
            END_STATE();
        case 107:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 12,
                '.', 112,
                'E', 103,
                'e', 103,
                'P', 111,
                'p', 111,
                'B', 107,
                'D', 107,
                'F', 107,
                'b', 107,
                'd', 107,
                'f', 107,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(107);
            END_STATE();
        case 108:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(96);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 109:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(97);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(116);
            END_STATE();
        case 110:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 13,
                '-', 13,
                'B', 88,
                'D', 88,
                'F', 88,
                'b', 88,
                'd', 88,
                'f', 88,
                'L', 115,
                'U', 115,
                'W', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(88);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 111:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 13,
                '-', 13,
                'B', 89,
                'D', 89,
                'F', 89,
                'b', 89,
                'd', 89,
                'f', 89,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(89);
            END_STATE();
        case 112:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 100,
                'e', 100,
                'P', 111,
                'p', 111,
                'B', 101,
                'D', 101,
                'F', 101,
                'b', 101,
                'd', 101,
                'f', 101,
                'L', 116,
                'U', 116,
                'W', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(101);
            END_STATE();
        case 113:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(98);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(115);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 114:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(99);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(116);
            END_STATE();
        case 115:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 115,
                'D', 115,
                'F', 115,
                'L', 115,
                'U', 115,
                'W', 115,
                'b', 115,
                'd', 115,
                'f', 115,
                'l', 115,
                'u', 115,
                'w', 115,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 116:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 116,
                'D', 116,
                'F', 116,
                'L', 116,
                'U', 116,
                'W', 116,
                'b', 116,
                'd', 116,
                'f', 116,
                'l', 116,
                'u', 116,
                'w', 116,
            );
            END_STATE();
        case 117:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(308);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0)
                ADVANCE(307);
            END_STATE();
        case 118:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '1')
                ADVANCE(121);
            if(lookahead == '3')
                ADVANCE(119);
            if(lookahead == '6')
                ADVANCE(120);
            if(lookahead == '8')
                ADVANCE(20);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 119:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '2')
                ADVANCE(25);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 120:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '4')
                ADVANCE(26);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 121:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '6')
                ADVANCE(24);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 122:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == 'E')
                ADVANCE(83);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 123:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == 'E')
                ADVANCE(85);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 124:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == 'L')
                ADVANCE(125);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 125:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == 'S')
                ADVANCE(123);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 126:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == 'U')
                ADVANCE(122);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 127:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(219);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 128:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(156);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 129:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(257);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 130:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(248);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 131:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(258);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 132:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(209);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 133:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(293);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 134:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(249);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 135:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(221);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 136:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(272);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 137:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(285);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 138:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(205);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 139:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'a')
                ADVANCE(207);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 140:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'b')
                ADVANCE(215);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 141:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'b')
                ADVANCE(297);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 142:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'b')
                ADVANCE(214);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 143:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(339);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 144:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(190);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 145:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(173);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 146:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(289);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 147:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(132);
            if(lookahead == 'n')
                ADVANCE(187);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 148:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(276);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 149:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'c')
                ADVANCE(164);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 150:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(169);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 151:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(315);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 152:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(22);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 153:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(324);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 154:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(296);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 155:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(170);
            if(lookahead == 'n')
                ADVANCE(127);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 156:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'd')
                ADVANCE(235);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 157:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(346);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 158:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(155);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 159:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(28);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 160:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(329);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 161:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(348);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 162:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(349);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 163:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(340);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 164:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(38);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 165:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(330);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 166:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(320);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 167:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(332);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 168:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(331);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 169:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(185);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 170:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(183);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 171:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(152);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 172:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(259);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 173:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(244);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 174:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(212);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 175:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(261);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 176:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(230);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 177:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(262);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 178:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(135);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 179:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(273);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 180:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(275);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 181:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(228);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 182:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'e')
                ADVANCE(291);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 183:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'f')
                ADVANCE(342);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 184:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'f')
                ADVANCE(133);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 185:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'f')
                ADVANCE(200);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 186:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'f')
                ADVANCE(203);
            if(lookahead == 'm')
                ADVANCE(131);
            if(lookahead == 's')
                ADVANCE(180);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 187:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'g')
                ADVANCE(19);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 188:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'g')
                ADVANCE(32);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 189:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'g')
                ADVANCE(33);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 190:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'h')
                ADVANCE(345);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 191:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'h')
                ADVANCE(134);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 192:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(299);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 193:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(141);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 194:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(300);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 195:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(129);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 196:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(224);
            if(lookahead == 'u')
                ADVANCE(148);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 197:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(151);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 198:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(232);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 199:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(143);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 200:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(229);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 201:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(280);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 202:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(225);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 203:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(174);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 204:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(264);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 205:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(266);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 206:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(237);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 207:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'i')
                ADVANCE(267);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 208:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'k')
                ADVANCE(325);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 209:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(312);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 210:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(304);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 211:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(298);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 212:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(153);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 213:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(178);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 214:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(159);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 215:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(199);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 216:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(160);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 217:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'l')
                ADVANCE(277);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 218:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'm')
                ADVANCE(335);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 219:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'm')
                ADVANCE(165);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 220:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(334);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 221:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(21);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 222:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(309);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 223:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(265);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 224:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(188);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 225:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(189);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 226:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(210);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 227:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(270);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 228:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(286);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 229:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(162);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 230:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'n')
                ADVANCE(149);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 231:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(213);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 232:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(220);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 233:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(136);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 234:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(254);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 235:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(226);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 236:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(250);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 237:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(222);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 238:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(255);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 239:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(39);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 240:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(245);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 241:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(158);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 242:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(167);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 243:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(168);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 244:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(290);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 245:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(238);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 246:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'q')
                ADVANCE(295);
            if(lookahead == 't')
                ADVANCE(256);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 247:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(196);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 248:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(29);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 249:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(30);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 250:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(303);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 251:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(138);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 252:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(193);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 253:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(202);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 254:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(274);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 255:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(283);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 256:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'r')
                ADVANCE(139);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 257:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(337);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 258:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(208);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 259:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(318);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 260:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(338);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 261:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(321);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 262:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(322);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 263:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(157);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 264:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(172);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 265:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(271);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 266:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(175);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 267:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(177);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 268:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(186);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 269:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(317);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 270:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(118);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 271:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(336);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 272:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(27);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 273:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(23);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 274:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(18);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 275:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(323);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 276:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(333);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 277:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(326);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 278:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(305);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 279:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(252);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 280:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(144);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 281:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(251);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 282:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(179);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 283:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(260);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 284:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(194);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 285:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(163);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 286:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(278);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 287:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(166);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 288:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(253);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 289:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(236);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 290:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(206);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 291:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 't')
                ADVANCE(306);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 292:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(218);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 293:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(217);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 294:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(142);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 295:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(176);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 296:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(216);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 297:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(287);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 298:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'u')
                ADVANCE(182);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 299:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'v')
                ADVANCE(137);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 300:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'v')
                ADVANCE(161);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 301:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'x')
                ADVANCE(171);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 302:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'y')
                ADVANCE(36);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 303:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'y')
                ADVANCE(341);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 304:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'y')
                ADVANCE(319);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 305:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'y')
                ADVANCE(242);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 306:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead == 'y')
                ADVANCE(243);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 307:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(307);
            END_STATE();
        case 308:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(14);
            if(lookahead == '\\')
                ADVANCE(117);
            if(lookahead != 0)
                ADVANCE(307);
            END_STATE();
        case 309:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 310:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 311:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 312:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 313:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 314:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 315:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 316:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 317:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 318:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 319:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 320:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 321:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 322:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 323:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 324:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 325:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 326:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 327:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 328:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 329:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 330:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 331:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 332:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 333:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 334:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 335:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 336:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 337:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 338:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 339:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 340:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 341:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 342:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 343:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 344:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 345:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 346:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 347:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 348:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 349:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 350:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(9);
            if(lookahead == '0')
                ADVANCE(90);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(92);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(105);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 351:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(354);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 352:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 353:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(86);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 354:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(356);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 355:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(357);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 356:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(353);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 357:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(352);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 358:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(105);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        case 359:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(359);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 15 },
    [2] = { .lex_state = 15 },
    [3] = { .lex_state = 15 },
    [4] = { .lex_state = 15 },
    [5] = { .lex_state = 15 },
    [6] = { .lex_state = 15 },
    [7] = { .lex_state = 15 },
    [8] = { .lex_state = 15 },
    [9] = { .lex_state = 15 },
    [10] = { .lex_state = 15 },
    [11] = { .lex_state = 15 },
    [12] = { .lex_state = 16 },
    [13] = { .lex_state = 16 },
    [14] = { .lex_state = 16 },
    [15] = { .lex_state = 15 },
    [16] = { .lex_state = 1 },
    [17] = { .lex_state = 1 },
    [18] = { .lex_state = 1 },
    [19] = { .lex_state = 1 },
    [20] = { .lex_state = 1 },
    [21] = { .lex_state = 1 },
    [22] = { .lex_state = 1 },
    [23] = { .lex_state = 1 },
    [24] = { .lex_state = 1 },
    [25] = { .lex_state = 1 },
    [26] = { .lex_state = 1 },
    [27] = { .lex_state = 1 },
    [28] = { .lex_state = 1 },
    [29] = { .lex_state = 1 },
    [30] = { .lex_state = 1 },
    [31] = { .lex_state = 1 },
    [32] = { .lex_state = 1 },
    [33] = { .lex_state = 15 },
    [34] = { .lex_state = 16 },
    [35] = { .lex_state = 16 },
    [36] = { .lex_state = 15 },
    [37] = { .lex_state = 15 },
    [38] = { .lex_state = 15 },
    [39] = { .lex_state = 15 },
    [40] = { .lex_state = 15 },
    [41] = { .lex_state = 15 },
    [42] = { .lex_state = 15 },
    [43] = { .lex_state = 15 },
    [44] = { .lex_state = 15 },
    [45] = { .lex_state = 15 },
    [46] = { .lex_state = 15 },
    [47] = { .lex_state = 15 },
    [48] = { .lex_state = 16 },
    [49] = { .lex_state = 15 },
    [50] = { .lex_state = 15 },
    [51] = { .lex_state = 15 },
    [52] = { .lex_state = 15 },
    [53] = { .lex_state = 15 },
    [54] = { .lex_state = 15 },
    [55] = { .lex_state = 15 },
    [56] = { .lex_state = 16 },
    [57] = { .lex_state = 15 },
    [58] = { .lex_state = 1 },
    [59] = { .lex_state = 15 },
    [60] = { .lex_state = 15 },
    [61] = { .lex_state = 7 },
    [62] = { .lex_state = 15 },
    [63] = { .lex_state = 15 },
    [64] = { .lex_state = 0 },
    [65] = { .lex_state = 15 },
    [66] = { .lex_state = 15 },
    [67] = { .lex_state = 15 },
    [68] = { .lex_state = 15 },
    [69] = { .lex_state = 15 },
    [70] = { .lex_state = 7 },
    [71] = { .lex_state = 1 },
    [72] = { .lex_state = 16 },
    [73] = { .lex_state = 16 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [sym_unsigned_tiny_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_any] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym_DOLLAR] = ACTIONS(1),
        [anon_sym_LT_LT] = ACTIONS(1),
        [anon_sym_PLUS] = ACTIONS(1),
        [anon_sym_DASH] = ACTIONS(1),
        [anon_sym_STAR] = ACTIONS(1),
        [anon_sym_SLASH] = ACTIONS(1),
        [anon_sym_PERCENT] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [aux_sym_char_literal_token1] = ACTIONS(1),
        [anon_sym_TRUE] = ACTIONS(1),
        [anon_sym_FALSE] = ACTIONS(1),
        [sym_preproc_arg] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_typename] = ACTIONS(1),
        [anon_sym_valuetype] = ACTIONS(1),
        [anon_sym_eventtype] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_alias] = ACTIONS(1),
        [anon_sym_supports] = ACTIONS(1),
        [anon_sym_public] = ACTIONS(1),
        [anon_sym_private] = ACTIONS(1),
        [anon_sym_factory] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(64),
        [sym_annotation_comment] = STATE(43),
        [aux_sym_specification_repeat1] = STATE(43),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 24,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(23),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(42),
    1,
    sym_and_expr,
    STATE(45),
    1,
    sym_xor_expr,
    STATE(52),
    1,
    sym_or_expr,
    STATE(53),
    1,
    sym_annotation_appl_param,
    STATE(66),
    1,
    sym_annotation_appl_params,
    STATE(67),
    1,
    sym_const_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [77] = 22,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(42),
    1,
    sym_and_expr,
    STATE(45),
    1,
    sym_xor_expr,
    STATE(52),
    1,
    sym_or_expr,
    STATE(65),
    1,
    sym_const_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [148] = 22,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(42),
    1,
    sym_and_expr,
    STATE(45),
    1,
    sym_xor_expr,
    STATE(52),
    1,
    sym_or_expr,
    STATE(68),
    1,
    sym_const_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [219] = 22,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(42),
    1,
    sym_and_expr,
    STATE(45),
    1,
    sym_xor_expr,
    STATE(52),
    1,
    sym_or_expr,
    STATE(55),
    1,
    sym_const_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [290] = 20,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(42),
    1,
    sym_and_expr,
    STATE(46),
    1,
    sym_xor_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [355] = 19,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(36),
    1,
    sym_shift_expr,
    STATE(38),
    1,
    sym_and_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [417] = 18,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(34),
    1,
    sym_add_expr,
    STATE(37),
    1,
    sym_shift_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [476] = 17,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(29),
    1,
    sym_mult_expr,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(35),
    1,
    sym_add_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [532] = 16,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(28),
    1,
    sym_literal,
    STATE(30),
    1,
    sym_unary_expr,
    STATE(32),
    1,
    sym_mult_expr,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [585] = 15,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(9),
    1,
    anon_sym_LPAREN,
    ACTIONS(11),
    1,
    anon_sym_TILDE,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    STATE(15),
    1,
    sym_unary_operator,
    STATE(17),
    1,
    sym_scoped_name,
    STATE(21),
    1,
    sym_unary_expr,
    STATE(28),
    1,
    sym_literal,
    ACTIONS(7),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [635] = 2,
    ACTIONS(29),
    1,
    anon_sym_SLASH,
    ACTIONS(27),
    16,
    ts_builtin_sym_end,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_AT,
    anon_sym_SLASH_SLASH,
    [657] = 2,
    ACTIONS(33),
    1,
    anon_sym_SLASH,
    ACTIONS(31),
    16,
    ts_builtin_sym_end,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_AT,
    anon_sym_SLASH_SLASH,
    [679] = 2,
    ACTIONS(37),
    1,
    anon_sym_SLASH,
    ACTIONS(35),
    16,
    ts_builtin_sym_end,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_AT,
    anon_sym_SLASH_SLASH,
    [701] = 11,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(13),
    1,
    anon_sym_L,
    ACTIONS(15),
    1,
    anon_sym_DQUOTE,
    ACTIONS(17),
    1,
    anon_sym_SQUOTE,
    ACTIONS(21),
    1,
    sym_number_literal,
    ACTIONS(25),
    1,
    sym_identifier,
    ACTIONS(39),
    1,
    anon_sym_LPAREN,
    STATE(18),
    1,
    sym_scoped_name,
    STATE(27),
    1,
    sym_literal,
    ACTIONS(19),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(23),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [738] = 2,
    ACTIONS(41),
    1,
    anon_sym_EQ,
    ACTIONS(35),
    12,
    anon_sym_COLON_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [756] = 2,
    ACTIONS(43),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(45),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [774] = 2,
    ACTIONS(43),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(47),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [792] = 1,
    ACTIONS(49),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [807] = 1,
    ACTIONS(51),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [822] = 1,
    ACTIONS(53),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [837] = 1,
    ACTIONS(55),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [852] = 1,
    ACTIONS(57),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [867] = 1,
    ACTIONS(59),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [882] = 1,
    ACTIONS(61),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [897] = 1,
    ACTIONS(63),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [912] = 1,
    ACTIONS(47),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [927] = 1,
    ACTIONS(45),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [942] = 2,
    ACTIONS(67),
    3,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    ACTIONS(65),
    9,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    [959] = 1,
    ACTIONS(69),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [974] = 1,
    ACTIONS(71),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [989] = 2,
    ACTIONS(67),
    3,
    anon_sym_STAR,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    ACTIONS(73),
    9,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    [1006] = 2,
    ACTIONS(75),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(77),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [1020] = 2,
    ACTIONS(81),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(79),
    7,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    [1034] = 2,
    ACTIONS(81),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(83),
    7,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    [1048] = 2,
    ACTIONS(87),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(85),
    5,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    [1060] = 2,
    ACTIONS(87),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(89),
    5,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    [1072] = 2,
    ACTIONS(93),
    1,
    anon_sym_DOLLAR,
    ACTIONS(91),
    4,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    [1082] = 3,
    ACTIONS(97),
    1,
    anon_sym_AT,
    ACTIONS(95),
    2,
    ts_builtin_sym_end,
    anon_sym_SLASH_SLASH,
    STATE(39),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [1094] = 3,
    ACTIONS(102),
    1,
    anon_sym_AT,
    ACTIONS(100),
    2,
    ts_builtin_sym_end,
    anon_sym_SLASH_SLASH,
    STATE(39),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [1106] = 3,
    ACTIONS(43),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(106),
    1,
    anon_sym_LPAREN,
    ACTIONS(104),
    3,
    ts_builtin_sym_end,
    anon_sym_AT,
    anon_sym_SLASH_SLASH,
    [1118] = 2,
    ACTIONS(93),
    1,
    anon_sym_DOLLAR,
    ACTIONS(108),
    4,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    [1128] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(110),
    1,
    ts_builtin_sym_end,
    STATE(44),
    2,
    sym_annotation_comment,
    aux_sym_specification_repeat1,
    [1139] = 3,
    ACTIONS(112),
    1,
    ts_builtin_sym_end,
    ACTIONS(114),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    2,
    sym_annotation_comment,
    aux_sym_specification_repeat1,
    [1150] = 2,
    ACTIONS(119),
    1,
    anon_sym_CARET,
    ACTIONS(117),
    3,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    [1159] = 2,
    ACTIONS(119),
    1,
    anon_sym_CARET,
    ACTIONS(121),
    3,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    [1168] = 2,
    ACTIONS(102),
    1,
    anon_sym_AT,
    STATE(40),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [1176] = 3,
    ACTIONS(5),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_scoped_name,
    [1186] = 3,
    ACTIONS(125),
    1,
    anon_sym_COMMA,
    ACTIONS(128),
    1,
    anon_sym_RPAREN,
    STATE(49),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [1196] = 1,
    ACTIONS(130),
    3,
    ts_builtin_sym_end,
    anon_sym_AT,
    anon_sym_SLASH_SLASH,
    [1202] = 3,
    ACTIONS(132),
    1,
    anon_sym_COMMA,
    ACTIONS(134),
    1,
    anon_sym_RPAREN,
    STATE(49),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [1212] = 2,
    ACTIONS(138),
    1,
    anon_sym_PIPE,
    ACTIONS(136),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [1220] = 3,
    ACTIONS(132),
    1,
    anon_sym_COMMA,
    ACTIONS(140),
    1,
    anon_sym_RPAREN,
    STATE(51),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [1230] = 2,
    ACTIONS(142),
    1,
    anon_sym_DQUOTE,
    ACTIONS(144),
    1,
    anon_sym_SQUOTE,
    [1237] = 1,
    ACTIONS(146),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [1242] = 2,
    ACTIONS(148),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_annotation_appl_param,
    [1249] = 1,
    ACTIONS(128),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [1254] = 1,
    ACTIONS(150),
    1,
    aux_sym_string_literal_token1,
    [1258] = 1,
    ACTIONS(152),
    1,
    anon_sym_DQUOTE,
    [1262] = 1,
    ACTIONS(154),
    1,
    anon_sym_SQUOTE,
    [1266] = 1,
    ACTIONS(156),
    1,
    aux_sym_char_literal_token1,
    [1270] = 1,
    ACTIONS(158),
    1,
    anon_sym_DQUOTE,
    [1274] = 1,
    ACTIONS(160),
    1,
    anon_sym_SQUOTE,
    [1278] = 1,
    ACTIONS(162),
    1,
    ts_builtin_sym_end,
    [1282] = 1,
    ACTIONS(164),
    1,
    anon_sym_RPAREN,
    [1286] = 1,
    ACTIONS(166),
    1,
    anon_sym_RPAREN,
    [1290] = 1,
    ACTIONS(140),
    1,
    anon_sym_RPAREN,
    [1294] = 1,
    ACTIONS(168),
    1,
    anon_sym_RPAREN,
    [1298] = 1,
    ACTIONS(41),
    1,
    anon_sym_EQ,
    [1302] = 1,
    ACTIONS(170),
    1,
    aux_sym_char_literal_token1,
    [1306] = 1,
    ACTIONS(172),
    1,
    aux_sym_string_literal_token1,
    [1310] = 1,
    ACTIONS(174),
    1,
    sym_identifier,
    [1314] = 1,
    ACTIONS(176),
    1,
    sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 77,
    [SMALL_STATE(4)] = 148,
    [SMALL_STATE(5)] = 219,
    [SMALL_STATE(6)] = 290,
    [SMALL_STATE(7)] = 355,
    [SMALL_STATE(8)] = 417,
    [SMALL_STATE(9)] = 476,
    [SMALL_STATE(10)] = 532,
    [SMALL_STATE(11)] = 585,
    [SMALL_STATE(12)] = 635,
    [SMALL_STATE(13)] = 657,
    [SMALL_STATE(14)] = 679,
    [SMALL_STATE(15)] = 701,
    [SMALL_STATE(16)] = 738,
    [SMALL_STATE(17)] = 756,
    [SMALL_STATE(18)] = 774,
    [SMALL_STATE(19)] = 792,
    [SMALL_STATE(20)] = 807,
    [SMALL_STATE(21)] = 822,
    [SMALL_STATE(22)] = 837,
    [SMALL_STATE(23)] = 852,
    [SMALL_STATE(24)] = 867,
    [SMALL_STATE(25)] = 882,
    [SMALL_STATE(26)] = 897,
    [SMALL_STATE(27)] = 912,
    [SMALL_STATE(28)] = 927,
    [SMALL_STATE(29)] = 942,
    [SMALL_STATE(30)] = 959,
    [SMALL_STATE(31)] = 974,
    [SMALL_STATE(32)] = 989,
    [SMALL_STATE(33)] = 1006,
    [SMALL_STATE(34)] = 1020,
    [SMALL_STATE(35)] = 1034,
    [SMALL_STATE(36)] = 1048,
    [SMALL_STATE(37)] = 1060,
    [SMALL_STATE(38)] = 1072,
    [SMALL_STATE(39)] = 1082,
    [SMALL_STATE(40)] = 1094,
    [SMALL_STATE(41)] = 1106,
    [SMALL_STATE(42)] = 1118,
    [SMALL_STATE(43)] = 1128,
    [SMALL_STATE(44)] = 1139,
    [SMALL_STATE(45)] = 1150,
    [SMALL_STATE(46)] = 1159,
    [SMALL_STATE(47)] = 1168,
    [SMALL_STATE(48)] = 1176,
    [SMALL_STATE(49)] = 1186,
    [SMALL_STATE(50)] = 1196,
    [SMALL_STATE(51)] = 1202,
    [SMALL_STATE(52)] = 1212,
    [SMALL_STATE(53)] = 1220,
    [SMALL_STATE(54)] = 1230,
    [SMALL_STATE(55)] = 1237,
    [SMALL_STATE(56)] = 1242,
    [SMALL_STATE(57)] = 1249,
    [SMALL_STATE(58)] = 1254,
    [SMALL_STATE(59)] = 1258,
    [SMALL_STATE(60)] = 1262,
    [SMALL_STATE(61)] = 1266,
    [SMALL_STATE(62)] = 1270,
    [SMALL_STATE(63)] = 1274,
    [SMALL_STATE(64)] = 1278,
    [SMALL_STATE(65)] = 1282,
    [SMALL_STATE(66)] = 1286,
    [SMALL_STATE(67)] = 1290,
    [SMALL_STATE(68)] = 1294,
    [SMALL_STATE(69)] = 1298,
    [SMALL_STATE(70)] = 1302,
    [SMALL_STATE(71)] = 1306,
    [SMALL_STATE(72)] = 1310,
    [SMALL_STATE(73)] = 1314,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [13] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [19] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(22),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(23),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(14),
    [27] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [29] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [31] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [33] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [35] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [37] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [45] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [47] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 2),
    [51] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 1),
    [53] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [55] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [57] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [59] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [61] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [63] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [65] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [69] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [71] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [73] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [75] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [77] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [79] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [83] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [85] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [89] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [91] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [95] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [97] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_comment, 2, 0, 0),
    [102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [114] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(47),
    [117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [125] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [128] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [162] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl_annotation(void) {
    static const TSLanguage language = {
        .version = LANGUAGE_VERSION,
        .symbol_count = SYMBOL_COUNT,
        .alias_count = ALIAS_COUNT,
        .token_count = TOKEN_COUNT,
        .external_token_count = EXTERNAL_TOKEN_COUNT,
        .state_count = STATE_COUNT,
        .large_state_count = LARGE_STATE_COUNT,
        .production_id_count = PRODUCTION_ID_COUNT,
        .field_count = FIELD_COUNT,
        .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
        .parse_table = &ts_parse_table[0][0],
        .small_parse_table = ts_small_parse_table,
        .small_parse_table_map = ts_small_parse_table_map,
        .parse_actions = ts_parse_actions,
        .symbol_names = ts_symbol_names,
        .field_names = ts_field_names,
        .field_map_slices = ts_field_map_slices,
        .field_map_entries = ts_field_map_entries,
        .symbol_metadata = ts_symbol_metadata,
        .public_symbol_map = ts_symbol_map,
        .alias_map = ts_non_terminal_alias_map,
        .alias_sequences = &ts_alias_sequences[0][0],
        .lex_modes = ts_lex_modes,
        .lex_fn = ts_lex,
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
