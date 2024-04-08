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
#define STATE_COUNT 482
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 234
#define ALIAS_COUNT 3
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

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
    anon_sym_any = 20,
    anon_sym_COMMA = 21,
    anon_sym_sequence = 22,
    anon_sym_map = 23,
    anon_sym_PIPE = 24,
    anon_sym_CARET = 25,
    anon_sym_DOLLAR = 26,
    anon_sym_GT_GT = 27,
    anon_sym_LT_LT = 28,
    anon_sym_PLUS = 29,
    anon_sym_DASH = 30,
    anon_sym_STAR = 31,
    anon_sym_SLASH = 32,
    anon_sym_PERCENT = 33,
    anon_sym_LPAREN = 34,
    anon_sym_RPAREN = 35,
    anon_sym_TILDE = 36,
    anon_sym_L = 37,
    anon_sym_DQUOTE = 38,
    aux_sym_string_literal_token1 = 39,
    anon_sym_SQUOTE = 40,
    aux_sym_char_literal_token1 = 41,
    anon_sym_TRUE = 42,
    anon_sym_FALSE = 43,
    sym_number_literal = 44,
    aux_sym_preproc_call_token1 = 45,
    sym_preproc_directive = 46,
    sym_preproc_arg = 47,
    anon_sym_exception = 48,
    anon_sym_LBRACE = 49,
    anon_sym_RBRACE = 50,
    anon_sym_SEMI = 51,
    anon_sym_interface = 52,
    anon_sym_local = 53,
    anon_sym_COLON = 54,
    anon_sym_void = 55,
    anon_sym_in = 56,
    anon_sym_out = 57,
    anon_sym_inout = 58,
    anon_sym_raises = 59,
    anon_sym_readonly = 60,
    anon_sym_attribute = 61,
    anon_sym_getraises = 62,
    anon_sym_setraises = 63,
    anon_sym_bitset = 64,
    anon_sym_bitfield = 65,
    anon_sym_bitmask = 66,
    anon_sym_ATannotation = 67,
    anon_sym_default = 68,
    anon_sym_AT = 69,
    anon_sym_LBRACK = 70,
    anon_sym_RBRACK = 71,
    anon_sym_EQ = 72,
    anon_sym_native = 73,
    anon_sym_module = 74,
    anon_sym_struct = 75,
    anon_sym_enum = 76,
    anon_sym_ATdefault_literal = 77,
    anon_sym_ATignore_literal_names = 78,
    anon_sym_union = 79,
    anon_sym_switch = 80,
    anon_sym_case = 81,
    anon_sym_typedef = 82,
    anon_sym_POUNDdefine = 83,
    aux_sym_predefine_token1 = 84,
    sym_dds_service = 85,
    anon_sym_ATDDSRequestTopic = 86,
    anon_sym_name = 87,
    anon_sym_ATDDSReplyTopic = 88,
    anon_sym_const = 89,
    sym_optional = 90,
    sym_key = 91,
    sym_must_understand = 92,
    sym_non_serialized = 93,
    sym_id = 94,
    sym_external = 95,
    anon_sym_AThashid = 96,
    anon_sym_LPAREN_DQUOTE = 97,
    anon_sym_ATtry_construct = 98,
    sym_final = 99,
    anon_sym_ATdata_representation = 100,
    anon_sym_XCDR = 101,
    anon_sym_XCDR2 = 102,
    sym_identifier = 103,
    anon_sym_SLASH_SLASH = 104,
    aux_sym_comment_token1 = 105,
    sym__eof = 106,
    sym_specification = 107,
    sym_unsigned_int = 108,
    sym_fixed_pt_const_type = 109,
    sym_integer_type = 110,
    sym_signed_int = 111,
    sym_floating_pt_type = 112,
    sym_char_type = 113,
    sym_scoped_name = 114,
    sym_string_type = 115,
    sym_type_spec = 116,
    sym_simple_type_spec = 117,
    sym_base_type_spec = 118,
    sym_any_type = 119,
    sym_fixed_pt_type = 120,
    sym_template_type_spec = 121,
    sym_sequence_type = 122,
    sym_map_type = 123,
    sym_const_expr = 124,
    sym_or_expr = 125,
    sym_xor_expr = 126,
    sym_and_expr = 127,
    sym_shift_expr = 128,
    sym_add_expr = 129,
    sym_mult_expr = 130,
    sym_unary_expr = 131,
    sym_unary_operator = 132,
    sym_literal = 133,
    sym_string_literal = 134,
    sym_char_literal = 135,
    sym_boolean_literal = 136,
    sym_preproc_call = 137,
    sym_except_dcl = 138,
    sym_interface_dcl = 139,
    sym_interface_forward_dcl = 140,
    sym_interface_def = 141,
    sym_interface_header = 142,
    sym_interface_inheritance_spec = 143,
    sym_interface_name = 144,
    sym_interface_body = 145,
    sym_export = 146,
    sym_op_dcl = 147,
    sym_op_type_spec = 148,
    sym_parameter_dcls = 149,
    sym_param_dcl = 150,
    sym_param_attribute = 151,
    sym_raises_expr = 152,
    sym_attr_dcl = 153,
    sym_readonly_attr_spec = 154,
    sym_readonly_attr_declarator = 155,
    sym_attr_spec = 156,
    sym_attr_declarator = 157,
    sym_attr_raises_expr = 158,
    sym_get_excep_expr = 159,
    sym_set_excep_expr = 160,
    sym_exception_list = 161,
    sym_interface_anno = 162,
    sym_bitset_dcl = 163,
    sym_bitfield = 164,
    sym_bitfield_spec = 165,
    sym_destination_type = 166,
    sym_bitmask_dcl = 167,
    sym_bit_value = 168,
    sym_annotation_dcl = 169,
    sym_annotation_body = 170,
    sym_annotation_member = 171,
    sym_annotation_member_type = 172,
    sym_any_const_type = 173,
    sym__definition = 174,
    sym_native_dcl = 175,
    sym_module_dcl = 176,
    sym_struct_forward_dcl = 177,
    sym_struct_def = 178,
    sym_member = 179,
    sym_default = 180,
    sym_enum_dcl = 181,
    sym_enumerator = 182,
    sym_enum_modifier = 183,
    sym_enum_anno = 184,
    sym_union_forward_dcl = 185,
    sym_union_def = 186,
    sym_case = 187,
    sym_case_label = 188,
    sym_element_spec = 189,
    sym_switch_type_spec = 190,
    sym_typedef_dcl = 191,
    sym_predefine = 192,
    sym_dds_request_topic = 193,
    sym_dds_reply_topic = 194,
    sym_const_dcl = 195,
    sym_const_type = 196,
    sym_hashid = 197,
    sym_try_construct = 198,
    sym_data_representation = 199,
    sym_struct_modifier = 200,
    sym_simple_declarator = 201,
    sym_declarator = 202,
    sym_declarators = 203,
    sym_array_declarator = 204,
    sym_positive_int_const = 205,
    sym_fixed_array_size = 206,
    sym_type_declarator = 207,
    sym_any_declarators = 208,
    sym_any_declarator = 209,
    sym_comment = 210,
    aux_sym_specification_repeat1 = 211,
    aux_sym_specification_repeat2 = 212,
    aux_sym_except_dcl_repeat1 = 213,
    aux_sym_interface_def_repeat1 = 214,
    aux_sym_interface_inheritance_spec_repeat1 = 215,
    aux_sym_interface_body_repeat1 = 216,
    aux_sym_parameter_dcls_repeat1 = 217,
    aux_sym_raises_expr_repeat1 = 218,
    aux_sym_readonly_attr_declarator_repeat1 = 219,
    aux_sym_attr_raises_expr_repeat1 = 220,
    aux_sym_bitset_dcl_repeat1 = 221,
    aux_sym_bitfield_repeat1 = 222,
    aux_sym_bitmask_dcl_repeat1 = 223,
    aux_sym_annotation_body_repeat1 = 224,
    aux_sym_struct_def_repeat1 = 225,
    aux_sym_member_repeat1 = 226,
    aux_sym_enum_dcl_repeat1 = 227,
    aux_sym_enumerator_repeat1 = 228,
    aux_sym_union_def_repeat1 = 229,
    aux_sym_data_representation_repeat1 = 230,
    aux_sym_declarators_repeat1 = 231,
    aux_sym_array_declarator_repeat1 = 232,
    aux_sym_any_declarators_repeat1 = 233,
    alias_sym_data_rep = 234,
    alias_sym_hashid_value = 235,
    alias_sym_try_construct_value = 236,
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
    [aux_sym_preproc_call_token1] = "preproc_call_token1",
    [sym_preproc_directive] = "preproc_directive",
    [sym_preproc_arg] = "preproc_arg",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_SEMI] = ";",
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [anon_sym_COLON] = ":",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_ATannotation] = "@annotation",
    [anon_sym_default] = "default",
    [anon_sym_AT] = "@",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_EQ] = "=",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_enum] = "enum",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
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
    [sym_any_type] = "any_type",
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
    [sym_preproc_call] = "preproc_call",
    [sym_except_dcl] = "except_dcl",
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
    [sym_interface_anno] = "interface_anno",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bit_value] = "bit_value",
    [sym_annotation_dcl] = "annotation_dcl",
    [sym_annotation_body] = "annotation_body",
    [sym_annotation_member] = "annotation_member",
    [sym_annotation_member_type] = "annotation_member_type",
    [sym_any_const_type] = "any_const_type",
    [sym__definition] = "_definition",
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
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
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
    [aux_sym_specification_repeat2] = "specification_repeat2",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_attr_raises_expr_repeat1] = "attr_raises_expr_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_annotation_body_repeat1] = "annotation_body_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
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
    [aux_sym_preproc_call_token1] = aux_sym_preproc_call_token1,
    [sym_preproc_directive] = sym_preproc_directive,
    [sym_preproc_arg] = sym_preproc_arg,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
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
    [sym_any_type] = sym_any_type,
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
    [sym_preproc_call] = sym_preproc_call,
    [sym_except_dcl] = sym_except_dcl,
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
    [sym_interface_anno] = sym_interface_anno,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bit_value] = sym_bit_value,
    [sym_annotation_dcl] = sym_annotation_dcl,
    [sym_annotation_body] = sym_annotation_body,
    [sym_annotation_member] = sym_annotation_member,
    [sym_annotation_member_type] = sym_annotation_member_type,
    [sym_any_const_type] = sym_any_const_type,
    [sym__definition] = sym__definition,
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
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
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
    [aux_sym_specification_repeat2] = aux_sym_specification_repeat2,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_attr_raises_expr_repeat1] = aux_sym_attr_raises_expr_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_annotation_body_repeat1] = aux_sym_annotation_body_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
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
    [aux_sym_preproc_call_token1] = {
        .visible = false,
        .named = false,
    },
    [sym_preproc_directive] = {
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
    [anon_sym_SEMI] = {
        .visible = true,
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
    [anon_sym_COLON] = {
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
    [anon_sym_ATannotation] = {
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
    [sym_any_type] = {
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
    [sym_preproc_call] = {
        .visible = true,
        .named = true,
    },
    [sym_except_dcl] = {
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
    [sym_interface_anno] = {
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
    [sym_any_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym__definition] = {
        .visible = false,
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
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
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
    [aux_sym_specification_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_except_dcl_repeat1] = {
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
    [aux_sym_annotation_body_repeat1] = {
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
    [aux_sym_union_def_repeat1] = {
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
    field_argument = 1,
    field_directive = 2,
    field_identifier = 3,
    field_parent = 4,
    field_type = 5,
    field_value = 6,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_argument] = "argument",
    [field_directive] = "directive",
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 2 },
    [5] = { .index = 3, .length = 2 },
    [6] = { .index = 5, .length = 1 },
    [7] = { .index = 6, .length = 1 },
    [9] = { .index = 7, .length = 2 },
    [10] = { .index = 9, .length = 1 },
    [11] = { .index = 10, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_directive, 0 },
    [1] = { field_argument, 1 },
    { field_directive, 0 },
    [3] = { field_identifier, 1 },
    { field_type, 0 },
    [5] = { field_parent, 3 },
    [6] = { field_value, 1 },
    [7] = { field_identifier, 2 },
    { field_type, 1 },
    [9] = { field_value, 2 },
    [10] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [3] = {
        [2] = alias_sym_data_rep,
    },
    [4] = {
        [1] = alias_sym_try_construct_value,
    },
    [8] = {
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
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 42,
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
    [57] = 55,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 61,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 68,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 76,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 83,
    [86] = 86,
    [87] = 86,
    [88] = 88,
    [89] = 88,
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
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 109,
    [110] = 109,
    [111] = 111,
    [112] = 112,
    [113] = 91,
    [114] = 104,
    [115] = 102,
    [116] = 116,
    [117] = 90,
    [118] = 118,
    [119] = 108,
    [120] = 120,
    [121] = 107,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 111,
    [128] = 112,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 118,
    [137] = 137,
    [138] = 138,
    [139] = 135,
    [140] = 120,
    [141] = 138,
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
    [165] = 165,
    [166] = 125,
    [167] = 123,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 176,
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
    [207] = 194,
    [208] = 208,
    [209] = 209,
    [210] = 130,
    [211] = 211,
    [212] = 208,
    [213] = 90,
    [214] = 214,
    [215] = 215,
    [216] = 91,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 129,
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
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 199,
    [246] = 203,
    [247] = 247,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 260,
    [261] = 261,
    [262] = 262,
    [263] = 263,
    [264] = 264,
    [265] = 265,
    [266] = 266,
    [267] = 267,
    [268] = 268,
    [269] = 269,
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
    [319] = 238,
    [320] = 320,
    [321] = 321,
    [322] = 322,
    [323] = 323,
    [324] = 134,
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
    [421] = 421,
    [422] = 422,
    [423] = 423,
    [424] = 424,
    [425] = 425,
    [426] = 426,
    [427] = 427,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 238,
    [436] = 436,
    [437] = 437,
    [438] = 321,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 284,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 448,
    [449] = 449,
    [450] = 316,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 454,
    [455] = 310,
    [456] = 456,
    [457] = 452,
    [458] = 458,
    [459] = 459,
    [460] = 439,
    [461] = 461,
    [462] = 414,
    [463] = 463,
    [464] = 464,
    [465] = 465,
    [466] = 466,
    [467] = 467,
    [468] = 468,
    [469] = 469,
    [470] = 470,
    [471] = 471,
    [472] = 472,
    [473] = 473,
    [474] = 439,
    [475] = 441,
    [476] = 425,
    [477] = 406,
    [478] = 467,
    [479] = 479,
    [480] = 424,
    [481] = 481,
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
                ADVANCE(450);
            if(lookahead == '"')
                ADVANCE(509);
            if(lookahead == '#')
                ADVANCE(126);
            if(lookahead == '$')
                ADVANCE(494);
            if(lookahead == '%')
                ADVANCE(503);
            if(lookahead == '\'')
                ADVANCE(511);
            if(lookahead == '(')
                ADVANCE(504);
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == '*')
                ADVANCE(501);
            if(lookahead == '+')
                ADVANCE(497);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(499);
            if(lookahead == '/')
                ADVANCE(502);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(584);
            if(lookahead == '<')
                ADVANCE(482);
            if(lookahead == '=')
                ADVANCE(608);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(605);
            if(lookahead == 'F')
                ADVANCE(513);
            if(lookahead == 'L')
                ADVANCE(507);
            if(lookahead == 'T')
                ADVANCE(515);
            if(lookahead == 'X')
                ADVANCE(514);
            if(lookahead == '[')
                ADVANCE(606);
            if(lookahead == '\\')
                SKIP(443)
            if(lookahead == ']')
                ADVANCE(607);
            if(lookahead == '^')
                ADVANCE(493);
            if(lookahead == 'a')
                ADVANCE(527);
            if(lookahead == 'b')
                ADVANCE(526);
            if(lookahead == 'c')
                ADVANCE(516);
            if(lookahead == 'd')
                ADVANCE(522);
            if(lookahead == 'e')
                ADVANCE(530);
            if(lookahead == 'f')
                ADVANCE(525);
            if(lookahead == 'g')
                ADVANCE(524);
            if(lookahead == 'i')
                ADVANCE(528);
            if(lookahead == 'l')
                ADVANCE(531);
            if(lookahead == 'm')
                ADVANCE(517);
            if(lookahead == 'n')
                ADVANCE(518);
            if(lookahead == 'o')
                ADVANCE(521);
            if(lookahead == 'r')
                ADVANCE(519);
            if(lookahead == 's')
                ADVANCE(523);
            if(lookahead == 't')
                ADVANCE(533);
            if(lookahead == 'u')
                ADVANCE(529);
            if(lookahead == 'v')
                ADVANCE(532);
            if(lookahead == 'w')
                ADVANCE(520);
            if(lookahead == '{')
                ADVANCE(582);
            if(lookahead == '|')
                ADVANCE(492);
            if(lookahead == '}')
                ADVANCE(583);
            if(lookahead == '~')
                ADVANCE(506);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(47)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                ADVANCE(568);
            if(lookahead == '\r')
                ADVANCE(28);
            if(lookahead == '/')
                ADVANCE(577);
            if(lookahead == '\\')
                ADVANCE(575);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(578);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                ADVANCE(568);
            if(lookahead == '\r')
                ADVANCE(27);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(568);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(568);
            if(lookahead == '/')
                ADVANCE(577);
            if(lookahead == '\\')
                ADVANCE(575);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(578);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(29)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(771);
            if(lookahead == '\r')
                ADVANCE(770);
            if(lookahead == '\\')
                ADVANCE(774);
            if(lookahead != 0)
                ADVANCE(773);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == ' ')
                ADVANCE(257);
            END_STATE();
        case 37:
            if(lookahead == '"')
                ADVANCE(509);
            if(lookahead == '\'')
                ADVANCE(511);
            if(lookahead == '(')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(498);
            if(lookahead == '-')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '0')
                ADVANCE(545);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == 'F')
                ADVANCE(650);
            if(lookahead == 'L')
                ADVANCE(508);
            if(lookahead == 'T')
                ADVANCE(654);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(506);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 38:
            if(lookahead == '"')
                ADVANCE(642);
            END_STATE();
        case 39:
            if(lookahead == '$')
                ADVANCE(494);
            if(lookahead == '%')
                ADVANCE(503);
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == '*')
                ADVANCE(501);
            if(lookahead == '+')
                ADVANCE(497);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(499);
            if(lookahead == '/')
                ADVANCE(502);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(584);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(142);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(607);
            if(lookahead == '^')
                ADVANCE(493);
            if(lookahead == '{')
                ADVANCE(582);
            if(lookahead == '|')
                ADVANCE(492);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 40:
            if(lookahead == '$')
                ADVANCE(494);
            if(lookahead == '%')
                ADVANCE(503);
            if(lookahead == '*')
                ADVANCE(501);
            if(lookahead == '+')
                ADVANCE(497);
            if(lookahead == '-')
                ADVANCE(499);
            if(lookahead == '/')
                ADVANCE(502);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(58);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '^')
                ADVANCE(493);
            if(lookahead == 't')
                ADVANCE(764);
            if(lookahead == '|')
                ADVANCE(492);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 41:
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '<')
                ADVANCE(481);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 42:
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'i')
                ADVANCE(264);
            if(lookahead == 'o')
                ADVANCE(411);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            END_STATE();
        case 43:
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '<')
                ADVANCE(481);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '@')
                ADVANCE(157);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(607);
            if(lookahead == 'a')
                ADVANCE(713);
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(726);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(728);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(542);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            END_STATE();
        case 45:
            if(lookahead == '/')
                ADVANCE(767);
            END_STATE();
        case 46:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '@')
                ADVANCE(141);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(713);
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(726);
            if(lookahead == 'e')
                ADVANCE(721);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(728);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(677);
            if(lookahead == 'u')
                ADVANCE(717);
            if(lookahead == 'w')
                ADVANCE(669);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(713);
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(726);
            if(lookahead == 'e')
                ADVANCE(721);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(728);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(712);
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(726);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(728);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 'r')
                ADVANCE(687);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'v')
                ADVANCE(731);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(726);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(728);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'w')
                ADVANCE(669);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(732);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'l')
                ADVANCE(735);
            if(lookahead == 's')
                ADVANCE(697);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'w')
                ADVANCE(670);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ';')
                ADVANCE(584);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 's')
                ADVANCE(760);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(30)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(512);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(577);
            if(lookahead == '\\')
                ADVANCE(575);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(578);
            END_STATE();
        case 56:
            if(lookahead == ':')
                ADVANCE(476);
            END_STATE();
        case 57:
            if(lookahead == '<')
                ADVANCE(496);
            END_STATE();
        case 58:
            if(lookahead == '>')
                ADVANCE(495);
            END_STATE();
        case 59:
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 60:
            if(lookahead == 'D')
                ADVANCE(66);
            END_STATE();
        case 61:
            if(lookahead == 'D')
                ADVANCE(62);
            if(lookahead == 'a')
                ADVANCE(284);
            if(lookahead == 'd')
                ADVANCE(100);
            if(lookahead == 'f')
                ADVANCE(223);
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 62:
            if(lookahead == 'D')
                ADVANCE(68);
            END_STATE();
        case 63:
            if(lookahead == 'E')
                ADVANCE(534);
            END_STATE();
        case 64:
            if(lookahead == 'E')
                ADVANCE(536);
            END_STATE();
        case 65:
            if(lookahead == 'L')
                ADVANCE(69);
            END_STATE();
        case 66:
            if(lookahead == 'R')
                ADVANCE(646);
            END_STATE();
        case 67:
            if(lookahead == 'R')
                ADVANCE(152);
            if(lookahead == 'S')
                ADVANCE(176);
            END_STATE();
        case 68:
            if(lookahead == 'S')
                ADVANCE(67);
            END_STATE();
        case 69:
            if(lookahead == 'S')
                ADVANCE(64);
            END_STATE();
        case 70:
            if(lookahead == 'T')
                ADVANCE(302);
            END_STATE();
        case 71:
            if(lookahead == 'T')
                ADVANCE(313);
            END_STATE();
        case 72:
            if(lookahead == 'U')
                ADVANCE(63);
            END_STATE();
        case 73:
            if(lookahead == '_')
                ADVANCE(121);
            END_STATE();
        case 74:
            if(lookahead == '_')
                ADVANCE(256);
            END_STATE();
        case 75:
            if(lookahead == '_')
                ADVANCE(414);
            END_STATE();
        case 76:
            if(lookahead == '_')
                ADVANCE(347);
            END_STATE();
        case 77:
            if(lookahead == '_')
                ADVANCE(285);
            END_STATE();
        case 78:
            if(lookahead == '_')
                ADVANCE(366);
            END_STATE();
        case 79:
            if(lookahead == '_')
                ADVANCE(259);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(227);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(76);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(136);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(239);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(263);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(352);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(330);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(410);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(331);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(372);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(357);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(245);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(241);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(242);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(283);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(384);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(417);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(397);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(124);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(399);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(231);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(233);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(416);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(250);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(254);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(633);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(631);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(204);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(160);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(386);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(85);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(85);
            if(lookahead == 'n')
                ADVANCE(195);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(85);
            if(lookahead == 'n')
                ADVANCE(201);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(377);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(312);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(380);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(153);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(154);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(569);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(588);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(460);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(601);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(36);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(639);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(641);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(638);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(637);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(418);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(301);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(319);
            if(lookahead == 'l')
                ADVANCE(315);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(156);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(179);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(159);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(100);
            if(lookahead == 'f')
                ADVANCE(223);
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(187);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(190);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(621);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(632);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(469);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(610);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(609);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(488);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(596);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(471);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(321);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(585);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(630);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(624);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(189);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(425);
            if(lookahead == 'h')
                ADVANCE(94);
            if(lookahead == 'i')
                ADVANCE(131);
            if(lookahead == 'k')
                ADVANCE(165);
            if(lookahead == 'm')
                ADVANCE(419);
            if(lookahead == 'n')
                ADVANCE(310);
            if(lookahead == 'o')
                ADVANCE(327);
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(74);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(193);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(128);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(247);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(429);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(354);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(290);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(130);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(92);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(346);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(374);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(133);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(332);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(343);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(295);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(339);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(341);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(342);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(194);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(303);
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 189:
            if(lookahead == 'f')
                ADVANCE(622);
            END_STATE();
        case 190:
            if(lookahead == 'f')
                ADVANCE(89);
            END_STATE();
        case 191:
            if(lookahead == 'f')
                ADVANCE(222);
            if(lookahead == 'm')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 192:
            if(lookahead == 'f')
                ADVANCE(105);
            END_STATE();
        case 193:
            if(lookahead == 'f')
                ADVANCE(226);
            END_STATE();
        case 194:
            if(lookahead == 'f')
                ADVANCE(103);
            END_STATE();
        case 195:
            if(lookahead == 'g')
                ADVANCE(453);
            END_STATE();
        case 196:
            if(lookahead == 'g')
                ADVANCE(477);
            END_STATE();
        case 197:
            if(lookahead == 'g')
                ADVANCE(479);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(457);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(465);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(466);
            END_STATE();
        case 201:
            if(lookahead == 'g')
                ADVANCE(455);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(294);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(291);
            END_STATE();
        case 204:
            if(lookahead == 'h')
                ADVANCE(619);
            END_STATE();
        case 205:
            if(lookahead == 'h')
                ADVANCE(221);
            END_STATE();
        case 206:
            if(lookahead == 'h')
                ADVANCE(90);
            END_STATE();
        case 207:
            if(lookahead == 'h')
                ADVANCE(314);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(423);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(432);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(369);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(273);
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(109);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(202);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(299);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(299);
            if(lookahead == 's')
                ADVANCE(213);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(383);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(113);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(305);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(132);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(164);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(282);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(98);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(381);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(289);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(359);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(274);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(360);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(309);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(361);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(125);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(311);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(404);
            END_STATE();
        case 238:
            if(lookahead == 'k')
                ADVANCE(602);
            END_STATE();
        case 239:
            if(lookahead == 'l')
                ADVANCE(586);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(644);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(640);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(635);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(615);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(427);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(77);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(428);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(129);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(172);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(315);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(146);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(147);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(378);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(209);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(151);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(406);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(235);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(316);
            if(lookahead == 's')
                ADVANCE(207);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(317);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(237);
            END_STATE();
        case 260:
            if(lookahead == 'm')
                ADVANCE(613);
            END_STATE();
        case 261:
            if(lookahead == 'm')
                ADVANCE(145);
            if(lookahead == 't')
                ADVANCE(208);
            END_STATE();
        case 262:
            if(lookahead == 'm')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 263:
            if(lookahead == 'm')
                ADVANCE(170);
            END_STATE();
        case 264:
            if(lookahead == 'n')
                ADVANCE(590);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(216);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(617);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(458);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(581);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(603);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(645);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(358);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(115);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(196);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(197);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(78);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(244);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(367);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(308);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(93);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(134);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(281);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(86);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(96);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(97);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(215);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(155);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(122);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(306);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(139);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(393);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(171);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(400);
            END_STATE();
        case 296:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 297:
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 298:
            if(lookahead == 'o')
                ADVANCE(248);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(266);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(91);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(338);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(117);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(268);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(344);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(398);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(270);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(275);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(324);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(119);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(421);
            END_STATE();
        case 320:
            if(lookahead == 'p')
                ADVANCE(490);
            END_STATE();
        case 321:
            if(lookahead == 'p')
                ADVANCE(246);
            if(lookahead == 'q')
                ADVANCE(415);
            END_STATE();
        case 322:
            if(lookahead == 'p')
                ADVANCE(389);
            END_STATE();
        case 323:
            if(lookahead == 'p')
                ADVANCE(217);
            END_STATE();
        case 324:
            if(lookahead == 'p')
                ADVANCE(219);
            END_STATE();
        case 325:
            if(lookahead == 'p')
                ADVANCE(168);
            END_STATE();
        case 326:
            if(lookahead == 'p')
                ADVANCE(345);
            END_STATE();
        case 327:
            if(lookahead == 'p')
                ADVANCE(401);
            END_STATE();
        case 328:
            if(lookahead == 'q')
                ADVANCE(413);
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 329:
            if(lookahead == 'r')
                ADVANCE(211);
            END_STATE();
        case 330:
            if(lookahead == 'r')
                ADVANCE(472);
            END_STATE();
        case 331:
            if(lookahead == 'r')
                ADVANCE(474);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(422);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(431);
            END_STATE();
        case 334:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 335:
            if(lookahead == 'r')
                ADVANCE(107);
            END_STATE();
        case 336:
            if(lookahead == 'r')
                ADVANCE(409);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(228);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(375);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(95);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(379);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(224);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(99);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(286);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(158);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(186);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(192);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(162);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(420);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(364);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(108);
            END_STATE();
        case 351:
            if(lookahead == 's')
                ADVANCE(144);
            END_STATE();
        case 352:
            if(lookahead == 's')
                ADVANCE(238);
            END_STATE();
        case 353:
            if(lookahead == 's')
                ADVANCE(593);
            END_STATE();
        case 354:
            if(lookahead == 's')
                ADVANCE(598);
            END_STATE();
        case 355:
            if(lookahead == 's')
                ADVANCE(599);
            END_STATE();
        case 356:
            if(lookahead == 's')
                ADVANCE(616);
            END_STATE();
        case 357:
            if(lookahead == 's')
                ADVANCE(205);
            END_STATE();
        case 358:
            if(lookahead == 's')
                ADVANCE(371);
            END_STATE();
        case 359:
            if(lookahead == 's')
                ADVANCE(161);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(166);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(169);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(402);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(387);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(392);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(403);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(191);
            END_STATE();
        case 370:
            if(lookahead == 't')
                ADVANCE(591);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(634);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(467);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(592);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(462);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(451);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(600);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(611);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(604);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(464);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(643);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(262);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(334);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(114);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(208);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(335);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(174);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(220);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(83);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(150);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(101);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(183);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(178);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(337);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(232);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(106);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(236);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(71);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(185);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(79);
            END_STATE();
        case 407:
            if(lookahead == 'u')
                ADVANCE(110);
            END_STATE();
        case 408:
            if(lookahead == 'u')
                ADVANCE(260);
            END_STATE();
        case 409:
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 410:
            if(lookahead == 'u')
                ADVANCE(252);
            END_STATE();
        case 411:
            if(lookahead == 'u')
                ADVANCE(370);
            END_STATE();
        case 412:
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 413:
            if(lookahead == 'u')
                ADVANCE(167);
            END_STATE();
        case 414:
            if(lookahead == 'u')
                ADVANCE(292);
            END_STATE();
        case 415:
            if(lookahead == 'u')
                ADVANCE(182);
            END_STATE();
        case 416:
            if(lookahead == 'u')
                ADVANCE(391);
            END_STATE();
        case 417:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(251);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(363);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 422:
            if(lookahead == 'v')
                ADVANCE(234);
            END_STATE();
        case 423:
            if(lookahead == 'v')
                ADVANCE(148);
            END_STATE();
        case 424:
            if(lookahead == 'x')
                ADVANCE(163);
            END_STATE();
        case 425:
            if(lookahead == 'x')
                ADVANCE(395);
            END_STATE();
        case 426:
            if(lookahead == 'y')
                ADVANCE(485);
            END_STATE();
        case 427:
            if(lookahead == 'y')
                ADVANCE(594);
            END_STATE();
        case 428:
            if(lookahead == 'y')
                ADVANCE(70);
            END_STATE();
        case 429:
            if(lookahead == 'y')
                ADVANCE(636);
            END_STATE();
        case 430:
            if(lookahead == 'y')
                ADVANCE(325);
            END_STATE();
        case 431:
            if(lookahead == 'y')
                ADVANCE(73);
            END_STATE();
        case 432:
            if(lookahead == 'z')
                ADVANCE(175);
            END_STATE();
        case 433:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 434:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 435:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            END_STATE();
        case 436:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            END_STATE();
        case 437:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            END_STATE();
        case 438:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            END_STATE();
        case 439:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(540);
            END_STATE();
        case 440:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\r')
                ADVANCE(775);
            if(lookahead == '\\')
                ADVANCE(774);
            END_STATE();
        case 441:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(578);
            END_STATE();
        case 442:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 443:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(442)
            END_STATE();
        case 444:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(448)
            END_STATE();
        case 445:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(448)
            if(lookahead == '\r')
                SKIP(444)
            END_STATE();
        case 446:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(449)
            END_STATE();
        case 447:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(449)
            if(lookahead == '\r')
                SKIP(446)
            END_STATE();
        case 448:
            if(eof)
                ADVANCE(450);
            if(lookahead == '#')
                ADVANCE(126);
            if(lookahead == '$')
                ADVANCE(494);
            if(lookahead == '%')
                ADVANCE(503);
            if(lookahead == '(')
                ADVANCE(38);
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == '*')
                ADVANCE(501);
            if(lookahead == '+')
                ADVANCE(497);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(499);
            if(lookahead == '/')
                ADVANCE(502);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(584);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == 'X')
                ADVANCE(59);
            if(lookahead == '[')
                ADVANCE(606);
            if(lookahead == '\\')
                SKIP(445)
            if(lookahead == ']')
                ADVANCE(607);
            if(lookahead == '^')
                ADVANCE(493);
            if(lookahead == 'a')
                ADVANCE(368);
            if(lookahead == 'b')
                ADVANCE(210);
            if(lookahead == 'c')
                ADVANCE(80);
            if(lookahead == 'd')
                ADVANCE(143);
            if(lookahead == 'e')
                ADVANCE(272);
            if(lookahead == 'g')
                ADVANCE(181);
            if(lookahead == 'i')
                ADVANCE(293);
            if(lookahead == 'l')
                ADVANCE(318);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(81);
            if(lookahead == 'o')
                ADVANCE(116);
            if(lookahead == 'r')
                ADVANCE(82);
            if(lookahead == 's')
                ADVANCE(188);
            if(lookahead == 't')
                ADVANCE(430);
            if(lookahead == 'u')
                ADVANCE(265);
            if(lookahead == '|')
                ADVANCE(492);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(448)
            END_STATE();
        case 449:
            if(eof)
                ADVANCE(450);
            if(lookahead == '#')
                ADVANCE(140);
            if(lookahead == '$')
                ADVANCE(494);
            if(lookahead == ')')
                ADVANCE(505);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(584);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '\\')
                SKIP(447)
            if(lookahead == ']')
                ADVANCE(607);
            if(lookahead == '^')
                ADVANCE(493);
            if(lookahead == 'b')
                ADVANCE(225);
            if(lookahead == 'c')
                ADVANCE(296);
            if(lookahead == 'e')
                ADVANCE(272);
            if(lookahead == 'i')
                ADVANCE(293);
            if(lookahead == 'l')
                ADVANCE(304);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(102);
            if(lookahead == 's')
                ADVANCE(388);
            if(lookahead == 't')
                ADVANCE(430);
            if(lookahead == 'u')
                ADVANCE(288);
            if(lookahead == '|')
                ADVANCE(492);
            if(lookahead == '}')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(449)
            END_STATE();
        case 450:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(137);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(137);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(249);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(249);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(258);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(496);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(495);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(546);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(546);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(767);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(65);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(72);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'h')
                ADVANCE(88);
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(320);
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(227);
            if(lookahead == 'e')
                ADVANCE(84);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(206);
            if(lookahead == 's')
                ADVANCE(396);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(386);
            if(lookahead == 'u')
                ADVANCE(370);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(190);
            if(lookahead == 'o')
                ADVANCE(407);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(328);
            if(lookahead == 'h')
                ADVANCE(303);
            if(lookahead == 't')
                ADVANCE(329);
            if(lookahead == 'w')
                ADVANCE(218);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(424);
            if(lookahead == 'l')
                ADVANCE(300);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(369);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(426);
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(590);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(216);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(115);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(118);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(214);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(325);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(435);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(567);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(539);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(539);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(540);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(540);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(555);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(553);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(561);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(765);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(438);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(553);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(561);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(556);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(558);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(559);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(649);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(561);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(560);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(44);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(562);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(564);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(765);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(561);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(565);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(438);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(562);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(566);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(567);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(553);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(561);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(553);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(561);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(556);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(553);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(561);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(558);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(547);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(566);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(548);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(567);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(539);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(539);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(540);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(540);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(562);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(566);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(567);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(567);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                ADVANCE(576);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(579);
            if(lookahead != 0)
                ADVANCE(578);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(579);
            if(lookahead != 0)
                ADVANCE(578);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(767);
            if(lookahead == '\\')
                ADVANCE(579);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(578);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(579);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(578);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(578);
            if(lookahead == '\r')
                ADVANCE(580);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(579);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(578);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(579);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(412);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(629);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(629);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(628);
            if(lookahead == '\\')
                ADVANCE(626);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(627);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(629);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(769);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(629);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(629);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(647);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(257);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(541);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(698);
            if(lookahead == 's')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(461);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(738);
            if(lookahead == 'h')
                ADVANCE(730);
            if(lookahead == 't')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(738);
            if(lookahead == 'h')
                ADVANCE(730);
            if(lookahead == 't')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(454);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(456);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(761);
            if(lookahead == 'l')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(722);
            if(lookahead == 'u')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(733);
            if(lookahead == 's')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(614);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(762);
            if(lookahead == 't')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(468);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(452);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(629);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(771);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0)
                ADVANCE(773);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(772);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(771);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(768);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\r')
                ADVANCE(775);
            if(lookahead == '\\')
                ADVANCE(774);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\\')
                ADVANCE(440);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 448 },
    [2] = { .lex_state = 43 },
    [3] = { .lex_state = 43 },
    [4] = { .lex_state = 43 },
    [5] = { .lex_state = 43 },
    [6] = { .lex_state = 448 },
    [7] = { .lex_state = 43 },
    [8] = { .lex_state = 43 },
    [9] = { .lex_state = 43 },
    [10] = { .lex_state = 43 },
    [11] = { .lex_state = 43 },
    [12] = { .lex_state = 43 },
    [13] = { .lex_state = 43 },
    [14] = { .lex_state = 46 },
    [15] = { .lex_state = 449 },
    [16] = { .lex_state = 449 },
    [17] = { .lex_state = 449 },
    [18] = { .lex_state = 449 },
    [19] = { .lex_state = 449 },
    [20] = { .lex_state = 43 },
    [21] = { .lex_state = 48 },
    [22] = { .lex_state = 48 },
    [23] = { .lex_state = 48 },
    [24] = { .lex_state = 48 },
    [25] = { .lex_state = 47 },
    [26] = { .lex_state = 47 },
    [27] = { .lex_state = 47 },
    [28] = { .lex_state = 43 },
    [29] = { .lex_state = 43 },
    [30] = { .lex_state = 43 },
    [31] = { .lex_state = 43 },
    [32] = { .lex_state = 43 },
    [33] = { .lex_state = 43 },
    [34] = { .lex_state = 43 },
    [35] = { .lex_state = 43 },
    [36] = { .lex_state = 43 },
    [37] = { .lex_state = 43 },
    [38] = { .lex_state = 43 },
    [39] = { .lex_state = 43 },
    [40] = { .lex_state = 43 },
    [41] = { .lex_state = 43 },
    [42] = { .lex_state = 49 },
    [43] = { .lex_state = 43 },
    [44] = { .lex_state = 43 },
    [45] = { .lex_state = 49 },
    [46] = { .lex_state = 43 },
    [47] = { .lex_state = 37 },
    [48] = { .lex_state = 37 },
    [49] = { .lex_state = 37 },
    [50] = { .lex_state = 37 },
    [51] = { .lex_state = 37 },
    [52] = { .lex_state = 37 },
    [53] = { .lex_state = 37 },
    [54] = { .lex_state = 37 },
    [55] = { .lex_state = 37 },
    [56] = { .lex_state = 37 },
    [57] = { .lex_state = 37 },
    [58] = { .lex_state = 37 },
    [59] = { .lex_state = 37 },
    [60] = { .lex_state = 37 },
    [61] = { .lex_state = 37 },
    [62] = { .lex_state = 37 },
    [63] = { .lex_state = 448 },
    [64] = { .lex_state = 47 },
    [65] = { .lex_state = 47 },
    [66] = { .lex_state = 47 },
    [67] = { .lex_state = 47 },
    [68] = { .lex_state = 37 },
    [69] = { .lex_state = 37 },
    [70] = { .lex_state = 449 },
    [71] = { .lex_state = 449 },
    [72] = { .lex_state = 448 },
    [73] = { .lex_state = 449 },
    [74] = { .lex_state = 449 },
    [75] = { .lex_state = 448 },
    [76] = { .lex_state = 37 },
    [77] = { .lex_state = 449 },
    [78] = { .lex_state = 448 },
    [79] = { .lex_state = 449 },
    [80] = { .lex_state = 37 },
    [81] = { .lex_state = 43 },
    [82] = { .lex_state = 43 },
    [83] = { .lex_state = 37 },
    [84] = { .lex_state = 43 },
    [85] = { .lex_state = 37 },
    [86] = { .lex_state = 37 },
    [87] = { .lex_state = 37 },
    [88] = { .lex_state = 37 },
    [89] = { .lex_state = 37 },
    [90] = { .lex_state = 39 },
    [91] = { .lex_state = 39 },
    [92] = { .lex_state = 448 },
    [93] = { .lex_state = 448 },
    [94] = { .lex_state = 448 },
    [95] = { .lex_state = 448 },
    [96] = { .lex_state = 448 },
    [97] = { .lex_state = 448 },
    [98] = { .lex_state = 448 },
    [99] = { .lex_state = 448 },
    [100] = { .lex_state = 448 },
    [101] = { .lex_state = 448 },
    [102] = { .lex_state = 39 },
    [103] = { .lex_state = 50 },
    [104] = { .lex_state = 39 },
    [105] = { .lex_state = 448 },
    [106] = { .lex_state = 448 },
    [107] = { .lex_state = 448 },
    [108] = { .lex_state = 448 },
    [109] = { .lex_state = 37 },
    [110] = { .lex_state = 37 },
    [111] = { .lex_state = 448 },
    [112] = { .lex_state = 448 },
    [113] = { .lex_state = 40 },
    [114] = { .lex_state = 40 },
    [115] = { .lex_state = 40 },
    [116] = { .lex_state = 448 },
    [117] = { .lex_state = 40 },
    [118] = { .lex_state = 448 },
    [119] = { .lex_state = 448 },
    [120] = { .lex_state = 448 },
    [121] = { .lex_state = 448 },
    [122] = { .lex_state = 448 },
    [123] = { .lex_state = 449 },
    [124] = { .lex_state = 448 },
    [125] = { .lex_state = 449 },
    [126] = { .lex_state = 37 },
    [127] = { .lex_state = 448 },
    [128] = { .lex_state = 448 },
    [129] = { .lex_state = 449 },
    [130] = { .lex_state = 449 },
    [131] = { .lex_state = 448 },
    [132] = { .lex_state = 42 },
    [133] = { .lex_state = 448 },
    [134] = { .lex_state = 449 },
    [135] = { .lex_state = 39 },
    [136] = { .lex_state = 448 },
    [137] = { .lex_state = 448 },
    [138] = { .lex_state = 39 },
    [139] = { .lex_state = 39 },
    [140] = { .lex_state = 448 },
    [141] = { .lex_state = 39 },
    [142] = { .lex_state = 448 },
    [143] = { .lex_state = 448 },
    [144] = { .lex_state = 448 },
    [145] = { .lex_state = 448 },
    [146] = { .lex_state = 448 },
    [147] = { .lex_state = 448 },
    [148] = { .lex_state = 39 },
    [149] = { .lex_state = 39 },
    [150] = { .lex_state = 448 },
    [151] = { .lex_state = 448 },
    [152] = { .lex_state = 448 },
    [153] = { .lex_state = 448 },
    [154] = { .lex_state = 39 },
    [155] = { .lex_state = 448 },
    [156] = { .lex_state = 448 },
    [157] = { .lex_state = 448 },
    [158] = { .lex_state = 448 },
    [159] = { .lex_state = 42 },
    [160] = { .lex_state = 448 },
    [161] = { .lex_state = 448 },
    [162] = { .lex_state = 39 },
    [163] = { .lex_state = 448 },
    [164] = { .lex_state = 448 },
    [165] = { .lex_state = 448 },
    [166] = { .lex_state = 448 },
    [167] = { .lex_state = 448 },
    [168] = { .lex_state = 41 },
    [169] = { .lex_state = 39 },
    [170] = { .lex_state = 448 },
    [171] = { .lex_state = 448 },
    [172] = { .lex_state = 39 },
    [173] = { .lex_state = 39 },
    [174] = { .lex_state = 41 },
    [175] = { .lex_state = 448 },
    [176] = { .lex_state = 0 },
    [177] = { .lex_state = 39 },
    [178] = { .lex_state = 448 },
    [179] = { .lex_state = 41 },
    [180] = { .lex_state = 448 },
    [181] = { .lex_state = 41 },
    [182] = { .lex_state = 41 },
    [183] = { .lex_state = 448 },
    [184] = { .lex_state = 39 },
    [185] = { .lex_state = 39 },
    [186] = { .lex_state = 41 },
    [187] = { .lex_state = 41 },
    [188] = { .lex_state = 448 },
    [189] = { .lex_state = 39 },
    [190] = { .lex_state = 39 },
    [191] = { .lex_state = 41 },
    [192] = { .lex_state = 41 },
    [193] = { .lex_state = 448 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 41 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 43 },
    [198] = { .lex_state = 41 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 41 },
    [201] = { .lex_state = 448 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 448 },
    [206] = { .lex_state = 448 },
    [207] = { .lex_state = 0 },
    [208] = { .lex_state = 0 },
    [209] = { .lex_state = 39 },
    [210] = { .lex_state = 448 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 41 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 448 },
    [216] = { .lex_state = 41 },
    [217] = { .lex_state = 41 },
    [218] = { .lex_state = 448 },
    [219] = { .lex_state = 41 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 448 },
    [222] = { .lex_state = 448 },
    [223] = { .lex_state = 448 },
    [224] = { .lex_state = 41 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 0 },
    [227] = { .lex_state = 51 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 41 },
    [232] = { .lex_state = 39 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 39 },
    [235] = { .lex_state = 448 },
    [236] = { .lex_state = 39 },
    [237] = { .lex_state = 41 },
    [238] = { .lex_state = 41 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 41 },
    [243] = { .lex_state = 41 },
    [244] = { .lex_state = 39 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 39 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 448 },
    [251] = { .lex_state = 39 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 448 },
    [257] = { .lex_state = 41 },
    [258] = { .lex_state = 41 },
    [259] = { .lex_state = 41 },
    [260] = { .lex_state = 448 },
    [261] = { .lex_state = 448 },
    [262] = { .lex_state = 41 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 41 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 41 },
    [267] = { .lex_state = 39 },
    [268] = { .lex_state = 41 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 39 },
    [271] = { .lex_state = 39 },
    [272] = { .lex_state = 448 },
    [273] = { .lex_state = 39 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 39 },
    [276] = { .lex_state = 448 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 39 },
    [279] = { .lex_state = 39 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 448 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 448 },
    [284] = { .lex_state = 39 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 25 },
    [288] = { .lex_state = 39 },
    [289] = { .lex_state = 39 },
    [290] = { .lex_state = 448 },
    [291] = { .lex_state = 39 },
    [292] = { .lex_state = 448 },
    [293] = { .lex_state = 448 },
    [294] = { .lex_state = 39 },
    [295] = { .lex_state = 39 },
    [296] = { .lex_state = 448 },
    [297] = { .lex_state = 39 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 39 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 39 },
    [302] = { .lex_state = 43 },
    [303] = { .lex_state = 448 },
    [304] = { .lex_state = 448 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 39 },
    [310] = { .lex_state = 39 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 39 },
    [313] = { .lex_state = 39 },
    [314] = { .lex_state = 39 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 39 },
    [317] = { .lex_state = 448 },
    [318] = { .lex_state = 39 },
    [319] = { .lex_state = 39 },
    [320] = { .lex_state = 39 },
    [321] = { .lex_state = 39 },
    [322] = { .lex_state = 39 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 448 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 39 },
    [327] = { .lex_state = 39 },
    [328] = { .lex_state = 448 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 448 },
    [331] = { .lex_state = 448 },
    [332] = { .lex_state = 448 },
    [333] = { .lex_state = 43 },
    [334] = { .lex_state = 39 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 43 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 52 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 43 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 53 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 39 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 53 },
    [379] = { .lex_state = 53 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 43 },
    [382] = { .lex_state = 43 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 52 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 53 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 39 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 39 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 39 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 43 },
    [395] = { .lex_state = 43 },
    [396] = { .lex_state = 43 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 39 },
    [402] = { .lex_state = 448 },
    [403] = { .lex_state = 43 },
    [404] = { .lex_state = 771 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 39 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 448 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 39 },
    [424] = { .lex_state = 39 },
    [425] = { .lex_state = 39 },
    [426] = { .lex_state = 39 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 39 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 39 },
    [431] = { .lex_state = 448 },
    [432] = { .lex_state = 448 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 39 },
    [436] = { .lex_state = 43 },
    [437] = { .lex_state = 43 },
    [438] = { .lex_state = 448 },
    [439] = { .lex_state = 39 },
    [440] = { .lex_state = 43 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 448 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 39 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 448 },
    [451] = { .lex_state = 26 },
    [452] = { .lex_state = 448 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 448 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 448 },
    [458] = { .lex_state = 0 },
    [459] = { .lex_state = 0 },
    [460] = { .lex_state = 39 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 627 },
    [465] = { .lex_state = 39 },
    [466] = { .lex_state = 448 },
    [467] = { .lex_state = 39 },
    [468] = { .lex_state = 39 },
    [469] = { .lex_state = 39 },
    [470] = { .lex_state = 39 },
    [471] = { .lex_state = 39 },
    [472] = { .lex_state = 39 },
    [473] = { .lex_state = 39 },
    [474] = { .lex_state = 39 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 39 },
    [477] = { .lex_state = 0 },
    [478] = { .lex_state = 39 },
    [479] = { .lex_state = 39 },
    [480] = { .lex_state = 39 },
    [481] = { (TSStateId)(-1) },
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
        [anon_sym_any] = ACTIONS(1),
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
        [sym_preproc_directive] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
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
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(458),
        [sym_preproc_call] = STATE(72),
        [sym_except_dcl] = STATE(73),
        [sym_interface_dcl] = STATE(456),
        [sym_interface_forward_dcl] = STATE(454),
        [sym_interface_def] = STATE(454),
        [sym_interface_header] = STATE(453),
        [sym_interface_anno] = STATE(161),
        [sym_bitset_dcl] = STATE(456),
        [sym_bitmask_dcl] = STATE(456),
        [sym_annotation_dcl] = STATE(456),
        [sym__definition] = STATE(74),
        [sym_native_dcl] = STATE(456),
        [sym_module_dcl] = STATE(456),
        [sym_struct_forward_dcl] = STATE(456),
        [sym_struct_def] = STATE(456),
        [sym_enum_dcl] = STATE(456),
        [sym_enum_anno] = STATE(452),
        [sym_union_forward_dcl] = STATE(456),
        [sym_union_def] = STATE(456),
        [sym_typedef_dcl] = STATE(456),
        [sym_predefine] = STATE(73),
        [sym_dds_request_topic] = STATE(155),
        [sym_dds_reply_topic] = STATE(155),
        [sym_const_dcl] = STATE(456),
        [sym_data_representation] = STATE(215),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(6),
        [aux_sym_specification_repeat2] = STATE(16),
        [aux_sym_interface_def_repeat1] = STATE(122),
        [aux_sym_struct_def_repeat1] = STATE(160),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(21),
        [anon_sym_module] = ACTIONS(23),
        [anon_sym_struct] = ACTIONS(25),
        [anon_sym_enum] = ACTIONS(27),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(31),
        [anon_sym_typedef] = ACTIONS(33),
        [anon_sym_POUNDdefine] = ACTIONS(35),
        [sym_dds_service] = ACTIONS(37),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(39),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(41),
        [anon_sym_const] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_RBRACE,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(2),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [120] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(87),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [240] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(89),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [360] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(91),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(5),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [480] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    sym_preproc_directive,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(93),
    1,
    ts_builtin_sym_end,
    STATE(6),
    1,
    sym_comment,
    STATE(17),
    1,
    aux_sym_specification_repeat2,
    STATE(63),
    1,
    aux_sym_specification_repeat1,
    STATE(72),
    1,
    sym_preproc_call,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [610] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(95),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [730] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(97),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [850] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(95),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [970] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(102),
    1,
    sym_signed_longlong_int,
    ACTIONS(108),
    1,
    anon_sym_fixed,
    ACTIONS(114),
    1,
    sym_unsigned_long_int,
    ACTIONS(120),
    1,
    anon_sym_longdouble,
    ACTIONS(126),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(132),
    1,
    anon_sym_any,
    ACTIONS(135),
    1,
    anon_sym_sequence,
    ACTIONS(138),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_RBRACE,
    ACTIONS(146),
    1,
    anon_sym_AThashid,
    ACTIONS(149),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(152),
    1,
    sym_identifier,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(99),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(105),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(111),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(117),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(123),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(129),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(10),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(143),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1088] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(155),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1208] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(157),
    1,
    anon_sym_RBRACE,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1328] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(159),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(13),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(40),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1448] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(161),
    1,
    anon_sym_struct,
    ACTIONS(163),
    1,
    anon_sym_enum,
    ACTIONS(165),
    1,
    anon_sym_union,
    STATE(14),
    1,
    sym_comment,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(215),
    1,
    sym_data_representation,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(433),
    1,
    sym_type_declarator,
    STATE(435),
    1,
    sym_scoped_name,
    STATE(452),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(149),
    7,
    sym_simple_type_spec,
    sym_template_type_spec,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    [1567] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(169),
    1,
    anon_sym_exception,
    ACTIONS(172),
    1,
    anon_sym_interface,
    ACTIONS(175),
    1,
    anon_sym_local,
    ACTIONS(178),
    1,
    anon_sym_bitset,
    ACTIONS(181),
    1,
    anon_sym_bitmask,
    ACTIONS(184),
    1,
    anon_sym_ATannotation,
    ACTIONS(187),
    1,
    anon_sym_native,
    ACTIONS(190),
    1,
    anon_sym_module,
    ACTIONS(193),
    1,
    anon_sym_struct,
    ACTIONS(196),
    1,
    anon_sym_enum,
    ACTIONS(199),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(202),
    1,
    anon_sym_union,
    ACTIONS(205),
    1,
    anon_sym_typedef,
    ACTIONS(208),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(211),
    1,
    sym_dds_service,
    ACTIONS(214),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(217),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(220),
    1,
    anon_sym_const,
    ACTIONS(223),
    1,
    sym_final,
    ACTIONS(226),
    1,
    anon_sym_ATdata_representation,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    ACTIONS(167),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(15),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1687] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(93),
    1,
    ts_builtin_sym_end,
    ACTIONS(229),
    1,
    anon_sym_POUNDdefine,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(16),
    1,
    sym_comment,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1808] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(229),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(231),
    1,
    ts_builtin_sym_end,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(17),
    1,
    sym_comment,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1929] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(229),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(233),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_specification_repeat2,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2050] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(229),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(235),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(19),
    1,
    sym_comment,
    STATE(74),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(215),
    1,
    sym_data_representation,
    STATE(452),
    1,
    sym_enum_anno,
    STATE(453),
    1,
    sym_interface_header,
    STATE(73),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(454),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(456),
    13,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2171] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(20),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_member_repeat1,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(154),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [2282] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(237),
    1,
    anon_sym_RBRACE,
    ACTIONS(239),
    1,
    anon_sym_void,
    ACTIONS(241),
    1,
    anon_sym_readonly,
    ACTIONS(243),
    1,
    anon_sym_attribute,
    STATE(21),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(253),
    1,
    sym_export,
    STATE(334),
    1,
    sym_type_spec,
    STATE(399),
    1,
    sym_interface_body,
    STATE(409),
    1,
    sym_op_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(335),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(410),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2398] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(239),
    1,
    anon_sym_void,
    ACTIONS(241),
    1,
    anon_sym_readonly,
    ACTIONS(243),
    1,
    anon_sym_attribute,
    ACTIONS(245),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(253),
    1,
    sym_export,
    STATE(334),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_op_type_spec,
    STATE(411),
    1,
    sym_interface_body,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(335),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(410),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2514] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(239),
    1,
    anon_sym_void,
    ACTIONS(241),
    1,
    anon_sym_readonly,
    ACTIONS(243),
    1,
    anon_sym_attribute,
    ACTIONS(247),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(253),
    1,
    sym_export,
    STATE(334),
    1,
    sym_type_spec,
    STATE(337),
    1,
    sym_interface_body,
    STATE(409),
    1,
    sym_op_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(335),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(410),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2630] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(239),
    1,
    anon_sym_void,
    ACTIONS(241),
    1,
    anon_sym_readonly,
    ACTIONS(243),
    1,
    anon_sym_attribute,
    STATE(24),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_export,
    STATE(334),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_op_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(335),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(410),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2740] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(251),
    1,
    anon_sym_fixed,
    ACTIONS(253),
    1,
    anon_sym_any,
    ACTIONS(255),
    1,
    anon_sym_RBRACE,
    ACTIONS(257),
    1,
    anon_sym_enum,
    STATE(25),
    1,
    sym_comment,
    STATE(26),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(314),
    1,
    sym_annotation_member_type,
    STATE(317),
    1,
    sym_enum_dcl,
    STATE(389),
    1,
    sym_annotation_body,
    STATE(390),
    1,
    sym_scoped_name,
    STATE(457),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(249),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(430),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2841] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(251),
    1,
    anon_sym_fixed,
    ACTIONS(253),
    1,
    anon_sym_any,
    ACTIONS(257),
    1,
    anon_sym_enum,
    ACTIONS(259),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(27),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(314),
    1,
    sym_annotation_member_type,
    STATE(317),
    1,
    sym_enum_dcl,
    STATE(390),
    1,
    sym_scoped_name,
    STATE(457),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(249),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(430),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2939] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(264),
    1,
    sym_signed_longlong_int,
    ACTIONS(270),
    1,
    anon_sym_fixed,
    ACTIONS(276),
    1,
    sym_unsigned_long_int,
    ACTIONS(282),
    1,
    anon_sym_longdouble,
    ACTIONS(288),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    anon_sym_any,
    ACTIONS(297),
    1,
    anon_sym_sequence,
    ACTIONS(300),
    1,
    anon_sym_RBRACE,
    ACTIONS(302),
    1,
    anon_sym_enum,
    ACTIONS(305),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(308),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(314),
    1,
    sym_annotation_member_type,
    STATE(317),
    1,
    sym_enum_dcl,
    STATE(390),
    1,
    sym_scoped_name,
    STATE(457),
    1,
    sym_enum_anno,
    ACTIONS(261),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(267),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(273),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(279),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(285),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(291),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(27),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(430),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3035] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(311),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(313),
    1,
    anon_sym_GT,
    ACTIONS(315),
    1,
    anon_sym_COMMA,
    ACTIONS(317),
    1,
    sym_identifier,
    STATE(28),
    1,
    sym_comment,
    STATE(238),
    1,
    sym_scoped_name,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(381),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3128] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(29),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(417),
    1,
    sym_element_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3218] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(251),
    1,
    sym_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3305] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(31),
    1,
    sym_comment,
    STATE(209),
    1,
    sym_type_spec,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3392] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(312),
    1,
    sym_type_spec,
    STATE(435),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3479] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(311),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(317),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(238),
    1,
    sym_scoped_name,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(333),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3566] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_base_type_spec,
    STATE(319),
    1,
    sym_scoped_name,
    STATE(380),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(257),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(242),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3653] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(326),
    1,
    anon_sym_AThashid,
    ACTIONS(329),
    1,
    anon_sym_ATtry_construct,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(35),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(41),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(321),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(323),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(319),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3707] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(334),
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
    ACTIONS(332),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3748] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(338),
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
    ACTIONS(336),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(342),
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
    ACTIONS(340),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(346),
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
    ACTIONS(344),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(350),
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
    ACTIONS(348),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3912] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(354),
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
    ACTIONS(352),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3952] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(251),
    1,
    anon_sym_fixed,
    STATE(42),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_scoped_name,
    STATE(476),
    1,
    sym_const_type,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(249),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(430),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4022] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(358),
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
    ACTIONS(356),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4062] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(362),
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
    ACTIONS(360),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4102] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(251),
    1,
    anon_sym_fixed,
    STATE(45),
    1,
    sym_comment,
    STATE(425),
    1,
    sym_const_type,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(249),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(430),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4172] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(366),
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
    ACTIONS(364),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4212] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(47),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(302),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4292] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(48),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(383),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4372] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(49),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(403),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4452] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(382),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4532] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(356),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4612] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(347),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4692] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(53),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(197),
    1,
    sym_const_expr,
    STATE(355),
    1,
    sym_positive_int_const,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4772] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(54),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(415),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4849] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(166),
    1,
    sym_and_expr,
    STATE(210),
    1,
    sym_xor_expr,
    STATE(281),
    1,
    sym_const_expr,
    STATE(324),
    1,
    sym_or_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4926] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(56),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(346),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5003] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(57),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(281),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5080] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(358),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5157] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(363),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5234] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(365),
    1,
    sym_const_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5311] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(129),
    1,
    sym_xor_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5382] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(166),
    1,
    sym_and_expr,
    STATE(222),
    1,
    sym_xor_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5453] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(390),
    1,
    sym_preproc_directive,
    ACTIONS(393),
    1,
    anon_sym_POUNDdefine,
    STATE(72),
    1,
    sym_preproc_call,
    STATE(63),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(388),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5492] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(397),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(395),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5526] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(401),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(399),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5560] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(405),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(403),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(409),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(407),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5628] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(68),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(123),
    1,
    sym_and_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5696] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    STATE(167),
    1,
    sym_and_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5764] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(411),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5795] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(413),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5826] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(417),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(415),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5859] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(419),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(421),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(425),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(423),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5954] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(76),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6019] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(427),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(431),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(429),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6083] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(433),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6114] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(80),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(437),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(435),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(441),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(439),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6243] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(83),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    STATE(127),
    1,
    sym_add_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6305] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(445),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(443),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6337] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6399] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(86),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(109),
    1,
    sym_unary_operator,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6458] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_literal,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6517] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    STATE(88),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_unary_operator,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6573] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    ACTIONS(372),
    1,
    anon_sym_TILDE,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(93),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_scoped_name,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6629] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(447),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(449),
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
    anon_sym_LBRACE,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6658] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(451),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(453),
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
    anon_sym_LBRACE,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6687] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
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
    [6715] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(459),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(461),
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
    [6743] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(463),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(465),
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
    [6771] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(467),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(469),
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
    [6799] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(471),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(473),
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
    [6827] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(475),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(477),
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
    [6855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(479),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(481),
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
    [6883] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(483),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(485),
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
    [6911] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(487),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(489),
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
    [6939] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(491),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(493),
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
    [6967] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(491),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(493),
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
    [6997] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(497),
    1,
    sym_boolean_type,
    STATE(103),
    1,
    sym_comment,
    STATE(278),
    1,
    sym_scoped_name,
    STATE(366),
    1,
    sym_switch_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(367),
    2,
    sym_integer_type,
    sym_char_type,
    [7045] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(463),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(465),
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
    [7075] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(499),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(501),
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
    [7103] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(503),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(505),
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
    [7131] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(507),
    1,
    anon_sym_GT,
    ACTIONS(513),
    1,
    anon_sym_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(511),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(509),
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
    [7162] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(513),
    1,
    anon_sym_SLASH,
    ACTIONS(515),
    1,
    anon_sym_GT,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(511),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(517),
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
    [7193] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(519),
    1,
    anon_sym_LPAREN,
    STATE(101),
    1,
    sym_literal,
    STATE(102),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7236] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(374),
    1,
    anon_sym_L,
    ACTIONS(376),
    1,
    anon_sym_DQUOTE,
    ACTIONS(378),
    1,
    anon_sym_SQUOTE,
    ACTIONS(382),
    1,
    sym_number_literal,
    ACTIONS(384),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(386),
    1,
    sym_identifier,
    ACTIONS(519),
    1,
    anon_sym_LPAREN,
    STATE(101),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_comment,
    STATE(115),
    1,
    sym_scoped_name,
    ACTIONS(380),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(105),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7279] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(521),
    1,
    anon_sym_GT,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(525),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(523),
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
    [7305] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    anon_sym_GT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(525),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(529),
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
    [7331] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(451),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
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
    [7354] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(531),
    1,
    sym_identifier,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(463),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(465),
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
    [7379] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(531),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(491),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(493),
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
    [7404] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_long_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    STATE(116),
    1,
    sym_comment,
    STATE(394),
    1,
    sym_integer_type,
    STATE(395),
    1,
    sym_destination_type,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_longlong_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(533),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    [7439] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(447),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(449),
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
    [7462] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(535),
    1,
    anon_sym_GT,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(539),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(537),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7486] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    anon_sym_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(541),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(517),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7510] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(545),
    1,
    anon_sym_GT,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(539),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(547),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7534] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    anon_sym_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(541),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(509),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7558] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(549),
    1,
    anon_sym_interface,
    ACTIONS(551),
    1,
    anon_sym_local,
    STATE(122),
    1,
    sym_comment,
    STATE(124),
    1,
    aux_sym_interface_def_repeat1,
    STATE(161),
    1,
    sym_interface_anno,
    STATE(447),
    1,
    sym_interface_header,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7593] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_DOLLAR,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(553),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7613] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(559),
    1,
    sym_dds_service,
    ACTIONS(562),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(565),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(161),
    1,
    sym_interface_anno,
    ACTIONS(557),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(124),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(155),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7641] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_DOLLAR,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(568),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7661] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(570),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(572),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7681] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(574),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(523),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7700] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(574),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(529),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7719] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(578),
    1,
    anon_sym_CARET,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(576),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(578),
    1,
    anon_sym_CARET,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(580),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7757] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_COMMA,
    ACTIONS(584),
    1,
    anon_sym_SEMI,
    ACTIONS(586),
    1,
    anon_sym_getraises,
    ACTIONS(588),
    1,
    anon_sym_setraises,
    STATE(131),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_get_excep_expr,
    STATE(214),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(349),
    1,
    sym_attr_raises_expr,
    STATE(350),
    1,
    sym_set_excep_expr,
    [7788] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(590),
    1,
    anon_sym_RPAREN,
    ACTIONS(592),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(132),
    1,
    sym_comment,
    STATE(226),
    1,
    sym_param_dcl,
    STATE(351),
    1,
    sym_parameter_dcls,
    ACTIONS(594),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7814] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(596),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [7830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(600),
    1,
    anon_sym_PIPE,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(598),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7848] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(602),
    1,
    anon_sym_RBRACE,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(606),
    1,
    sym_identifier,
    STATE(135),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(246),
    1,
    sym_enumerator,
    STATE(327),
    1,
    sym_enum_modifier,
    [7873] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(608),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(537),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7890] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(610),
    1,
    anon_sym_RBRACE,
    ACTIONS(612),
    1,
    anon_sym_default,
    ACTIONS(614),
    1,
    anon_sym_case,
    STATE(29),
    1,
    sym_case_label,
    STATE(137),
    1,
    sym_comment,
    STATE(145),
    1,
    aux_sym_union_def_repeat1,
    STATE(205),
    1,
    sym_case,
    [7915] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(606),
    1,
    sym_identifier,
    ACTIONS(616),
    1,
    anon_sym_RBRACE,
    STATE(138),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(208),
    1,
    sym_enumerator,
    STATE(327),
    1,
    sym_enum_modifier,
    [7940] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(606),
    1,
    sym_identifier,
    ACTIONS(618),
    1,
    anon_sym_RBRACE,
    STATE(139),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(203),
    1,
    sym_enumerator,
    STATE(327),
    1,
    sym_enum_modifier,
    [7965] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(608),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(547),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7982] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(606),
    1,
    sym_identifier,
    ACTIONS(620),
    1,
    anon_sym_RBRACE,
    STATE(141),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(212),
    1,
    sym_enumerator,
    STATE(327),
    1,
    sym_enum_modifier,
    [8007] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(612),
    1,
    anon_sym_default,
    ACTIONS(614),
    1,
    anon_sym_case,
    ACTIONS(622),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    sym_case_label,
    STATE(137),
    1,
    aux_sym_union_def_repeat1,
    STATE(142),
    1,
    sym_comment,
    STATE(205),
    1,
    sym_case,
    [8032] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(624),
    1,
    anon_sym_LBRACK,
    STATE(143),
    1,
    sym_comment,
    STATE(144),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(193),
    1,
    sym_fixed_array_size,
    ACTIONS(596),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8053] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(624),
    1,
    anon_sym_LBRACK,
    STATE(144),
    1,
    sym_comment,
    STATE(146),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(193),
    1,
    sym_fixed_array_size,
    ACTIONS(626),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8074] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(628),
    1,
    anon_sym_RBRACE,
    ACTIONS(630),
    1,
    anon_sym_default,
    ACTIONS(633),
    1,
    anon_sym_case,
    STATE(29),
    1,
    sym_case_label,
    STATE(205),
    1,
    sym_case,
    STATE(145),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [8097] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(638),
    1,
    anon_sym_LBRACK,
    STATE(193),
    1,
    sym_fixed_array_size,
    STATE(146),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(636),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8116] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(641),
    1,
    anon_sym_RBRACE,
    ACTIONS(643),
    1,
    anon_sym_bitfield,
    STATE(147),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(236),
    1,
    sym_bitfield_spec,
    STATE(296),
    1,
    sym_bitfield,
    [8138] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(606),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(315),
    1,
    sym_enumerator,
    STATE(327),
    1,
    sym_enum_modifier,
    [8160] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(149),
    1,
    sym_comment,
    STATE(263),
    1,
    sym_any_declarator,
    STATE(419),
    1,
    sym_any_declarators,
    STATE(269),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8180] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(647),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8194] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    anon_sym_RBRACE,
    ACTIONS(651),
    1,
    anon_sym_bitfield,
    STATE(236),
    1,
    sym_bitfield_spec,
    STATE(296),
    1,
    sym_bitfield,
    STATE(151),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [8214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(654),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8228] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    anon_sym_struct,
    ACTIONS(658),
    1,
    sym_final,
    ACTIONS(661),
    1,
    anon_sym_ATdata_representation,
    STATE(215),
    1,
    sym_data_representation,
    STATE(153),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [8248] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_declarator,
    STATE(235),
    1,
    sym_declarators,
    STATE(221),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8268] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(664),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8282] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_bitfield,
    ACTIONS(666),
    1,
    anon_sym_RBRACE,
    STATE(156),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(236),
    1,
    sym_bitfield_spec,
    STATE(296),
    1,
    sym_bitfield,
    [8304] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_COMMA,
    ACTIONS(668),
    1,
    anon_sym_SEMI,
    ACTIONS(670),
    1,
    anon_sym_raises,
    STATE(157),
    1,
    sym_comment,
    STATE(204),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(376),
    1,
    sym_raises_expr,
    [8326] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_bitfield,
    ACTIONS(672),
    1,
    anon_sym_RBRACE,
    STATE(151),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(158),
    1,
    sym_comment,
    STATE(236),
    1,
    sym_bitfield_spec,
    STATE(296),
    1,
    sym_bitfield,
    [8348] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(592),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(159),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_param_dcl,
    ACTIONS(594),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8368] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(674),
    1,
    anon_sym_struct,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(160),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_data_representation,
    [8390] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(676),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8404] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_declarator,
    STATE(223),
    1,
    sym_declarators,
    STATE(221),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8424] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_bitfield,
    ACTIONS(678),
    1,
    anon_sym_RBRACE,
    STATE(151),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(163),
    1,
    sym_comment,
    STATE(236),
    1,
    sym_bitfield_spec,
    STATE(296),
    1,
    sym_bitfield,
    [8446] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(680),
    1,
    anon_sym_RPAREN,
    ACTIONS(682),
    1,
    anon_sym_XCDR,
    ACTIONS(685),
    1,
    anon_sym_XCDR2,
    STATE(164),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [8463] = 6,
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
    STATE(164),
    1,
    aux_sym_data_representation_repeat1,
    STATE(165),
    1,
    sym_comment,
    [8482] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_DOLLAR,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(568),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8497] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_DOLLAR,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(553),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8512] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(696),
    1,
    anon_sym_RPAREN,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    STATE(189),
    1,
    sym_scoped_name,
    [8531] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    ACTIONS(702),
    1,
    anon_sym_RPAREN,
    STATE(169),
    1,
    sym_comment,
    STATE(252),
    1,
    aux_sym_raises_expr_repeat1,
    [8550] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(704),
    1,
    anon_sym_SEMI,
    ACTIONS(706),
    1,
    anon_sym_setraises,
    STATE(332),
    1,
    sym_set_excep_expr,
    STATE(170),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [8567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(709),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8580] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(604),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(711),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(327),
    1,
    sym_enum_modifier,
    [8599] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(713),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(716),
    1,
    sym_identifier,
    STATE(327),
    1,
    sym_enum_modifier,
    STATE(173),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8616] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(718),
    1,
    anon_sym_LT,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(720),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8631] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(722),
    1,
    anon_sym_COMMA,
    STATE(175),
    1,
    sym_comment,
    STATE(180),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(724),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8648] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(726),
    1,
    anon_sym_LBRACE,
    ACTIONS(728),
    1,
    anon_sym_SEMI,
    ACTIONS(730),
    1,
    anon_sym_COLON,
    STATE(176),
    1,
    sym_comment,
    STATE(422),
    1,
    sym_interface_inheritance_spec,
    [8667] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(177),
    1,
    sym_comment,
    STATE(277),
    1,
    sym_any_declarator,
    STATE(269),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8684] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    anon_sym_setraises,
    ACTIONS(732),
    1,
    anon_sym_SEMI,
    STATE(170),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(178),
    1,
    sym_comment,
    STATE(332),
    1,
    sym_set_excep_expr,
    [8703] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(734),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(739),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(180),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(741),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8744] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    ACTIONS(743),
    1,
    anon_sym_RPAREN,
    STATE(169),
    1,
    sym_scoped_name,
    STATE(182),
    1,
    sym_comment,
    [8763] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    anon_sym_setraises,
    ACTIONS(745),
    1,
    anon_sym_SEMI,
    STATE(178),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(183),
    1,
    sym_comment,
    STATE(332),
    1,
    sym_set_excep_expr,
    [8782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(427),
    1,
    sym_declarator,
    STATE(221),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_LBRACE,
    ACTIONS(751),
    1,
    anon_sym_COLON,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(749),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8816] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(753),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8829] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(187),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_interface_name,
    STATE(244),
    1,
    sym_scoped_name,
    [8848] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(722),
    1,
    anon_sym_COMMA,
    STATE(175),
    1,
    aux_sym_declarators_repeat1,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(755),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8865] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    ACTIONS(757),
    1,
    anon_sym_RPAREN,
    STATE(189),
    1,
    sym_comment,
    STATE(249),
    1,
    aux_sym_raises_expr_repeat1,
    [8884] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(645),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_comment,
    STATE(260),
    1,
    sym_declarator,
    STATE(221),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8901] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(244),
    1,
    sym_scoped_name,
    STATE(300),
    1,
    sym_interface_name,
    [8920] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(759),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(761),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8946] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(765),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_enum_dcl_repeat1,
    [8962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(767),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8974] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(769),
    1,
    anon_sym_COMMA,
    ACTIONS(772),
    1,
    anon_sym_SEMI,
    STATE(196),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(774),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [9000] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(776),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9012] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(778),
    1,
    anon_sym_RBRACE,
    STATE(199),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_enum_dcl_repeat1,
    [9028] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(780),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9040] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(670),
    1,
    anon_sym_raises,
    ACTIONS(782),
    1,
    anon_sym_SEMI,
    STATE(201),
    1,
    sym_comment,
    STATE(385),
    1,
    sym_raises_expr,
    [9056] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(784),
    1,
    anon_sym_COMMA,
    ACTIONS(786),
    1,
    anon_sym_SEMI,
    STATE(202),
    1,
    sym_comment,
    STATE(254),
    1,
    aux_sym_any_declarators_repeat1,
    [9072] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(788),
    1,
    anon_sym_RBRACE,
    STATE(199),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(203),
    1,
    sym_comment,
    [9088] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_COMMA,
    ACTIONS(790),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(204),
    1,
    sym_comment,
    [9104] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(792),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9116] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(794),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9128] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(788),
    1,
    anon_sym_RBRACE,
    STATE(207),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_enum_dcl_repeat1,
    [9144] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(602),
    1,
    anon_sym_RBRACE,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    STATE(194),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(208),
    1,
    sym_comment,
    [9160] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(131),
    1,
    sym_simple_declarator,
    STATE(209),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_attr_declarator,
    [9176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    anon_sym_CARET,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(580),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9190] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(802),
    1,
    anon_sym_RBRACE,
    STATE(211),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_interface_body_repeat1,
    [9206] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(618),
    1,
    anon_sym_RBRACE,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    STATE(207),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(212),
    1,
    sym_comment,
    [9222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(449),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9234] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_COMMA,
    ACTIONS(804),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(214),
    1,
    sym_comment,
    [9250] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(806),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(453),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9274] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    [9290] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(670),
    1,
    anon_sym_raises,
    ACTIONS(808),
    1,
    anon_sym_SEMI,
    STATE(218),
    1,
    sym_comment,
    STATE(408),
    1,
    sym_raises_expr,
    [9306] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(810),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9318] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(812),
    1,
    anon_sym_COMMA,
    ACTIONS(815),
    1,
    anon_sym_RBRACE,
    STATE(220),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [9332] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(817),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    anon_sym_CARET,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(576),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9358] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    anon_sym_SEMI,
    ACTIONS(821),
    1,
    anon_sym_default,
    STATE(223),
    1,
    sym_comment,
    STATE(339),
    1,
    sym_default,
    [9374] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(823),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9386] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_COMMA,
    ACTIONS(827),
    1,
    anon_sym_RPAREN,
    STATE(225),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_parameter_dcls_repeat1,
    [9402] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_COMMA,
    ACTIONS(829),
    1,
    anon_sym_RPAREN,
    STATE(225),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(226),
    1,
    sym_comment,
    [9418] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(831),
    1,
    anon_sym_SEMI,
    ACTIONS(833),
    1,
    anon_sym_switch,
    ACTIONS(835),
    1,
    sym_identifier,
    STATE(227),
    1,
    sym_comment,
    [9434] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(837),
    1,
    anon_sym_COMMA,
    ACTIONS(840),
    1,
    anon_sym_RBRACE,
    STATE(228),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [9448] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    anon_sym_COMMA,
    ACTIONS(844),
    1,
    anon_sym_LBRACE,
    STATE(229),
    1,
    sym_comment,
    STATE(233),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9464] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    anon_sym_COMMA,
    ACTIONS(848),
    1,
    anon_sym_RBRACE,
    STATE(230),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9480] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(850),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9492] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    anon_sym_SEMI,
    ACTIONS(854),
    1,
    sym_identifier,
    STATE(232),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [9506] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(857),
    1,
    anon_sym_COMMA,
    ACTIONS(860),
    1,
    anon_sym_LBRACE,
    STATE(233),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [9520] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(862),
    1,
    anon_sym_SEMI,
    ACTIONS(864),
    1,
    sym_identifier,
    STATE(232),
    1,
    aux_sym_bitfield_repeat1,
    STATE(234),
    1,
    sym_comment,
    [9536] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_default,
    ACTIONS(866),
    1,
    anon_sym_SEMI,
    STATE(235),
    1,
    sym_comment,
    STATE(361),
    1,
    sym_default,
    [9552] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(864),
    1,
    sym_identifier,
    ACTIONS(868),
    1,
    anon_sym_SEMI,
    STATE(234),
    1,
    aux_sym_bitfield_repeat1,
    STATE(236),
    1,
    sym_comment,
    [9568] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(870),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9580] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(872),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_COMMA,
    ACTIONS(879),
    1,
    anon_sym_RPAREN,
    STATE(239),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9608] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    anon_sym_COMMA,
    ACTIONS(881),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(240),
    1,
    sym_comment,
    [9624] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    anon_sym_COMMA,
    ACTIONS(883),
    1,
    anon_sym_LBRACE,
    STATE(229),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(241),
    1,
    sym_comment,
    [9640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(885),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9652] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(872),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9664] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(887),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9678] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(889),
    1,
    anon_sym_RBRACE,
    STATE(220),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(245),
    1,
    sym_comment,
    [9694] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_COMMA,
    ACTIONS(765),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(246),
    1,
    sym_comment,
    [9710] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(879),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9724] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    anon_sym_COMMA,
    ACTIONS(894),
    1,
    anon_sym_RBRACE,
    STATE(248),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [9738] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    ACTIONS(896),
    1,
    anon_sym_RPAREN,
    STATE(239),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(249),
    1,
    sym_comment,
    [9754] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(898),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9766] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(157),
    1,
    sym_simple_declarator,
    STATE(251),
    1,
    sym_comment,
    STATE(348),
    1,
    sym_readonly_attr_declarator,
    [9782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(700),
    1,
    anon_sym_COMMA,
    ACTIONS(900),
    1,
    anon_sym_RPAREN,
    STATE(239),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(252),
    1,
    sym_comment,
    [9798] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(902),
    1,
    anon_sym_RBRACE,
    STATE(211),
    1,
    aux_sym_interface_body_repeat1,
    STATE(253),
    1,
    sym_comment,
    [9814] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(904),
    1,
    anon_sym_COMMA,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(254),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9828] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    anon_sym_COMMA,
    ACTIONS(912),
    1,
    anon_sym_RPAREN,
    STATE(255),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [9842] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(690),
    1,
    anon_sym_XCDR,
    ACTIONS(692),
    1,
    anon_sym_XCDR2,
    STATE(165),
    1,
    aux_sym_data_representation_repeat1,
    STATE(256),
    1,
    sym_comment,
    [9858] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(914),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9870] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(258),
    1,
    sym_comment,
    [9886] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(916),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9898] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(739),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9910] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(920),
    1,
    anon_sym_XCDR,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(918),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [9924] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(922),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9936] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(784),
    1,
    anon_sym_COMMA,
    ACTIONS(924),
    1,
    anon_sym_SEMI,
    STATE(202),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(263),
    1,
    sym_comment,
    [9952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(926),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9964] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(726),
    1,
    anon_sym_LBRACE,
    ACTIONS(730),
    1,
    anon_sym_COLON,
    STATE(265),
    1,
    sym_comment,
    STATE(422),
    1,
    sym_interface_inheritance_spec,
    [9980] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    STATE(320),
    1,
    sym_scoped_name,
    [9996] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(928),
    1,
    anon_sym_RBRACE,
    ACTIONS(930),
    1,
    sym_identifier,
    STATE(230),
    1,
    sym_bit_value,
    STATE(267),
    1,
    sym_comment,
    [10012] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(268),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_scoped_name,
    [10028] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(932),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10039] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(934),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10050] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(936),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10061] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(549),
    1,
    anon_sym_interface,
    STATE(272),
    1,
    sym_comment,
    STATE(405),
    1,
    sym_interface_header,
    [10074] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(938),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(940),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10096] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(942),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(907),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10129] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(946),
    1,
    anon_sym_RPAREN,
    STATE(278),
    1,
    sym_comment,
    [10142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(948),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(912),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10164] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(950),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [10175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(952),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10186] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(954),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(956),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10208] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(894),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(958),
    1,
    anon_sym_LBRACE,
    ACTIONS(960),
    1,
    anon_sym_COLON,
    STATE(286),
    1,
    sym_comment,
    [10232] = 4,
    ACTIONS(962),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(964),
    1,
    sym_preproc_arg,
    ACTIONS(966),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    [10245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(968),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10256] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(970),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(972),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10278] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(974),
    1,
    anon_sym_LBRACE,
    STATE(291),
    1,
    sym_comment,
    [10291] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    STATE(292),
    1,
    sym_comment,
    STATE(342),
    1,
    sym_typedef_dcl,
    [10304] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_SEMI,
    ACTIONS(978),
    1,
    anon_sym_default,
    STATE(293),
    1,
    sym_comment,
    [10317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(980),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(930),
    1,
    sym_identifier,
    STATE(295),
    1,
    sym_comment,
    STATE(307),
    1,
    sym_bit_value,
    [10341] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10352] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(297),
    1,
    sym_comment,
    STATE(329),
    1,
    sym_simple_declarator,
    [10365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_DQUOTE,
    ACTIONS(986),
    1,
    anon_sym_SQUOTE,
    STATE(298),
    1,
    sym_comment,
    [10378] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(988),
    1,
    anon_sym_LBRACE,
    STATE(299),
    1,
    sym_comment,
    [10391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(860),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10413] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    anon_sym_GT,
    ACTIONS(994),
    1,
    anon_sym_COMMA,
    STATE(302),
    1,
    sym_comment,
    [10426] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(996),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10448] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    anon_sym_LPAREN,
    STATE(305),
    1,
    sym_comment,
    STATE(330),
    1,
    sym_exception_list,
    [10461] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1002),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10472] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(840),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10483] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    anon_sym_LPAREN,
    STATE(308),
    1,
    sym_comment,
    STATE(331),
    1,
    sym_exception_list,
    [10496] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(1004),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1006),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10518] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_LBRACE,
    ACTIONS(1010),
    1,
    anon_sym_COLON,
    STATE(311),
    1,
    sym_comment,
    [10531] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(274),
    1,
    sym_simple_declarator,
    STATE(312),
    1,
    sym_comment,
    [10544] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1012),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10555] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(293),
    1,
    sym_simple_declarator,
    STATE(314),
    1,
    sym_comment,
    [10568] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10579] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(1014),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10590] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1016),
    1,
    anon_sym_const,
    STATE(292),
    1,
    sym_const_dcl,
    STATE(317),
    1,
    sym_comment,
    [10603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1018),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10614] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(872),
    1,
    anon_sym_COMMA,
    STATE(319),
    1,
    sym_comment,
    [10627] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    ACTIONS(1020),
    1,
    anon_sym_LBRACE,
    STATE(320),
    1,
    sym_comment,
    [10640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1022),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1024),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10662] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1026),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10673] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_typedef,
    ACTIONS(1028),
    1,
    anon_sym_PIPE,
    STATE(324),
    1,
    sym_comment,
    [10686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(325),
    1,
    sym_comment,
    ACTIONS(1030),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10697] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(326),
    1,
    sym_comment,
    STATE(444),
    1,
    sym_simple_declarator,
    [10710] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1032),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(549),
    1,
    anon_sym_interface,
    STATE(328),
    1,
    sym_comment,
    STATE(447),
    1,
    sym_interface_header,
    [10734] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(329),
    1,
    sym_comment,
    ACTIONS(772),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1034),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10756] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(1036),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1038),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10778] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_GT,
    ACTIONS(1042),
    1,
    anon_sym_COMMA,
    STATE(333),
    1,
    sym_comment,
    [10791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1044),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_comment,
    [10801] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [10811] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    anon_sym_SEMI,
    STATE(336),
    1,
    sym_comment,
    [10821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1050),
    1,
    anon_sym_RBRACE,
    STATE(337),
    1,
    sym_comment,
    [10831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_DQUOTE,
    STATE(338),
    1,
    sym_comment,
    [10841] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_SEMI,
    STATE(339),
    1,
    sym_comment,
    [10851] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [10861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    [10871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [10881] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1062),
    1,
    anon_sym_LBRACE,
    STATE(343),
    1,
    sym_comment,
    [10891] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_DQUOTE,
    STATE(344),
    1,
    sym_comment,
    [10901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_SQUOTE,
    STATE(345),
    1,
    sym_comment,
    [10911] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1068),
    1,
    anon_sym_RPAREN,
    STATE(346),
    1,
    sym_comment,
    [10921] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1070),
    1,
    anon_sym_GT,
    STATE(347),
    1,
    sym_comment,
    [10931] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [10941] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [10951] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [10961] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1074),
    1,
    anon_sym_RPAREN,
    STATE(351),
    1,
    sym_comment,
    [10971] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_SEMI,
    STATE(352),
    1,
    sym_comment,
    [10981] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1078),
    1,
    aux_sym_char_literal_token1,
    STATE(353),
    1,
    sym_comment,
    [10991] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1080),
    1,
    anon_sym_RPAREN,
    STATE(354),
    1,
    sym_comment,
    [11001] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    anon_sym_RBRACK,
    STATE(355),
    1,
    sym_comment,
    [11011] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_GT,
    STATE(356),
    1,
    sym_comment,
    [11021] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    anon_sym_SQUOTE,
    STATE(357),
    1,
    sym_comment,
    [11031] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [11041] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    anon_sym_DQUOTE,
    STATE(359),
    1,
    sym_comment,
    [11051] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [11061] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1094),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [11071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    aux_sym_string_literal_token1,
    STATE(362),
    1,
    sym_comment,
    [11081] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1098),
    1,
    anon_sym_RPAREN,
    STATE(363),
    1,
    sym_comment,
    [11091] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_SEMI,
    STATE(364),
    1,
    sym_comment,
    [11101] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1102),
    1,
    anon_sym_SEMI,
    STATE(365),
    1,
    sym_comment,
    [11111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_RPAREN,
    STATE(366),
    1,
    sym_comment,
    [11121] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(946),
    1,
    anon_sym_RPAREN,
    STATE(367),
    1,
    sym_comment,
    [11131] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [11141] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [11151] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_SEMI,
    STATE(370),
    1,
    sym_comment,
    [11161] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [11171] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    [11181] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_SEMI,
    STATE(373),
    1,
    sym_comment,
    [11191] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(374),
    1,
    sym_comment,
    [11201] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1120),
    1,
    anon_sym_LPAREN,
    STATE(375),
    1,
    sym_comment,
    [11211] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(790),
    1,
    anon_sym_SEMI,
    STATE(376),
    1,
    sym_comment,
    [11221] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_LPAREN,
    STATE(377),
    1,
    sym_comment,
    [11231] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1124),
    1,
    aux_sym_string_literal_token1,
    STATE(378),
    1,
    sym_comment,
    [11241] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    aux_sym_string_literal_token1,
    STATE(379),
    1,
    sym_comment,
    [11251] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    anon_sym_COMMA,
    STATE(380),
    1,
    sym_comment,
    [11261] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1130),
    1,
    anon_sym_GT,
    STATE(381),
    1,
    sym_comment,
    [11271] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1132),
    1,
    anon_sym_GT,
    STATE(382),
    1,
    sym_comment,
    [11281] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1134),
    1,
    anon_sym_COMMA,
    STATE(383),
    1,
    sym_comment,
    [11291] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    aux_sym_char_literal_token1,
    STATE(384),
    1,
    sym_comment,
    [11301] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(808),
    1,
    anon_sym_SEMI,
    STATE(385),
    1,
    sym_comment,
    [11311] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    aux_sym_string_literal_token1,
    STATE(386),
    1,
    sym_comment,
    [11321] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    anon_sym_SEMI,
    STATE(387),
    1,
    sym_comment,
    [11331] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1142),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [11341] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    anon_sym_RBRACE,
    STATE(389),
    1,
    sym_comment,
    [11351] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(390),
    1,
    sym_comment,
    [11361] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1148),
    1,
    anon_sym_SEMI,
    STATE(391),
    1,
    sym_comment,
    [11371] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    sym_identifier,
    STATE(392),
    1,
    sym_comment,
    [11381] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    anon_sym_SEMI,
    STATE(393),
    1,
    sym_comment,
    [11391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_GT,
    STATE(394),
    1,
    sym_comment,
    [11401] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_GT,
    STATE(395),
    1,
    sym_comment,
    [11411] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_LT,
    STATE(396),
    1,
    sym_comment,
    [11421] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    anon_sym_SEMI,
    STATE(397),
    1,
    sym_comment,
    [11431] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_COLON,
    STATE(398),
    1,
    sym_comment,
    [11441] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(247),
    1,
    anon_sym_RBRACE,
    STATE(399),
    1,
    sym_comment,
    [11451] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    anon_sym_SEMI,
    STATE(400),
    1,
    sym_comment,
    [11461] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    sym_identifier,
    STATE(401),
    1,
    sym_comment,
    [11471] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(402),
    1,
    sym_comment,
    [11481] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    anon_sym_GT,
    STATE(403),
    1,
    sym_comment,
    [11491] = 3,
    ACTIONS(966),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    aux_sym_comment_token1,
    STATE(404),
    1,
    sym_comment,
    [11501] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    anon_sym_LBRACE,
    STATE(405),
    1,
    sym_comment,
    [11511] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_LBRACE,
    STATE(406),
    1,
    sym_comment,
    [11521] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_RPAREN,
    STATE(407),
    1,
    sym_comment,
    [11531] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_SEMI,
    STATE(408),
    1,
    sym_comment,
    [11541] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1182),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    [11551] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1184),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [11561] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(237),
    1,
    anon_sym_RBRACE,
    STATE(411),
    1,
    sym_comment,
    [11571] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1186),
    1,
    anon_sym_attribute,
    STATE(412),
    1,
    sym_comment,
    [11581] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1188),
    1,
    anon_sym_SEMI,
    STATE(413),
    1,
    sym_comment,
    [11591] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1190),
    1,
    anon_sym_EQ,
    STATE(414),
    1,
    sym_comment,
    [11601] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1192),
    1,
    anon_sym_COLON,
    STATE(415),
    1,
    sym_comment,
    [11611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1194),
    1,
    anon_sym_EQ,
    STATE(416),
    1,
    sym_comment,
    [11621] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1196),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [11631] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    anon_sym_EQ,
    STATE(418),
    1,
    sym_comment,
    [11641] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1200),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1202),
    1,
    anon_sym_LPAREN,
    STATE(420),
    1,
    sym_comment,
    [11661] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [11671] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1206),
    1,
    anon_sym_LBRACE,
    STATE(422),
    1,
    sym_comment,
    [11681] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1208),
    1,
    sym_identifier,
    STATE(423),
    1,
    sym_comment,
    [11691] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1210),
    1,
    sym_identifier,
    STATE(424),
    1,
    sym_comment,
    [11701] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    sym_identifier,
    STATE(425),
    1,
    sym_comment,
    [11711] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(426),
    1,
    sym_comment,
    [11721] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1214),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [11731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1216),
    1,
    sym_identifier,
    STATE(428),
    1,
    sym_comment,
    [11741] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1218),
    1,
    anon_sym_SEMI,
    STATE(429),
    1,
    sym_comment,
    [11751] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(430),
    1,
    sym_comment,
    [11761] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1220),
    1,
    anon_sym_name,
    STATE(431),
    1,
    sym_comment,
    [11771] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1222),
    1,
    anon_sym_name,
    STATE(432),
    1,
    sym_comment,
    [11781] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1224),
    1,
    anon_sym_SEMI,
    STATE(433),
    1,
    sym_comment,
    [11791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1226),
    1,
    anon_sym_SEMI,
    STATE(434),
    1,
    sym_comment,
    [11801] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(872),
    1,
    sym_identifier,
    STATE(435),
    1,
    sym_comment,
    [11811] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1228),
    1,
    anon_sym_LT,
    STATE(436),
    1,
    sym_comment,
    [11821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    anon_sym_LT,
    STATE(437),
    1,
    sym_comment,
    [11831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_const,
    STATE(438),
    1,
    sym_comment,
    [11841] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    sym_identifier,
    STATE(439),
    1,
    sym_comment,
    [11851] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1232),
    1,
    anon_sym_LT,
    STATE(440),
    1,
    sym_comment,
    [11861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    anon_sym_LBRACE,
    STATE(441),
    1,
    sym_comment,
    [11871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    anon_sym_const,
    STATE(442),
    1,
    sym_comment,
    [11881] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_LBRACE,
    STATE(443),
    1,
    sym_comment,
    [11891] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1238),
    1,
    anon_sym_SEMI,
    STATE(444),
    1,
    sym_comment,
    [11901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    anon_sym_LBRACE,
    STATE(445),
    1,
    sym_comment,
    [11911] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    anon_sym_LBRACE,
    STATE(446),
    1,
    sym_comment,
    [11921] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1244),
    1,
    anon_sym_LBRACE,
    STATE(447),
    1,
    sym_comment,
    [11931] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    sym_identifier,
    STATE(448),
    1,
    sym_comment,
    [11941] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    anon_sym_LBRACE,
    STATE(449),
    1,
    sym_comment,
    [11951] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    anon_sym_const,
    STATE(450),
    1,
    sym_comment,
    [11961] = 3,
    ACTIONS(966),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    aux_sym_preproc_call_token1,
    STATE(451),
    1,
    sym_comment,
    [11971] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_enum,
    STATE(452),
    1,
    sym_comment,
    [11981] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1254),
    1,
    anon_sym_LBRACE,
    STATE(453),
    1,
    sym_comment,
    [11991] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    anon_sym_SEMI,
    STATE(454),
    1,
    sym_comment,
    [12001] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    anon_sym_const,
    STATE(455),
    1,
    sym_comment,
    [12011] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1258),
    1,
    anon_sym_SEMI,
    STATE(456),
    1,
    sym_comment,
    [12021] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1260),
    1,
    anon_sym_enum,
    STATE(457),
    1,
    sym_comment,
    [12031] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1262),
    1,
    ts_builtin_sym_end,
    STATE(458),
    1,
    sym_comment,
    [12041] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1264),
    1,
    anon_sym_LPAREN,
    STATE(459),
    1,
    sym_comment,
    [12051] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    sym_identifier,
    STATE(460),
    1,
    sym_comment,
    [12061] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1266),
    1,
    anon_sym_LPAREN,
    STATE(461),
    1,
    sym_comment,
    [12071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1268),
    1,
    anon_sym_EQ,
    STATE(462),
    1,
    sym_comment,
    [12081] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1270),
    1,
    anon_sym_LPAREN,
    STATE(463),
    1,
    sym_comment,
    [12091] = 3,
    ACTIONS(966),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1272),
    1,
    aux_sym_predefine_token1,
    STATE(464),
    1,
    sym_comment,
    [12101] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1274),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [12111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1276),
    1,
    anon_sym_enum,
    STATE(466),
    1,
    sym_comment,
    [12121] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1278),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [12131] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1280),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [12141] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [12151] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1284),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [12161] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1286),
    1,
    sym_identifier,
    STATE(471),
    1,
    sym_comment,
    [12171] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1288),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [12181] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1290),
    1,
    sym_identifier,
    STATE(473),
    1,
    sym_comment,
    [12191] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1292),
    1,
    sym_identifier,
    STATE(474),
    1,
    sym_comment,
    [12201] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1294),
    1,
    anon_sym_LBRACE,
    STATE(475),
    1,
    sym_comment,
    [12211] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1296),
    1,
    sym_identifier,
    STATE(476),
    1,
    sym_comment,
    [12221] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1298),
    1,
    anon_sym_LBRACE,
    STATE(477),
    1,
    sym_comment,
    [12231] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1300),
    1,
    sym_identifier,
    STATE(478),
    1,
    sym_comment,
    [12241] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1302),
    1,
    sym_identifier,
    STATE(479),
    1,
    sym_comment,
    [12251] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(480),
    1,
    sym_comment,
    [12261] = 1,
    ACTIONS(1306),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 120,
    [SMALL_STATE(4)] = 240,
    [SMALL_STATE(5)] = 360,
    [SMALL_STATE(6)] = 480,
    [SMALL_STATE(7)] = 610,
    [SMALL_STATE(8)] = 730,
    [SMALL_STATE(9)] = 850,
    [SMALL_STATE(10)] = 970,
    [SMALL_STATE(11)] = 1088,
    [SMALL_STATE(12)] = 1208,
    [SMALL_STATE(13)] = 1328,
    [SMALL_STATE(14)] = 1448,
    [SMALL_STATE(15)] = 1567,
    [SMALL_STATE(16)] = 1687,
    [SMALL_STATE(17)] = 1808,
    [SMALL_STATE(18)] = 1929,
    [SMALL_STATE(19)] = 2050,
    [SMALL_STATE(20)] = 2171,
    [SMALL_STATE(21)] = 2282,
    [SMALL_STATE(22)] = 2398,
    [SMALL_STATE(23)] = 2514,
    [SMALL_STATE(24)] = 2630,
    [SMALL_STATE(25)] = 2740,
    [SMALL_STATE(26)] = 2841,
    [SMALL_STATE(27)] = 2939,
    [SMALL_STATE(28)] = 3035,
    [SMALL_STATE(29)] = 3128,
    [SMALL_STATE(30)] = 3218,
    [SMALL_STATE(31)] = 3305,
    [SMALL_STATE(32)] = 3392,
    [SMALL_STATE(33)] = 3479,
    [SMALL_STATE(34)] = 3566,
    [SMALL_STATE(35)] = 3653,
    [SMALL_STATE(36)] = 3707,
    [SMALL_STATE(37)] = 3748,
    [SMALL_STATE(38)] = 3789,
    [SMALL_STATE(39)] = 3830,
    [SMALL_STATE(40)] = 3871,
    [SMALL_STATE(41)] = 3912,
    [SMALL_STATE(42)] = 3952,
    [SMALL_STATE(43)] = 4022,
    [SMALL_STATE(44)] = 4062,
    [SMALL_STATE(45)] = 4102,
    [SMALL_STATE(46)] = 4172,
    [SMALL_STATE(47)] = 4212,
    [SMALL_STATE(48)] = 4292,
    [SMALL_STATE(49)] = 4372,
    [SMALL_STATE(50)] = 4452,
    [SMALL_STATE(51)] = 4532,
    [SMALL_STATE(52)] = 4612,
    [SMALL_STATE(53)] = 4692,
    [SMALL_STATE(54)] = 4772,
    [SMALL_STATE(55)] = 4849,
    [SMALL_STATE(56)] = 4926,
    [SMALL_STATE(57)] = 5003,
    [SMALL_STATE(58)] = 5080,
    [SMALL_STATE(59)] = 5157,
    [SMALL_STATE(60)] = 5234,
    [SMALL_STATE(61)] = 5311,
    [SMALL_STATE(62)] = 5382,
    [SMALL_STATE(63)] = 5453,
    [SMALL_STATE(64)] = 5492,
    [SMALL_STATE(65)] = 5526,
    [SMALL_STATE(66)] = 5560,
    [SMALL_STATE(67)] = 5594,
    [SMALL_STATE(68)] = 5628,
    [SMALL_STATE(69)] = 5696,
    [SMALL_STATE(70)] = 5764,
    [SMALL_STATE(71)] = 5795,
    [SMALL_STATE(72)] = 5826,
    [SMALL_STATE(73)] = 5859,
    [SMALL_STATE(74)] = 5890,
    [SMALL_STATE(75)] = 5921,
    [SMALL_STATE(76)] = 5954,
    [SMALL_STATE(77)] = 6019,
    [SMALL_STATE(78)] = 6050,
    [SMALL_STATE(79)] = 6083,
    [SMALL_STATE(80)] = 6114,
    [SMALL_STATE(81)] = 6179,
    [SMALL_STATE(82)] = 6211,
    [SMALL_STATE(83)] = 6243,
    [SMALL_STATE(84)] = 6305,
    [SMALL_STATE(85)] = 6337,
    [SMALL_STATE(86)] = 6399,
    [SMALL_STATE(87)] = 6458,
    [SMALL_STATE(88)] = 6517,
    [SMALL_STATE(89)] = 6573,
    [SMALL_STATE(90)] = 6629,
    [SMALL_STATE(91)] = 6658,
    [SMALL_STATE(92)] = 6687,
    [SMALL_STATE(93)] = 6715,
    [SMALL_STATE(94)] = 6743,
    [SMALL_STATE(95)] = 6771,
    [SMALL_STATE(96)] = 6799,
    [SMALL_STATE(97)] = 6827,
    [SMALL_STATE(98)] = 6855,
    [SMALL_STATE(99)] = 6883,
    [SMALL_STATE(100)] = 6911,
    [SMALL_STATE(101)] = 6939,
    [SMALL_STATE(102)] = 6967,
    [SMALL_STATE(103)] = 6997,
    [SMALL_STATE(104)] = 7045,
    [SMALL_STATE(105)] = 7075,
    [SMALL_STATE(106)] = 7103,
    [SMALL_STATE(107)] = 7131,
    [SMALL_STATE(108)] = 7162,
    [SMALL_STATE(109)] = 7193,
    [SMALL_STATE(110)] = 7236,
    [SMALL_STATE(111)] = 7279,
    [SMALL_STATE(112)] = 7305,
    [SMALL_STATE(113)] = 7331,
    [SMALL_STATE(114)] = 7354,
    [SMALL_STATE(115)] = 7379,
    [SMALL_STATE(116)] = 7404,
    [SMALL_STATE(117)] = 7439,
    [SMALL_STATE(118)] = 7462,
    [SMALL_STATE(119)] = 7486,
    [SMALL_STATE(120)] = 7510,
    [SMALL_STATE(121)] = 7534,
    [SMALL_STATE(122)] = 7558,
    [SMALL_STATE(123)] = 7593,
    [SMALL_STATE(124)] = 7613,
    [SMALL_STATE(125)] = 7641,
    [SMALL_STATE(126)] = 7661,
    [SMALL_STATE(127)] = 7681,
    [SMALL_STATE(128)] = 7700,
    [SMALL_STATE(129)] = 7719,
    [SMALL_STATE(130)] = 7738,
    [SMALL_STATE(131)] = 7757,
    [SMALL_STATE(132)] = 7788,
    [SMALL_STATE(133)] = 7814,
    [SMALL_STATE(134)] = 7830,
    [SMALL_STATE(135)] = 7848,
    [SMALL_STATE(136)] = 7873,
    [SMALL_STATE(137)] = 7890,
    [SMALL_STATE(138)] = 7915,
    [SMALL_STATE(139)] = 7940,
    [SMALL_STATE(140)] = 7965,
    [SMALL_STATE(141)] = 7982,
    [SMALL_STATE(142)] = 8007,
    [SMALL_STATE(143)] = 8032,
    [SMALL_STATE(144)] = 8053,
    [SMALL_STATE(145)] = 8074,
    [SMALL_STATE(146)] = 8097,
    [SMALL_STATE(147)] = 8116,
    [SMALL_STATE(148)] = 8138,
    [SMALL_STATE(149)] = 8160,
    [SMALL_STATE(150)] = 8180,
    [SMALL_STATE(151)] = 8194,
    [SMALL_STATE(152)] = 8214,
    [SMALL_STATE(153)] = 8228,
    [SMALL_STATE(154)] = 8248,
    [SMALL_STATE(155)] = 8268,
    [SMALL_STATE(156)] = 8282,
    [SMALL_STATE(157)] = 8304,
    [SMALL_STATE(158)] = 8326,
    [SMALL_STATE(159)] = 8348,
    [SMALL_STATE(160)] = 8368,
    [SMALL_STATE(161)] = 8390,
    [SMALL_STATE(162)] = 8404,
    [SMALL_STATE(163)] = 8424,
    [SMALL_STATE(164)] = 8446,
    [SMALL_STATE(165)] = 8463,
    [SMALL_STATE(166)] = 8482,
    [SMALL_STATE(167)] = 8497,
    [SMALL_STATE(168)] = 8512,
    [SMALL_STATE(169)] = 8531,
    [SMALL_STATE(170)] = 8550,
    [SMALL_STATE(171)] = 8567,
    [SMALL_STATE(172)] = 8580,
    [SMALL_STATE(173)] = 8599,
    [SMALL_STATE(174)] = 8616,
    [SMALL_STATE(175)] = 8631,
    [SMALL_STATE(176)] = 8648,
    [SMALL_STATE(177)] = 8667,
    [SMALL_STATE(178)] = 8684,
    [SMALL_STATE(179)] = 8703,
    [SMALL_STATE(180)] = 8716,
    [SMALL_STATE(181)] = 8731,
    [SMALL_STATE(182)] = 8744,
    [SMALL_STATE(183)] = 8763,
    [SMALL_STATE(184)] = 8782,
    [SMALL_STATE(185)] = 8799,
    [SMALL_STATE(186)] = 8816,
    [SMALL_STATE(187)] = 8829,
    [SMALL_STATE(188)] = 8848,
    [SMALL_STATE(189)] = 8865,
    [SMALL_STATE(190)] = 8884,
    [SMALL_STATE(191)] = 8901,
    [SMALL_STATE(192)] = 8920,
    [SMALL_STATE(193)] = 8933,
    [SMALL_STATE(194)] = 8946,
    [SMALL_STATE(195)] = 8962,
    [SMALL_STATE(196)] = 8974,
    [SMALL_STATE(197)] = 8988,
    [SMALL_STATE(198)] = 9000,
    [SMALL_STATE(199)] = 9012,
    [SMALL_STATE(200)] = 9028,
    [SMALL_STATE(201)] = 9040,
    [SMALL_STATE(202)] = 9056,
    [SMALL_STATE(203)] = 9072,
    [SMALL_STATE(204)] = 9088,
    [SMALL_STATE(205)] = 9104,
    [SMALL_STATE(206)] = 9116,
    [SMALL_STATE(207)] = 9128,
    [SMALL_STATE(208)] = 9144,
    [SMALL_STATE(209)] = 9160,
    [SMALL_STATE(210)] = 9176,
    [SMALL_STATE(211)] = 9190,
    [SMALL_STATE(212)] = 9206,
    [SMALL_STATE(213)] = 9222,
    [SMALL_STATE(214)] = 9234,
    [SMALL_STATE(215)] = 9250,
    [SMALL_STATE(216)] = 9262,
    [SMALL_STATE(217)] = 9274,
    [SMALL_STATE(218)] = 9290,
    [SMALL_STATE(219)] = 9306,
    [SMALL_STATE(220)] = 9318,
    [SMALL_STATE(221)] = 9332,
    [SMALL_STATE(222)] = 9344,
    [SMALL_STATE(223)] = 9358,
    [SMALL_STATE(224)] = 9374,
    [SMALL_STATE(225)] = 9386,
    [SMALL_STATE(226)] = 9402,
    [SMALL_STATE(227)] = 9418,
    [SMALL_STATE(228)] = 9434,
    [SMALL_STATE(229)] = 9448,
    [SMALL_STATE(230)] = 9464,
    [SMALL_STATE(231)] = 9480,
    [SMALL_STATE(232)] = 9492,
    [SMALL_STATE(233)] = 9506,
    [SMALL_STATE(234)] = 9520,
    [SMALL_STATE(235)] = 9536,
    [SMALL_STATE(236)] = 9552,
    [SMALL_STATE(237)] = 9568,
    [SMALL_STATE(238)] = 9580,
    [SMALL_STATE(239)] = 9594,
    [SMALL_STATE(240)] = 9608,
    [SMALL_STATE(241)] = 9624,
    [SMALL_STATE(242)] = 9640,
    [SMALL_STATE(243)] = 9652,
    [SMALL_STATE(244)] = 9664,
    [SMALL_STATE(245)] = 9678,
    [SMALL_STATE(246)] = 9694,
    [SMALL_STATE(247)] = 9710,
    [SMALL_STATE(248)] = 9724,
    [SMALL_STATE(249)] = 9738,
    [SMALL_STATE(250)] = 9754,
    [SMALL_STATE(251)] = 9766,
    [SMALL_STATE(252)] = 9782,
    [SMALL_STATE(253)] = 9798,
    [SMALL_STATE(254)] = 9814,
    [SMALL_STATE(255)] = 9828,
    [SMALL_STATE(256)] = 9842,
    [SMALL_STATE(257)] = 9858,
    [SMALL_STATE(258)] = 9870,
    [SMALL_STATE(259)] = 9886,
    [SMALL_STATE(260)] = 9898,
    [SMALL_STATE(261)] = 9910,
    [SMALL_STATE(262)] = 9924,
    [SMALL_STATE(263)] = 9936,
    [SMALL_STATE(264)] = 9952,
    [SMALL_STATE(265)] = 9964,
    [SMALL_STATE(266)] = 9980,
    [SMALL_STATE(267)] = 9996,
    [SMALL_STATE(268)] = 10012,
    [SMALL_STATE(269)] = 10028,
    [SMALL_STATE(270)] = 10039,
    [SMALL_STATE(271)] = 10050,
    [SMALL_STATE(272)] = 10061,
    [SMALL_STATE(273)] = 10074,
    [SMALL_STATE(274)] = 10085,
    [SMALL_STATE(275)] = 10096,
    [SMALL_STATE(276)] = 10107,
    [SMALL_STATE(277)] = 10118,
    [SMALL_STATE(278)] = 10129,
    [SMALL_STATE(279)] = 10142,
    [SMALL_STATE(280)] = 10153,
    [SMALL_STATE(281)] = 10164,
    [SMALL_STATE(282)] = 10175,
    [SMALL_STATE(283)] = 10186,
    [SMALL_STATE(284)] = 10197,
    [SMALL_STATE(285)] = 10208,
    [SMALL_STATE(286)] = 10219,
    [SMALL_STATE(287)] = 10232,
    [SMALL_STATE(288)] = 10245,
    [SMALL_STATE(289)] = 10256,
    [SMALL_STATE(290)] = 10267,
    [SMALL_STATE(291)] = 10278,
    [SMALL_STATE(292)] = 10291,
    [SMALL_STATE(293)] = 10304,
    [SMALL_STATE(294)] = 10317,
    [SMALL_STATE(295)] = 10328,
    [SMALL_STATE(296)] = 10341,
    [SMALL_STATE(297)] = 10352,
    [SMALL_STATE(298)] = 10365,
    [SMALL_STATE(299)] = 10378,
    [SMALL_STATE(300)] = 10391,
    [SMALL_STATE(301)] = 10402,
    [SMALL_STATE(302)] = 10413,
    [SMALL_STATE(303)] = 10426,
    [SMALL_STATE(304)] = 10437,
    [SMALL_STATE(305)] = 10448,
    [SMALL_STATE(306)] = 10461,
    [SMALL_STATE(307)] = 10472,
    [SMALL_STATE(308)] = 10483,
    [SMALL_STATE(309)] = 10496,
    [SMALL_STATE(310)] = 10507,
    [SMALL_STATE(311)] = 10518,
    [SMALL_STATE(312)] = 10531,
    [SMALL_STATE(313)] = 10544,
    [SMALL_STATE(314)] = 10555,
    [SMALL_STATE(315)] = 10568,
    [SMALL_STATE(316)] = 10579,
    [SMALL_STATE(317)] = 10590,
    [SMALL_STATE(318)] = 10603,
    [SMALL_STATE(319)] = 10614,
    [SMALL_STATE(320)] = 10627,
    [SMALL_STATE(321)] = 10640,
    [SMALL_STATE(322)] = 10651,
    [SMALL_STATE(323)] = 10662,
    [SMALL_STATE(324)] = 10673,
    [SMALL_STATE(325)] = 10686,
    [SMALL_STATE(326)] = 10697,
    [SMALL_STATE(327)] = 10710,
    [SMALL_STATE(328)] = 10721,
    [SMALL_STATE(329)] = 10734,
    [SMALL_STATE(330)] = 10745,
    [SMALL_STATE(331)] = 10756,
    [SMALL_STATE(332)] = 10767,
    [SMALL_STATE(333)] = 10778,
    [SMALL_STATE(334)] = 10791,
    [SMALL_STATE(335)] = 10801,
    [SMALL_STATE(336)] = 10811,
    [SMALL_STATE(337)] = 10821,
    [SMALL_STATE(338)] = 10831,
    [SMALL_STATE(339)] = 10841,
    [SMALL_STATE(340)] = 10851,
    [SMALL_STATE(341)] = 10861,
    [SMALL_STATE(342)] = 10871,
    [SMALL_STATE(343)] = 10881,
    [SMALL_STATE(344)] = 10891,
    [SMALL_STATE(345)] = 10901,
    [SMALL_STATE(346)] = 10911,
    [SMALL_STATE(347)] = 10921,
    [SMALL_STATE(348)] = 10931,
    [SMALL_STATE(349)] = 10941,
    [SMALL_STATE(350)] = 10951,
    [SMALL_STATE(351)] = 10961,
    [SMALL_STATE(352)] = 10971,
    [SMALL_STATE(353)] = 10981,
    [SMALL_STATE(354)] = 10991,
    [SMALL_STATE(355)] = 11001,
    [SMALL_STATE(356)] = 11011,
    [SMALL_STATE(357)] = 11021,
    [SMALL_STATE(358)] = 11031,
    [SMALL_STATE(359)] = 11041,
    [SMALL_STATE(360)] = 11051,
    [SMALL_STATE(361)] = 11061,
    [SMALL_STATE(362)] = 11071,
    [SMALL_STATE(363)] = 11081,
    [SMALL_STATE(364)] = 11091,
    [SMALL_STATE(365)] = 11101,
    [SMALL_STATE(366)] = 11111,
    [SMALL_STATE(367)] = 11121,
    [SMALL_STATE(368)] = 11131,
    [SMALL_STATE(369)] = 11141,
    [SMALL_STATE(370)] = 11151,
    [SMALL_STATE(371)] = 11161,
    [SMALL_STATE(372)] = 11171,
    [SMALL_STATE(373)] = 11181,
    [SMALL_STATE(374)] = 11191,
    [SMALL_STATE(375)] = 11201,
    [SMALL_STATE(376)] = 11211,
    [SMALL_STATE(377)] = 11221,
    [SMALL_STATE(378)] = 11231,
    [SMALL_STATE(379)] = 11241,
    [SMALL_STATE(380)] = 11251,
    [SMALL_STATE(381)] = 11261,
    [SMALL_STATE(382)] = 11271,
    [SMALL_STATE(383)] = 11281,
    [SMALL_STATE(384)] = 11291,
    [SMALL_STATE(385)] = 11301,
    [SMALL_STATE(386)] = 11311,
    [SMALL_STATE(387)] = 11321,
    [SMALL_STATE(388)] = 11331,
    [SMALL_STATE(389)] = 11341,
    [SMALL_STATE(390)] = 11351,
    [SMALL_STATE(391)] = 11361,
    [SMALL_STATE(392)] = 11371,
    [SMALL_STATE(393)] = 11381,
    [SMALL_STATE(394)] = 11391,
    [SMALL_STATE(395)] = 11401,
    [SMALL_STATE(396)] = 11411,
    [SMALL_STATE(397)] = 11421,
    [SMALL_STATE(398)] = 11431,
    [SMALL_STATE(399)] = 11441,
    [SMALL_STATE(400)] = 11451,
    [SMALL_STATE(401)] = 11461,
    [SMALL_STATE(402)] = 11471,
    [SMALL_STATE(403)] = 11481,
    [SMALL_STATE(404)] = 11491,
    [SMALL_STATE(405)] = 11501,
    [SMALL_STATE(406)] = 11511,
    [SMALL_STATE(407)] = 11521,
    [SMALL_STATE(408)] = 11531,
    [SMALL_STATE(409)] = 11541,
    [SMALL_STATE(410)] = 11551,
    [SMALL_STATE(411)] = 11561,
    [SMALL_STATE(412)] = 11571,
    [SMALL_STATE(413)] = 11581,
    [SMALL_STATE(414)] = 11591,
    [SMALL_STATE(415)] = 11601,
    [SMALL_STATE(416)] = 11611,
    [SMALL_STATE(417)] = 11621,
    [SMALL_STATE(418)] = 11631,
    [SMALL_STATE(419)] = 11641,
    [SMALL_STATE(420)] = 11651,
    [SMALL_STATE(421)] = 11661,
    [SMALL_STATE(422)] = 11671,
    [SMALL_STATE(423)] = 11681,
    [SMALL_STATE(424)] = 11691,
    [SMALL_STATE(425)] = 11701,
    [SMALL_STATE(426)] = 11711,
    [SMALL_STATE(427)] = 11721,
    [SMALL_STATE(428)] = 11731,
    [SMALL_STATE(429)] = 11741,
    [SMALL_STATE(430)] = 11751,
    [SMALL_STATE(431)] = 11761,
    [SMALL_STATE(432)] = 11771,
    [SMALL_STATE(433)] = 11781,
    [SMALL_STATE(434)] = 11791,
    [SMALL_STATE(435)] = 11801,
    [SMALL_STATE(436)] = 11811,
    [SMALL_STATE(437)] = 11821,
    [SMALL_STATE(438)] = 11831,
    [SMALL_STATE(439)] = 11841,
    [SMALL_STATE(440)] = 11851,
    [SMALL_STATE(441)] = 11861,
    [SMALL_STATE(442)] = 11871,
    [SMALL_STATE(443)] = 11881,
    [SMALL_STATE(444)] = 11891,
    [SMALL_STATE(445)] = 11901,
    [SMALL_STATE(446)] = 11911,
    [SMALL_STATE(447)] = 11921,
    [SMALL_STATE(448)] = 11931,
    [SMALL_STATE(449)] = 11941,
    [SMALL_STATE(450)] = 11951,
    [SMALL_STATE(451)] = 11961,
    [SMALL_STATE(452)] = 11971,
    [SMALL_STATE(453)] = 11981,
    [SMALL_STATE(454)] = 11991,
    [SMALL_STATE(455)] = 12001,
    [SMALL_STATE(456)] = 12011,
    [SMALL_STATE(457)] = 12021,
    [SMALL_STATE(458)] = 12031,
    [SMALL_STATE(459)] = 12041,
    [SMALL_STATE(460)] = 12051,
    [SMALL_STATE(461)] = 12061,
    [SMALL_STATE(462)] = 12071,
    [SMALL_STATE(463)] = 12081,
    [SMALL_STATE(464)] = 12091,
    [SMALL_STATE(465)] = 12101,
    [SMALL_STATE(466)] = 12111,
    [SMALL_STATE(467)] = 12121,
    [SMALL_STATE(468)] = 12131,
    [SMALL_STATE(469)] = 12141,
    [SMALL_STATE(470)] = 12151,
    [SMALL_STATE(471)] = 12161,
    [SMALL_STATE(472)] = 12171,
    [SMALL_STATE(473)] = 12181,
    [SMALL_STATE(474)] = 12191,
    [SMALL_STATE(475)] = 12201,
    [SMALL_STATE(476)] = 12211,
    [SMALL_STATE(477)] = 12221,
    [SMALL_STATE(478)] = 12231,
    [SMALL_STATE(479)] = 12241,
    [SMALL_STATE(480)] = 12251,
    [SMALL_STATE(481)] = 12261,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(287),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(464),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(179),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(231),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(440),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(186),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(174),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(237),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(436),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [89] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [91] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [93] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [95] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [97] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(179),
    [102] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(179),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(231),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(440),
    [111] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(192),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(192),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(195),
    [120] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(195),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [126] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(439),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(174),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(237),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(437),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(436),
    [141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [143] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(41),
    [146] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(402),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(401),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(91),
    [155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [161] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [163] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(467),
    [165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(465),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [169] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(479),
    [172] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(473),
    [175] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(328),
    [178] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(472),
    [181] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(471),
    [184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(470),
    [187] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(326),
    [190] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(469),
    [193] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(468),
    [196] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(467),
    [199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(466),
    [202] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(465),
    [205] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(14),
    [208] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(464),
    [211] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(155),
    [214] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(463),
    [217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(461),
    [220] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(45),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(215),
    [226] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(334),
    [241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(412),
    [243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(31),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [249] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(430),
    [251] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(428),
    [253] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(392),
    [255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [257] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(478),
    [259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(179),
    [264] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(179),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(430),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(428),
    [273] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(192),
    [276] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(192),
    [279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(195),
    [282] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(195),
    [285] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(186),
    [288] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(439),
    [291] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(174),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(392),
    [297] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(437),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [302] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(478),
    [305] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(466),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(91),
    [311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [317] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(216),
    [319] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [323] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(41),
    [326] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(402),
    [329] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(401),
    [332] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [336] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [340] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [342] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [344] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [348] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [352] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [360] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [362] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [364] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [366] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [368] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(298),
    [376] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [382] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [384] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [386] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [388] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(287),
    [393] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [395] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [399] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [403] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [407] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [425] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [431] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [435] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [439] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [443] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [447] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [451] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [455] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [459] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [461] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [463] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [465] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [467] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [469] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [471] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [473] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [475] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [477] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [479] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [483] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [487] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [491] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [497] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(367),
    [499] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [503] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [507] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [509] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [513] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [515] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [521] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [527] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [531] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [535] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [543] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [545] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [547] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [559] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(155),
    [562] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(463),
    [565] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(461),
    [568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [572] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [580] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [584] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [586] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [592] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [594] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [602] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [630] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(398),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(54),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [638] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(53),
    [641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [647] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [651] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(396),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [658] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(215),
    [661] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(459),
    [664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [668] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [674] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [678] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [682] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [685] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [690] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [700] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [706] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(308),
    [709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [713] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(322),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [718] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [722] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [726] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [730] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [734] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [736] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(190),
    [739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [741] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [769] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(297),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [778] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [782] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [784] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [786] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [788] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [806] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [808] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [810] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [812] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(148),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [833] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(420),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [837] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(295),
    [840] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [842] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [844] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [848] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [850] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [854] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(301),
    [857] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(191),
    [860] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [868] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [874] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [876] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(258),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [891] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(24),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [904] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(177),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [909] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(159),
    [912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [920] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [938] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [942] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [944] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [958] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [964] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(451),
    [966] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(404),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [974] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [984] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [986] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [988] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [998] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [1172] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(481),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(378),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [1272] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1282] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1290] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [1306] = { .entry = { .count = 1, .reusable = true } },
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
