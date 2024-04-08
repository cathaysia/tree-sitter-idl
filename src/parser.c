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
#define STATE_COUNT 472
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 227
#define ALIAS_COUNT 3
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
    sym_signed_short_int = 1,
    sym_signed_long_int = 2,
    sym_signed_longlong_int = 3,
    sym_boolean_type = 4,
    anon_sym_fixed = 5,
    sym_octet_type = 6,
    sym_unsigned_short_int = 7,
    sym_unsigned_long_int = 8,
    sym_unsigned_longlong_int = 9,
    anon_sym_float = 10,
    anon_sym_double = 11,
    anon_sym_longdouble = 12,
    anon_sym_char = 13,
    anon_sym_wchar = 14,
    anon_sym_COLON_COLON = 15,
    anon_sym_string = 16,
    anon_sym_wstring = 17,
    anon_sym_LT = 18,
    anon_sym_GT = 19,
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
    anon_sym_SEMI = 44,
    anon_sym_exception = 45,
    anon_sym_LBRACE = 46,
    anon_sym_RBRACE = 47,
    anon_sym_native = 48,
    anon_sym_module = 49,
    anon_sym_struct = 50,
    anon_sym_COLON = 51,
    anon_sym_default = 52,
    anon_sym_enum = 53,
    anon_sym_ATdefault_literal = 54,
    anon_sym_ATignore_literal_names = 55,
    anon_sym_ATannotation = 56,
    sym_any_const_type = 57,
    anon_sym_AT = 58,
    anon_sym_LBRACK = 59,
    anon_sym_RBRACK = 60,
    anon_sym_EQ = 61,
    anon_sym_union = 62,
    anon_sym_switch = 63,
    anon_sym_case = 64,
    anon_sym_bitset = 65,
    anon_sym_bitfield = 66,
    anon_sym_bitmask = 67,
    anon_sym_typedef = 68,
    anon_sym_POUNDdefine = 69,
    aux_sym_predefine_token1 = 70,
    anon_sym_interface = 71,
    anon_sym_local = 72,
    anon_sym_void = 73,
    anon_sym_in = 74,
    anon_sym_out = 75,
    anon_sym_inout = 76,
    anon_sym_raises = 77,
    anon_sym_readonly = 78,
    anon_sym_attribute = 79,
    anon_sym_getraises = 80,
    anon_sym_setraises = 81,
    sym_dds_service = 82,
    anon_sym_ATDDSRequestTopic = 83,
    anon_sym_name = 84,
    anon_sym_ATDDSReplyTopic = 85,
    anon_sym_const = 86,
    sym_optional = 87,
    sym_key = 88,
    sym_must_understand = 89,
    sym_non_serialized = 90,
    sym_id = 91,
    sym_external = 92,
    anon_sym_AThashid = 93,
    anon_sym_LPAREN_DQUOTE = 94,
    anon_sym_ATtry_construct = 95,
    sym_final = 96,
    anon_sym_ATdata_representation = 97,
    anon_sym_XCDR = 98,
    anon_sym_XCDR2 = 99,
    sym_identifier = 100,
    anon_sym_SLASH_SLASH = 101,
    aux_sym_comment_token1 = 102,
    sym__eof = 103,
    sym_specification = 104,
    sym_unsigned_int = 105,
    sym_fixed_pt_const_type = 106,
    sym_integer_type = 107,
    sym_signed_int = 108,
    sym_floating_pt_type = 109,
    sym_char_type = 110,
    sym_scoped_name = 111,
    sym_string_type = 112,
    sym_type_spec = 113,
    sym_simple_type_spec = 114,
    sym_base_type_spec = 115,
    sym_fixed_pt_type = 116,
    sym_template_type_spec = 117,
    sym_sequence_type = 118,
    sym_map_type = 119,
    sym_const_expr = 120,
    sym_or_expr = 121,
    sym_xor_expr = 122,
    sym_and_expr = 123,
    sym_shift_expr = 124,
    sym_add_expr = 125,
    sym_mult_expr = 126,
    sym_unary_expr = 127,
    sym_unary_operator = 128,
    sym_literal = 129,
    sym_string_literal = 130,
    sym_char_literal = 131,
    sym_boolean_literal = 132,
    sym__definition = 133,
    sym_except_dcl = 134,
    sym_native_dcl = 135,
    sym_module_dcl = 136,
    sym_struct_forward_dcl = 137,
    sym_struct_def = 138,
    sym_member = 139,
    sym_default = 140,
    sym_enum_dcl = 141,
    sym_enumerator = 142,
    sym_enum_modifier = 143,
    sym_enum_anno = 144,
    sym_annotation_dcl = 145,
    sym_annotation_body = 146,
    sym_annotation_member = 147,
    sym_annotation_member_type = 148,
    sym_union_forward_dcl = 149,
    sym_union_def = 150,
    sym_case = 151,
    sym_case_label = 152,
    sym_element_spec = 153,
    sym_switch_type_spec = 154,
    sym_bitset_dcl = 155,
    sym_bitfield = 156,
    sym_bitfield_spec = 157,
    sym_destination_type = 158,
    sym_bitmask_dcl = 159,
    sym_bit_value = 160,
    sym_typedef_dcl = 161,
    sym_predefine = 162,
    sym_interface_dcl = 163,
    sym_interface_forward_dcl = 164,
    sym_interface_def = 165,
    sym_interface_header = 166,
    sym_interface_inheritance_spec = 167,
    sym_interface_name = 168,
    sym_interface_body = 169,
    sym_export = 170,
    sym_op_dcl = 171,
    sym_op_type_spec = 172,
    sym_parameter_dcls = 173,
    sym_param_dcl = 174,
    sym_param_attribute = 175,
    sym_raises_expr = 176,
    sym_attr_dcl = 177,
    sym_readonly_attr_spec = 178,
    sym_readonly_attr_declarator = 179,
    sym_attr_spec = 180,
    sym_attr_declarator = 181,
    sym_attr_raises_expr = 182,
    sym_get_excep_expr = 183,
    sym_set_excep_expr = 184,
    sym_exception_list = 185,
    sym_dds_request_topic = 186,
    sym_dds_reply_topic = 187,
    sym_interface_anno = 188,
    sym_const_dcl = 189,
    sym_const_type = 190,
    sym_hashid = 191,
    sym_try_construct = 192,
    sym_data_representation = 193,
    sym_struct_modifier = 194,
    sym_simple_declarator = 195,
    sym_declarator = 196,
    sym_declarators = 197,
    sym_array_declarator = 198,
    sym_positive_int_const = 199,
    sym_fixed_array_size = 200,
    sym_type_declarator = 201,
    sym_any_declarators = 202,
    sym_any_declarator = 203,
    sym_comment = 204,
    aux_sym_specification_repeat1 = 205,
    aux_sym_except_dcl_repeat1 = 206,
    aux_sym_struct_def_repeat1 = 207,
    aux_sym_member_repeat1 = 208,
    aux_sym_enum_dcl_repeat1 = 209,
    aux_sym_enumerator_repeat1 = 210,
    aux_sym_annotation_body_repeat1 = 211,
    aux_sym_union_def_repeat1 = 212,
    aux_sym_bitset_dcl_repeat1 = 213,
    aux_sym_bitfield_repeat1 = 214,
    aux_sym_bitmask_dcl_repeat1 = 215,
    aux_sym_interface_def_repeat1 = 216,
    aux_sym_interface_inheritance_spec_repeat1 = 217,
    aux_sym_interface_body_repeat1 = 218,
    aux_sym_parameter_dcls_repeat1 = 219,
    aux_sym_raises_expr_repeat1 = 220,
    aux_sym_readonly_attr_declarator_repeat1 = 221,
    aux_sym_attr_raises_expr_repeat1 = 222,
    aux_sym_data_representation_repeat1 = 223,
    aux_sym_declarators_repeat1 = 224,
    aux_sym_array_declarator_repeat1 = 225,
    aux_sym_any_declarators_repeat1 = 226,
    alias_sym_data_rep = 227,
    alias_sym_hashid_value = 228,
    alias_sym_try_construct_value = 229,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_longdouble] = "long double",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
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
    [anon_sym_SEMI] = ";",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_COLON] = ":",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_ATannotation] = "@annotation",
    [sym_any_const_type] = "any_const_type",
    [anon_sym_AT] = "@",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_EQ] = "=",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_const] = "const",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [sym_final] = "final",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [sym_identifier] = "identifier",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym_unsigned_int] = "unsigned_int",
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_floating_pt_type] = "floating_pt_type",
    [sym_char_type] = "char_type",
    [sym_scoped_name] = "scoped_name",
    [sym_string_type] = "string_type",
    [sym_type_spec] = "type_spec",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_base_type_spec] = "base_type_spec",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_sequence_type] = "sequence_type",
    [sym_map_type] = "map_type",
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
    [sym__definition] = "_definition",
    [sym_except_dcl] = "except_dcl",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_annotation_dcl] = "annotation_dcl",
    [sym_annotation_body] = "annotation_body",
    [sym_annotation_member] = "annotation_member",
    [sym_annotation_member_type] = "annotation_member_type",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bit_value] = "bit_value",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_interface_dcl] = "interface_dcl",
    [sym_interface_forward_dcl] = "interface_forward_dcl",
    [sym_interface_def] = "interface_def",
    [sym_interface_header] = "interface_header",
    [sym_interface_inheritance_spec] = "interface_inheritance_spec",
    [sym_interface_name] = "interface_name",
    [sym_interface_body] = "interface_body",
    [sym_export] = "export",
    [sym_op_dcl] = "op_dcl",
    [sym_op_type_spec] = "op_type_spec",
    [sym_parameter_dcls] = "parameter_dcls",
    [sym_param_dcl] = "param_dcl",
    [sym_param_attribute] = "param_attribute",
    [sym_raises_expr] = "raises_expr",
    [sym_attr_dcl] = "attr_dcl",
    [sym_readonly_attr_spec] = "readonly_attr_spec",
    [sym_readonly_attr_declarator] = "readonly_attr_declarator",
    [sym_attr_spec] = "attr_spec",
    [sym_attr_declarator] = "attr_declarator",
    [sym_attr_raises_expr] = "attr_raises_expr",
    [sym_get_excep_expr] = "get_excep_expr",
    [sym_set_excep_expr] = "set_excep_expr",
    [sym_exception_list] = "exception_list",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_interface_anno] = "interface_anno",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_annotation_body_repeat1] = "annotation_body_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_attr_raises_expr_repeat1] = "attr_raises_expr_repeat1",
    [aux_sym_data_representation_repeat1] = "data_representation_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [alias_sym_data_rep] = "data_rep",
    [alias_sym_hashid_value] = "hashid_value",
    [alias_sym_try_construct_value] = "try_construct_value",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
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
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [sym_any_const_type] = sym_any_const_type,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_const] = anon_sym_const,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [sym_final] = sym_final,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [sym_identifier] = sym_identifier,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_floating_pt_type] = sym_floating_pt_type,
    [sym_char_type] = sym_char_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_string_type] = sym_string_type,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_base_type_spec] = sym_base_type_spec,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_sequence_type] = sym_sequence_type,
    [sym_map_type] = sym_map_type,
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
    [sym__definition] = sym__definition,
    [sym_except_dcl] = sym_except_dcl,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_annotation_dcl] = sym_annotation_dcl,
    [sym_annotation_body] = sym_annotation_body,
    [sym_annotation_member] = sym_annotation_member,
    [sym_annotation_member_type] = sym_annotation_member_type,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bit_value] = sym_bit_value,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_interface_dcl] = sym_interface_dcl,
    [sym_interface_forward_dcl] = sym_interface_forward_dcl,
    [sym_interface_def] = sym_interface_def,
    [sym_interface_header] = sym_interface_header,
    [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
    [sym_interface_name] = sym_interface_name,
    [sym_interface_body] = sym_interface_body,
    [sym_export] = sym_export,
    [sym_op_dcl] = sym_op_dcl,
    [sym_op_type_spec] = sym_op_type_spec,
    [sym_parameter_dcls] = sym_parameter_dcls,
    [sym_param_dcl] = sym_param_dcl,
    [sym_param_attribute] = sym_param_attribute,
    [sym_raises_expr] = sym_raises_expr,
    [sym_attr_dcl] = sym_attr_dcl,
    [sym_readonly_attr_spec] = sym_readonly_attr_spec,
    [sym_readonly_attr_declarator] = sym_readonly_attr_declarator,
    [sym_attr_spec] = sym_attr_spec,
    [sym_attr_declarator] = sym_attr_declarator,
    [sym_attr_raises_expr] = sym_attr_raises_expr,
    [sym_get_excep_expr] = sym_get_excep_expr,
    [sym_set_excep_expr] = sym_set_excep_expr,
    [sym_exception_list] = sym_exception_list,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_interface_anno] = sym_interface_anno,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_annotation_body_repeat1] = aux_sym_annotation_body_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_attr_raises_expr_repeat1] = aux_sym_attr_raises_expr_repeat1,
    [aux_sym_data_representation_repeat1] = aux_sym_data_representation_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [alias_sym_data_rep] = alias_sym_data_rep,
    [alias_sym_hashid_value] = alias_sym_hashid_value,
    [alias_sym_try_construct_value] = alias_sym_try_construct_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [sym_signed_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_longlong_int] = {
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
    [sym_unsigned_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_longlong_int] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
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
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
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
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATdefault_literal] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATignore_literal_names] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATannotation] = {
        .visible = true,
        .named = false,
    },
    [sym_any_const_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_AT] = {
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
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_union] = {
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
    [anon_sym_typedef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUNDdefine] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_predefine_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
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
    [anon_sym_inout] = {
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
    [sym_dds_service] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATDDSRequestTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_name] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATDDSReplyTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_const] = {
        .visible = true,
        .named = false,
    },
    [sym_optional] = {
        .visible = true,
        .named = true,
    },
    [sym_key] = {
        .visible = true,
        .named = true,
    },
    [sym_must_understand] = {
        .visible = true,
        .named = true,
    },
    [sym_non_serialized] = {
        .visible = true,
        .named = true,
    },
    [sym_id] = {
        .visible = true,
        .named = true,
    },
    [sym_external] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_AThashid] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATtry_construct] = {
        .visible = true,
        .named = false,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATdata_representation] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR2] = {
        .visible = true,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token1] = {
        .visible = false,
        .named = false,
    },
    [sym__eof] = {
        .visible = false,
        .named = true,
    },
    [sym_specification] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_int] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_int] = {
        .visible = true,
        .named = true,
    },
    [sym_floating_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_char_type] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_base_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_template_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_map_type] = {
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
    [sym__definition] = {
        .visible = false,
        .named = true,
    },
    [sym_except_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_native_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_def] = {
        .visible = true,
        .named = true,
    },
    [sym_member] = {
        .visible = true,
        .named = true,
    },
    [sym_default] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_enumerator] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_anno] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_body] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member_type] = {
        .visible = true,
        .named = true,
    },
    [sym_union_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_union_def] = {
        .visible = true,
        .named = true,
    },
    [sym_case] = {
        .visible = true,
        .named = true,
    },
    [sym_case_label] = {
        .visible = true,
        .named = true,
    },
    [sym_element_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_switch_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_bitset_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_destination_type] = {
        .visible = true,
        .named = true,
    },
    [sym_bitmask_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bit_value] = {
        .visible = true,
        .named = true,
    },
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_def] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_header] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_name] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_body] = {
        .visible = true,
        .named = true,
    },
    [sym_export] = {
        .visible = true,
        .named = true,
    },
    [sym_op_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_op_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_parameter_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_param_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_get_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_set_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_exception_list] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_request_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_reply_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_anno] = {
        .visible = true,
        .named = true,
    },
    [sym_const_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_hashid] = {
        .visible = true,
        .named = true,
    },
    [sym_try_construct] = {
        .visible = true,
        .named = true,
    },
    [sym_data_representation] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_array_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_positive_int_const] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_array_size] = {
        .visible = true,
        .named = true,
    },
    [sym_type_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_specification_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_except_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_struct_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_member_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enum_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enumerator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitset_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitfield_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitmask_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_parameter_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_raises_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_readonly_attr_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_attr_raises_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_data_representation_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_array_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_any_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [alias_sym_data_rep] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_hashid_value] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_try_construct_value] = {
        .visible = true,
        .named = true,
    },
};

enum ts_field_identifiers {
    field_identifier = 1,
    field_parent = 2,
    field_type = 3,
    field_value = 4,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [3] = { .index = 0, .length = 2 },
    [4] = { .index = 2, .length = 1 },
    [5] = { .index = 3, .length = 1 },
    [7] = { .index = 4, .length = 2 },
    [8] = { .index = 6, .length = 1 },
    [9] = { .index = 7, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_identifier, 1 },
    { field_type, 0 },
    [2] = { field_parent, 3 },
    [3] = { field_value, 1 },
    [4] = { field_identifier, 2 },
    { field_type, 1 },
    [6] = { field_value, 2 },
    [7] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [2] = alias_sym_data_rep,
    },
    [2] = {
        [1] = alias_sym_try_construct_value,
    },
    [6] = {
        [2] = alias_sym_hashid_value,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_data_representation_repeat1,
    2,
    aux_sym_data_representation_repeat1,
    alias_sym_data_rep,
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
    [36] = 34,
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
    [58] = 57,
    [59] = 59,
    [60] = 59,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 65,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 67,
    [74] = 74,
    [75] = 75,
    [76] = 75,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 77,
    [82] = 82,
    [83] = 82,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
    [100] = 100,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 103,
    [105] = 105,
    [106] = 106,
    [107] = 84,
    [108] = 108,
    [109] = 100,
    [110] = 89,
    [111] = 85,
    [112] = 101,
    [113] = 102,
    [114] = 114,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 120,
    [121] = 105,
    [122] = 106,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 114,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 115,
    [137] = 130,
    [138] = 138,
    [139] = 139,
    [140] = 138,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 118,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 120,
    [177] = 177,
    [178] = 178,
    [179] = 179,
    [180] = 180,
    [181] = 181,
    [182] = 182,
    [183] = 183,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 193,
    [194] = 194,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 125,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 85,
    [234] = 201,
    [235] = 84,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 247,
    [248] = 196,
    [249] = 124,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 192,
    [258] = 258,
    [259] = 259,
    [260] = 245,
    [261] = 261,
    [262] = 262,
    [263] = 263,
    [264] = 264,
    [265] = 265,
    [266] = 266,
    [267] = 126,
    [268] = 268,
    [269] = 231,
    [270] = 270,
    [271] = 271,
    [272] = 272,
    [273] = 273,
    [274] = 274,
    [275] = 275,
    [276] = 276,
    [277] = 277,
    [278] = 278,
    [279] = 279,
    [280] = 280,
    [281] = 281,
    [282] = 282,
    [283] = 283,
    [284] = 284,
    [285] = 285,
    [286] = 286,
    [287] = 287,
    [288] = 288,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 292,
    [293] = 293,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 299,
    [300] = 300,
    [301] = 301,
    [302] = 302,
    [303] = 303,
    [304] = 304,
    [305] = 305,
    [306] = 306,
    [307] = 307,
    [308] = 308,
    [309] = 309,
    [310] = 310,
    [311] = 311,
    [312] = 312,
    [313] = 313,
    [314] = 314,
    [315] = 315,
    [316] = 316,
    [317] = 317,
    [318] = 318,
    [319] = 319,
    [320] = 320,
    [321] = 321,
    [322] = 322,
    [323] = 323,
    [324] = 324,
    [325] = 325,
    [326] = 326,
    [327] = 327,
    [328] = 328,
    [329] = 329,
    [330] = 330,
    [331] = 331,
    [332] = 332,
    [333] = 333,
    [334] = 334,
    [335] = 335,
    [336] = 336,
    [337] = 337,
    [338] = 338,
    [339] = 339,
    [340] = 340,
    [341] = 341,
    [342] = 342,
    [343] = 343,
    [344] = 344,
    [345] = 345,
    [346] = 346,
    [347] = 347,
    [348] = 348,
    [349] = 349,
    [350] = 350,
    [351] = 351,
    [352] = 352,
    [353] = 353,
    [354] = 354,
    [355] = 355,
    [356] = 356,
    [357] = 357,
    [358] = 358,
    [359] = 359,
    [360] = 360,
    [361] = 361,
    [362] = 362,
    [363] = 363,
    [364] = 364,
    [365] = 365,
    [366] = 366,
    [367] = 367,
    [368] = 368,
    [369] = 369,
    [370] = 370,
    [371] = 371,
    [372] = 372,
    [373] = 373,
    [374] = 374,
    [375] = 375,
    [376] = 376,
    [377] = 377,
    [378] = 378,
    [379] = 379,
    [380] = 380,
    [381] = 381,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 385,
    [386] = 386,
    [387] = 387,
    [388] = 388,
    [389] = 389,
    [390] = 390,
    [391] = 391,
    [392] = 392,
    [393] = 393,
    [394] = 394,
    [395] = 395,
    [396] = 396,
    [397] = 397,
    [398] = 398,
    [399] = 399,
    [400] = 400,
    [401] = 401,
    [402] = 402,
    [403] = 403,
    [404] = 404,
    [405] = 405,
    [406] = 406,
    [407] = 407,
    [408] = 408,
    [409] = 409,
    [410] = 410,
    [411] = 411,
    [412] = 412,
    [413] = 413,
    [414] = 414,
    [415] = 415,
    [416] = 416,
    [417] = 417,
    [418] = 418,
    [419] = 419,
    [420] = 420,
    [421] = 231,
    [422] = 422,
    [423] = 423,
    [424] = 424,
    [425] = 425,
    [426] = 426,
    [427] = 427,
    [428] = 318,
    [429] = 429,
    [430] = 430,
    [431] = 431,
    [432] = 297,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 293,
    [441] = 437,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 306,
    [447] = 447,
    [448] = 448,
    [449] = 449,
    [450] = 426,
    [451] = 451,
    [452] = 384,
    [453] = 453,
    [454] = 454,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 458,
    [459] = 459,
    [460] = 460,
    [461] = 461,
    [462] = 462,
    [463] = 463,
    [464] = 426,
    [465] = 433,
    [466] = 405,
    [467] = 383,
    [468] = 460,
    [469] = 469,
    [470] = 403,
    [471] = 471,
};

static inline bool sym_number_literal_character_set_1(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : c <= 'F') : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'u' ? (c < 'l' ? (c >= 'd' && c <= 'f') : c <= 'l') : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : (c <= 'D' || c == 'F')) : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'l' ? (c < 'f' ? c == 'd' : c <= 'f') : (c <= 'l' || (c < 'w' ? c == 'u' : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(425);
            if(lookahead == '"')
                ADVANCE(482);
            if(lookahead == '#')
                ADVANCE(116);
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == '%')
                ADVANCE(476);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '(')
                ADVANCE(477);
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == '*')
                ADVANCE(474);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '/')
                ADVANCE(475);
            if(lookahead == ':')
                ADVANCE(549);
            if(lookahead == ';')
                ADVANCE(541);
            if(lookahead == '<')
                ADVANCE(457);
            if(lookahead == '=')
                ADVANCE(561);
            if(lookahead == '>')
                ADVANCE(459);
            if(lookahead == '@')
                ADVANCE(558);
            if(lookahead == 'F')
                ADVANCE(486);
            if(lookahead == 'L')
                ADVANCE(480);
            if(lookahead == 'T')
                ADVANCE(488);
            if(lookahead == 'X')
                ADVANCE(487);
            if(lookahead == '[')
                ADVANCE(559);
            if(lookahead == '\\')
                SKIP(421)
            if(lookahead == ']')
                ADVANCE(560);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'a')
                ADVANCE(500);
            if(lookahead == 'b')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(489);
            if(lookahead == 'd')
                ADVANCE(495);
            if(lookahead == 'e')
                ADVANCE(503);
            if(lookahead == 'f')
                ADVANCE(498);
            if(lookahead == 'g')
                ADVANCE(497);
            if(lookahead == 'i')
                ADVANCE(501);
            if(lookahead == 'l')
                ADVANCE(504);
            if(lookahead == 'm')
                ADVANCE(490);
            if(lookahead == 'n')
                ADVANCE(491);
            if(lookahead == 'o')
                ADVANCE(494);
            if(lookahead == 'r')
                ADVANCE(492);
            if(lookahead == 's')
                ADVANCE(496);
            if(lookahead == 't')
                ADVANCE(506);
            if(lookahead == 'u')
                ADVANCE(502);
            if(lookahead == 'v')
                ADVANCE(505);
            if(lookahead == 'w')
                ADVANCE(493);
            if(lookahead == '{')
                ADVANCE(543);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(544);
            if(lookahead == '~')
                ADVANCE(479);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(31)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(33)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(33)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(34)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(34)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(35)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(35)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(36)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(36)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(732);
            if(lookahead == '\r')
                ADVANCE(731);
            if(lookahead == '\\')
                ADVANCE(735);
            if(lookahead != 0)
                ADVANCE(734);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(47)
            if(lookahead == '\r')
                SKIP(28)
            END_STATE();
        case 30:
            if(lookahead == ' ')
                ADVANCE(244);
            END_STATE();
        case 31:
            if(lookahead == '"')
                ADVANCE(482);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '(')
                ADVANCE(477);
            if(lookahead == '+')
                ADVANCE(471);
            if(lookahead == '-')
                ADVANCE(473);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '0')
                ADVANCE(518);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == 'F')
                ADVANCE(611);
            if(lookahead == 'L')
                ADVANCE(481);
            if(lookahead == 'T')
                ADVANCE(615);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(479);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 32:
            if(lookahead == '"')
                ADVANCE(603);
            END_STATE();
        case 33:
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == '%')
                ADVANCE(476);
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == '*')
                ADVANCE(474);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '/')
                ADVANCE(475);
            if(lookahead == ':')
                ADVANCE(549);
            if(lookahead == ';')
                ADVANCE(541);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(459);
            if(lookahead == '@')
                ADVANCE(131);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(560);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == '{')
                ADVANCE(543);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(33)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 34:
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == '%')
                ADVANCE(476);
            if(lookahead == '*')
                ADVANCE(474);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '/')
                ADVANCE(475);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 't')
                ADVANCE(725);
            if(lookahead == '|')
                ADVANCE(465);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(34)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 35:
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(549);
            if(lookahead == ';')
                ADVANCE(541);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == ']')
                ADVANCE(560);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'i')
                ADVANCE(250);
            if(lookahead == 'o')
                ADVANCE(391);
            if(lookahead == '|')
                ADVANCE(465);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            END_STATE();
        case 36:
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '<')
                ADVANCE(456);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 37:
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '<')
                ADVANCE(456);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '@')
                ADVANCE(146);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(560);
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'd')
                ADVANCE(686);
            if(lookahead == 'f')
                ADVANCE(660);
            if(lookahead == 'l')
                ADVANCE(688);
            if(lookahead == 'm')
                ADVANCE(618);
            if(lookahead == 'o')
                ADVANCE(626);
            if(lookahead == 's')
                ADVANCE(637);
            if(lookahead == 'u')
                ADVANCE(673);
            if(lookahead == 'w')
                ADVANCE(630);
            if(lookahead == '}')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(515);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(728);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(130);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'd')
                ADVANCE(686);
            if(lookahead == 'e')
                ADVANCE(681);
            if(lookahead == 'f')
                ADVANCE(660);
            if(lookahead == 'l')
                ADVANCE(688);
            if(lookahead == 'm')
                ADVANCE(618);
            if(lookahead == 'o')
                ADVANCE(626);
            if(lookahead == 's')
                ADVANCE(638);
            if(lookahead == 'u')
                ADVANCE(676);
            if(lookahead == 'w')
                ADVANCE(630);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(215);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(680);
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'd')
                ADVANCE(686);
            if(lookahead == 'e')
                ADVANCE(681);
            if(lookahead == 'f')
                ADVANCE(660);
            if(lookahead == 'l')
                ADVANCE(688);
            if(lookahead == 'o')
                ADVANCE(626);
            if(lookahead == 's')
                ADVANCE(637);
            if(lookahead == 'u')
                ADVANCE(673);
            if(lookahead == 'w')
                ADVANCE(630);
            if(lookahead == '}')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 42:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(715);
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'd')
                ADVANCE(686);
            if(lookahead == 'f')
                ADVANCE(660);
            if(lookahead == 'l')
                ADVANCE(688);
            if(lookahead == 'm')
                ADVANCE(618);
            if(lookahead == 'o')
                ADVANCE(626);
            if(lookahead == 'r')
                ADVANCE(648);
            if(lookahead == 's')
                ADVANCE(637);
            if(lookahead == 'u')
                ADVANCE(673);
            if(lookahead == 'v')
                ADVANCE(691);
            if(lookahead == 'w')
                ADVANCE(630);
            if(lookahead == '}')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 43:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'd')
                ADVANCE(686);
            if(lookahead == 'f')
                ADVANCE(660);
            if(lookahead == 'l')
                ADVANCE(688);
            if(lookahead == 'o')
                ADVANCE(626);
            if(lookahead == 's')
                ADVANCE(637);
            if(lookahead == 'u')
                ADVANCE(673);
            if(lookahead == 'w')
                ADVANCE(630);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 44:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(692);
            if(lookahead == 'c')
                ADVANCE(657);
            if(lookahead == 'l')
                ADVANCE(695);
            if(lookahead == 's')
                ADVANCE(658);
            if(lookahead == 'u')
                ADVANCE(673);
            if(lookahead == 'w')
                ADVANCE(631);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 45:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ';')
                ADVANCE(541);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 's')
                ADVANCE(721);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 46:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '\\')
                SKIP(26)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(483);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '\\')
                SKIP(29)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            END_STATE();
        case 48:
            if(lookahead == ':')
                ADVANCE(451);
            END_STATE();
        case 49:
            if(lookahead == '<')
                ADVANCE(469);
            END_STATE();
        case 50:
            if(lookahead == '>')
                ADVANCE(468);
            END_STATE();
        case 51:
            if(lookahead == 'C')
                ADVANCE(52);
            END_STATE();
        case 52:
            if(lookahead == 'D')
                ADVANCE(58);
            END_STATE();
        case 53:
            if(lookahead == 'D')
                ADVANCE(54);
            if(lookahead == 'a')
                ADVANCE(270);
            if(lookahead == 'd')
                ADVANCE(92);
            if(lookahead == 'f')
                ADVANCE(211);
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 54:
            if(lookahead == 'D')
                ADVANCE(60);
            END_STATE();
        case 55:
            if(lookahead == 'E')
                ADVANCE(507);
            END_STATE();
        case 56:
            if(lookahead == 'E')
                ADVANCE(509);
            END_STATE();
        case 57:
            if(lookahead == 'L')
                ADVANCE(61);
            END_STATE();
        case 58:
            if(lookahead == 'R')
                ADVANCE(607);
            END_STATE();
        case 59:
            if(lookahead == 'R')
                ADVANCE(142);
            if(lookahead == 'S')
                ADVANCE(164);
            END_STATE();
        case 60:
            if(lookahead == 'S')
                ADVANCE(59);
            END_STATE();
        case 61:
            if(lookahead == 'S')
                ADVANCE(56);
            END_STATE();
        case 62:
            if(lookahead == 'T')
                ADVANCE(286);
            END_STATE();
        case 63:
            if(lookahead == 'T')
                ADVANCE(296);
            END_STATE();
        case 64:
            if(lookahead == 'U')
                ADVANCE(55);
            END_STATE();
        case 65:
            if(lookahead == '_')
                ADVANCE(110);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(243);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(394);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(330);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(271);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(349);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(246);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(339);
            if(lookahead == 'o')
                ADVANCE(257);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(213);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(68);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(226);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(249);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(126);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(334);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(313);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(355);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(227);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(340);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(232);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(228);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(229);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(230);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(369);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(397);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(114);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(217);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(380);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(219);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(382);
            END_STATE();
        case 100:
            if(lookahead == 'b')
                ADVANCE(396);
            END_STATE();
        case 101:
            if(lookahead == 'b')
                ADVANCE(237);
            END_STATE();
        case 102:
            if(lookahead == 'b')
                ADVANCE(241);
            END_STATE();
        case 103:
            if(lookahead == 'c')
                ADVANCE(594);
            END_STATE();
        case 104:
            if(lookahead == 'c')
                ADVANCE(592);
            END_STATE();
        case 105:
            if(lookahead == 'c')
                ADVANCE(193);
            END_STATE();
        case 106:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 107:
            if(lookahead == 'c')
                ADVANCE(367);
            END_STATE();
        case 108:
            if(lookahead == 'c')
                ADVANCE(76);
            if(lookahead == 'n')
                ADVANCE(184);
            END_STATE();
        case 109:
            if(lookahead == 'c')
                ADVANCE(76);
            if(lookahead == 'n')
                ADVANCE(190);
            END_STATE();
        case 110:
            if(lookahead == 'c')
                ADVANCE(295);
            END_STATE();
        case 111:
            if(lookahead == 'c')
                ADVANCE(360);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(139);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(363);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(143);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(144);
            END_STATE();
        case 116:
            if(lookahead == 'd')
                ADVANCE(145);
            END_STATE();
        case 117:
            if(lookahead == 'd')
                ADVANCE(579);
            END_STATE();
        case 118:
            if(lookahead == 'd')
                ADVANCE(435);
            END_STATE();
        case 119:
            if(lookahead == 'd')
                ADVANCE(568);
            END_STATE();
        case 120:
            if(lookahead == 'd')
                ADVANCE(30);
            END_STATE();
        case 121:
            if(lookahead == 'd')
                ADVANCE(600);
            END_STATE();
        case 122:
            if(lookahead == 'd')
                ADVANCE(602);
            END_STATE();
        case 123:
            if(lookahead == 'd')
                ADVANCE(599);
            END_STATE();
        case 124:
            if(lookahead == 'd')
                ADVANCE(598);
            END_STATE();
        case 125:
            if(lookahead == 'd')
                ADVANCE(398);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(285);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(302);
            if(lookahead == 'l')
                ADVANCE(298);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(167);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(148);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(92);
            if(lookahead == 'f')
                ADVANCE(211);
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(176);
            END_STATE();
        case 132:
            if(lookahead == 'e')
                ADVANCE(179);
            END_STATE();
        case 133:
            if(lookahead == 'e')
                ADVANCE(566);
            END_STATE();
        case 134:
            if(lookahead == 'e')
                ADVANCE(593);
            END_STATE();
        case 135:
            if(lookahead == 'e')
                ADVANCE(444);
            END_STATE();
        case 136:
            if(lookahead == 'e')
                ADVANCE(546);
            END_STATE();
        case 137:
            if(lookahead == 'e')
                ADVANCE(545);
            END_STATE();
        case 138:
            if(lookahead == 'e')
                ADVANCE(572);
            END_STATE();
        case 139:
            if(lookahead == 'e')
                ADVANCE(461);
            END_STATE();
        case 140:
            if(lookahead == 'e')
                ADVANCE(587);
            END_STATE();
        case 141:
            if(lookahead == 'e')
                ADVANCE(446);
            END_STATE();
        case 142:
            if(lookahead == 'e')
                ADVANCE(305);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(577);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(180);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(85);
            if(lookahead == 'i')
                ADVANCE(121);
            if(lookahead == 'k')
                ADVANCE(154);
            if(lookahead == 'm')
                ADVANCE(399);
            if(lookahead == 'n')
                ADVANCE(293);
            if(lookahead == 'o')
                ADVANCE(310);
            if(lookahead == 't')
                ADVANCE(316);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(66);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(178);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(306);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(309);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(234);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(409);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(336);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(337);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(276);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(120);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(338);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(86);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(329);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(123);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(315);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(332);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(280);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(345);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(325);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(129);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(183);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(385);
            if(lookahead == 'h')
                ADVANCE(287);
            if(lookahead == 't')
                ADVANCE(319);
            END_STATE();
        case 178:
            if(lookahead == 'f')
                ADVANCE(570);
            END_STATE();
        case 179:
            if(lookahead == 'f')
                ADVANCE(81);
            END_STATE();
        case 180:
            if(lookahead == 'f')
                ADVANCE(205);
            END_STATE();
        case 181:
            if(lookahead == 'f')
                ADVANCE(210);
            if(lookahead == 'm')
                ADVANCE(79);
            if(lookahead == 's')
                ADVANCE(165);
            END_STATE();
        case 182:
            if(lookahead == 'f')
                ADVANCE(95);
            END_STATE();
        case 183:
            if(lookahead == 'f')
                ADVANCE(94);
            END_STATE();
        case 184:
            if(lookahead == 'g')
                ADVANCE(428);
            END_STATE();
        case 185:
            if(lookahead == 'g')
                ADVANCE(452);
            END_STATE();
        case 186:
            if(lookahead == 'g')
                ADVANCE(454);
            END_STATE();
        case 187:
            if(lookahead == 'g')
                ADVANCE(432);
            END_STATE();
        case 188:
            if(lookahead == 'g')
                ADVANCE(440);
            END_STATE();
        case 189:
            if(lookahead == 'g')
                ADVANCE(441);
            END_STATE();
        case 190:
            if(lookahead == 'g')
                ADVANCE(430);
            END_STATE();
        case 191:
            if(lookahead == 'g')
                ADVANCE(278);
            END_STATE();
        case 192:
            if(lookahead == 'g')
                ADVANCE(277);
            END_STATE();
        case 193:
            if(lookahead == 'h')
                ADVANCE(564);
            END_STATE();
        case 194:
            if(lookahead == 'h')
                ADVANCE(82);
            END_STATE();
        case 195:
            if(lookahead == 'h')
                ADVANCE(209);
            END_STATE();
        case 196:
            if(lookahead == 'h')
                ADVANCE(297);
            END_STATE();
        case 197:
            if(lookahead == 'i')
                ADVANCE(403);
            END_STATE();
        case 198:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 199:
            if(lookahead == 'i')
                ADVANCE(352);
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 200:
            if(lookahead == 'i')
                ADVANCE(259);
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 201:
            if(lookahead == 'i')
                ADVANCE(100);
            END_STATE();
        case 202:
            if(lookahead == 'i')
                ADVANCE(191);
            END_STATE();
        case 203:
            if(lookahead == 'i')
                ADVANCE(117);
            END_STATE();
        case 204:
            if(lookahead == 'i')
                ADVANCE(283);
            if(lookahead == 's')
                ADVANCE(202);
            END_STATE();
        case 205:
            if(lookahead == 'i')
                ADVANCE(272);
            END_STATE();
        case 206:
            if(lookahead == 'i')
                ADVANCE(103);
            END_STATE();
        case 207:
            if(lookahead == 'i')
                ADVANCE(365);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(104);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(122);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(152);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(269);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(90);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(342);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(260);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(288);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(343);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(290);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(344);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(373);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(292);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(294);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(381);
            END_STATE();
        case 225:
            if(lookahead == 'k')
                ADVANCE(569);
            END_STATE();
        case 226:
            if(lookahead == 'l')
                ADVANCE(578);
            END_STATE();
        case 227:
            if(lookahead == 'l')
                ADVANCE(605);
            END_STATE();
        case 228:
            if(lookahead == 'l')
                ADVANCE(601);
            END_STATE();
        case 229:
            if(lookahead == 'l')
                ADVANCE(596);
            END_STATE();
        case 230:
            if(lookahead == 'l')
                ADVANCE(553);
            END_STATE();
        case 231:
            if(lookahead == 'l')
                ADVANCE(407);
            END_STATE();
        case 232:
            if(lookahead == 'l')
                ADVANCE(69);
            END_STATE();
        case 233:
            if(lookahead == 'l')
                ADVANCE(408);
            END_STATE();
        case 234:
            if(lookahead == 'l')
                ADVANCE(119);
            END_STATE();
        case 235:
            if(lookahead == 'l')
                ADVANCE(298);
            END_STATE();
        case 236:
            if(lookahead == 'l')
                ADVANCE(160);
            END_STATE();
        case 237:
            if(lookahead == 'l')
                ADVANCE(135);
            END_STATE();
        case 238:
            if(lookahead == 'l')
                ADVANCE(136);
            END_STATE();
        case 239:
            if(lookahead == 'l')
                ADVANCE(361);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(198);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(141);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(386);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(221);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(299);
            if(lookahead == 's')
                ADVANCE(196);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(300);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(224);
            END_STATE();
        case 247:
            if(lookahead == 'm')
                ADVANCE(551);
            END_STATE();
        case 248:
            if(lookahead == 'm')
                ADVANCE(134);
            if(lookahead == 't')
                ADVANCE(197);
            END_STATE();
        case 249:
            if(lookahead == 'm')
                ADVANCE(159);
            END_STATE();
        case 250:
            if(lookahead == 'n')
                ADVANCE(581);
            END_STATE();
        case 251:
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 252:
            if(lookahead == 'n')
                ADVANCE(562);
            END_STATE();
        case 253:
            if(lookahead == 'n')
                ADVANCE(433);
            END_STATE();
        case 254:
            if(lookahead == 'n')
                ADVANCE(542);
            END_STATE();
        case 255:
            if(lookahead == 'n')
                ADVANCE(555);
            END_STATE();
        case 256:
            if(lookahead == 'n')
                ADVANCE(606);
            END_STATE();
        case 257:
            if(lookahead == 'n')
                ADVANCE(341);
            END_STATE();
        case 258:
            if(lookahead == 'n')
                ADVANCE(388);
            if(lookahead == 'x')
                ADVANCE(106);
            END_STATE();
        case 259:
            if(lookahead == 'n')
                ADVANCE(185);
            END_STATE();
        case 260:
            if(lookahead == 'n')
                ADVANCE(186);
            END_STATE();
        case 261:
            if(lookahead == 'n')
                ADVANCE(70);
            END_STATE();
        case 262:
            if(lookahead == 'n')
                ADVANCE(231);
            END_STATE();
        case 263:
            if(lookahead == 'n')
                ADVANCE(187);
            END_STATE();
        case 264:
            if(lookahead == 'n')
                ADVANCE(188);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(189);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(350);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(291);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(124);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(84);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(267);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(77);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(128);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(112);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(289);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(158);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(372);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(384);
            END_STATE();
        case 281:
            if(lookahead == 'o')
                ADVANCE(236);
            END_STATE();
        case 282:
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 283:
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 284:
            if(lookahead == 'o')
                ADVANCE(83);
            END_STATE();
        case 285:
            if(lookahead == 'o')
                ADVANCE(262);
            END_STATE();
        case 286:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 287:
            if(lookahead == 'o')
                ADVANCE(321);
            END_STATE();
        case 288:
            if(lookahead == 'o')
                ADVANCE(254);
            END_STATE();
        case 289:
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 290:
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 291:
            if(lookahead == 'o')
                ADVANCE(377);
            END_STATE();
        case 292:
            if(lookahead == 'o')
                ADVANCE(256);
            END_STATE();
        case 293:
            if(lookahead == 'o')
                ADVANCE(261);
            END_STATE();
        case 294:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 295:
            if(lookahead == 'o')
                ADVANCE(266);
            END_STATE();
        case 296:
            if(lookahead == 'o')
                ADVANCE(308);
            END_STATE();
        case 297:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 298:
            if(lookahead == 'o')
                ADVANCE(263);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(264);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(265);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(109);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(401);
            END_STATE();
        case 303:
            if(lookahead == 'p')
                ADVANCE(463);
            END_STATE();
        case 304:
            if(lookahead == 'p')
                ADVANCE(175);
            END_STATE();
        case 305:
            if(lookahead == 'p')
                ADVANCE(233);
            if(lookahead == 'q')
                ADVANCE(395);
            END_STATE();
        case 306:
            if(lookahead == 'p')
                ADVANCE(370);
            END_STATE();
        case 307:
            if(lookahead == 'p')
                ADVANCE(206);
            END_STATE();
        case 308:
            if(lookahead == 'p')
                ADVANCE(208);
            END_STATE();
        case 309:
            if(lookahead == 'p')
                ADVANCE(328);
            END_STATE();
        case 310:
            if(lookahead == 'p')
                ADVANCE(383);
            END_STATE();
        case 311:
            if(lookahead == 'q')
                ADVANCE(393);
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 312:
            if(lookahead == 'r')
                ADVANCE(200);
            END_STATE();
        case 313:
            if(lookahead == 'r')
                ADVANCE(447);
            END_STATE();
        case 314:
            if(lookahead == 'r')
                ADVANCE(449);
            END_STATE();
        case 315:
            if(lookahead == 'r')
                ADVANCE(402);
            END_STATE();
        case 316:
            if(lookahead == 'r')
                ADVANCE(411);
            END_STATE();
        case 317:
            if(lookahead == 'r')
                ADVANCE(96);
            END_STATE();
        case 318:
            if(lookahead == 'r')
                ADVANCE(201);
            END_STATE();
        case 319:
            if(lookahead == 'r')
                ADVANCE(389);
            END_STATE();
        case 320:
            if(lookahead == 'r')
                ADVANCE(214);
            END_STATE();
        case 321:
            if(lookahead == 'r')
                ADVANCE(358);
            END_STATE();
        case 322:
            if(lookahead == 'r')
                ADVANCE(87);
            END_STATE();
        case 323:
            if(lookahead == 'r')
                ADVANCE(362);
            END_STATE();
        case 324:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 325:
            if(lookahead == 'r')
                ADVANCE(91);
            END_STATE();
        case 326:
            if(lookahead == 'r')
                ADVANCE(273);
            END_STATE();
        case 327:
            if(lookahead == 'r')
                ADVANCE(147);
            END_STATE();
        case 328:
            if(lookahead == 'r')
                ADVANCE(174);
            END_STATE();
        case 329:
            if(lookahead == 'r')
                ADVANCE(182);
            END_STATE();
        case 330:
            if(lookahead == 'r')
                ADVANCE(151);
            END_STATE();
        case 331:
            if(lookahead == 'r')
                ADVANCE(400);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(347);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(98);
            END_STATE();
        case 334:
            if(lookahead == 's')
                ADVANCE(225);
            END_STATE();
        case 335:
            if(lookahead == 's')
                ADVANCE(584);
            END_STATE();
        case 336:
            if(lookahead == 's')
                ADVANCE(589);
            END_STATE();
        case 337:
            if(lookahead == 's')
                ADVANCE(590);
            END_STATE();
        case 338:
            if(lookahead == 's')
                ADVANCE(554);
            END_STATE();
        case 339:
            if(lookahead == 's')
                ADVANCE(133);
            END_STATE();
        case 340:
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 341:
            if(lookahead == 's')
                ADVANCE(354);
            END_STATE();
        case 342:
            if(lookahead == 's')
                ADVANCE(150);
            END_STATE();
        case 343:
            if(lookahead == 's')
                ADVANCE(155);
            END_STATE();
        case 344:
            if(lookahead == 's')
                ADVANCE(156);
            END_STATE();
        case 345:
            if(lookahead == 's')
                ADVANCE(378);
            END_STATE();
        case 346:
            if(lookahead == 's')
                ADVANCE(368);
            END_STATE();
        case 347:
            if(lookahead == 's')
                ADVANCE(376);
            END_STATE();
        case 348:
            if(lookahead == 's')
                ADVANCE(168);
            END_STATE();
        case 349:
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 350:
            if(lookahead == 's')
                ADVANCE(379);
            END_STATE();
        case 351:
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 352:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 353:
            if(lookahead == 't')
                ADVANCE(582);
            END_STATE();
        case 354:
            if(lookahead == 't')
                ADVANCE(595);
            END_STATE();
        case 355:
            if(lookahead == 't')
                ADVANCE(442);
            END_STATE();
        case 356:
            if(lookahead == 't')
                ADVANCE(583);
            END_STATE();
        case 357:
            if(lookahead == 't')
                ADVANCE(437);
            END_STATE();
        case 358:
            if(lookahead == 't')
                ADVANCE(426);
            END_STATE();
        case 359:
            if(lookahead == 't')
                ADVANCE(567);
            END_STATE();
        case 360:
            if(lookahead == 't')
                ADVANCE(547);
            END_STATE();
        case 361:
            if(lookahead == 't')
                ADVANCE(550);
            END_STATE();
        case 362:
            if(lookahead == 't')
                ADVANCE(439);
            END_STATE();
        case 363:
            if(lookahead == 't')
                ADVANCE(604);
            END_STATE();
        case 364:
            if(lookahead == 't')
                ADVANCE(318);
            END_STATE();
        case 365:
            if(lookahead == 't')
                ADVANCE(105);
            END_STATE();
        case 366:
            if(lookahead == 't')
                ADVANCE(317);
            END_STATE();
        case 367:
            if(lookahead == 't')
                ADVANCE(162);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(67);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 370:
            if(lookahead == 't')
                ADVANCE(216);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(140);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(161);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(171);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(166);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(320);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(93);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(97);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(331);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(218);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(222);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(99);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(71);
            END_STATE();
        case 387:
            if(lookahead == 'u')
                ADVANCE(101);
            END_STATE();
        case 388:
            if(lookahead == 'u')
                ADVANCE(247);
            END_STATE();
        case 389:
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 390:
            if(lookahead == 'u')
                ADVANCE(239);
            END_STATE();
        case 391:
            if(lookahead == 'u')
                ADVANCE(353);
            END_STATE();
        case 392:
            if(lookahead == 'u')
                ADVANCE(356);
            END_STATE();
        case 393:
            if(lookahead == 'u')
                ADVANCE(157);
            END_STATE();
        case 394:
            if(lookahead == 'u')
                ADVANCE(275);
            END_STATE();
        case 395:
            if(lookahead == 'u')
                ADVANCE(170);
            END_STATE();
        case 396:
            if(lookahead == 'u')
                ADVANCE(371);
            END_STATE();
        case 397:
            if(lookahead == 'u')
                ADVANCE(242);
            END_STATE();
        case 398:
            if(lookahead == 'u')
                ADVANCE(238);
            END_STATE();
        case 399:
            if(lookahead == 'u')
                ADVANCE(346);
            END_STATE();
        case 400:
            if(lookahead == 'u')
                ADVANCE(113);
            END_STATE();
        case 401:
            if(lookahead == 'u')
                ADVANCE(102);
            END_STATE();
        case 402:
            if(lookahead == 'v')
                ADVANCE(220);
            END_STATE();
        case 403:
            if(lookahead == 'v')
                ADVANCE(137);
            END_STATE();
        case 404:
            if(lookahead == 'x')
                ADVANCE(153);
            END_STATE();
        case 405:
            if(lookahead == 'x')
                ADVANCE(374);
            END_STATE();
        case 406:
            if(lookahead == 'y')
                ADVANCE(556);
            END_STATE();
        case 407:
            if(lookahead == 'y')
                ADVANCE(585);
            END_STATE();
        case 408:
            if(lookahead == 'y')
                ADVANCE(62);
            END_STATE();
        case 409:
            if(lookahead == 'y')
                ADVANCE(597);
            END_STATE();
        case 410:
            if(lookahead == 'y')
                ADVANCE(304);
            END_STATE();
        case 411:
            if(lookahead == 'y')
                ADVANCE(65);
            END_STATE();
        case 412:
            if(lookahead == 'z')
                ADVANCE(163);
            END_STATE();
        case 413:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 414:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(511);
            END_STATE();
        case 415:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 416:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(525);
            END_STATE();
        case 417:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 418:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(513);
            END_STATE();
        case 419:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(734);
            if(lookahead == '\r')
                ADVANCE(736);
            if(lookahead == '\\')
                ADVANCE(735);
            END_STATE();
        case 420:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 421:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(420)
            END_STATE();
        case 422:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(424)
            END_STATE();
        case 423:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(424)
            if(lookahead == '\r')
                SKIP(422)
            END_STATE();
        case 424:
            if(eof)
                ADVANCE(425);
            if(lookahead == '#')
                ADVANCE(116);
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == '%')
                ADVANCE(476);
            if(lookahead == '(')
                ADVANCE(32);
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == '*')
                ADVANCE(474);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '/')
                ADVANCE(475);
            if(lookahead == ':')
                ADVANCE(549);
            if(lookahead == ';')
                ADVANCE(541);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(459);
            if(lookahead == '@')
                ADVANCE(53);
            if(lookahead == 'X')
                ADVANCE(51);
            if(lookahead == '[')
                ADVANCE(559);
            if(lookahead == '\\')
                SKIP(423)
            if(lookahead == ']')
                ADVANCE(560);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'b')
                ADVANCE(199);
            if(lookahead == 'c')
                ADVANCE(72);
            if(lookahead == 'd')
                ADVANCE(132);
            if(lookahead == 'e')
                ADVANCE(258);
            if(lookahead == 'g')
                ADVANCE(169);
            if(lookahead == 'i')
                ADVANCE(279);
            if(lookahead == 'l')
                ADVANCE(301);
            if(lookahead == 'm')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(73);
            if(lookahead == 'o')
                ADVANCE(107);
            if(lookahead == 'r')
                ADVANCE(74);
            if(lookahead == 's')
                ADVANCE(177);
            if(lookahead == 't')
                ADVANCE(410);
            if(lookahead == 'u')
                ADVANCE(251);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(424)
            END_STATE();
        case 425:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(127);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(127);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(235);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(245);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(469);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(468);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(519);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(519);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(728);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(483);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(57);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(52);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(64);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(339);
            if(lookahead == 'h')
                ADVANCE(80);
            if(lookahead == 'o')
                ADVANCE(257);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(303);
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(213);
            if(lookahead == 'e')
                ADVANCE(78);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(194);
            if(lookahead == 's')
                ADVANCE(375);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(367);
            if(lookahead == 'u')
                ADVANCE(353);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(179);
            if(lookahead == 'o')
                ADVANCE(387);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(311);
            if(lookahead == 'h')
                ADVANCE(287);
            if(lookahead == 't')
                ADVANCE(312);
            if(lookahead == 'w')
                ADVANCE(207);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(404);
            if(lookahead == 'l')
                ADVANCE(284);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(352);
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(406);
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(581);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(388);
            if(lookahead == 'x')
                ADVANCE(106);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(108);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(203);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(304);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(414);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(511);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(540);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(512);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(512);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(513);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(528);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(526);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(534);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(726);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(529);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(530);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(417);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(531);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(526);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(534);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(529);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(531);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(532);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(610);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(534);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(533);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(38);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(537);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(726);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(534);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(538);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(417);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(540);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(416);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(524);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(525);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(416);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(524);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(525);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(526);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(534);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(531);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(526);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(534);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(529);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(526);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(534);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(531);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(531);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(520);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(521);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(512);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(512);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(513);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(524);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(525);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_any_const_type);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_any_const_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(576);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(575);
            if(lookahead == '\\')
                ADVANCE(573);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(574);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(730);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(392);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(608);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(244);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(514);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(614);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(659);
            if(lookahead == 's')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(698);
            if(lookahead == 'h')
                ADVANCE(690);
            if(lookahead == 't')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(698);
            if(lookahead == 'h')
                ADVANCE(690);
            if(lookahead == 't')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(445);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(429);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(453);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(431);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(722);
            if(lookahead == 'l')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(682);
            if(lookahead == 'u')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(693);
            if(lookahead == 's')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(552);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(434);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(450);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(443);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(438);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(427);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(548);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(586);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(557);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(727);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(734);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(732);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0)
                ADVANCE(734);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(733);
            if(lookahead == '\\')
                ADVANCE(27);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(732);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(734);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(729);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(734);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(734);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(734);
            if(lookahead == '\r')
                ADVANCE(736);
            if(lookahead == '\\')
                ADVANCE(735);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(734);
            if(lookahead == '\\')
                ADVANCE(419);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 424 },
    [2] = { .lex_state = 37 },
    [3] = { .lex_state = 37 },
    [4] = { .lex_state = 37 },
    [5] = { .lex_state = 37 },
    [6] = { .lex_state = 37 },
    [7] = { .lex_state = 424 },
    [8] = { .lex_state = 37 },
    [9] = { .lex_state = 37 },
    [10] = { .lex_state = 37 },
    [11] = { .lex_state = 37 },
    [12] = { .lex_state = 37 },
    [13] = { .lex_state = 37 },
    [14] = { .lex_state = 424 },
    [15] = { .lex_state = 424 },
    [16] = { .lex_state = 40 },
    [17] = { .lex_state = 424 },
    [18] = { .lex_state = 37 },
    [19] = { .lex_state = 42 },
    [20] = { .lex_state = 42 },
    [21] = { .lex_state = 42 },
    [22] = { .lex_state = 42 },
    [23] = { .lex_state = 41 },
    [24] = { .lex_state = 41 },
    [25] = { .lex_state = 41 },
    [26] = { .lex_state = 37 },
    [27] = { .lex_state = 37 },
    [28] = { .lex_state = 37 },
    [29] = { .lex_state = 37 },
    [30] = { .lex_state = 37 },
    [31] = { .lex_state = 37 },
    [32] = { .lex_state = 37 },
    [33] = { .lex_state = 37 },
    [34] = { .lex_state = 43 },
    [35] = { .lex_state = 37 },
    [36] = { .lex_state = 43 },
    [37] = { .lex_state = 37 },
    [38] = { .lex_state = 37 },
    [39] = { .lex_state = 37 },
    [40] = { .lex_state = 37 },
    [41] = { .lex_state = 37 },
    [42] = { .lex_state = 37 },
    [43] = { .lex_state = 37 },
    [44] = { .lex_state = 37 },
    [45] = { .lex_state = 31 },
    [46] = { .lex_state = 31 },
    [47] = { .lex_state = 31 },
    [48] = { .lex_state = 31 },
    [49] = { .lex_state = 31 },
    [50] = { .lex_state = 31 },
    [51] = { .lex_state = 31 },
    [52] = { .lex_state = 31 },
    [53] = { .lex_state = 31 },
    [54] = { .lex_state = 31 },
    [55] = { .lex_state = 31 },
    [56] = { .lex_state = 31 },
    [57] = { .lex_state = 31 },
    [58] = { .lex_state = 31 },
    [59] = { .lex_state = 31 },
    [60] = { .lex_state = 31 },
    [61] = { .lex_state = 41 },
    [62] = { .lex_state = 41 },
    [63] = { .lex_state = 41 },
    [64] = { .lex_state = 41 },
    [65] = { .lex_state = 31 },
    [66] = { .lex_state = 31 },
    [67] = { .lex_state = 31 },
    [68] = { .lex_state = 424 },
    [69] = { .lex_state = 424 },
    [70] = { .lex_state = 424 },
    [71] = { .lex_state = 424 },
    [72] = { .lex_state = 424 },
    [73] = { .lex_state = 31 },
    [74] = { .lex_state = 424 },
    [75] = { .lex_state = 31 },
    [76] = { .lex_state = 31 },
    [77] = { .lex_state = 31 },
    [78] = { .lex_state = 37 },
    [79] = { .lex_state = 37 },
    [80] = { .lex_state = 37 },
    [81] = { .lex_state = 31 },
    [82] = { .lex_state = 31 },
    [83] = { .lex_state = 31 },
    [84] = { .lex_state = 33 },
    [85] = { .lex_state = 33 },
    [86] = { .lex_state = 424 },
    [87] = { .lex_state = 424 },
    [88] = { .lex_state = 424 },
    [89] = { .lex_state = 33 },
    [90] = { .lex_state = 424 },
    [91] = { .lex_state = 424 },
    [92] = { .lex_state = 424 },
    [93] = { .lex_state = 424 },
    [94] = { .lex_state = 424 },
    [95] = { .lex_state = 44 },
    [96] = { .lex_state = 424 },
    [97] = { .lex_state = 424 },
    [98] = { .lex_state = 424 },
    [99] = { .lex_state = 424 },
    [100] = { .lex_state = 33 },
    [101] = { .lex_state = 424 },
    [102] = { .lex_state = 424 },
    [103] = { .lex_state = 31 },
    [104] = { .lex_state = 31 },
    [105] = { .lex_state = 424 },
    [106] = { .lex_state = 424 },
    [107] = { .lex_state = 34 },
    [108] = { .lex_state = 424 },
    [109] = { .lex_state = 34 },
    [110] = { .lex_state = 34 },
    [111] = { .lex_state = 34 },
    [112] = { .lex_state = 424 },
    [113] = { .lex_state = 424 },
    [114] = { .lex_state = 424 },
    [115] = { .lex_state = 424 },
    [116] = { .lex_state = 424 },
    [117] = { .lex_state = 424 },
    [118] = { .lex_state = 35 },
    [119] = { .lex_state = 31 },
    [120] = { .lex_state = 35 },
    [121] = { .lex_state = 424 },
    [122] = { .lex_state = 424 },
    [123] = { .lex_state = 424 },
    [124] = { .lex_state = 35 },
    [125] = { .lex_state = 35 },
    [126] = { .lex_state = 35 },
    [127] = { .lex_state = 35 },
    [128] = { .lex_state = 424 },
    [129] = { .lex_state = 424 },
    [130] = { .lex_state = 33 },
    [131] = { .lex_state = 424 },
    [132] = { .lex_state = 424 },
    [133] = { .lex_state = 424 },
    [134] = { .lex_state = 424 },
    [135] = { .lex_state = 424 },
    [136] = { .lex_state = 424 },
    [137] = { .lex_state = 33 },
    [138] = { .lex_state = 33 },
    [139] = { .lex_state = 424 },
    [140] = { .lex_state = 33 },
    [141] = { .lex_state = 424 },
    [142] = { .lex_state = 33 },
    [143] = { .lex_state = 424 },
    [144] = { .lex_state = 424 },
    [145] = { .lex_state = 424 },
    [146] = { .lex_state = 424 },
    [147] = { .lex_state = 424 },
    [148] = { .lex_state = 33 },
    [149] = { .lex_state = 424 },
    [150] = { .lex_state = 33 },
    [151] = { .lex_state = 33 },
    [152] = { .lex_state = 424 },
    [153] = { .lex_state = 35 },
    [154] = { .lex_state = 424 },
    [155] = { .lex_state = 424 },
    [156] = { .lex_state = 424 },
    [157] = { .lex_state = 424 },
    [158] = { .lex_state = 33 },
    [159] = { .lex_state = 424 },
    [160] = { .lex_state = 0 },
    [161] = { .lex_state = 36 },
    [162] = { .lex_state = 36 },
    [163] = { .lex_state = 36 },
    [164] = { .lex_state = 36 },
    [165] = { .lex_state = 424 },
    [166] = { .lex_state = 36 },
    [167] = { .lex_state = 36 },
    [168] = { .lex_state = 36 },
    [169] = { .lex_state = 424 },
    [170] = { .lex_state = 33 },
    [171] = { .lex_state = 424 },
    [172] = { .lex_state = 424 },
    [173] = { .lex_state = 33 },
    [174] = { .lex_state = 424 },
    [175] = { .lex_state = 424 },
    [176] = { .lex_state = 424 },
    [177] = { .lex_state = 424 },
    [178] = { .lex_state = 36 },
    [179] = { .lex_state = 424 },
    [180] = { .lex_state = 33 },
    [181] = { .lex_state = 424 },
    [182] = { .lex_state = 33 },
    [183] = { .lex_state = 36 },
    [184] = { .lex_state = 424 },
    [185] = { .lex_state = 33 },
    [186] = { .lex_state = 33 },
    [187] = { .lex_state = 33 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 36 },
    [191] = { .lex_state = 36 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 33 },
    [195] = { .lex_state = 0 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 33 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 424 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 0 },
    [202] = { .lex_state = 33 },
    [203] = { .lex_state = 45 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 36 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 36 },
    [208] = { .lex_state = 36 },
    [209] = { .lex_state = 424 },
    [210] = { .lex_state = 36 },
    [211] = { .lex_state = 424 },
    [212] = { .lex_state = 36 },
    [213] = { .lex_state = 424 },
    [214] = { .lex_state = 36 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 424 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 33 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 424 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 36 },
    [223] = { .lex_state = 37 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 36 },
    [226] = { .lex_state = 36 },
    [227] = { .lex_state = 424 },
    [228] = { .lex_state = 424 },
    [229] = { .lex_state = 424 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 36 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 36 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 36 },
    [236] = { .lex_state = 33 },
    [237] = { .lex_state = 424 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 424 },
    [240] = { .lex_state = 33 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 33 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 424 },
    [250] = { .lex_state = 424 },
    [251] = { .lex_state = 33 },
    [252] = { .lex_state = 36 },
    [253] = { .lex_state = 36 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 424 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 36 },
    [259] = { .lex_state = 36 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 36 },
    [262] = { .lex_state = 33 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 33 },
    [266] = { .lex_state = 424 },
    [267] = { .lex_state = 424 },
    [268] = { .lex_state = 424 },
    [269] = { .lex_state = 33 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 424 },
    [272] = { .lex_state = 424 },
    [273] = { .lex_state = 424 },
    [274] = { .lex_state = 33 },
    [275] = { .lex_state = 33 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 33 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 33 },
    [280] = { .lex_state = 33 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 424 },
    [283] = { .lex_state = 424 },
    [284] = { .lex_state = 424 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 33 },
    [287] = { .lex_state = 33 },
    [288] = { .lex_state = 33 },
    [289] = { .lex_state = 424 },
    [290] = { .lex_state = 33 },
    [291] = { .lex_state = 33 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 33 },
    [294] = { .lex_state = 424 },
    [295] = { .lex_state = 424 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 33 },
    [298] = { .lex_state = 424 },
    [299] = { .lex_state = 37 },
    [300] = { .lex_state = 424 },
    [301] = { .lex_state = 33 },
    [302] = { .lex_state = 424 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 33 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 33 },
    [309] = { .lex_state = 33 },
    [310] = { .lex_state = 33 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 33 },
    [315] = { .lex_state = 33 },
    [316] = { .lex_state = 33 },
    [317] = { .lex_state = 424 },
    [318] = { .lex_state = 33 },
    [319] = { .lex_state = 33 },
    [320] = { .lex_state = 33 },
    [321] = { .lex_state = 37 },
    [322] = { .lex_state = 33 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 33 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 46 },
    [332] = { .lex_state = 46 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 37 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 37 },
    [339] = { .lex_state = 37 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 47 },
    [342] = { .lex_state = 46 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 37 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 33 },
    [354] = { .lex_state = 33 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 732 },
    [361] = { .lex_state = 33 },
    [362] = { .lex_state = 424 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 37 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 33 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 424 },
    [379] = { .lex_state = 33 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 37 },
    [392] = { .lex_state = 37 },
    [393] = { .lex_state = 37 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 33 },
    [400] = { .lex_state = 33 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 33 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 33 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 33 },
    [409] = { .lex_state = 46 },
    [410] = { .lex_state = 33 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 33 },
    [413] = { .lex_state = 424 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 424 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 33 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 33 },
    [422] = { .lex_state = 47 },
    [423] = { .lex_state = 37 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 37 },
    [426] = { .lex_state = 33 },
    [427] = { .lex_state = 37 },
    [428] = { .lex_state = 424 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 424 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 424 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 424 },
    [441] = { .lex_state = 424 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 424 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 33 },
    [451] = { .lex_state = 33 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 574 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 33 },
    [456] = { .lex_state = 33 },
    [457] = { .lex_state = 33 },
    [458] = { .lex_state = 33 },
    [459] = { .lex_state = 424 },
    [460] = { .lex_state = 33 },
    [461] = { .lex_state = 33 },
    [462] = { .lex_state = 33 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 33 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 33 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 33 },
    [469] = { .lex_state = 33 },
    [470] = { .lex_state = 33 },
    [471] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [sym_signed_short_int] = ACTIONS(1),
        [sym_signed_long_int] = ACTIONS(1),
        [sym_signed_longlong_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [sym_unsigned_short_int] = ACTIONS(1),
        [sym_unsigned_long_int] = ACTIONS(1),
        [sym_unsigned_longlong_int] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym_DOLLAR] = ACTIONS(1),
        [anon_sym_GT_GT] = ACTIONS(1),
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
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [sym_any_const_type] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(443),
        [sym__definition] = STATE(70),
        [sym_except_dcl] = STATE(71),
        [sym_native_dcl] = STATE(442),
        [sym_module_dcl] = STATE(442),
        [sym_struct_forward_dcl] = STATE(442),
        [sym_struct_def] = STATE(442),
        [sym_enum_dcl] = STATE(442),
        [sym_enum_anno] = STATE(441),
        [sym_annotation_dcl] = STATE(442),
        [sym_union_forward_dcl] = STATE(442),
        [sym_union_def] = STATE(442),
        [sym_bitset_dcl] = STATE(442),
        [sym_bitmask_dcl] = STATE(442),
        [sym_typedef_dcl] = STATE(442),
        [sym_predefine] = STATE(71),
        [sym_interface_dcl] = STATE(442),
        [sym_interface_forward_dcl] = STATE(439),
        [sym_interface_def] = STATE(439),
        [sym_interface_header] = STATE(438),
        [sym_dds_request_topic] = STATE(155),
        [sym_dds_reply_topic] = STATE(155),
        [sym_interface_anno] = STATE(149),
        [sym_const_dcl] = STATE(442),
        [sym_data_representation] = STATE(228),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(15),
        [aux_sym_struct_def_repeat1] = STATE(146),
        [aux_sym_interface_def_repeat1] = STATE(116),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_exception] = ACTIONS(7),
        [anon_sym_native] = ACTIONS(9),
        [anon_sym_module] = ACTIONS(11),
        [anon_sym_struct] = ACTIONS(13),
        [anon_sym_enum] = ACTIONS(15),
        [anon_sym_ATignore_literal_names] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_union] = ACTIONS(21),
        [anon_sym_bitset] = ACTIONS(23),
        [anon_sym_bitmask] = ACTIONS(25),
        [anon_sym_typedef] = ACTIONS(27),
        [anon_sym_POUNDdefine] = ACTIONS(29),
        [anon_sym_interface] = ACTIONS(31),
        [anon_sym_local] = ACTIONS(33),
        [sym_dds_service] = ACTIONS(35),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(37),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(39),
        [anon_sym_const] = ACTIONS(41),
        [sym_final] = ACTIONS(43),
        [anon_sym_ATdata_representation] = ACTIONS(45),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(73),
    1,
    anon_sym_RBRACE,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(2),
    1,
    sym_comment,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [116] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(83),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(13),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [232] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(85),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(4),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [348] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(87),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    sym_comment,
    STATE(6),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [464] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(89),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [580] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(93),
    1,
    anon_sym_exception,
    ACTIONS(96),
    1,
    anon_sym_native,
    ACTIONS(99),
    1,
    anon_sym_module,
    ACTIONS(102),
    1,
    anon_sym_struct,
    ACTIONS(105),
    1,
    anon_sym_enum,
    ACTIONS(108),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(111),
    1,
    anon_sym_ATannotation,
    ACTIONS(114),
    1,
    anon_sym_union,
    ACTIONS(117),
    1,
    anon_sym_bitset,
    ACTIONS(120),
    1,
    anon_sym_bitmask,
    ACTIONS(123),
    1,
    anon_sym_typedef,
    ACTIONS(126),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(129),
    1,
    anon_sym_interface,
    ACTIONS(132),
    1,
    anon_sym_local,
    ACTIONS(135),
    1,
    sym_dds_service,
    ACTIONS(138),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(141),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(144),
    1,
    anon_sym_const,
    ACTIONS(147),
    1,
    sym_final,
    ACTIONS(150),
    1,
    anon_sym_ATdata_representation,
    STATE(70),
    1,
    sym__definition,
    STATE(116),
    1,
    aux_sym_interface_def_repeat1,
    STATE(146),
    1,
    aux_sym_struct_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(228),
    1,
    sym_data_representation,
    STATE(438),
    1,
    sym_interface_header,
    STATE(441),
    1,
    sym_enum_anno,
    ACTIONS(91),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(7),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(71),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(439),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(442),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [700] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(156),
    1,
    sym_signed_longlong_int,
    ACTIONS(162),
    1,
    anon_sym_fixed,
    ACTIONS(168),
    1,
    sym_unsigned_long_int,
    ACTIONS(174),
    1,
    anon_sym_longdouble,
    ACTIONS(180),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(186),
    1,
    anon_sym_sequence,
    ACTIONS(189),
    1,
    anon_sym_map,
    ACTIONS(192),
    1,
    anon_sym_RBRACE,
    ACTIONS(197),
    1,
    anon_sym_AThashid,
    ACTIONS(200),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(203),
    1,
    sym_identifier,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(153),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(159),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(165),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(171),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(177),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(183),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(8),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(194),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [814] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(206),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [930] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(208),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1046] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(73),
    1,
    anon_sym_RBRACE,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1162] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_RBRACE,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1278] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(212),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(13),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_member,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(142),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1394] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(214),
    1,
    anon_sym_RBRACE,
    STATE(14),
    1,
    sym_comment,
    STATE(17),
    1,
    aux_sym_specification_repeat1,
    STATE(70),
    1,
    sym__definition,
    STATE(116),
    1,
    aux_sym_interface_def_repeat1,
    STATE(146),
    1,
    aux_sym_struct_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(228),
    1,
    sym_data_representation,
    STATE(438),
    1,
    sym_interface_header,
    STATE(441),
    1,
    sym_enum_anno,
    STATE(71),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(439),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(442),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1515] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(216),
    1,
    ts_builtin_sym_end,
    STATE(7),
    1,
    aux_sym_specification_repeat1,
    STATE(15),
    1,
    sym_comment,
    STATE(70),
    1,
    sym__definition,
    STATE(116),
    1,
    aux_sym_interface_def_repeat1,
    STATE(146),
    1,
    aux_sym_struct_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(228),
    1,
    sym_data_representation,
    STATE(438),
    1,
    sym_interface_header,
    STATE(441),
    1,
    sym_enum_anno,
    STATE(71),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(439),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(442),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1636] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(218),
    1,
    anon_sym_struct,
    ACTIONS(220),
    1,
    anon_sym_enum,
    ACTIONS(222),
    1,
    anon_sym_union,
    STATE(16),
    1,
    sym_comment,
    STATE(146),
    1,
    aux_sym_struct_def_repeat1,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(228),
    1,
    sym_data_representation,
    STATE(420),
    1,
    sym_type_declarator,
    STATE(421),
    1,
    sym_scoped_name,
    STATE(441),
    1,
    sym_enum_anno,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(151),
    7,
    sym_simple_type_spec,
    sym_template_type_spec,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    [1751] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(224),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_specification_repeat1,
    STATE(17),
    1,
    sym_comment,
    STATE(70),
    1,
    sym__definition,
    STATE(116),
    1,
    aux_sym_interface_def_repeat1,
    STATE(146),
    1,
    aux_sym_struct_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(228),
    1,
    sym_data_representation,
    STATE(438),
    1,
    sym_interface_header,
    STATE(441),
    1,
    sym_enum_anno,
    STATE(71),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(439),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(442),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1872] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_AThashid,
    ACTIONS(79),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(18),
    1,
    sym_comment,
    STATE(33),
    1,
    aux_sym_member_repeat1,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(75),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1979] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(226),
    1,
    anon_sym_RBRACE,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    STATE(19),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_export,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(374),
    1,
    sym_op_type_spec,
    STATE(379),
    1,
    sym_type_spec,
    STATE(401),
    1,
    sym_interface_body,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(370),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(375),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2091] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    ACTIONS(234),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_export,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(333),
    1,
    sym_interface_body,
    STATE(374),
    1,
    sym_op_type_spec,
    STATE(379),
    1,
    sym_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(370),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(375),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2203] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    ACTIONS(236),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_export,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(374),
    1,
    sym_op_type_spec,
    STATE(377),
    1,
    sym_interface_body,
    STATE(379),
    1,
    sym_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(370),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(375),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2315] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    STATE(22),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(276),
    1,
    sym_export,
    STATE(374),
    1,
    sym_op_type_spec,
    STATE(379),
    1,
    sym_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(370),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(375),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2421] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_fixed,
    ACTIONS(242),
    1,
    anon_sym_RBRACE,
    ACTIONS(244),
    1,
    anon_sym_enum,
    ACTIONS(246),
    1,
    sym_any_const_type,
    STATE(23),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(64),
    1,
    sym_annotation_member,
    STATE(266),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(350),
    1,
    sym_annotation_body,
    STATE(353),
    1,
    sym_scoped_name,
    STATE(354),
    1,
    sym_const_type,
    STATE(437),
    1,
    sym_enum_anno,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(238),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(412),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2521] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_fixed,
    ACTIONS(244),
    1,
    anon_sym_enum,
    ACTIONS(246),
    1,
    sym_any_const_type,
    ACTIONS(248),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(64),
    1,
    sym_annotation_member,
    STATE(266),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(353),
    1,
    sym_scoped_name,
    STATE(354),
    1,
    sym_const_type,
    STATE(437),
    1,
    sym_enum_anno,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(238),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(412),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2618] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(253),
    1,
    sym_signed_longlong_int,
    ACTIONS(259),
    1,
    anon_sym_fixed,
    ACTIONS(265),
    1,
    sym_unsigned_long_int,
    ACTIONS(271),
    1,
    anon_sym_longdouble,
    ACTIONS(277),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(283),
    1,
    anon_sym_sequence,
    ACTIONS(286),
    1,
    anon_sym_RBRACE,
    ACTIONS(288),
    1,
    anon_sym_enum,
    ACTIONS(291),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(294),
    1,
    sym_any_const_type,
    ACTIONS(297),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_annotation_member,
    STATE(266),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(353),
    1,
    sym_scoped_name,
    STATE(354),
    1,
    sym_const_type,
    STATE(437),
    1,
    sym_enum_anno,
    ACTIONS(250),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(256),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(262),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(268),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(274),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(280),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(25),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(412),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2713] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(300),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(302),
    1,
    anon_sym_GT,
    ACTIONS(304),
    1,
    anon_sym_COMMA,
    ACTIONS(306),
    1,
    sym_identifier,
    STATE(26),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(231),
    1,
    sym_scoped_name,
    STATE(336),
    1,
    sym_type_spec,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2802] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(27),
    1,
    sym_comment,
    STATE(180),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(406),
    1,
    sym_element_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2888] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(28),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(269),
    1,
    sym_scoped_name,
    STATE(335),
    1,
    sym_type_spec,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2971] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(29),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_type_spec,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3054] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(291),
    1,
    sym_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3137] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(300),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(306),
    1,
    sym_identifier,
    STATE(31),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(231),
    1,
    sym_scoped_name,
    STATE(321),
    1,
    sym_type_spec,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3220] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(53),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_base_type_spec,
    STATE(244),
    1,
    sym_type_spec,
    STATE(421),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(51),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(190),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(208),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3303] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(315),
    1,
    anon_sym_AThashid,
    ACTIONS(318),
    1,
    anon_sym_ATtry_construct,
    STATE(43),
    1,
    sym_struct_modifier,
    STATE(33),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(310),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(312),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(308),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3356] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_fixed,
    STATE(34),
    1,
    sym_comment,
    STATE(405),
    1,
    sym_const_type,
    STATE(408),
    1,
    sym_scoped_name,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(238),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(412),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(35),
    1,
    sym_comment,
    ACTIONS(323),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(321),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3466] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(61),
    1,
    anon_sym_longdouble,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(69),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_fixed,
    STATE(36),
    1,
    sym_comment,
    STATE(408),
    1,
    sym_scoped_name,
    STATE(466),
    1,
    sym_const_type,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(59),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(238),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(412),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(327),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(325),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3576] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(331),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(329),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3616] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(335),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(333),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3656] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(339),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(337),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3696] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(343),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(341),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3735] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(347),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(345),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(351),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(349),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(355),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(353),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3852] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(45),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(338),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3932] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(46),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(393),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4012] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(47),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(299),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4092] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(48),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(339),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4172] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(49),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(365),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4252] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(366),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4332] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(223),
    1,
    sym_const_expr,
    STATE(340),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4412] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(407),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4489] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(53),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(356),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4566] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(54),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(404),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4643] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(55),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(358),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4720] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(56),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(337),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4797] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(121),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(165),
    1,
    sym_and_expr,
    STATE(249),
    1,
    sym_xor_expr,
    STATE(267),
    1,
    sym_or_expr,
    STATE(271),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4874] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(124),
    1,
    sym_xor_expr,
    STATE(126),
    1,
    sym_or_expr,
    STATE(271),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4951] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(118),
    1,
    sym_and_expr,
    STATE(125),
    1,
    sym_xor_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5022] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(121),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(165),
    1,
    sym_and_expr,
    STATE(220),
    1,
    sym_xor_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(379),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(377),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(383),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(381),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5161] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(387),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(385),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5195] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(391),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(389),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5229] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(121),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(176),
    1,
    sym_and_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5297] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(66),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(115),
    1,
    sym_shift_expr,
    STATE(120),
    1,
    sym_and_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5365] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(121),
    1,
    sym_add_expr,
    STATE(132),
    1,
    sym_shift_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5430] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(393),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5461] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(395),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(397),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5523] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(399),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5554] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(401),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5585] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(73),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    STATE(114),
    1,
    sym_shift_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5650] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(403),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5681] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(75),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5743] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(76),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_add_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5805] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(77),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_mult_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5864] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(407),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(405),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [5895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(411),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(409),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [5926] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(415),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(413),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [5957] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(81),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_literal,
    STATE(94),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6016] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_comment,
    STATE(92),
    1,
    sym_unary_expr,
    STATE(93),
    1,
    sym_literal,
    STATE(103),
    1,
    sym_unary_operator,
    STATE(109),
    1,
    sym_scoped_name,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6072] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_LPAREN,
    ACTIONS(361),
    1,
    anon_sym_TILDE,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    STATE(83),
    1,
    sym_comment,
    STATE(92),
    1,
    sym_unary_expr,
    STATE(93),
    1,
    sym_literal,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(104),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(417),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(419),
    16,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6157] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(421),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(423),
    16,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6186] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(425),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(427),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6214] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(429),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(431),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6242] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(433),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(435),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6270] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(433),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(435),
    14,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(439),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(441),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(443),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(445),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6356] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(447),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(449),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6384] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(451),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(453),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(455),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(457),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6440] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(459),
    1,
    sym_boolean_type,
    STATE(95),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(395),
    1,
    sym_switch_type_spec,
    ACTIONS(47),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(385),
    2,
    sym_integer_type,
    sym_char_type,
    [6488] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(461),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(463),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6516] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(465),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(467),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(469),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(471),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(473),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(475),
    15,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6600] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(451),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(453),
    14,
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
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6630] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(477),
    1,
    anon_sym_GT,
    ACTIONS(483),
    1,
    anon_sym_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(481),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(479),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6661] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(483),
    1,
    anon_sym_SLASH,
    ACTIONS(485),
    1,
    anon_sym_GT,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(481),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(487),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6692] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    ACTIONS(489),
    1,
    anon_sym_LPAREN,
    STATE(88),
    1,
    sym_literal,
    STATE(103),
    1,
    sym_comment,
    STATE(110),
    1,
    sym_scoped_name,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6735] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    sym_identifier,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(371),
    1,
    sym_number_literal,
    ACTIONS(489),
    1,
    anon_sym_LPAREN,
    STATE(88),
    1,
    sym_literal,
    STATE(89),
    1,
    sym_scoped_name,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(369),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(98),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6778] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_GT,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(495),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(493),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(497),
    1,
    anon_sym_GT,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(495),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(499),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(417),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(419),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [6853] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    sym_signed_long_int,
    ACTIONS(57),
    1,
    sym_unsigned_long_int,
    STATE(108),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_integer_type,
    STATE(392),
    1,
    sym_destination_type,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_longlong_int,
    ACTIONS(55),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(501),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(183),
    2,
    sym_unsigned_int,
    sym_signed_int,
    [6888] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(503),
    1,
    sym_identifier,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(451),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(453),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [6913] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(503),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(433),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(435),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [6938] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(421),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(423),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [6961] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(507),
    1,
    anon_sym_SLASH,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(505),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(479),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6985] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(507),
    1,
    anon_sym_SLASH,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(505),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(487),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7009] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_GT,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(513),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(511),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    anon_sym_GT,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(513),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(517),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7057] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(519),
    1,
    anon_sym_interface,
    ACTIONS(521),
    1,
    anon_sym_local,
    STATE(116),
    1,
    sym_comment,
    STATE(117),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(416),
    1,
    sym_interface_header,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7092] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    sym_dds_service,
    ACTIONS(528),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(531),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(149),
    1,
    sym_interface_anno,
    ACTIONS(523),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(117),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7120] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(536),
    1,
    anon_sym_DOLLAR,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(534),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(538),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(540),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7160] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(536),
    1,
    anon_sym_DOLLAR,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(542),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7180] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(544),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(493),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7199] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(544),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(499),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7218] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_COMMA,
    ACTIONS(548),
    1,
    anon_sym_SEMI,
    ACTIONS(550),
    1,
    anon_sym_getraises,
    ACTIONS(552),
    1,
    anon_sym_setraises,
    STATE(123),
    1,
    sym_comment,
    STATE(169),
    1,
    sym_get_excep_expr,
    STATE(247),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(345),
    1,
    sym_attr_raises_expr,
    STATE(346),
    1,
    sym_set_excep_expr,
    [7249] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(556),
    1,
    anon_sym_CARET,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(554),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7268] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(556),
    1,
    anon_sym_CARET,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(558),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7287] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(562),
    1,
    anon_sym_PIPE,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(560),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7305] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(564),
    1,
    anon_sym_RPAREN,
    ACTIONS(566),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(127),
    1,
    sym_comment,
    STATE(254),
    1,
    sym_param_dcl,
    STATE(349),
    1,
    sym_parameter_dcls,
    ACTIONS(568),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7331] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(570),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [7347] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(572),
    1,
    anon_sym_RBRACE,
    ACTIONS(574),
    1,
    anon_sym_default,
    ACTIONS(577),
    1,
    anon_sym_case,
    STATE(27),
    1,
    sym_case_label,
    STATE(239),
    1,
    sym_case,
    STATE(129),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7370] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(580),
    1,
    anon_sym_RBRACE,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(584),
    1,
    sym_identifier,
    STATE(130),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_enumerator_repeat1,
    STATE(248),
    1,
    sym_enumerator,
    STATE(320),
    1,
    sym_enum_modifier,
    [7395] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    anon_sym_LBRACK,
    STATE(174),
    1,
    sym_fixed_array_size,
    STATE(131),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(586),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(591),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(511),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7431] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(593),
    1,
    anon_sym_RBRACE,
    ACTIONS(595),
    1,
    anon_sym_default,
    ACTIONS(597),
    1,
    anon_sym_case,
    STATE(27),
    1,
    sym_case_label,
    STATE(129),
    1,
    aux_sym_union_def_repeat1,
    STATE(133),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_case,
    [7456] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(599),
    1,
    anon_sym_LBRACK,
    STATE(134),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(174),
    1,
    sym_fixed_array_size,
    ACTIONS(570),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7477] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(599),
    1,
    anon_sym_LBRACK,
    STATE(131),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(135),
    1,
    sym_comment,
    STATE(174),
    1,
    sym_fixed_array_size,
    ACTIONS(601),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7498] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(591),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(517),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7515] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(584),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_RBRACE,
    STATE(137),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_enumerator_repeat1,
    STATE(196),
    1,
    sym_enumerator,
    STATE(320),
    1,
    sym_enum_modifier,
    [7540] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(584),
    1,
    sym_identifier,
    ACTIONS(605),
    1,
    anon_sym_RBRACE,
    STATE(138),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_enumerator_repeat1,
    STATE(245),
    1,
    sym_enumerator,
    STATE(320),
    1,
    sym_enum_modifier,
    [7565] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(595),
    1,
    anon_sym_default,
    ACTIONS(597),
    1,
    anon_sym_case,
    ACTIONS(607),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    sym_case_label,
    STATE(133),
    1,
    aux_sym_union_def_repeat1,
    STATE(139),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_case,
    [7590] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(584),
    1,
    sym_identifier,
    ACTIONS(609),
    1,
    anon_sym_RBRACE,
    STATE(140),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_enumerator_repeat1,
    STATE(260),
    1,
    sym_enumerator,
    STATE(320),
    1,
    sym_enum_modifier,
    [7615] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(611),
    1,
    anon_sym_RBRACE,
    ACTIONS(613),
    1,
    anon_sym_bitfield,
    STATE(141),
    1,
    sym_comment,
    STATE(144),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(317),
    1,
    sym_bitfield,
    [7637] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(213),
    1,
    sym_declarators,
    STATE(211),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7657] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_bitfield,
    ACTIONS(617),
    1,
    anon_sym_RBRACE,
    STATE(143),
    1,
    sym_comment,
    STATE(157),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(317),
    1,
    sym_bitfield,
    [7679] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_bitfield,
    ACTIONS(619),
    1,
    anon_sym_RBRACE,
    STATE(144),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(317),
    1,
    sym_bitfield,
    [7701] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_COMMA,
    ACTIONS(621),
    1,
    anon_sym_SEMI,
    ACTIONS(623),
    1,
    anon_sym_raises,
    STATE(145),
    1,
    sym_comment,
    STATE(215),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(367),
    1,
    sym_raises_expr,
    [7723] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(625),
    1,
    anon_sym_struct,
    STATE(146),
    1,
    sym_comment,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    [7745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(627),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7759] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(227),
    1,
    sym_declarators,
    STATE(211),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7779] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(629),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7793] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(584),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_enumerator_repeat1,
    STATE(292),
    1,
    sym_enumerator,
    STATE(320),
    1,
    sym_enum_modifier,
    [7815] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(151),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_any_declarator,
    STATE(390),
    1,
    sym_any_declarators,
    STATE(285),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(631),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7849] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(566),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(153),
    1,
    sym_comment,
    STATE(281),
    1,
    sym_param_dcl,
    ACTIONS(568),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7869] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_struct,
    ACTIONS(635),
    1,
    sym_final,
    ACTIONS(638),
    1,
    anon_sym_ATdata_representation,
    STATE(228),
    1,
    sym_data_representation,
    STATE(154),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7889] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(641),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7903] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_RBRACE,
    ACTIONS(645),
    1,
    anon_sym_bitfield,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(317),
    1,
    sym_bitfield,
    STATE(156),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7923] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_bitfield,
    ACTIONS(648),
    1,
    anon_sym_RBRACE,
    STATE(156),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(157),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(317),
    1,
    sym_bitfield,
    [7945] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(650),
    1,
    sym_identifier,
    STATE(158),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(320),
    1,
    sym_enum_modifier,
    [7964] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(652),
    1,
    anon_sym_RPAREN,
    ACTIONS(654),
    1,
    anon_sym_XCDR,
    ACTIONS(657),
    1,
    anon_sym_XCDR2,
    STATE(159),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7981] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(660),
    1,
    anon_sym_SEMI,
    ACTIONS(662),
    1,
    anon_sym_LBRACE,
    ACTIONS(664),
    1,
    anon_sym_COLON,
    STATE(160),
    1,
    sym_comment,
    STATE(389),
    1,
    sym_interface_inheritance_spec,
    [8000] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(666),
    1,
    anon_sym_RPAREN,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_comment,
    STATE(185),
    1,
    sym_scoped_name,
    [8019] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(670),
    1,
    anon_sym_LT,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(672),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8034] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(674),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(676),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8060] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_DOLLAR,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(534),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(680),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8088] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(167),
    1,
    sym_comment,
    STATE(194),
    1,
    sym_scoped_name,
    STATE(323),
    1,
    sym_interface_name,
    [8107] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    STATE(194),
    1,
    sym_scoped_name,
    STATE(195),
    1,
    sym_interface_name,
    [8126] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(552),
    1,
    anon_sym_setraises,
    ACTIONS(682),
    1,
    anon_sym_SEMI,
    STATE(169),
    1,
    sym_comment,
    STATE(177),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(295),
    1,
    sym_set_excep_expr,
    [8145] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    STATE(209),
    1,
    sym_declarator,
    STATE(211),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8162] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    anon_sym_COMMA,
    STATE(171),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(686),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8179] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(688),
    1,
    anon_sym_RPAREN,
    ACTIONS(690),
    1,
    anon_sym_XCDR,
    ACTIONS(692),
    1,
    anon_sym_XCDR2,
    STATE(159),
    1,
    aux_sym_data_representation_repeat1,
    STATE(172),
    1,
    sym_comment,
    [8198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(697),
    1,
    sym_identifier,
    STATE(320),
    1,
    sym_enum_modifier,
    STATE(173),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(699),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8228] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(701),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8241] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_DOLLAR,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(542),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8256] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(552),
    1,
    anon_sym_setraises,
    ACTIONS(703),
    1,
    anon_sym_SEMI,
    STATE(177),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(295),
    1,
    sym_set_excep_expr,
    [8275] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(705),
    1,
    anon_sym_RPAREN,
    STATE(178),
    1,
    sym_comment,
    STATE(186),
    1,
    sym_scoped_name,
    [8294] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    anon_sym_COMMA,
    STATE(171),
    1,
    aux_sym_declarators_repeat1,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(707),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8311] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_declarator,
    STATE(211),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8328] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(709),
    1,
    anon_sym_SEMI,
    ACTIONS(711),
    1,
    anon_sym_setraises,
    STATE(295),
    1,
    sym_set_excep_expr,
    STATE(181),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [8345] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(716),
    1,
    anon_sym_LBRACE,
    ACTIONS(718),
    1,
    anon_sym_COLON,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(714),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8362] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(720),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8375] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(722),
    1,
    anon_sym_COMMA,
    ACTIONS(725),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(184),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8390] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(729),
    1,
    anon_sym_RPAREN,
    STATE(185),
    1,
    sym_comment,
    STATE(200),
    1,
    aux_sym_raises_expr_repeat1,
    [8409] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(731),
    1,
    anon_sym_RPAREN,
    STATE(186),
    1,
    sym_comment,
    STATE(206),
    1,
    aux_sym_raises_expr_repeat1,
    [8428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    sym_identifier,
    STATE(187),
    1,
    sym_comment,
    STATE(264),
    1,
    sym_any_declarator,
    STATE(285),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8445] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(733),
    1,
    anon_sym_COMMA,
    ACTIONS(736),
    1,
    anon_sym_RBRACE,
    STATE(188),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8459] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(738),
    1,
    anon_sym_COMMA,
    ACTIONS(741),
    1,
    anon_sym_LBRACE,
    STATE(189),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [8473] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(743),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(745),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8497] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(749),
    1,
    anon_sym_RBRACE,
    STATE(192),
    1,
    sym_comment,
    STATE(224),
    1,
    aux_sym_enum_dcl_repeat1,
    [8513] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COMMA,
    ACTIONS(753),
    1,
    anon_sym_SEMI,
    STATE(193),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_any_declarators_repeat1,
    [8529] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(755),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8543] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(757),
    1,
    anon_sym_COMMA,
    ACTIONS(759),
    1,
    anon_sym_LBRACE,
    STATE(195),
    1,
    sym_comment,
    STATE(246),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8559] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(605),
    1,
    anon_sym_RBRACE,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    STATE(192),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(196),
    1,
    sym_comment,
    [8575] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(761),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8589] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(766),
    1,
    anon_sym_SEMI,
    STATE(198),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [8603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(768),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8615] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(770),
    1,
    anon_sym_RPAREN,
    STATE(200),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_raises_expr_repeat1,
    [8631] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(772),
    1,
    anon_sym_RBRACE,
    STATE(201),
    1,
    sym_comment,
    STATE(224),
    1,
    aux_sym_enum_dcl_repeat1,
    [8647] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(123),
    1,
    sym_simple_declarator,
    STATE(202),
    1,
    sym_comment,
    STATE(414),
    1,
    sym_attr_declarator,
    [8663] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(776),
    1,
    anon_sym_SEMI,
    ACTIONS(778),
    1,
    anon_sym_switch,
    ACTIONS(780),
    1,
    sym_identifier,
    STATE(203),
    1,
    sym_comment,
    [8679] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(784),
    1,
    anon_sym_RBRACE,
    STATE(204),
    1,
    sym_comment,
    STATE(241),
    1,
    aux_sym_interface_body_repeat1,
    [8695] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_scoped_name,
    STATE(205),
    1,
    sym_comment,
    [8711] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(786),
    1,
    anon_sym_RPAREN,
    STATE(206),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_raises_expr_repeat1,
    [8727] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_scoped_name,
    [8743] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(788),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(725),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(790),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8779] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(792),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(794),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8803] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    anon_sym_SEMI,
    ACTIONS(798),
    1,
    anon_sym_default,
    STATE(213),
    1,
    sym_comment,
    STATE(394),
    1,
    sym_default,
    [8819] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(800),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8831] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_COMMA,
    ACTIONS(802),
    1,
    anon_sym_SEMI,
    STATE(215),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [8847] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(690),
    1,
    anon_sym_XCDR,
    ACTIONS(692),
    1,
    anon_sym_XCDR2,
    STATE(172),
    1,
    aux_sym_data_representation_repeat1,
    STATE(216),
    1,
    sym_comment,
    [8863] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_COMMA,
    ACTIONS(807),
    1,
    anon_sym_RPAREN,
    STATE(217),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8877] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(809),
    1,
    anon_sym_SEMI,
    ACTIONS(811),
    1,
    sym_identifier,
    STATE(218),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8891] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(814),
    1,
    anon_sym_RBRACE,
    STATE(204),
    1,
    aux_sym_interface_body_repeat1,
    STATE(219),
    1,
    sym_comment,
    [8907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(816),
    1,
    anon_sym_CARET,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(558),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [8921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    anon_sym_COMMA,
    ACTIONS(821),
    1,
    anon_sym_SEMI,
    STATE(221),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(823),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(825),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [8959] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(827),
    1,
    anon_sym_COMMA,
    ACTIONS(830),
    1,
    anon_sym_RBRACE,
    STATE(224),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(832),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(834),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8997] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    anon_sym_default,
    ACTIONS(836),
    1,
    anon_sym_SEMI,
    STATE(227),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_default,
    [9013] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(838),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9025] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_raises,
    ACTIONS(840),
    1,
    anon_sym_SEMI,
    STATE(229),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_raises_expr,
    [9041] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    anon_sym_COMMA,
    ACTIONS(844),
    1,
    anon_sym_RPAREN,
    STATE(217),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(230),
    1,
    sym_comment,
    [9057] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    sym_identifier,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(823),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9071] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(848),
    1,
    anon_sym_COMMA,
    ACTIONS(850),
    1,
    anon_sym_RBRACE,
    STATE(232),
    1,
    sym_comment,
    STATE(242),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(423),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9099] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(852),
    1,
    anon_sym_RBRACE,
    STATE(224),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(234),
    1,
    sym_comment,
    [9115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(419),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9127] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(854),
    1,
    anon_sym_SEMI,
    ACTIONS(856),
    1,
    sym_identifier,
    STATE(218),
    1,
    aux_sym_bitfield_repeat1,
    STATE(236),
    1,
    sym_comment,
    [9143] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_XCDR,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(858),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [9157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(662),
    1,
    anon_sym_LBRACE,
    ACTIONS(664),
    1,
    anon_sym_COLON,
    STATE(238),
    1,
    sym_comment,
    STATE(389),
    1,
    sym_interface_inheritance_spec,
    [9173] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(862),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9185] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(856),
    1,
    sym_identifier,
    ACTIONS(864),
    1,
    anon_sym_SEMI,
    STATE(236),
    1,
    aux_sym_bitfield_repeat1,
    STATE(240),
    1,
    sym_comment,
    [9201] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_COMMA,
    ACTIONS(869),
    1,
    anon_sym_RBRACE,
    STATE(241),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [9215] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(848),
    1,
    anon_sym_COMMA,
    ACTIONS(871),
    1,
    anon_sym_RBRACE,
    STATE(188),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(242),
    1,
    sym_comment,
    [9231] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COMMA,
    ACTIONS(873),
    1,
    anon_sym_SEMI,
    STATE(193),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(243),
    1,
    sym_comment,
    [9247] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(145),
    1,
    sym_simple_declarator,
    STATE(244),
    1,
    sym_comment,
    STATE(343),
    1,
    sym_readonly_attr_declarator,
    [9263] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(749),
    1,
    anon_sym_RBRACE,
    STATE(234),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(245),
    1,
    sym_comment,
    [9279] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(757),
    1,
    anon_sym_COMMA,
    ACTIONS(875),
    1,
    anon_sym_LBRACE,
    STATE(189),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(246),
    1,
    sym_comment,
    [9295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_COMMA,
    ACTIONS(877),
    1,
    anon_sym_SEMI,
    STATE(221),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(247),
    1,
    sym_comment,
    [9311] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_RBRACE,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    STATE(248),
    1,
    sym_comment,
    STATE(257),
    1,
    aux_sym_enum_dcl_repeat1,
    [9327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(816),
    1,
    anon_sym_CARET,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(554),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9341] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_raises,
    ACTIONS(879),
    1,
    anon_sym_SEMI,
    STATE(250),
    1,
    sym_comment,
    STATE(376),
    1,
    sym_raises_expr,
    [9357] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(881),
    1,
    anon_sym_RBRACE,
    ACTIONS(883),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_bit_value,
    STATE(251),
    1,
    sym_comment,
    [9373] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(885),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9385] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(315),
    1,
    sym_scoped_name,
    [9401] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    anon_sym_COMMA,
    ACTIONS(887),
    1,
    anon_sym_RPAREN,
    STATE(230),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(254),
    1,
    sym_comment,
    [9417] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(761),
    1,
    anon_sym_RPAREN,
    ACTIONS(889),
    1,
    anon_sym_COMMA,
    STATE(255),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9431] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(892),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9443] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(894),
    1,
    anon_sym_RBRACE,
    STATE(224),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(257),
    1,
    sym_comment,
    [9459] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(896),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9471] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(898),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9483] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    ACTIONS(894),
    1,
    anon_sym_RBRACE,
    STATE(201),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(260),
    1,
    sym_comment,
    [9499] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(65),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(261),
    1,
    sym_comment,
    STATE(308),
    1,
    sym_scoped_name,
    [9515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(900),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9526] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_DQUOTE,
    ACTIONS(904),
    1,
    anon_sym_SQUOTE,
    STATE(263),
    1,
    sym_comment,
    [9539] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(766),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9550] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(265),
    1,
    sym_comment,
    STATE(435),
    1,
    sym_simple_declarator,
    [9563] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_const,
    STATE(266),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_const_dcl,
    [9576] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(560),
    1,
    anon_sym_typedef,
    ACTIONS(908),
    1,
    anon_sym_PIPE,
    STATE(267),
    1,
    sym_comment,
    [9589] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(519),
    1,
    anon_sym_interface,
    STATE(268),
    1,
    sym_comment,
    STATE(416),
    1,
    sym_interface_header,
    [9602] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(823),
    1,
    anon_sym_COMMA,
    STATE(269),
    1,
    sym_comment,
    [9615] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_LBRACE,
    ACTIONS(912),
    1,
    anon_sym_COLON,
    STATE(270),
    1,
    sym_comment,
    [9628] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(914),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [9639] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9650] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(918),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9661] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9672] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(922),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(869),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9694] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(924),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(926),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    sym_identifier,
    STATE(279),
    1,
    sym_comment,
    STATE(304),
    1,
    sym_bit_value,
    [9729] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(928),
    1,
    anon_sym_LBRACE,
    STATE(280),
    1,
    sym_comment,
    [9742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(807),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9753] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(519),
    1,
    anon_sym_interface,
    STATE(282),
    1,
    sym_comment,
    STATE(364),
    1,
    sym_interface_header,
    [9766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(930),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(932),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9788] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(934),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9799] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(936),
    1,
    anon_sym_RPAREN,
    STATE(286),
    1,
    sym_comment,
    [9812] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(938),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9823] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(940),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_SEMI,
    ACTIONS(944),
    1,
    anon_sym_default,
    STATE(289),
    1,
    sym_comment,
    [9847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(946),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9858] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(278),
    1,
    sym_simple_declarator,
    STATE(291),
    1,
    sym_comment,
    [9871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(830),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(948),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9893] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    STATE(294),
    1,
    sym_comment,
    STATE(380),
    1,
    sym_typedef_dcl,
    [9906] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(950),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(952),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9928] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(954),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9939] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(956),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9950] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(958),
    1,
    anon_sym_GT,
    ACTIONS(960),
    1,
    anon_sym_COMMA,
    STATE(299),
    1,
    sym_comment,
    [9963] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(962),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9974] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(964),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(966),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9996] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(821),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(736),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10018] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    anon_sym_LBRACE,
    ACTIONS(970),
    1,
    anon_sym_COLON,
    STATE(305),
    1,
    sym_comment,
    [10031] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(972),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(974),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10053] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(976),
    1,
    anon_sym_LBRACE,
    STATE(308),
    1,
    sym_comment,
    [10066] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(978),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(303),
    1,
    sym_simple_declarator,
    STATE(310),
    1,
    sym_comment,
    [10090] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(980),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10101] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_LPAREN,
    STATE(302),
    1,
    sym_exception_list,
    STATE(312),
    1,
    sym_comment,
    [10114] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_LPAREN,
    STATE(298),
    1,
    sym_exception_list,
    STATE(313),
    1,
    sym_comment,
    [10127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(984),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10138] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(986),
    1,
    anon_sym_LBRACE,
    STATE(315),
    1,
    sym_comment,
    [10151] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(988),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10173] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(992),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10184] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(994),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(996),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10206] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_GT,
    ACTIONS(1000),
    1,
    anon_sym_COMMA,
    STATE(321),
    1,
    sym_comment,
    [10219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_simple_declarator,
    STATE(322),
    1,
    sym_comment,
    [10232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(741),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10243] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(324),
    1,
    sym_comment,
    ACTIONS(1002),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10254] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(325),
    1,
    sym_comment,
    ACTIONS(1004),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    anon_sym_LPAREN,
    STATE(326),
    1,
    sym_comment,
    [10275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_DQUOTE,
    STATE(327),
    1,
    sym_comment,
    [10285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1010),
    1,
    anon_sym_DQUOTE,
    STATE(328),
    1,
    sym_comment,
    [10295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1012),
    1,
    anon_sym_SQUOTE,
    STATE(329),
    1,
    sym_comment,
    [10305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    anon_sym_LPAREN,
    STATE(330),
    1,
    sym_comment,
    [10315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1016),
    1,
    aux_sym_string_literal_token1,
    STATE(331),
    1,
    sym_comment,
    [10325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1018),
    1,
    aux_sym_string_literal_token1,
    STATE(332),
    1,
    sym_comment,
    [10335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(226),
    1,
    anon_sym_RBRACE,
    STATE(333),
    1,
    sym_comment,
    [10345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1020),
    1,
    anon_sym_SEMI,
    STATE(334),
    1,
    sym_comment,
    [10355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_COMMA,
    STATE(335),
    1,
    sym_comment,
    [10365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_GT,
    STATE(336),
    1,
    sym_comment,
    [10375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_RPAREN,
    STATE(337),
    1,
    sym_comment,
    [10385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1028),
    1,
    anon_sym_GT,
    STATE(338),
    1,
    sym_comment,
    [10395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1030),
    1,
    anon_sym_GT,
    STATE(339),
    1,
    sym_comment,
    [10405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_COMMA,
    STATE(340),
    1,
    sym_comment,
    [10415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1034),
    1,
    aux_sym_char_literal_token1,
    STATE(341),
    1,
    sym_comment,
    [10425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    aux_sym_string_literal_token1,
    STATE(342),
    1,
    sym_comment,
    [10435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1038),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [10445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [10455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [10465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(682),
    1,
    anon_sym_SEMI,
    STATE(346),
    1,
    sym_comment,
    [10475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    anon_sym_LT,
    STATE(347),
    1,
    sym_comment,
    [10485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1044),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [10495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_RPAREN,
    STATE(349),
    1,
    sym_comment,
    [10505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    anon_sym_RBRACE,
    STATE(350),
    1,
    sym_comment,
    [10515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1050),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [10525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_SEMI,
    STATE(352),
    1,
    sym_comment,
    [10535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    sym_identifier,
    STATE(353),
    1,
    sym_comment,
    [10545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(354),
    1,
    sym_comment,
    [10555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    [10565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [10575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1062),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [10585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [10595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [10605] = 3,
    ACTIONS(1068),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1070),
    1,
    aux_sym_comment_token1,
    STATE(360),
    1,
    sym_comment,
    [10615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    [10625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1074),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(362),
    1,
    sym_comment,
    [10635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_SEMI,
    STATE(363),
    1,
    sym_comment,
    [10645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1078),
    1,
    anon_sym_LBRACE,
    STATE(364),
    1,
    sym_comment,
    [10655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1080),
    1,
    anon_sym_RBRACK,
    STATE(365),
    1,
    sym_comment,
    [10665] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    anon_sym_GT,
    STATE(366),
    1,
    sym_comment,
    [10675] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [10685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [10695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [10705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_SEMI,
    STATE(370),
    1,
    sym_comment,
    [10715] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [10725] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    [10735] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1094),
    1,
    anon_sym_LBRACE,
    STATE(373),
    1,
    sym_comment,
    [10745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    sym_identifier,
    STATE(374),
    1,
    sym_comment,
    [10755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1098),
    1,
    anon_sym_SEMI,
    STATE(375),
    1,
    sym_comment,
    [10765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    anon_sym_SEMI,
    STATE(376),
    1,
    sym_comment,
    [10775] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(234),
    1,
    anon_sym_RBRACE,
    STATE(377),
    1,
    sym_comment,
    [10785] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_attribute,
    STATE(378),
    1,
    sym_comment,
    [10795] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1102),
    1,
    sym_identifier,
    STATE(379),
    1,
    sym_comment,
    [10805] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10815] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [10825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [10835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_LBRACE,
    STATE(383),
    1,
    sym_comment,
    [10845] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_EQ,
    STATE(384),
    1,
    sym_comment,
    [10855] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(936),
    1,
    anon_sym_RPAREN,
    STATE(385),
    1,
    sym_comment,
    [10865] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    anon_sym_COLON,
    STATE(386),
    1,
    sym_comment,
    [10875] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_EQ,
    STATE(387),
    1,
    sym_comment,
    [10885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1118),
    1,
    anon_sym_EQ,
    STATE(388),
    1,
    sym_comment,
    [10895] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1120),
    1,
    anon_sym_LBRACE,
    STATE(389),
    1,
    sym_comment,
    [10905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_SEMI,
    STATE(390),
    1,
    sym_comment,
    [10915] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1124),
    1,
    anon_sym_GT,
    STATE(391),
    1,
    sym_comment,
    [10925] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    anon_sym_GT,
    STATE(392),
    1,
    sym_comment,
    [10935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    anon_sym_GT,
    STATE(393),
    1,
    sym_comment,
    [10945] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1130),
    1,
    anon_sym_SEMI,
    STATE(394),
    1,
    sym_comment,
    [10955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1132),
    1,
    anon_sym_RPAREN,
    STATE(395),
    1,
    sym_comment,
    [10965] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1134),
    1,
    anon_sym_LPAREN,
    STATE(396),
    1,
    sym_comment,
    [10975] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    anon_sym_SEMI,
    STATE(397),
    1,
    sym_comment,
    [10985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [10995] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    sym_identifier,
    STATE(399),
    1,
    sym_comment,
    [11005] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1142),
    1,
    sym_identifier,
    STATE(400),
    1,
    sym_comment,
    [11015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    anon_sym_RBRACE,
    STATE(401),
    1,
    sym_comment,
    [11025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    anon_sym_SEMI,
    STATE(402),
    1,
    sym_comment,
    [11035] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1148),
    1,
    sym_identifier,
    STATE(403),
    1,
    sym_comment,
    [11045] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COLON,
    STATE(404),
    1,
    sym_comment,
    [11055] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [11065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [11075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_RPAREN,
    STATE(407),
    1,
    sym_comment,
    [11085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [11095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    aux_sym_string_literal_token1,
    STATE(409),
    1,
    sym_comment,
    [11105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    sym_identifier,
    STATE(410),
    1,
    sym_comment,
    [11115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_SEMI,
    STATE(411),
    1,
    sym_comment,
    [11125] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    sym_identifier,
    STATE(412),
    1,
    sym_comment,
    [11135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    anon_sym_name,
    STATE(413),
    1,
    sym_comment,
    [11145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [11155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_name,
    STATE(415),
    1,
    sym_comment,
    [11165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    anon_sym_LBRACE,
    STATE(416),
    1,
    sym_comment,
    [11175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [11185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(418),
    1,
    sym_comment,
    [11195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_SEMI,
    STATE(420),
    1,
    sym_comment,
    [11215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(823),
    1,
    sym_identifier,
    STATE(421),
    1,
    sym_comment,
    [11225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    aux_sym_char_literal_token1,
    STATE(422),
    1,
    sym_comment,
    [11235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1182),
    1,
    anon_sym_LT,
    STATE(423),
    1,
    sym_comment,
    [11245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1184),
    1,
    anon_sym_SEMI,
    STATE(424),
    1,
    sym_comment,
    [11255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1186),
    1,
    anon_sym_LT,
    STATE(425),
    1,
    sym_comment,
    [11265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(426),
    1,
    sym_comment,
    [11275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1188),
    1,
    anon_sym_LT,
    STATE(427),
    1,
    sym_comment,
    [11285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    anon_sym_const,
    STATE(428),
    1,
    sym_comment,
    [11295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1190),
    1,
    anon_sym_LBRACE,
    STATE(429),
    1,
    sym_comment,
    [11305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1192),
    1,
    anon_sym_DQUOTE,
    STATE(430),
    1,
    sym_comment,
    [11315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1194),
    1,
    anon_sym_LBRACE,
    STATE(431),
    1,
    sym_comment,
    [11325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    anon_sym_const,
    STATE(432),
    1,
    sym_comment,
    [11335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1196),
    1,
    anon_sym_LBRACE,
    STATE(433),
    1,
    sym_comment,
    [11345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    anon_sym_LBRACE,
    STATE(434),
    1,
    sym_comment,
    [11355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1200),
    1,
    anon_sym_SEMI,
    STATE(435),
    1,
    sym_comment,
    [11365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1202),
    1,
    anon_sym_LBRACE,
    STATE(436),
    1,
    sym_comment,
    [11375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    anon_sym_enum,
    STATE(437),
    1,
    sym_comment,
    [11385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1206),
    1,
    anon_sym_LBRACE,
    STATE(438),
    1,
    sym_comment,
    [11395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1208),
    1,
    anon_sym_SEMI,
    STATE(439),
    1,
    sym_comment,
    [11405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(948),
    1,
    anon_sym_const,
    STATE(440),
    1,
    sym_comment,
    [11415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1210),
    1,
    anon_sym_enum,
    STATE(441),
    1,
    sym_comment,
    [11425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    anon_sym_SEMI,
    STATE(442),
    1,
    sym_comment,
    [11435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1214),
    1,
    ts_builtin_sym_end,
    STATE(443),
    1,
    sym_comment,
    [11445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1216),
    1,
    anon_sym_LPAREN,
    STATE(444),
    1,
    sym_comment,
    [11455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1218),
    1,
    anon_sym_LPAREN,
    STATE(445),
    1,
    sym_comment,
    [11465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(972),
    1,
    anon_sym_const,
    STATE(446),
    1,
    sym_comment,
    [11475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1220),
    1,
    anon_sym_LPAREN,
    STATE(447),
    1,
    sym_comment,
    [11485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1222),
    1,
    anon_sym_RPAREN,
    STATE(448),
    1,
    sym_comment,
    [11495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1224),
    1,
    anon_sym_RPAREN,
    STATE(449),
    1,
    sym_comment,
    [11505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [11515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1226),
    1,
    sym_identifier,
    STATE(451),
    1,
    sym_comment,
    [11525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1228),
    1,
    anon_sym_EQ,
    STATE(452),
    1,
    sym_comment,
    [11535] = 3,
    ACTIONS(1068),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    aux_sym_predefine_token1,
    STATE(453),
    1,
    sym_comment,
    [11545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1232),
    1,
    anon_sym_SEMI,
    STATE(454),
    1,
    sym_comment,
    [11555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(455),
    1,
    sym_comment,
    [11565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [11575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1238),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    sym_identifier,
    STATE(458),
    1,
    sym_comment,
    [11595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    anon_sym_enum,
    STATE(459),
    1,
    sym_comment,
    [11605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1244),
    1,
    sym_identifier,
    STATE(460),
    1,
    sym_comment,
    [11615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    sym_identifier,
    STATE(461),
    1,
    sym_comment,
    [11625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    sym_identifier,
    STATE(462),
    1,
    sym_comment,
    [11635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    anon_sym_SQUOTE,
    STATE(463),
    1,
    sym_comment,
    [11645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    sym_identifier,
    STATE(464),
    1,
    sym_comment,
    [11655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1254),
    1,
    anon_sym_LBRACE,
    STATE(465),
    1,
    sym_comment,
    [11665] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [11675] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1258),
    1,
    anon_sym_LBRACE,
    STATE(467),
    1,
    sym_comment,
    [11685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1260),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [11695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1262),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [11705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1264),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [11715] = 1,
    ACTIONS(1266),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 116,
    [SMALL_STATE(4)] = 232,
    [SMALL_STATE(5)] = 348,
    [SMALL_STATE(6)] = 464,
    [SMALL_STATE(7)] = 580,
    [SMALL_STATE(8)] = 700,
    [SMALL_STATE(9)] = 814,
    [SMALL_STATE(10)] = 930,
    [SMALL_STATE(11)] = 1046,
    [SMALL_STATE(12)] = 1162,
    [SMALL_STATE(13)] = 1278,
    [SMALL_STATE(14)] = 1394,
    [SMALL_STATE(15)] = 1515,
    [SMALL_STATE(16)] = 1636,
    [SMALL_STATE(17)] = 1751,
    [SMALL_STATE(18)] = 1872,
    [SMALL_STATE(19)] = 1979,
    [SMALL_STATE(20)] = 2091,
    [SMALL_STATE(21)] = 2203,
    [SMALL_STATE(22)] = 2315,
    [SMALL_STATE(23)] = 2421,
    [SMALL_STATE(24)] = 2521,
    [SMALL_STATE(25)] = 2618,
    [SMALL_STATE(26)] = 2713,
    [SMALL_STATE(27)] = 2802,
    [SMALL_STATE(28)] = 2888,
    [SMALL_STATE(29)] = 2971,
    [SMALL_STATE(30)] = 3054,
    [SMALL_STATE(31)] = 3137,
    [SMALL_STATE(32)] = 3220,
    [SMALL_STATE(33)] = 3303,
    [SMALL_STATE(34)] = 3356,
    [SMALL_STATE(35)] = 3426,
    [SMALL_STATE(36)] = 3466,
    [SMALL_STATE(37)] = 3536,
    [SMALL_STATE(38)] = 3576,
    [SMALL_STATE(39)] = 3616,
    [SMALL_STATE(40)] = 3656,
    [SMALL_STATE(41)] = 3696,
    [SMALL_STATE(42)] = 3735,
    [SMALL_STATE(43)] = 3774,
    [SMALL_STATE(44)] = 3813,
    [SMALL_STATE(45)] = 3852,
    [SMALL_STATE(46)] = 3932,
    [SMALL_STATE(47)] = 4012,
    [SMALL_STATE(48)] = 4092,
    [SMALL_STATE(49)] = 4172,
    [SMALL_STATE(50)] = 4252,
    [SMALL_STATE(51)] = 4332,
    [SMALL_STATE(52)] = 4412,
    [SMALL_STATE(53)] = 4489,
    [SMALL_STATE(54)] = 4566,
    [SMALL_STATE(55)] = 4643,
    [SMALL_STATE(56)] = 4720,
    [SMALL_STATE(57)] = 4797,
    [SMALL_STATE(58)] = 4874,
    [SMALL_STATE(59)] = 4951,
    [SMALL_STATE(60)] = 5022,
    [SMALL_STATE(61)] = 5093,
    [SMALL_STATE(62)] = 5127,
    [SMALL_STATE(63)] = 5161,
    [SMALL_STATE(64)] = 5195,
    [SMALL_STATE(65)] = 5229,
    [SMALL_STATE(66)] = 5297,
    [SMALL_STATE(67)] = 5365,
    [SMALL_STATE(68)] = 5430,
    [SMALL_STATE(69)] = 5461,
    [SMALL_STATE(70)] = 5492,
    [SMALL_STATE(71)] = 5523,
    [SMALL_STATE(72)] = 5554,
    [SMALL_STATE(73)] = 5585,
    [SMALL_STATE(74)] = 5650,
    [SMALL_STATE(75)] = 5681,
    [SMALL_STATE(76)] = 5743,
    [SMALL_STATE(77)] = 5805,
    [SMALL_STATE(78)] = 5864,
    [SMALL_STATE(79)] = 5895,
    [SMALL_STATE(80)] = 5926,
    [SMALL_STATE(81)] = 5957,
    [SMALL_STATE(82)] = 6016,
    [SMALL_STATE(83)] = 6072,
    [SMALL_STATE(84)] = 6128,
    [SMALL_STATE(85)] = 6157,
    [SMALL_STATE(86)] = 6186,
    [SMALL_STATE(87)] = 6214,
    [SMALL_STATE(88)] = 6242,
    [SMALL_STATE(89)] = 6270,
    [SMALL_STATE(90)] = 6300,
    [SMALL_STATE(91)] = 6328,
    [SMALL_STATE(92)] = 6356,
    [SMALL_STATE(93)] = 6384,
    [SMALL_STATE(94)] = 6412,
    [SMALL_STATE(95)] = 6440,
    [SMALL_STATE(96)] = 6488,
    [SMALL_STATE(97)] = 6516,
    [SMALL_STATE(98)] = 6544,
    [SMALL_STATE(99)] = 6572,
    [SMALL_STATE(100)] = 6600,
    [SMALL_STATE(101)] = 6630,
    [SMALL_STATE(102)] = 6661,
    [SMALL_STATE(103)] = 6692,
    [SMALL_STATE(104)] = 6735,
    [SMALL_STATE(105)] = 6778,
    [SMALL_STATE(106)] = 6804,
    [SMALL_STATE(107)] = 6830,
    [SMALL_STATE(108)] = 6853,
    [SMALL_STATE(109)] = 6888,
    [SMALL_STATE(110)] = 6913,
    [SMALL_STATE(111)] = 6938,
    [SMALL_STATE(112)] = 6961,
    [SMALL_STATE(113)] = 6985,
    [SMALL_STATE(114)] = 7009,
    [SMALL_STATE(115)] = 7033,
    [SMALL_STATE(116)] = 7057,
    [SMALL_STATE(117)] = 7092,
    [SMALL_STATE(118)] = 7120,
    [SMALL_STATE(119)] = 7140,
    [SMALL_STATE(120)] = 7160,
    [SMALL_STATE(121)] = 7180,
    [SMALL_STATE(122)] = 7199,
    [SMALL_STATE(123)] = 7218,
    [SMALL_STATE(124)] = 7249,
    [SMALL_STATE(125)] = 7268,
    [SMALL_STATE(126)] = 7287,
    [SMALL_STATE(127)] = 7305,
    [SMALL_STATE(128)] = 7331,
    [SMALL_STATE(129)] = 7347,
    [SMALL_STATE(130)] = 7370,
    [SMALL_STATE(131)] = 7395,
    [SMALL_STATE(132)] = 7414,
    [SMALL_STATE(133)] = 7431,
    [SMALL_STATE(134)] = 7456,
    [SMALL_STATE(135)] = 7477,
    [SMALL_STATE(136)] = 7498,
    [SMALL_STATE(137)] = 7515,
    [SMALL_STATE(138)] = 7540,
    [SMALL_STATE(139)] = 7565,
    [SMALL_STATE(140)] = 7590,
    [SMALL_STATE(141)] = 7615,
    [SMALL_STATE(142)] = 7637,
    [SMALL_STATE(143)] = 7657,
    [SMALL_STATE(144)] = 7679,
    [SMALL_STATE(145)] = 7701,
    [SMALL_STATE(146)] = 7723,
    [SMALL_STATE(147)] = 7745,
    [SMALL_STATE(148)] = 7759,
    [SMALL_STATE(149)] = 7779,
    [SMALL_STATE(150)] = 7793,
    [SMALL_STATE(151)] = 7815,
    [SMALL_STATE(152)] = 7835,
    [SMALL_STATE(153)] = 7849,
    [SMALL_STATE(154)] = 7869,
    [SMALL_STATE(155)] = 7889,
    [SMALL_STATE(156)] = 7903,
    [SMALL_STATE(157)] = 7923,
    [SMALL_STATE(158)] = 7945,
    [SMALL_STATE(159)] = 7964,
    [SMALL_STATE(160)] = 7981,
    [SMALL_STATE(161)] = 8000,
    [SMALL_STATE(162)] = 8019,
    [SMALL_STATE(163)] = 8034,
    [SMALL_STATE(164)] = 8047,
    [SMALL_STATE(165)] = 8060,
    [SMALL_STATE(166)] = 8075,
    [SMALL_STATE(167)] = 8088,
    [SMALL_STATE(168)] = 8107,
    [SMALL_STATE(169)] = 8126,
    [SMALL_STATE(170)] = 8145,
    [SMALL_STATE(171)] = 8162,
    [SMALL_STATE(172)] = 8179,
    [SMALL_STATE(173)] = 8198,
    [SMALL_STATE(174)] = 8215,
    [SMALL_STATE(175)] = 8228,
    [SMALL_STATE(176)] = 8241,
    [SMALL_STATE(177)] = 8256,
    [SMALL_STATE(178)] = 8275,
    [SMALL_STATE(179)] = 8294,
    [SMALL_STATE(180)] = 8311,
    [SMALL_STATE(181)] = 8328,
    [SMALL_STATE(182)] = 8345,
    [SMALL_STATE(183)] = 8362,
    [SMALL_STATE(184)] = 8375,
    [SMALL_STATE(185)] = 8390,
    [SMALL_STATE(186)] = 8409,
    [SMALL_STATE(187)] = 8428,
    [SMALL_STATE(188)] = 8445,
    [SMALL_STATE(189)] = 8459,
    [SMALL_STATE(190)] = 8473,
    [SMALL_STATE(191)] = 8485,
    [SMALL_STATE(192)] = 8497,
    [SMALL_STATE(193)] = 8513,
    [SMALL_STATE(194)] = 8529,
    [SMALL_STATE(195)] = 8543,
    [SMALL_STATE(196)] = 8559,
    [SMALL_STATE(197)] = 8575,
    [SMALL_STATE(198)] = 8589,
    [SMALL_STATE(199)] = 8603,
    [SMALL_STATE(200)] = 8615,
    [SMALL_STATE(201)] = 8631,
    [SMALL_STATE(202)] = 8647,
    [SMALL_STATE(203)] = 8663,
    [SMALL_STATE(204)] = 8679,
    [SMALL_STATE(205)] = 8695,
    [SMALL_STATE(206)] = 8711,
    [SMALL_STATE(207)] = 8727,
    [SMALL_STATE(208)] = 8743,
    [SMALL_STATE(209)] = 8755,
    [SMALL_STATE(210)] = 8767,
    [SMALL_STATE(211)] = 8779,
    [SMALL_STATE(212)] = 8791,
    [SMALL_STATE(213)] = 8803,
    [SMALL_STATE(214)] = 8819,
    [SMALL_STATE(215)] = 8831,
    [SMALL_STATE(216)] = 8847,
    [SMALL_STATE(217)] = 8863,
    [SMALL_STATE(218)] = 8877,
    [SMALL_STATE(219)] = 8891,
    [SMALL_STATE(220)] = 8907,
    [SMALL_STATE(221)] = 8921,
    [SMALL_STATE(222)] = 8935,
    [SMALL_STATE(223)] = 8947,
    [SMALL_STATE(224)] = 8959,
    [SMALL_STATE(225)] = 8973,
    [SMALL_STATE(226)] = 8985,
    [SMALL_STATE(227)] = 8997,
    [SMALL_STATE(228)] = 9013,
    [SMALL_STATE(229)] = 9025,
    [SMALL_STATE(230)] = 9041,
    [SMALL_STATE(231)] = 9057,
    [SMALL_STATE(232)] = 9071,
    [SMALL_STATE(233)] = 9087,
    [SMALL_STATE(234)] = 9099,
    [SMALL_STATE(235)] = 9115,
    [SMALL_STATE(236)] = 9127,
    [SMALL_STATE(237)] = 9143,
    [SMALL_STATE(238)] = 9157,
    [SMALL_STATE(239)] = 9173,
    [SMALL_STATE(240)] = 9185,
    [SMALL_STATE(241)] = 9201,
    [SMALL_STATE(242)] = 9215,
    [SMALL_STATE(243)] = 9231,
    [SMALL_STATE(244)] = 9247,
    [SMALL_STATE(245)] = 9263,
    [SMALL_STATE(246)] = 9279,
    [SMALL_STATE(247)] = 9295,
    [SMALL_STATE(248)] = 9311,
    [SMALL_STATE(249)] = 9327,
    [SMALL_STATE(250)] = 9341,
    [SMALL_STATE(251)] = 9357,
    [SMALL_STATE(252)] = 9373,
    [SMALL_STATE(253)] = 9385,
    [SMALL_STATE(254)] = 9401,
    [SMALL_STATE(255)] = 9417,
    [SMALL_STATE(256)] = 9431,
    [SMALL_STATE(257)] = 9443,
    [SMALL_STATE(258)] = 9459,
    [SMALL_STATE(259)] = 9471,
    [SMALL_STATE(260)] = 9483,
    [SMALL_STATE(261)] = 9499,
    [SMALL_STATE(262)] = 9515,
    [SMALL_STATE(263)] = 9526,
    [SMALL_STATE(264)] = 9539,
    [SMALL_STATE(265)] = 9550,
    [SMALL_STATE(266)] = 9563,
    [SMALL_STATE(267)] = 9576,
    [SMALL_STATE(268)] = 9589,
    [SMALL_STATE(269)] = 9602,
    [SMALL_STATE(270)] = 9615,
    [SMALL_STATE(271)] = 9628,
    [SMALL_STATE(272)] = 9639,
    [SMALL_STATE(273)] = 9650,
    [SMALL_STATE(274)] = 9661,
    [SMALL_STATE(275)] = 9672,
    [SMALL_STATE(276)] = 9683,
    [SMALL_STATE(277)] = 9694,
    [SMALL_STATE(278)] = 9705,
    [SMALL_STATE(279)] = 9716,
    [SMALL_STATE(280)] = 9729,
    [SMALL_STATE(281)] = 9742,
    [SMALL_STATE(282)] = 9753,
    [SMALL_STATE(283)] = 9766,
    [SMALL_STATE(284)] = 9777,
    [SMALL_STATE(285)] = 9788,
    [SMALL_STATE(286)] = 9799,
    [SMALL_STATE(287)] = 9812,
    [SMALL_STATE(288)] = 9823,
    [SMALL_STATE(289)] = 9834,
    [SMALL_STATE(290)] = 9847,
    [SMALL_STATE(291)] = 9858,
    [SMALL_STATE(292)] = 9871,
    [SMALL_STATE(293)] = 9882,
    [SMALL_STATE(294)] = 9893,
    [SMALL_STATE(295)] = 9906,
    [SMALL_STATE(296)] = 9917,
    [SMALL_STATE(297)] = 9928,
    [SMALL_STATE(298)] = 9939,
    [SMALL_STATE(299)] = 9950,
    [SMALL_STATE(300)] = 9963,
    [SMALL_STATE(301)] = 9974,
    [SMALL_STATE(302)] = 9985,
    [SMALL_STATE(303)] = 9996,
    [SMALL_STATE(304)] = 10007,
    [SMALL_STATE(305)] = 10018,
    [SMALL_STATE(306)] = 10031,
    [SMALL_STATE(307)] = 10042,
    [SMALL_STATE(308)] = 10053,
    [SMALL_STATE(309)] = 10066,
    [SMALL_STATE(310)] = 10077,
    [SMALL_STATE(311)] = 10090,
    [SMALL_STATE(312)] = 10101,
    [SMALL_STATE(313)] = 10114,
    [SMALL_STATE(314)] = 10127,
    [SMALL_STATE(315)] = 10138,
    [SMALL_STATE(316)] = 10151,
    [SMALL_STATE(317)] = 10162,
    [SMALL_STATE(318)] = 10173,
    [SMALL_STATE(319)] = 10184,
    [SMALL_STATE(320)] = 10195,
    [SMALL_STATE(321)] = 10206,
    [SMALL_STATE(322)] = 10219,
    [SMALL_STATE(323)] = 10232,
    [SMALL_STATE(324)] = 10243,
    [SMALL_STATE(325)] = 10254,
    [SMALL_STATE(326)] = 10265,
    [SMALL_STATE(327)] = 10275,
    [SMALL_STATE(328)] = 10285,
    [SMALL_STATE(329)] = 10295,
    [SMALL_STATE(330)] = 10305,
    [SMALL_STATE(331)] = 10315,
    [SMALL_STATE(332)] = 10325,
    [SMALL_STATE(333)] = 10335,
    [SMALL_STATE(334)] = 10345,
    [SMALL_STATE(335)] = 10355,
    [SMALL_STATE(336)] = 10365,
    [SMALL_STATE(337)] = 10375,
    [SMALL_STATE(338)] = 10385,
    [SMALL_STATE(339)] = 10395,
    [SMALL_STATE(340)] = 10405,
    [SMALL_STATE(341)] = 10415,
    [SMALL_STATE(342)] = 10425,
    [SMALL_STATE(343)] = 10435,
    [SMALL_STATE(344)] = 10445,
    [SMALL_STATE(345)] = 10455,
    [SMALL_STATE(346)] = 10465,
    [SMALL_STATE(347)] = 10475,
    [SMALL_STATE(348)] = 10485,
    [SMALL_STATE(349)] = 10495,
    [SMALL_STATE(350)] = 10505,
    [SMALL_STATE(351)] = 10515,
    [SMALL_STATE(352)] = 10525,
    [SMALL_STATE(353)] = 10535,
    [SMALL_STATE(354)] = 10545,
    [SMALL_STATE(355)] = 10555,
    [SMALL_STATE(356)] = 10565,
    [SMALL_STATE(357)] = 10575,
    [SMALL_STATE(358)] = 10585,
    [SMALL_STATE(359)] = 10595,
    [SMALL_STATE(360)] = 10605,
    [SMALL_STATE(361)] = 10615,
    [SMALL_STATE(362)] = 10625,
    [SMALL_STATE(363)] = 10635,
    [SMALL_STATE(364)] = 10645,
    [SMALL_STATE(365)] = 10655,
    [SMALL_STATE(366)] = 10665,
    [SMALL_STATE(367)] = 10675,
    [SMALL_STATE(368)] = 10685,
    [SMALL_STATE(369)] = 10695,
    [SMALL_STATE(370)] = 10705,
    [SMALL_STATE(371)] = 10715,
    [SMALL_STATE(372)] = 10725,
    [SMALL_STATE(373)] = 10735,
    [SMALL_STATE(374)] = 10745,
    [SMALL_STATE(375)] = 10755,
    [SMALL_STATE(376)] = 10765,
    [SMALL_STATE(377)] = 10775,
    [SMALL_STATE(378)] = 10785,
    [SMALL_STATE(379)] = 10795,
    [SMALL_STATE(380)] = 10805,
    [SMALL_STATE(381)] = 10815,
    [SMALL_STATE(382)] = 10825,
    [SMALL_STATE(383)] = 10835,
    [SMALL_STATE(384)] = 10845,
    [SMALL_STATE(385)] = 10855,
    [SMALL_STATE(386)] = 10865,
    [SMALL_STATE(387)] = 10875,
    [SMALL_STATE(388)] = 10885,
    [SMALL_STATE(389)] = 10895,
    [SMALL_STATE(390)] = 10905,
    [SMALL_STATE(391)] = 10915,
    [SMALL_STATE(392)] = 10925,
    [SMALL_STATE(393)] = 10935,
    [SMALL_STATE(394)] = 10945,
    [SMALL_STATE(395)] = 10955,
    [SMALL_STATE(396)] = 10965,
    [SMALL_STATE(397)] = 10975,
    [SMALL_STATE(398)] = 10985,
    [SMALL_STATE(399)] = 10995,
    [SMALL_STATE(400)] = 11005,
    [SMALL_STATE(401)] = 11015,
    [SMALL_STATE(402)] = 11025,
    [SMALL_STATE(403)] = 11035,
    [SMALL_STATE(404)] = 11045,
    [SMALL_STATE(405)] = 11055,
    [SMALL_STATE(406)] = 11065,
    [SMALL_STATE(407)] = 11075,
    [SMALL_STATE(408)] = 11085,
    [SMALL_STATE(409)] = 11095,
    [SMALL_STATE(410)] = 11105,
    [SMALL_STATE(411)] = 11115,
    [SMALL_STATE(412)] = 11125,
    [SMALL_STATE(413)] = 11135,
    [SMALL_STATE(414)] = 11145,
    [SMALL_STATE(415)] = 11155,
    [SMALL_STATE(416)] = 11165,
    [SMALL_STATE(417)] = 11175,
    [SMALL_STATE(418)] = 11185,
    [SMALL_STATE(419)] = 11195,
    [SMALL_STATE(420)] = 11205,
    [SMALL_STATE(421)] = 11215,
    [SMALL_STATE(422)] = 11225,
    [SMALL_STATE(423)] = 11235,
    [SMALL_STATE(424)] = 11245,
    [SMALL_STATE(425)] = 11255,
    [SMALL_STATE(426)] = 11265,
    [SMALL_STATE(427)] = 11275,
    [SMALL_STATE(428)] = 11285,
    [SMALL_STATE(429)] = 11295,
    [SMALL_STATE(430)] = 11305,
    [SMALL_STATE(431)] = 11315,
    [SMALL_STATE(432)] = 11325,
    [SMALL_STATE(433)] = 11335,
    [SMALL_STATE(434)] = 11345,
    [SMALL_STATE(435)] = 11355,
    [SMALL_STATE(436)] = 11365,
    [SMALL_STATE(437)] = 11375,
    [SMALL_STATE(438)] = 11385,
    [SMALL_STATE(439)] = 11395,
    [SMALL_STATE(440)] = 11405,
    [SMALL_STATE(441)] = 11415,
    [SMALL_STATE(442)] = 11425,
    [SMALL_STATE(443)] = 11435,
    [SMALL_STATE(444)] = 11445,
    [SMALL_STATE(445)] = 11455,
    [SMALL_STATE(446)] = 11465,
    [SMALL_STATE(447)] = 11475,
    [SMALL_STATE(448)] = 11485,
    [SMALL_STATE(449)] = 11495,
    [SMALL_STATE(450)] = 11505,
    [SMALL_STATE(451)] = 11515,
    [SMALL_STATE(452)] = 11525,
    [SMALL_STATE(453)] = 11535,
    [SMALL_STATE(454)] = 11545,
    [SMALL_STATE(455)] = 11555,
    [SMALL_STATE(456)] = 11565,
    [SMALL_STATE(457)] = 11575,
    [SMALL_STATE(458)] = 11585,
    [SMALL_STATE(459)] = 11595,
    [SMALL_STATE(460)] = 11605,
    [SMALL_STATE(461)] = 11615,
    [SMALL_STATE(462)] = 11625,
    [SMALL_STATE(463)] = 11635,
    [SMALL_STATE(464)] = 11645,
    [SMALL_STATE(465)] = 11655,
    [SMALL_STATE(466)] = 11665,
    [SMALL_STATE(467)] = 11675,
    [SMALL_STATE(468)] = 11685,
    [SMALL_STATE(469)] = 11695,
    [SMALL_STATE(470)] = 11705,
    [SMALL_STATE(471)] = 11715,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [47] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(427),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(252),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(426),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(425),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(423),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [85] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [89] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [91] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [93] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(469),
    [96] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(265),
    [99] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(462),
    [102] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(461),
    [105] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(460),
    [108] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(459),
    [111] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(458),
    [114] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(457),
    [117] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(456),
    [120] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(455),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(16),
    [126] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(453),
    [129] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(451),
    [132] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(268),
    [135] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(155),
    [138] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(447),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(445),
    [144] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(34),
    [147] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(228),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(444),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(163),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(163),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(190),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(427),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [171] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(252),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(252),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(164),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(426),
    [183] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(162),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(425),
    [189] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(423),
    [192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [194] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(44),
    [197] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(362),
    [200] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(361),
    [203] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(85),
    [206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [218] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(461),
    [220] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(460),
    [222] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(457),
    [224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(379),
    [230] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [232] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(412),
    [240] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(410),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(354),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(163),
    [253] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(163),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(412),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(410),
    [262] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [265] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(252),
    [271] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(252),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(164),
    [277] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(426),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(162),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(425),
    [286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [288] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(468),
    [291] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(459),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(354),
    [297] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(85),
    [300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [306] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [312] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(44),
    [315] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(362),
    [318] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(361),
    [321] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [329] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [333] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [337] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 7),
    [339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 7),
    [341] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [345] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [349] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [353] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(119),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(263),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [377] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [379] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [385] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [389] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [405] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [409] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [413] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [421] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [425] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [429] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [433] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [439] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [443] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [447] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [451] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [455] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [461] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [465] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 8),
    [467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 8),
    [469] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [473] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [477] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [481] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [483] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [485] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [491] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [497] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [503] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [507] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [509] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [515] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [525] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(155),
    [528] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(447),
    [531] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(445),
    [534] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [538] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [540] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [552] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [554] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [558] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [566] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [574] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(386),
    [577] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(54),
    [580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [586] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(49),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [635] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(228),
    [638] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(444),
    [641] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [643] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(347),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [650] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [654] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(237),
    [657] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(237),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [672] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [678] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [690] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(237),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [694] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(314),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [703] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [711] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(313),
    [714] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [716] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [718] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [722] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(170),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [733] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(279),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [738] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(167),
    [741] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [763] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(187),
    [766] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [774] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [778] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [780] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [782] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [786] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [804] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(153),
    [807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [811] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(262),
    [814] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [816] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [818] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(310),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [827] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(150),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [834] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [840] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [842] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [844] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [848] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [852] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [856] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [860] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [862] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [866] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(22),
    [869] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [873] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [877] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [889] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(205),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [902] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [904] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [920] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 9),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [930] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [938] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 9),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [958] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [978] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [986] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [992] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [994] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1068] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(360),
    [1070] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(471),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1214] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1230] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_idl_external_scanner_create(void);
void tree_sitter_idl_external_scanner_destroy(void *);
bool tree_sitter_idl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_idl_external_scanner_serialize(void *, char *);
void tree_sitter_idl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl() {
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
        .external_scanner = {
            &ts_external_scanner_states[0][0],
            ts_external_scanner_symbol_map,
            tree_sitter_idl_external_scanner_create,
            tree_sitter_idl_external_scanner_destroy,
            tree_sitter_idl_external_scanner_scan,
            tree_sitter_idl_external_scanner_serialize,
            tree_sitter_idl_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
