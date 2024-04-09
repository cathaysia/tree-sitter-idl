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
#define STATE_COUNT 474
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 233
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
    anon_sym_interface = 51,
    anon_sym_local = 52,
    anon_sym_COLON = 53,
    anon_sym_SEMI = 54,
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
    aux_sym_bitset_dcl_repeat1 = 220,
    aux_sym_bitfield_repeat1 = 221,
    aux_sym_bitmask_dcl_repeat1 = 222,
    aux_sym_annotation_body_repeat1 = 223,
    aux_sym_struct_def_repeat1 = 224,
    aux_sym_member_repeat1 = 225,
    aux_sym_enum_dcl_repeat1 = 226,
    aux_sym_enumerator_repeat1 = 227,
    aux_sym_union_def_repeat1 = 228,
    aux_sym_data_representation_repeat1 = 229,
    aux_sym_declarators_repeat1 = 230,
    aux_sym_array_declarator_repeat1 = 231,
    aux_sym_any_declarators_repeat1 = 232,
    alias_sym_data_rep = 233,
    alias_sym_hashid_value = 234,
    alias_sym_try_construct_value = 235,
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
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [anon_sym_COLON] = ":",
    [anon_sym_SEMI] = ";",
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
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
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
    [45] = 45,
    [46] = 46,
    [47] = 46,
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
    [58] = 56,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 64,
    [69] = 69,
    [70] = 69,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 76,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 84,
    [87] = 87,
    [88] = 87,
    [89] = 89,
    [90] = 89,
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
    [110] = 110,
    [111] = 110,
    [112] = 112,
    [113] = 113,
    [114] = 92,
    [115] = 105,
    [116] = 116,
    [117] = 95,
    [118] = 91,
    [119] = 109,
    [120] = 108,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 112,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 113,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 121,
    [142] = 138,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 122,
    [147] = 144,
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
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 126,
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
    [189] = 124,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 91,
    [194] = 194,
    [195] = 92,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 192,
    [205] = 205,
    [206] = 206,
    [207] = 129,
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
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 199,
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
    [242] = 130,
    [243] = 201,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 247,
    [248] = 248,
    [249] = 238,
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
    [273] = 133,
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
    [323] = 210,
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
    [336] = 210,
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
    [412] = 411,
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
    [430] = 315,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 277,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 312,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 270,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 415,
    [453] = 453,
    [454] = 376,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 458,
    [459] = 459,
    [460] = 460,
    [461] = 461,
    [462] = 462,
    [463] = 463,
    [464] = 464,
    [465] = 465,
    [466] = 415,
    [467] = 364,
    [468] = 400,
    [469] = 413,
    [470] = 440,
    [471] = 471,
    [472] = 349,
    [473] = 473,
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
                ADVANCE(453);
            if(lookahead == '"')
                ADVANCE(512);
            if(lookahead == '#')
                ADVANCE(129);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '\'')
                ADVANCE(514);
            if(lookahead == '(')
                ADVANCE(507);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(589);
            if(lookahead == ';')
                ADVANCE(590);
            if(lookahead == '<')
                ADVANCE(485);
            if(lookahead == '=')
                ADVANCE(612);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(609);
            if(lookahead == 'F')
                ADVANCE(516);
            if(lookahead == 'L')
                ADVANCE(510);
            if(lookahead == 'T')
                ADVANCE(518);
            if(lookahead == 'X')
                ADVANCE(517);
            if(lookahead == '[')
                ADVANCE(610);
            if(lookahead == '\\')
                SKIP(446)
            if(lookahead == ']')
                ADVANCE(611);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'a')
                ADVANCE(530);
            if(lookahead == 'b')
                ADVANCE(529);
            if(lookahead == 'c')
                ADVANCE(519);
            if(lookahead == 'd')
                ADVANCE(525);
            if(lookahead == 'e')
                ADVANCE(533);
            if(lookahead == 'f')
                ADVANCE(528);
            if(lookahead == 'g')
                ADVANCE(527);
            if(lookahead == 'i')
                ADVANCE(531);
            if(lookahead == 'l')
                ADVANCE(534);
            if(lookahead == 'm')
                ADVANCE(520);
            if(lookahead == 'n')
                ADVANCE(521);
            if(lookahead == 'o')
                ADVANCE(524);
            if(lookahead == 'r')
                ADVANCE(522);
            if(lookahead == 's')
                ADVANCE(526);
            if(lookahead == 't')
                ADVANCE(536);
            if(lookahead == 'u')
                ADVANCE(532);
            if(lookahead == 'v')
                ADVANCE(535);
            if(lookahead == 'w')
                ADVANCE(523);
            if(lookahead == '{')
                ADVANCE(585);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(586);
            if(lookahead == '~')
                ADVANCE(509);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(515);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(51)
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
                SKIP(52)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(52)
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
                SKIP(41)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(53)
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
                SKIP(44)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '\r')
                ADVANCE(30);
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '\r')
                ADVANCE(29);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(785);
            if(lookahead == '\r')
                ADVANCE(784);
            if(lookahead == '\\')
                ADVANCE(788);
            if(lookahead != 0)
                ADVANCE(787);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(36)
            END_STATE();
        case 38:
            if(lookahead == ' ')
                ADVANCE(260);
            END_STATE();
        case 39:
            if(lookahead == '"')
                ADVANCE(512);
            if(lookahead == '\'')
                ADVANCE(514);
            if(lookahead == '(')
                ADVANCE(507);
            if(lookahead == '+')
                ADVANCE(501);
            if(lookahead == '-')
                ADVANCE(503);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '0')
                ADVANCE(548);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == 'F')
                ADVANCE(655);
            if(lookahead == 'L')
                ADVANCE(511);
            if(lookahead == 'T')
                ADVANCE(659);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == '~')
                ADVANCE(509);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 40:
            if(lookahead == '"')
                ADVANCE(647);
            END_STATE();
        case 41:
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(589);
            if(lookahead == ';')
                ADVANCE(590);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(145);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == ']')
                ADVANCE(611);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == '{')
                ADVANCE(585);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 42:
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(61);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 't')
                ADVANCE(778);
            if(lookahead == '|')
                ADVANCE(495);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 43:
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '<')
                ADVANCE(484);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '\\')
                SKIP(24)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 44:
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == 'i')
                ADVANCE(267);
            if(lookahead == 'o')
                ADVANCE(414);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            END_STATE();
        case 45:
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '<')
                ADVANCE(484);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '@')
                ADVANCE(160);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(611);
            if(lookahead == 'a')
                ADVANCE(724);
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'd')
                ADVANCE(737);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'm')
                ADVANCE(662);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'w')
                ADVANCE(676);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 46:
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(545);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(781);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '@')
                ADVANCE(144);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(724);
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'd')
                ADVANCE(737);
            if(lookahead == 'e')
                ADVANCE(732);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'm')
                ADVANCE(662);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 'u')
                ADVANCE(728);
            if(lookahead == 'w')
                ADVANCE(676);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '@')
                ADVANCE(232);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(724);
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'd')
                ADVANCE(737);
            if(lookahead == 'e')
                ADVANCE(732);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'w')
                ADVANCE(676);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(723);
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'd')
                ADVANCE(737);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'm')
                ADVANCE(662);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 'r')
                ADVANCE(696);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'v')
                ADVANCE(742);
            if(lookahead == 'w')
                ADVANCE(676);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(724);
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(664);
            if(lookahead == 'd')
                ADVANCE(689);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'm')
                ADVANCE(662);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'w')
                ADVANCE(676);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'd')
                ADVANCE(737);
            if(lookahead == 'f')
                ADVANCE(709);
            if(lookahead == 'l')
                ADVANCE(739);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'w')
                ADVANCE(676);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'b')
                ADVANCE(743);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 'l')
                ADVANCE(746);
            if(lookahead == 's')
                ADVANCE(707);
            if(lookahead == 'u')
                ADVANCE(725);
            if(lookahead == 'w')
                ADVANCE(677);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ';')
                ADVANCE(590);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == 's')
                ADVANCE(774);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(515);
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(513);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 59:
            if(lookahead == ':')
                ADVANCE(479);
            END_STATE();
        case 60:
            if(lookahead == '<')
                ADVANCE(499);
            END_STATE();
        case 61:
            if(lookahead == '>')
                ADVANCE(498);
            END_STATE();
        case 62:
            if(lookahead == 'C')
                ADVANCE(63);
            END_STATE();
        case 63:
            if(lookahead == 'D')
                ADVANCE(69);
            END_STATE();
        case 64:
            if(lookahead == 'D')
                ADVANCE(65);
            if(lookahead == 'a')
                ADVANCE(287);
            if(lookahead == 'd')
                ADVANCE(103);
            if(lookahead == 'f')
                ADVANCE(226);
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 65:
            if(lookahead == 'D')
                ADVANCE(71);
            END_STATE();
        case 66:
            if(lookahead == 'E')
                ADVANCE(537);
            END_STATE();
        case 67:
            if(lookahead == 'E')
                ADVANCE(539);
            END_STATE();
        case 68:
            if(lookahead == 'L')
                ADVANCE(72);
            END_STATE();
        case 69:
            if(lookahead == 'R')
                ADVANCE(651);
            END_STATE();
        case 70:
            if(lookahead == 'R')
                ADVANCE(155);
            if(lookahead == 'S')
                ADVANCE(179);
            END_STATE();
        case 71:
            if(lookahead == 'S')
                ADVANCE(70);
            END_STATE();
        case 72:
            if(lookahead == 'S')
                ADVANCE(67);
            END_STATE();
        case 73:
            if(lookahead == 'T')
                ADVANCE(305);
            END_STATE();
        case 74:
            if(lookahead == 'T')
                ADVANCE(316);
            END_STATE();
        case 75:
            if(lookahead == 'U')
                ADVANCE(66);
            END_STATE();
        case 76:
            if(lookahead == '_')
                ADVANCE(124);
            END_STATE();
        case 77:
            if(lookahead == '_')
                ADVANCE(259);
            END_STATE();
        case 78:
            if(lookahead == '_')
                ADVANCE(417);
            END_STATE();
        case 79:
            if(lookahead == '_')
                ADVANCE(350);
            END_STATE();
        case 80:
            if(lookahead == '_')
                ADVANCE(288);
            END_STATE();
        case 81:
            if(lookahead == '_')
                ADVANCE(369);
            END_STATE();
        case 82:
            if(lookahead == '_')
                ADVANCE(262);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(230);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(79);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(139);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(242);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(266);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(355);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(333);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(334);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(375);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(360);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(244);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(245);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(256);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(246);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(393);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(286);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(387);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(420);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(400);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(127);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(402);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(234);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(236);
            END_STATE();
        case 112:
            if(lookahead == 'b')
                ADVANCE(419);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(253);
            END_STATE();
        case 114:
            if(lookahead == 'b')
                ADVANCE(257);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(638);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(636);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(207);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(163);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(389);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(88);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(88);
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(88);
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(380);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(315);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(152);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(383);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(156);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(157);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(572);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(591);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(463);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(604);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(38);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(644);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(646);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(643);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(642);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(421);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(304);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(322);
            if(lookahead == 'l')
                ADVANCE(318);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(159);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(182);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(162);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(103);
            if(lookahead == 'f')
                ADVANCE(226);
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(190);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(193);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(625);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(637);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(472);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(614);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(613);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(491);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(599);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(474);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(587);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(635);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(629);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(192);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(428);
            if(lookahead == 'h')
                ADVANCE(97);
            if(lookahead == 'i')
                ADVANCE(134);
            if(lookahead == 'k')
                ADVANCE(168);
            if(lookahead == 'm')
                ADVANCE(422);
            if(lookahead == 'n')
                ADVANCE(313);
            if(lookahead == 'o')
                ADVANCE(330);
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(77);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(196);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(325);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(329);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(131);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(250);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(293);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(141);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(358);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(133);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(136);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(346);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(298);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(342);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(344);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(345);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(368);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(306);
            if(lookahead == 't')
                ADVANCE(339);
            END_STATE();
        case 192:
            if(lookahead == 'f')
                ADVANCE(627);
            END_STATE();
        case 193:
            if(lookahead == 'f')
                ADVANCE(92);
            END_STATE();
        case 194:
            if(lookahead == 'f')
                ADVANCE(225);
            if(lookahead == 'm')
                ADVANCE(90);
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 195:
            if(lookahead == 'f')
                ADVANCE(108);
            END_STATE();
        case 196:
            if(lookahead == 'f')
                ADVANCE(229);
            END_STATE();
        case 197:
            if(lookahead == 'f')
                ADVANCE(106);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(456);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(480);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(482);
            END_STATE();
        case 201:
            if(lookahead == 'g')
                ADVANCE(460);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(468);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(469);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(458);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(297);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(294);
            END_STATE();
        case 207:
            if(lookahead == 'h')
                ADVANCE(623);
            END_STATE();
        case 208:
            if(lookahead == 'h')
                ADVANCE(224);
            END_STATE();
        case 209:
            if(lookahead == 'h')
                ADVANCE(93);
            END_STATE();
        case 210:
            if(lookahead == 'h')
                ADVANCE(317);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(426);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(435);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(372);
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(276);
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(205);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(130);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(302);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(302);
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(386);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(308);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(135);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(167);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(285);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(101);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(384);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(292);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(362);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(277);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(310);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(363);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(312);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(364);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(128);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(397);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(314);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(407);
            END_STATE();
        case 241:
            if(lookahead == 'k')
                ADVANCE(605);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(588);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(649);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(645);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(640);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(619);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(430);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(80);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(431);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(132);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(175);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(318);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(149);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(150);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(381);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(212);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(154);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(409);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(238);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(319);
            if(lookahead == 's')
                ADVANCE(210);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(320);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(240);
            END_STATE();
        case 263:
            if(lookahead == 'm')
                ADVANCE(617);
            END_STATE();
        case 264:
            if(lookahead == 'm')
                ADVANCE(148);
            if(lookahead == 't')
                ADVANCE(211);
            END_STATE();
        case 265:
            if(lookahead == 'm')
                ADVANCE(90);
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 266:
            if(lookahead == 'm')
                ADVANCE(173);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(593);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(621);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(461);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(584);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(606);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(361);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(411);
            if(lookahead == 'x')
                ADVANCE(118);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(81);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(247);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(201);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(202);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(370);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(311);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(96);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(137);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(284);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(99);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(100);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(158);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(125);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(309);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(142);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(396);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(174);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(403);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(138);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(251);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(94);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(326);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(341);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(120);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(347);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(272);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(401);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(122);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(424);
            END_STATE();
        case 323:
            if(lookahead == 'p')
                ADVANCE(493);
            END_STATE();
        case 324:
            if(lookahead == 'p')
                ADVANCE(249);
            if(lookahead == 'q')
                ADVANCE(418);
            END_STATE();
        case 325:
            if(lookahead == 'p')
                ADVANCE(392);
            END_STATE();
        case 326:
            if(lookahead == 'p')
                ADVANCE(220);
            END_STATE();
        case 327:
            if(lookahead == 'p')
                ADVANCE(222);
            END_STATE();
        case 328:
            if(lookahead == 'p')
                ADVANCE(171);
            END_STATE();
        case 329:
            if(lookahead == 'p')
                ADVANCE(348);
            END_STATE();
        case 330:
            if(lookahead == 'p')
                ADVANCE(404);
            END_STATE();
        case 331:
            if(lookahead == 'q')
                ADVANCE(416);
            if(lookahead == 't')
                ADVANCE(353);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(214);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(475);
            END_STATE();
        case 334:
            if(lookahead == 'r')
                ADVANCE(477);
            END_STATE();
        case 335:
            if(lookahead == 'r')
                ADVANCE(425);
            END_STATE();
        case 336:
            if(lookahead == 'r')
                ADVANCE(434);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(215);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(110);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(412);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(231);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(378);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(98);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(382);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(227);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(102);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(289);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(161);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(189);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(195);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(165);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(423);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(367);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 354:
            if(lookahead == 's')
                ADVANCE(147);
            END_STATE();
        case 355:
            if(lookahead == 's')
                ADVANCE(241);
            END_STATE();
        case 356:
            if(lookahead == 's')
                ADVANCE(596);
            END_STATE();
        case 357:
            if(lookahead == 's')
                ADVANCE(601);
            END_STATE();
        case 358:
            if(lookahead == 's')
                ADVANCE(602);
            END_STATE();
        case 359:
            if(lookahead == 's')
                ADVANCE(620);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(208);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(374);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(164);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(169);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(405);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(390);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(395);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(183);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(406);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(385);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(594);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(639);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(470);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(595);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(465);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(454);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(603);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(615);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(607);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(467);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(648);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(265);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(337);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(117);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(211);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(338);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(177);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(78);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(339);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(153);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(176);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(186);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(340);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(233);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(107);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(235);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(109);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(239);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(74);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(351);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(188);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(353);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 410:
            if(lookahead == 'u')
                ADVANCE(113);
            END_STATE();
        case 411:
            if(lookahead == 'u')
                ADVANCE(263);
            END_STATE();
        case 412:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 413:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 414:
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 415:
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 416:
            if(lookahead == 'u')
                ADVANCE(170);
            END_STATE();
        case 417:
            if(lookahead == 'u')
                ADVANCE(295);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(185);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(394);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(258);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(254);
            END_STATE();
        case 422:
            if(lookahead == 'u')
                ADVANCE(366);
            END_STATE();
        case 423:
            if(lookahead == 'u')
                ADVANCE(126);
            END_STATE();
        case 424:
            if(lookahead == 'u')
                ADVANCE(114);
            END_STATE();
        case 425:
            if(lookahead == 'v')
                ADVANCE(237);
            END_STATE();
        case 426:
            if(lookahead == 'v')
                ADVANCE(151);
            END_STATE();
        case 427:
            if(lookahead == 'x')
                ADVANCE(166);
            END_STATE();
        case 428:
            if(lookahead == 'x')
                ADVANCE(398);
            END_STATE();
        case 429:
            if(lookahead == 'y')
                ADVANCE(488);
            END_STATE();
        case 430:
            if(lookahead == 'y')
                ADVANCE(597);
            END_STATE();
        case 431:
            if(lookahead == 'y')
                ADVANCE(73);
            END_STATE();
        case 432:
            if(lookahead == 'y')
                ADVANCE(641);
            END_STATE();
        case 433:
            if(lookahead == 'y')
                ADVANCE(328);
            END_STATE();
        case 434:
            if(lookahead == 'y')
                ADVANCE(76);
            END_STATE();
        case 435:
            if(lookahead == 'z')
                ADVANCE(178);
            END_STATE();
        case 436:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 437:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 438:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            END_STATE();
        case 439:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 440:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            END_STATE();
        case 441:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 442:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(543);
            END_STATE();
        case 443:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(787);
            if(lookahead == '\r')
                ADVANCE(789);
            if(lookahead == '\\')
                ADVANCE(788);
            END_STATE();
        case 444:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(581);
            END_STATE();
        case 445:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 446:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(445)
            END_STATE();
        case 447:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(451)
            END_STATE();
        case 448:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(451)
            if(lookahead == '\r')
                SKIP(447)
            END_STATE();
        case 449:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(452)
            END_STATE();
        case 450:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(452)
            if(lookahead == '\r')
                SKIP(449)
            END_STATE();
        case 451:
            if(eof)
                ADVANCE(453);
            if(lookahead == '#')
                ADVANCE(129);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '(')
                ADVANCE(40);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(589);
            if(lookahead == ';')
                ADVANCE(590);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(64);
            if(lookahead == 'X')
                ADVANCE(62);
            if(lookahead == '[')
                ADVANCE(610);
            if(lookahead == '\\')
                SKIP(448)
            if(lookahead == ']')
                ADVANCE(611);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'a')
                ADVANCE(371);
            if(lookahead == 'b')
                ADVANCE(213);
            if(lookahead == 'c')
                ADVANCE(83);
            if(lookahead == 'd')
                ADVANCE(146);
            if(lookahead == 'e')
                ADVANCE(275);
            if(lookahead == 'g')
                ADVANCE(184);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(321);
            if(lookahead == 'm')
                ADVANCE(300);
            if(lookahead == 'n')
                ADVANCE(84);
            if(lookahead == 'o')
                ADVANCE(119);
            if(lookahead == 'r')
                ADVANCE(85);
            if(lookahead == 's')
                ADVANCE(191);
            if(lookahead == 't')
                ADVANCE(433);
            if(lookahead == 'u')
                ADVANCE(268);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(451)
            END_STATE();
        case 452:
            if(eof)
                ADVANCE(453);
            if(lookahead == '#')
                ADVANCE(143);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(47);
            if(lookahead == ':')
                ADVANCE(589);
            if(lookahead == ';')
                ADVANCE(590);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '@')
                ADVANCE(64);
            if(lookahead == '\\')
                SKIP(450)
            if(lookahead == ']')
                ADVANCE(611);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'b')
                ADVANCE(228);
            if(lookahead == 'c')
                ADVANCE(299);
            if(lookahead == 'e')
                ADVANCE(275);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(307);
            if(lookahead == 'm')
                ADVANCE(300);
            if(lookahead == 'n')
                ADVANCE(105);
            if(lookahead == 's')
                ADVANCE(391);
            if(lookahead == 't')
                ADVANCE(433);
            if(lookahead == 'u')
                ADVANCE(291);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(586);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(452)
            END_STATE();
        case 453:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(140);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(140);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(252);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(252);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(261);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(499);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(498);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(549);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(549);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(781);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(513);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(68);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(63);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(75);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'h')
                ADVANCE(91);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(323);
            if(lookahead == 'o')
                ADVANCE(138);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(230);
            if(lookahead == 'e')
                ADVANCE(87);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(209);
            if(lookahead == 's')
                ADVANCE(399);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(389);
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(193);
            if(lookahead == 'o')
                ADVANCE(410);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(331);
            if(lookahead == 'h')
                ADVANCE(306);
            if(lookahead == 't')
                ADVANCE(332);
            if(lookahead == 'w')
                ADVANCE(221);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(427);
            if(lookahead == 'l')
                ADVANCE(303);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(372);
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(429);
            if(lookahead == 't')
                ADVANCE(385);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(593);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(411);
            if(lookahead == 'x')
                ADVANCE(118);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(121);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(217);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(328);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(570);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(542);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(542);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(543);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(543);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(779);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(441);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(559);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(561);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(562);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(654);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(563);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(46);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(567);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(779);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(568);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(441);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(570);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(440);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(440);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(559);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(561);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(550);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(551);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(542);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(542);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(543);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(543);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '\r')
                ADVANCE(579);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(781);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(581);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(581);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(581);
            if(lookahead == '\r')
                ADVANCE(583);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(581);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(415);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(634);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(634);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(633);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(632);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(634);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(783);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(634);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(634);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(652);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(260);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(544);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(758);
            if(lookahead == 'h')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(708);
            if(lookahead == 's')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(749);
            if(lookahead == 'h')
                ADVANCE(741);
            if(lookahead == 't')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(749);
            if(lookahead == 'h')
                ADVANCE(741);
            if(lookahead == 't')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(699);
            if(lookahead == 'o')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(457);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(483);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(775);
            if(lookahead == 'l')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(733);
            if(lookahead == 'u')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(744);
            if(lookahead == 's')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(776);
            if(lookahead == 't')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(466);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(780);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(787);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(634);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(785);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(787);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(786);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(785);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(787);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(782);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(787);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(787);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(787);
            if(lookahead == '\r')
                ADVANCE(789);
            if(lookahead == '\\')
                ADVANCE(788);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(787);
            if(lookahead == '\\')
                ADVANCE(443);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 451 },
    [2] = { .lex_state = 45 },
    [3] = { .lex_state = 45 },
    [4] = { .lex_state = 45 },
    [5] = { .lex_state = 45 },
    [6] = { .lex_state = 45 },
    [7] = { .lex_state = 45 },
    [8] = { .lex_state = 45 },
    [9] = { .lex_state = 45 },
    [10] = { .lex_state = 45 },
    [11] = { .lex_state = 45 },
    [12] = { .lex_state = 45 },
    [13] = { .lex_state = 451 },
    [14] = { .lex_state = 48 },
    [15] = { .lex_state = 452 },
    [16] = { .lex_state = 45 },
    [17] = { .lex_state = 50 },
    [18] = { .lex_state = 452 },
    [19] = { .lex_state = 50 },
    [20] = { .lex_state = 452 },
    [21] = { .lex_state = 50 },
    [22] = { .lex_state = 452 },
    [23] = { .lex_state = 452 },
    [24] = { .lex_state = 50 },
    [25] = { .lex_state = 50 },
    [26] = { .lex_state = 51 },
    [27] = { .lex_state = 49 },
    [28] = { .lex_state = 49 },
    [29] = { .lex_state = 49 },
    [30] = { .lex_state = 45 },
    [31] = { .lex_state = 45 },
    [32] = { .lex_state = 45 },
    [33] = { .lex_state = 45 },
    [34] = { .lex_state = 45 },
    [35] = { .lex_state = 45 },
    [36] = { .lex_state = 45 },
    [37] = { .lex_state = 45 },
    [38] = { .lex_state = 45 },
    [39] = { .lex_state = 45 },
    [40] = { .lex_state = 45 },
    [41] = { .lex_state = 45 },
    [42] = { .lex_state = 45 },
    [43] = { .lex_state = 45 },
    [44] = { .lex_state = 45 },
    [45] = { .lex_state = 45 },
    [46] = { .lex_state = 52 },
    [47] = { .lex_state = 52 },
    [48] = { .lex_state = 39 },
    [49] = { .lex_state = 39 },
    [50] = { .lex_state = 39 },
    [51] = { .lex_state = 39 },
    [52] = { .lex_state = 39 },
    [53] = { .lex_state = 39 },
    [54] = { .lex_state = 39 },
    [55] = { .lex_state = 39 },
    [56] = { .lex_state = 39 },
    [57] = { .lex_state = 39 },
    [58] = { .lex_state = 39 },
    [59] = { .lex_state = 39 },
    [60] = { .lex_state = 39 },
    [61] = { .lex_state = 39 },
    [62] = { .lex_state = 50 },
    [63] = { .lex_state = 50 },
    [64] = { .lex_state = 39 },
    [65] = { .lex_state = 451 },
    [66] = { .lex_state = 51 },
    [67] = { .lex_state = 51 },
    [68] = { .lex_state = 39 },
    [69] = { .lex_state = 39 },
    [70] = { .lex_state = 39 },
    [71] = { .lex_state = 49 },
    [72] = { .lex_state = 49 },
    [73] = { .lex_state = 49 },
    [74] = { .lex_state = 49 },
    [75] = { .lex_state = 451 },
    [76] = { .lex_state = 39 },
    [77] = { .lex_state = 451 },
    [78] = { .lex_state = 452 },
    [79] = { .lex_state = 39 },
    [80] = { .lex_state = 452 },
    [81] = { .lex_state = 451 },
    [82] = { .lex_state = 452 },
    [83] = { .lex_state = 452 },
    [84] = { .lex_state = 39 },
    [85] = { .lex_state = 45 },
    [86] = { .lex_state = 39 },
    [87] = { .lex_state = 39 },
    [88] = { .lex_state = 39 },
    [89] = { .lex_state = 39 },
    [90] = { .lex_state = 39 },
    [91] = { .lex_state = 41 },
    [92] = { .lex_state = 41 },
    [93] = { .lex_state = 451 },
    [94] = { .lex_state = 451 },
    [95] = { .lex_state = 41 },
    [96] = { .lex_state = 451 },
    [97] = { .lex_state = 451 },
    [98] = { .lex_state = 451 },
    [99] = { .lex_state = 53 },
    [100] = { .lex_state = 451 },
    [101] = { .lex_state = 451 },
    [102] = { .lex_state = 451 },
    [103] = { .lex_state = 451 },
    [104] = { .lex_state = 451 },
    [105] = { .lex_state = 41 },
    [106] = { .lex_state = 451 },
    [107] = { .lex_state = 451 },
    [108] = { .lex_state = 451 },
    [109] = { .lex_state = 451 },
    [110] = { .lex_state = 39 },
    [111] = { .lex_state = 39 },
    [112] = { .lex_state = 451 },
    [113] = { .lex_state = 451 },
    [114] = { .lex_state = 42 },
    [115] = { .lex_state = 42 },
    [116] = { .lex_state = 451 },
    [117] = { .lex_state = 42 },
    [118] = { .lex_state = 42 },
    [119] = { .lex_state = 451 },
    [120] = { .lex_state = 451 },
    [121] = { .lex_state = 451 },
    [122] = { .lex_state = 451 },
    [123] = { .lex_state = 451 },
    [124] = { .lex_state = 452 },
    [125] = { .lex_state = 451 },
    [126] = { .lex_state = 452 },
    [127] = { .lex_state = 39 },
    [128] = { .lex_state = 451 },
    [129] = { .lex_state = 452 },
    [130] = { .lex_state = 452 },
    [131] = { .lex_state = 451 },
    [132] = { .lex_state = 451 },
    [133] = { .lex_state = 452 },
    [134] = { .lex_state = 44 },
    [135] = { .lex_state = 451 },
    [136] = { .lex_state = 451 },
    [137] = { .lex_state = 451 },
    [138] = { .lex_state = 41 },
    [139] = { .lex_state = 451 },
    [140] = { .lex_state = 451 },
    [141] = { .lex_state = 451 },
    [142] = { .lex_state = 41 },
    [143] = { .lex_state = 451 },
    [144] = { .lex_state = 41 },
    [145] = { .lex_state = 451 },
    [146] = { .lex_state = 451 },
    [147] = { .lex_state = 41 },
    [148] = { .lex_state = 451 },
    [149] = { .lex_state = 451 },
    [150] = { .lex_state = 451 },
    [151] = { .lex_state = 451 },
    [152] = { .lex_state = 451 },
    [153] = { .lex_state = 451 },
    [154] = { .lex_state = 451 },
    [155] = { .lex_state = 451 },
    [156] = { .lex_state = 41 },
    [157] = { .lex_state = 451 },
    [158] = { .lex_state = 451 },
    [159] = { .lex_state = 451 },
    [160] = { .lex_state = 41 },
    [161] = { .lex_state = 44 },
    [162] = { .lex_state = 41 },
    [163] = { .lex_state = 451 },
    [164] = { .lex_state = 41 },
    [165] = { .lex_state = 451 },
    [166] = { .lex_state = 451 },
    [167] = { .lex_state = 43 },
    [168] = { .lex_state = 451 },
    [169] = { .lex_state = 43 },
    [170] = { .lex_state = 451 },
    [171] = { .lex_state = 41 },
    [172] = { .lex_state = 43 },
    [173] = { .lex_state = 43 },
    [174] = { .lex_state = 451 },
    [175] = { .lex_state = 43 },
    [176] = { .lex_state = 41 },
    [177] = { .lex_state = 451 },
    [178] = { .lex_state = 41 },
    [179] = { .lex_state = 0 },
    [180] = { .lex_state = 43 },
    [181] = { .lex_state = 41 },
    [182] = { .lex_state = 43 },
    [183] = { .lex_state = 451 },
    [184] = { .lex_state = 41 },
    [185] = { .lex_state = 41 },
    [186] = { .lex_state = 451 },
    [187] = { .lex_state = 41 },
    [188] = { .lex_state = 41 },
    [189] = { .lex_state = 451 },
    [190] = { .lex_state = 451 },
    [191] = { .lex_state = 451 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 43 },
    [194] = { .lex_state = 43 },
    [195] = { .lex_state = 43 },
    [196] = { .lex_state = 43 },
    [197] = { .lex_state = 43 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 451 },
    [201] = { .lex_state = 0 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 43 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 451 },
    [206] = { .lex_state = 451 },
    [207] = { .lex_state = 451 },
    [208] = { .lex_state = 451 },
    [209] = { .lex_state = 45 },
    [210] = { .lex_state = 43 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 43 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 41 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 451 },
    [218] = { .lex_state = 451 },
    [219] = { .lex_state = 41 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 43 },
    [223] = { .lex_state = 43 },
    [224] = { .lex_state = 451 },
    [225] = { .lex_state = 451 },
    [226] = { .lex_state = 43 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 41 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 451 },
    [232] = { .lex_state = 41 },
    [233] = { .lex_state = 43 },
    [234] = { .lex_state = 41 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 43 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 43 },
    [241] = { .lex_state = 451 },
    [242] = { .lex_state = 451 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 43 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 41 },
    [247] = { .lex_state = 54 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 43 },
    [251] = { .lex_state = 41 },
    [252] = { .lex_state = 43 },
    [253] = { .lex_state = 41 },
    [254] = { .lex_state = 43 },
    [255] = { .lex_state = 43 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 43 },
    [260] = { .lex_state = 43 },
    [261] = { .lex_state = 451 },
    [262] = { .lex_state = 43 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 451 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 451 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 41 },
    [271] = { .lex_state = 41 },
    [272] = { .lex_state = 41 },
    [273] = { .lex_state = 451 },
    [274] = { .lex_state = 41 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 41 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 451 },
    [280] = { .lex_state = 451 },
    [281] = { .lex_state = 41 },
    [282] = { .lex_state = 41 },
    [283] = { .lex_state = 41 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 27 },
    [286] = { .lex_state = 451 },
    [287] = { .lex_state = 451 },
    [288] = { .lex_state = 41 },
    [289] = { .lex_state = 451 },
    [290] = { .lex_state = 41 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 41 },
    [293] = { .lex_state = 41 },
    [294] = { .lex_state = 451 },
    [295] = { .lex_state = 41 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 41 },
    [298] = { .lex_state = 45 },
    [299] = { .lex_state = 451 },
    [300] = { .lex_state = 41 },
    [301] = { .lex_state = 41 },
    [302] = { .lex_state = 41 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 451 },
    [305] = { .lex_state = 451 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 41 },
    [309] = { .lex_state = 41 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 41 },
    [313] = { .lex_state = 41 },
    [314] = { .lex_state = 45 },
    [315] = { .lex_state = 41 },
    [316] = { .lex_state = 41 },
    [317] = { .lex_state = 41 },
    [318] = { .lex_state = 451 },
    [319] = { .lex_state = 41 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 41 },
    [322] = { .lex_state = 41 },
    [323] = { .lex_state = 41 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 451 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 41 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 41 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 41 },
    [334] = { .lex_state = 451 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 41 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 45 },
    [339] = { .lex_state = 45 },
    [340] = { .lex_state = 45 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 785 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 41 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 41 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 45 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 45 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 55 },
    [384] = { .lex_state = 56 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 45 },
    [390] = { .lex_state = 45 },
    [391] = { .lex_state = 41 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 41 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 28 },
    [398] = { .lex_state = 45 },
    [399] = { .lex_state = 451 },
    [400] = { .lex_state = 41 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 41 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 451 },
    [412] = { .lex_state = 451 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 41 },
    [416] = { .lex_state = 41 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 56 },
    [423] = { .lex_state = 56 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 45 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 45 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 451 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 451 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 632 },
    [438] = { .lex_state = 41 },
    [439] = { .lex_state = 451 },
    [440] = { .lex_state = 41 },
    [441] = { .lex_state = 41 },
    [442] = { .lex_state = 451 },
    [443] = { .lex_state = 55 },
    [444] = { .lex_state = 56 },
    [445] = { .lex_state = 41 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 41 },
    [448] = { .lex_state = 451 },
    [449] = { .lex_state = 41 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 41 },
    [452] = { .lex_state = 41 },
    [453] = { .lex_state = 41 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 41 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 45 },
    [459] = { .lex_state = 41 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 41 },
    [462] = { .lex_state = 41 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 41 },
    [466] = { .lex_state = 41 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 41 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 41 },
    [471] = { .lex_state = 451 },
    [472] = { .lex_state = 41 },
    [473] = { (TSStateId)(-1) },
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
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
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
        [sym_specification] = STATE(431),
        [sym_preproc_call] = STATE(75),
        [sym_except_dcl] = STATE(429),
        [sym_interface_dcl] = STATE(429),
        [sym_interface_forward_dcl] = STATE(427),
        [sym_interface_def] = STATE(427),
        [sym_interface_header] = STATE(418),
        [sym_interface_anno] = STATE(153),
        [sym_bitset_dcl] = STATE(429),
        [sym_bitmask_dcl] = STATE(429),
        [sym_annotation_dcl] = STATE(429),
        [sym__definition] = STATE(83),
        [sym_native_dcl] = STATE(429),
        [sym_module_dcl] = STATE(429),
        [sym_struct_forward_dcl] = STATE(429),
        [sym_struct_def] = STATE(429),
        [sym_enum_dcl] = STATE(429),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(429),
        [sym_union_def] = STATE(429),
        [sym_typedef_dcl] = STATE(429),
        [sym_predefine] = STATE(82),
        [sym_dds_request_topic] = STATE(157),
        [sym_dds_reply_topic] = STATE(157),
        [sym_const_dcl] = STATE(429),
        [sym_data_representation] = STATE(208),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(13),
        [aux_sym_specification_repeat2] = STATE(20),
        [aux_sym_interface_def_repeat1] = STATE(123),
        [aux_sym_struct_def_repeat1] = STATE(154),
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
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [120] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(90),
    1,
    sym_signed_longlong_int,
    ACTIONS(96),
    1,
    anon_sym_fixed,
    ACTIONS(102),
    1,
    sym_unsigned_long_int,
    ACTIONS(108),
    1,
    anon_sym_longdouble,
    ACTIONS(114),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(120),
    1,
    anon_sym_any,
    ACTIONS(123),
    1,
    anon_sym_sequence,
    ACTIONS(126),
    1,
    anon_sym_map,
    ACTIONS(129),
    1,
    anon_sym_RBRACE,
    ACTIONS(134),
    1,
    anon_sym_AThashid,
    ACTIONS(137),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(140),
    1,
    sym_identifier,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(87),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(93),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(99),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(105),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(111),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(117),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(3),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(131),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [238] = 33,
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
    ACTIONS(143),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(4),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [358] = 33,
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
    ACTIONS(145),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    sym_comment,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [478] = 33,
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
    ACTIONS(147),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(6),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [598] = 33,
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
    ACTIONS(149),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [718] = 33,
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
    ACTIONS(151),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(8),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [838] = 33,
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
    ACTIONS(153),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [958] = 33,
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
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1078] = 33,
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
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1198] = 33,
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
    ACTIONS(151),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1318] = 38,
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
    ACTIONS(159),
    1,
    ts_builtin_sym_end,
    STATE(13),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_specification_repeat2,
    STATE(65),
    1,
    aux_sym_specification_repeat1,
    STATE(75),
    1,
    sym_preproc_call,
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(208),
    1,
    sym_data_representation,
    STATE(335),
    1,
    sym_type_declarator,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(411),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(164),
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
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
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
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    [1687] = 30,
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
    STATE(16),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_member_repeat1,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(162),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
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
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1798] = 34,
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
    ACTIONS(229),
    1,
    anon_sym_RBRACE,
    ACTIONS(231),
    1,
    anon_sym_void,
    ACTIONS(233),
    1,
    anon_sym_readonly,
    ACTIONS(235),
    1,
    anon_sym_attribute,
    STATE(17),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_interface_body_repeat1,
    STATE(63),
    1,
    sym_export,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(356),
    1,
    sym_interface_body,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(405),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(410),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1917] = 35,
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
    ACTIONS(237),
    1,
    anon_sym_RBRACE,
    ACTIONS(239),
    1,
    anon_sym_POUNDdefine,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(18),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    [2038] = 34,
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
    ACTIONS(231),
    1,
    anon_sym_void,
    ACTIONS(233),
    1,
    anon_sym_readonly,
    ACTIONS(235),
    1,
    anon_sym_attribute,
    ACTIONS(241),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_interface_body_repeat1,
    STATE(63),
    1,
    sym_export,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
    STATE(463),
    1,
    sym_interface_body,
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(405),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(410),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2157] = 35,
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
    ACTIONS(159),
    1,
    ts_builtin_sym_end,
    ACTIONS(239),
    1,
    anon_sym_POUNDdefine,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(20),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    [2278] = 34,
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
    ACTIONS(231),
    1,
    anon_sym_void,
    ACTIONS(233),
    1,
    anon_sym_readonly,
    ACTIONS(235),
    1,
    anon_sym_attribute,
    ACTIONS(243),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_interface_body_repeat1,
    STATE(63),
    1,
    sym_export,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(403),
    1,
    sym_interface_body,
    STATE(408),
    1,
    sym_op_type_spec,
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(405),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(410),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2397] = 35,
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
    ACTIONS(239),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(245),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    aux_sym_specification_repeat2,
    STATE(22),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    [2518] = 35,
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
    ACTIONS(239),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(247),
    1,
    ts_builtin_sym_end,
    STATE(15),
    1,
    aux_sym_specification_repeat2,
    STATE(23),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
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
    [2639] = 33,
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
    ACTIONS(231),
    1,
    anon_sym_void,
    ACTIONS(233),
    1,
    anon_sym_readonly,
    ACTIONS(235),
    1,
    anon_sym_attribute,
    ACTIONS(249),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_interface_body_repeat1,
    STATE(63),
    1,
    sym_export,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(405),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(410),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2755] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    sym_signed_longlong_int,
    ACTIONS(260),
    1,
    anon_sym_fixed,
    ACTIONS(266),
    1,
    sym_unsigned_long_int,
    ACTIONS(272),
    1,
    anon_sym_longdouble,
    ACTIONS(278),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(284),
    1,
    anon_sym_any,
    ACTIONS(287),
    1,
    anon_sym_sequence,
    ACTIONS(290),
    1,
    anon_sym_map,
    ACTIONS(293),
    1,
    anon_sym_RBRACE,
    ACTIONS(295),
    1,
    anon_sym_void,
    ACTIONS(298),
    1,
    anon_sym_readonly,
    ACTIONS(301),
    1,
    anon_sym_attribute,
    ACTIONS(304),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_export,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
    ACTIONS(251),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(257),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(263),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(269),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(275),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(281),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(25),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(405),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(410),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2869] = 27,
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
    ACTIONS(307),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(409),
    1,
    sym_element_spec,
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
    ACTIONS(309),
    2,
    anon_sym_default,
    anon_sym_case,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2966] = 29,
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
    ACTIONS(313),
    1,
    anon_sym_fixed,
    ACTIONS(315),
    1,
    anon_sym_any,
    ACTIONS(317),
    1,
    anon_sym_RBRACE,
    ACTIONS(319),
    1,
    anon_sym_enum,
    STATE(27),
    1,
    sym_comment,
    STATE(29),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(71),
    1,
    sym_annotation_member,
    STATE(318),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(450),
    1,
    sym_annotation_body,
    STATE(451),
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
    ACTIONS(311),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(449),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(333),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3067] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(324),
    1,
    sym_signed_longlong_int,
    ACTIONS(330),
    1,
    anon_sym_fixed,
    ACTIONS(336),
    1,
    sym_unsigned_long_int,
    ACTIONS(342),
    1,
    anon_sym_longdouble,
    ACTIONS(348),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(354),
    1,
    anon_sym_any,
    ACTIONS(357),
    1,
    anon_sym_sequence,
    ACTIONS(360),
    1,
    anon_sym_RBRACE,
    ACTIONS(362),
    1,
    anon_sym_enum,
    ACTIONS(365),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(368),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_annotation_member,
    STATE(318),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(451),
    1,
    sym_scoped_name,
    ACTIONS(321),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(327),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(333),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(339),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(345),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(351),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(449),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(333),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3163] = 28,
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
    ACTIONS(313),
    1,
    anon_sym_fixed,
    ACTIONS(315),
    1,
    anon_sym_any,
    ACTIONS(319),
    1,
    anon_sym_enum,
    ACTIONS(371),
    1,
    anon_sym_RBRACE,
    STATE(28),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(29),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_annotation_member,
    STATE(318),
    1,
    sym_enum_dcl,
    STATE(322),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(451),
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
    ACTIONS(311),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(449),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(333),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3261] = 26,
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
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    anon_sym_GT,
    ACTIONS(377),
    1,
    anon_sym_COMMA,
    ACTIONS(379),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(210),
    1,
    sym_scoped_name,
    STATE(425),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3354] = 24,
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
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(323),
    1,
    sym_scoped_name,
    STATE(424),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3441] = 24,
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
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(219),
    1,
    sym_type_spec,
    STATE(336),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3528] = 24,
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
    STATE(33),
    1,
    sym_comment,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(295),
    1,
    sym_type_spec,
    STATE(336),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3615] = 24,
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
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(379),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(210),
    1,
    sym_scoped_name,
    STATE(314),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3702] = 24,
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
    STATE(35),
    1,
    sym_comment,
    STATE(196),
    1,
    sym_base_type_spec,
    STATE(246),
    1,
    sym_type_spec,
    STATE(336),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(244),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3789] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(388),
    1,
    anon_sym_AThashid,
    ACTIONS(391),
    1,
    anon_sym_ATtry_construct,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(36),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(383),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(385),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3843] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(396),
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
    ACTIONS(394),
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
    [3884] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(400),
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
    ACTIONS(398),
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
    [3925] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(404),
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
    ACTIONS(402),
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
    [3966] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(408),
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
    ACTIONS(406),
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
    [4007] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(412),
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
    ACTIONS(410),
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
    [4048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(416),
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
    ACTIONS(414),
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
    [4088] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(420),
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
    ACTIONS(418),
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
    [4128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(424),
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
    ACTIONS(422),
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
    [4168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(428),
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
    ACTIONS(426),
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
    [4208] = 19,
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
    ACTIONS(313),
    1,
    anon_sym_fixed,
    STATE(46),
    1,
    sym_comment,
    STATE(328),
    1,
    sym_scoped_name,
    STATE(400),
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
    ACTIONS(311),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(333),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4278] = 19,
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
    ACTIONS(313),
    1,
    anon_sym_fixed,
    STATE(47),
    1,
    sym_comment,
    STATE(328),
    1,
    sym_scoped_name,
    STATE(468),
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
    ACTIONS(311),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(333),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4348] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(48),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(433),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4428] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(49),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(398),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4508] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(428),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4588] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(368),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4668] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(365),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4748] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(53),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(338),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4828] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(54),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(298),
    1,
    sym_positive_int_const,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4908] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(55),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(354),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4985] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(146),
    1,
    sym_shift_expr,
    STATE(174),
    1,
    sym_and_expr,
    STATE(242),
    1,
    sym_xor_expr,
    STATE(273),
    1,
    sym_or_expr,
    STATE(280),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5062] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(57),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(407),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5139] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(280),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5216] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(385),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5293] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(337),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5370] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    STATE(133),
    1,
    sym_or_expr,
    STATE(361),
    1,
    sym_const_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5447] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(452),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(450),
    19,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    sym_identifier,
    [5483] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(456),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(454),
    19,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    sym_identifier,
    [5519] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(64),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    STATE(129),
    1,
    sym_xor_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5590] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    sym_preproc_directive,
    ACTIONS(463),
    1,
    anon_sym_POUNDdefine,
    STATE(75),
    1,
    sym_preproc_call,
    STATE(65),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(458),
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
    [5629] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(467),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(465),
    18,
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
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [5664] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(471),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(469),
    18,
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
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [5699] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(68),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(146),
    1,
    sym_shift_expr,
    STATE(174),
    1,
    sym_and_expr,
    STATE(207),
    1,
    sym_xor_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5770] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(146),
    1,
    sym_shift_expr,
    STATE(189),
    1,
    sym_and_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5838] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(70),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5906] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(475),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(473),
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
    [5940] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(479),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(477),
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
    [5974] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(483),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(481),
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
    [6008] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(487),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(485),
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
    [6042] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(491),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(489),
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
    [6075] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(76),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    STATE(141),
    1,
    sym_shift_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(495),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(493),
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
    [6173] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(497),
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
    [6204] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6269] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(499),
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
    [6300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(503),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(501),
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
    [6333] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(505),
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
    [6364] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(507),
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
    [6395] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(84),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6457] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(511),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(509),
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
    [6489] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(86),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(132),
    1,
    sym_add_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6551] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(87),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6610] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(102),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6669] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(102),
    1,
    sym_literal,
    STATE(104),
    1,
    sym_unary_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6725] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(432),
    1,
    anon_sym_LPAREN,
    ACTIONS(434),
    1,
    anon_sym_TILDE,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    STATE(90),
    1,
    sym_comment,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_literal,
    STATE(104),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_unary_operator,
    ACTIONS(430),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6781] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(513),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(515),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6810] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(517),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(519),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6839] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(521),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(523),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6867] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(525),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(527),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6895] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(529),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(531),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6925] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(535),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(537),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6953] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(539),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(541),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6981] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(543),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(545),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7009] = 14,
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
    ACTIONS(547),
    1,
    sym_boolean_type,
    STATE(99),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_scoped_name,
    STATE(386),
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
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(387),
    2,
    sym_integer_type,
    sym_char_type,
    [7057] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(549),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(551),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7085] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(553),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(555),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7113] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(529),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(531),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7141] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(557),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(559),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7169] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(561),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(563),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7197] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(557),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(559),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7227] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(565),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(567),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7255] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(569),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(571),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [7283] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    anon_sym_GT,
    ACTIONS(579),
    1,
    anon_sym_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(577),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(575),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7314] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(579),
    1,
    anon_sym_SLASH,
    ACTIONS(581),
    1,
    anon_sym_GT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(577),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(583),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7345] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(585),
    1,
    anon_sym_LPAREN,
    STATE(103),
    1,
    sym_literal,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7388] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(436),
    1,
    anon_sym_L,
    ACTIONS(438),
    1,
    anon_sym_DQUOTE,
    ACTIONS(440),
    1,
    anon_sym_SQUOTE,
    ACTIONS(444),
    1,
    sym_number_literal,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(448),
    1,
    sym_identifier,
    ACTIONS(585),
    1,
    anon_sym_LPAREN,
    STATE(103),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_comment,
    STATE(115),
    1,
    sym_scoped_name,
    ACTIONS(442),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(96),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7431] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(587),
    1,
    anon_sym_GT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(591),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(589),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7457] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(593),
    1,
    anon_sym_GT,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(591),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(595),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7483] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(517),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(519),
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
    [7506] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(597),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(557),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(559),
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
    [7531] = 10,
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
    STATE(389),
    1,
    sym_integer_type,
    STATE(390),
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
    ACTIONS(599),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(180),
    2,
    sym_unsigned_int,
    sym_signed_int,
    [7566] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(597),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(529),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(531),
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
    [7591] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(513),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(515),
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
    [7614] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(603),
    1,
    anon_sym_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(601),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(583),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7638] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(603),
    1,
    anon_sym_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(601),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(575),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7662] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(605),
    1,
    anon_sym_GT,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(609),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(607),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7686] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(611),
    1,
    anon_sym_GT,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(609),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(613),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7710] = 11,
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
    ACTIONS(615),
    1,
    anon_sym_interface,
    ACTIONS(617),
    1,
    anon_sym_local,
    STATE(123),
    1,
    sym_comment,
    STATE(125),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(388),
    1,
    sym_interface_header,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7745] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(621),
    1,
    anon_sym_DOLLAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(619),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7765] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(625),
    1,
    sym_dds_service,
    ACTIONS(628),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(631),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(153),
    1,
    sym_interface_anno,
    ACTIONS(623),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(125),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(157),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(621),
    1,
    anon_sym_DOLLAR,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(634),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(636),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(638),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7833] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(640),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(589),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7852] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(644),
    1,
    anon_sym_CARET,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(642),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(644),
    1,
    anon_sym_CARET,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(646),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7890] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_COMMA,
    ACTIONS(650),
    1,
    anon_sym_SEMI,
    ACTIONS(652),
    1,
    anon_sym_getraises,
    ACTIONS(654),
    1,
    anon_sym_setraises,
    STATE(131),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(200),
    1,
    sym_get_excep_expr,
    STATE(342),
    1,
    sym_attr_raises_expr,
    STATE(343),
    1,
    sym_set_excep_expr,
    [7921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(640),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(595),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7940] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(658),
    1,
    anon_sym_PIPE,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(656),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7958] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(660),
    1,
    anon_sym_RPAREN,
    ACTIONS(662),
    1,
    anon_sym_in,
    STATE(33),
    1,
    sym_param_attribute,
    STATE(134),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_param_dcl,
    STATE(344),
    1,
    sym_parameter_dcls,
    ACTIONS(664),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7984] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(666),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [8000] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    anon_sym_LBRACK,
    STATE(136),
    1,
    sym_comment,
    STATE(139),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(166),
    1,
    sym_fixed_array_size,
    ACTIONS(666),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8021] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(670),
    1,
    anon_sym_RBRACE,
    ACTIONS(672),
    1,
    anon_sym_default,
    ACTIONS(674),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(137),
    1,
    sym_comment,
    STATE(145),
    1,
    aux_sym_union_def_repeat1,
    STATE(190),
    1,
    sym_case,
    [8046] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(676),
    1,
    anon_sym_RBRACE,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(680),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_enumerator_repeat1,
    STATE(201),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [8071] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    anon_sym_LBRACK,
    STATE(139),
    1,
    sym_comment,
    STATE(143),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(166),
    1,
    sym_fixed_array_size,
    ACTIONS(682),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8092] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    anon_sym_RBRACE,
    ACTIONS(686),
    1,
    anon_sym_default,
    ACTIONS(689),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(190),
    1,
    sym_case,
    STATE(140),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [8115] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(692),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(607),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [8132] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(680),
    1,
    sym_identifier,
    ACTIONS(694),
    1,
    anon_sym_RBRACE,
    STATE(142),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_enumerator_repeat1,
    STATE(243),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [8157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    anon_sym_LBRACK,
    STATE(166),
    1,
    sym_fixed_array_size,
    STATE(143),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(696),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8176] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(680),
    1,
    sym_identifier,
    ACTIONS(701),
    1,
    anon_sym_RBRACE,
    STATE(144),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_enumerator_repeat1,
    STATE(204),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [8201] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(672),
    1,
    anon_sym_default,
    ACTIONS(674),
    1,
    anon_sym_case,
    ACTIONS(703),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_case_label,
    STATE(140),
    1,
    aux_sym_union_def_repeat1,
    STATE(145),
    1,
    sym_comment,
    STATE(190),
    1,
    sym_case,
    [8226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(692),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(613),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [8243] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(680),
    1,
    sym_identifier,
    ACTIONS(705),
    1,
    anon_sym_RBRACE,
    STATE(147),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_enumerator_repeat1,
    STATE(192),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [8268] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_COMMA,
    ACTIONS(707),
    1,
    anon_sym_SEMI,
    ACTIONS(709),
    1,
    anon_sym_raises,
    STATE(148),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(372),
    1,
    sym_raises_expr,
    [8290] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(711),
    1,
    anon_sym_RBRACE,
    ACTIONS(713),
    1,
    anon_sym_bitfield,
    STATE(149),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(279),
    1,
    sym_bitfield,
    [8312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(715),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8326] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(713),
    1,
    anon_sym_bitfield,
    ACTIONS(717),
    1,
    anon_sym_RBRACE,
    STATE(149),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(151),
    1,
    sym_comment,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(279),
    1,
    sym_bitfield,
    [8348] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(713),
    1,
    anon_sym_bitfield,
    ACTIONS(719),
    1,
    anon_sym_RBRACE,
    STATE(152),
    1,
    sym_comment,
    STATE(159),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(279),
    1,
    sym_bitfield,
    [8370] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(721),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8384] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(723),
    1,
    anon_sym_struct,
    STATE(154),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_struct_def_repeat1,
    STATE(208),
    1,
    sym_data_representation,
    [8406] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(725),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8420] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(680),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_enumerator_repeat1,
    STATE(308),
    1,
    sym_enum_modifier,
    STATE(311),
    1,
    sym_enumerator,
    [8442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(727),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8456] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(729),
    1,
    anon_sym_struct,
    ACTIONS(731),
    1,
    sym_final,
    ACTIONS(734),
    1,
    anon_sym_ATdata_representation,
    STATE(208),
    1,
    sym_data_representation,
    STATE(158),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [8476] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(713),
    1,
    anon_sym_bitfield,
    ACTIONS(737),
    1,
    anon_sym_RBRACE,
    STATE(159),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(279),
    1,
    sym_bitfield,
    [8498] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_declarator,
    STATE(225),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8518] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(662),
    1,
    anon_sym_in,
    STATE(33),
    1,
    sym_param_attribute,
    STATE(161),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_param_dcl,
    ACTIONS(664),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8538] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_declarator,
    STATE(231),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8558] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_RBRACE,
    ACTIONS(743),
    1,
    anon_sym_bitfield,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(279),
    1,
    sym_bitfield,
    STATE(163),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [8578] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_comment,
    STATE(263),
    1,
    sym_any_declarator,
    STATE(373),
    1,
    sym_any_declarators,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8598] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(746),
    1,
    anon_sym_COMMA,
    ACTIONS(749),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(165),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8613] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(751),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8626] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(753),
    1,
    anon_sym_LT,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(755),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8641] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(757),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8654] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(759),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8667] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(761),
    1,
    anon_sym_COMMA,
    STATE(165),
    1,
    aux_sym_declarators_repeat1,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(763),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8684] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8701] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_scoped_name,
    STATE(236),
    1,
    sym_interface_name,
    [8720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(767),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8733] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(769),
    1,
    anon_sym_DOLLAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(634),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8748] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(771),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8761] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(773),
    1,
    anon_sym_LBRACE,
    ACTIONS(775),
    1,
    anon_sym_COLON,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(777),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8778] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_RPAREN,
    ACTIONS(781),
    1,
    anon_sym_XCDR,
    ACTIONS(783),
    1,
    anon_sym_XCDR2,
    STATE(177),
    1,
    sym_comment,
    STATE(186),
    1,
    aux_sym_data_representation_repeat1,
    [8797] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(785),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(788),
    1,
    sym_identifier,
    STATE(308),
    1,
    sym_enum_modifier,
    STATE(178),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8814] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(790),
    1,
    anon_sym_LBRACE,
    ACTIONS(792),
    1,
    anon_sym_COLON,
    ACTIONS(794),
    1,
    anon_sym_SEMI,
    STATE(179),
    1,
    sym_comment,
    STATE(358),
    1,
    sym_interface_inheritance_spec,
    [8833] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(796),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8846] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(181),
    1,
    sym_comment,
    STATE(276),
    1,
    sym_any_declarator,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8863] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_scoped_name,
    STATE(296),
    1,
    sym_interface_name,
    [8882] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(761),
    1,
    anon_sym_COMMA,
    STATE(170),
    1,
    aux_sym_declarators_repeat1,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(798),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8899] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(419),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8916] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(802),
    1,
    anon_sym_RPAREN,
    STATE(185),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_raises_expr_repeat1,
    [8935] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_RPAREN,
    ACTIONS(806),
    1,
    anon_sym_XCDR,
    ACTIONS(809),
    1,
    anon_sym_XCDR2,
    STATE(186),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [8952] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(812),
    1,
    sym_identifier,
    STATE(178),
    1,
    aux_sym_enumerator_repeat1,
    STATE(187),
    1,
    sym_comment,
    STATE(308),
    1,
    sym_enum_modifier,
    [8971] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(814),
    1,
    anon_sym_RPAREN,
    STATE(188),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_raises_expr_repeat1,
    [8990] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(769),
    1,
    anon_sym_DOLLAR,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(619),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [9005] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(816),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9017] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(709),
    1,
    anon_sym_raises,
    ACTIONS(818),
    1,
    anon_sym_SEMI,
    STATE(191),
    1,
    sym_comment,
    STATE(401),
    1,
    sym_raises_expr,
    [9033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(676),
    1,
    anon_sym_RBRACE,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    STATE(192),
    1,
    sym_comment,
    STATE(238),
    1,
    aux_sym_enum_dcl_repeat1,
    [9049] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(515),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9061] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(822),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9073] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(519),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(824),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(826),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9109] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_COMMA,
    ACTIONS(828),
    1,
    anon_sym_SEMI,
    STATE(198),
    1,
    sym_comment,
    STATE(258),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9125] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(830),
    1,
    anon_sym_RBRACE,
    STATE(199),
    1,
    sym_comment,
    STATE(202),
    1,
    aux_sym_enum_dcl_repeat1,
    [9141] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(654),
    1,
    anon_sym_setraises,
    ACTIONS(832),
    1,
    anon_sym_SEMI,
    STATE(200),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_set_excep_expr,
    [9157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(834),
    1,
    anon_sym_RBRACE,
    STATE(199),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(201),
    1,
    sym_comment,
    [9173] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(836),
    1,
    anon_sym_COMMA,
    ACTIONS(839),
    1,
    anon_sym_RBRACE,
    STATE(202),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [9187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(841),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9199] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_RBRACE,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    STATE(204),
    1,
    sym_comment,
    STATE(249),
    1,
    aux_sym_enum_dcl_repeat1,
    [9215] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(709),
    1,
    anon_sym_raises,
    ACTIONS(843),
    1,
    anon_sym_SEMI,
    STATE(205),
    1,
    sym_comment,
    STATE(380),
    1,
    sym_raises_expr,
    [9231] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(781),
    1,
    anon_sym_XCDR,
    ACTIONS(783),
    1,
    anon_sym_XCDR2,
    STATE(177),
    1,
    aux_sym_data_representation_repeat1,
    STATE(206),
    1,
    sym_comment,
    [9247] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_CARET,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(642),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9261] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(847),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9273] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(849),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [9285] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(824),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9299] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    anon_sym_COMMA,
    ACTIONS(856),
    1,
    anon_sym_RPAREN,
    STATE(211),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9313] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(858),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9325] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_COMMA,
    ACTIONS(863),
    1,
    anon_sym_RBRACE,
    STATE(213),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [9339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(856),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9353] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(865),
    1,
    anon_sym_COMMA,
    ACTIONS(867),
    1,
    anon_sym_SEMI,
    STATE(215),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_any_declarators_repeat1,
    [9369] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(869),
    1,
    anon_sym_RPAREN,
    STATE(211),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(216),
    1,
    sym_comment,
    [9385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(871),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(873),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9409] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(131),
    1,
    sym_simple_declarator,
    STATE(219),
    1,
    sym_comment,
    STATE(359),
    1,
    sym_attr_declarator,
    [9425] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_COMMA,
    ACTIONS(877),
    1,
    anon_sym_RPAREN,
    STATE(211),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(220),
    1,
    sym_comment,
    [9441] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    anon_sym_COMMA,
    ACTIONS(881),
    1,
    anon_sym_RPAREN,
    STATE(221),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_parameter_dcls_repeat1,
    [9457] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_scoped_name,
    [9473] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(214),
    1,
    sym_scoped_name,
    STATE(223),
    1,
    sym_comment,
    [9489] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(883),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9501] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    anon_sym_SEMI,
    ACTIONS(887),
    1,
    anon_sym_default,
    STATE(225),
    1,
    sym_comment,
    STATE(351),
    1,
    sym_default,
    [9517] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(889),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9529] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(891),
    1,
    anon_sym_RBRACE,
    STATE(202),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(227),
    1,
    sym_comment,
    [9545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(893),
    1,
    anon_sym_SEMI,
    ACTIONS(895),
    1,
    sym_identifier,
    STATE(228),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [9559] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_COMMA,
    ACTIONS(900),
    1,
    anon_sym_LBRACE,
    STATE(229),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9575] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_COMMA,
    ACTIONS(905),
    1,
    anon_sym_LBRACE,
    STATE(230),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [9589] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(887),
    1,
    anon_sym_default,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(231),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_default,
    [9605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(909),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9619] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(911),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9631] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    anon_sym_SEMI,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(228),
    1,
    aux_sym_bitfield_repeat1,
    STATE(234),
    1,
    sym_comment,
    [9647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_COMMA,
    ACTIONS(920),
    1,
    anon_sym_RPAREN,
    STATE(235),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [9661] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_COMMA,
    ACTIONS(922),
    1,
    anon_sym_LBRACE,
    STATE(229),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(236),
    1,
    sym_comment,
    [9677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(924),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9689] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(834),
    1,
    anon_sym_RBRACE,
    STATE(202),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(238),
    1,
    sym_comment,
    [9705] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_COMMA,
    ACTIONS(928),
    1,
    anon_sym_RBRACE,
    STATE(213),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(239),
    1,
    sym_comment,
    [9721] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_scoped_name,
    STATE(240),
    1,
    sym_comment,
    [9737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(749),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9749] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_CARET,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(646),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9763] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(930),
    1,
    anon_sym_RBRACE,
    STATE(227),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(243),
    1,
    sym_comment,
    [9779] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(932),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9791] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(790),
    1,
    anon_sym_LBRACE,
    ACTIONS(792),
    1,
    anon_sym_COLON,
    STATE(245),
    1,
    sym_comment,
    STATE(358),
    1,
    sym_interface_inheritance_spec,
    [9807] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_simple_declarator,
    STATE(246),
    1,
    sym_comment,
    STATE(341),
    1,
    sym_readonly_attr_declarator,
    [9823] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    anon_sym_SEMI,
    ACTIONS(936),
    1,
    anon_sym_switch,
    ACTIONS(938),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_comment,
    [9839] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    anon_sym_COMMA,
    ACTIONS(943),
    1,
    anon_sym_SEMI,
    STATE(248),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9853] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_COMMA,
    ACTIONS(930),
    1,
    anon_sym_RBRACE,
    STATE(202),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(249),
    1,
    sym_comment,
    [9869] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(250),
    1,
    sym_comment,
    STATE(293),
    1,
    sym_scoped_name,
    [9885] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_RBRACE,
    ACTIONS(947),
    1,
    sym_identifier,
    STATE(251),
    1,
    sym_comment,
    STATE(257),
    1,
    sym_bit_value,
    [9901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(949),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9913] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    sym_identifier,
    ACTIONS(951),
    1,
    anon_sym_SEMI,
    STATE(234),
    1,
    aux_sym_bitfield_repeat1,
    STATE(253),
    1,
    sym_comment,
    [9929] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(953),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9941] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_comment,
    STATE(316),
    1,
    sym_scoped_name,
    [9957] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    anon_sym_COMMA,
    ACTIONS(955),
    1,
    anon_sym_RPAREN,
    STATE(235),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(256),
    1,
    sym_comment,
    [9973] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_COMMA,
    ACTIONS(957),
    1,
    anon_sym_RBRACE,
    STATE(239),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(257),
    1,
    sym_comment,
    [9989] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(959),
    1,
    anon_sym_COMMA,
    ACTIONS(962),
    1,
    anon_sym_SEMI,
    STATE(258),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [10003] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(964),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(966),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10027] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_XCDR,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(968),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [10041] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(765),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_scoped_name,
    STATE(262),
    1,
    sym_comment,
    [10057] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(865),
    1,
    anon_sym_COMMA,
    ACTIONS(972),
    1,
    anon_sym_SEMI,
    STATE(215),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(263),
    1,
    sym_comment,
    [10073] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_COMMA,
    ACTIONS(974),
    1,
    anon_sym_SEMI,
    STATE(258),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(264),
    1,
    sym_comment,
    [10089] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(976),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(978),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(980),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(962),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(984),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10155] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(986),
    1,
    anon_sym_RPAREN,
    STATE(271),
    1,
    sym_comment,
    [10168] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(988),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    anon_sym_typedef,
    ACTIONS(990),
    1,
    anon_sym_PIPE,
    STATE(273),
    1,
    sym_comment,
    [10192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(992),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10203] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(994),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(943),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(996),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10236] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_LBRACE,
    ACTIONS(1000),
    1,
    anon_sym_COLON,
    STATE(278),
    1,
    sym_comment,
    [10249] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1002),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(1004),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [10271] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(1006),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1008),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10293] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1010),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10304] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1012),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10315] = 4,
    ACTIONS(1014),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1016),
    1,
    sym_preproc_arg,
    ACTIONS(1018),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    [10328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    STATE(286),
    1,
    sym_comment,
    STATE(327),
    1,
    sym_typedef_dcl,
    [10341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    anon_sym_interface,
    STATE(287),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_interface_header,
    [10354] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(1020),
    1,
    anon_sym_LBRACE,
    STATE(288),
    1,
    sym_comment,
    [10367] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_SEMI,
    ACTIONS(1024),
    1,
    anon_sym_default,
    STATE(289),
    1,
    sym_comment,
    [10380] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(947),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_bit_value,
    [10393] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10404] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1026),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(1028),
    1,
    anon_sym_LBRACE,
    STATE(293),
    1,
    sym_comment,
    [10428] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    anon_sym_interface,
    STATE(294),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_interface_header,
    [10441] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(265),
    1,
    sym_simple_declarator,
    STATE(295),
    1,
    sym_comment,
    [10454] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(905),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1030),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10476] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_GT,
    ACTIONS(1034),
    1,
    anon_sym_COMMA,
    STATE(298),
    1,
    sym_comment,
    [10489] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(1036),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1038),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10511] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1040),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1042),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10533] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(863),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10544] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1044),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1046),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10566] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1050),
    1,
    anon_sym_SQUOTE,
    STATE(306),
    1,
    sym_comment,
    [10579] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_LPAREN,
    STATE(307),
    1,
    sym_comment,
    STATE(377),
    1,
    sym_exception_list,
    [10592] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1054),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(1056),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10614] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1058),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(839),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10636] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(1060),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1062),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10658] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_GT,
    ACTIONS(1066),
    1,
    anon_sym_COMMA,
    STATE(314),
    1,
    sym_comment,
    [10671] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(1068),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10682] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(1070),
    1,
    anon_sym_LBRACE,
    STATE(316),
    1,
    sym_comment,
    [10695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1072),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10706] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1074),
    1,
    anon_sym_const,
    STATE(286),
    1,
    sym_const_dcl,
    STATE(318),
    1,
    sym_comment,
    [10719] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(367),
    1,
    sym_simple_declarator,
    [10732] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_LBRACE,
    ACTIONS(1078),
    1,
    anon_sym_COLON,
    STATE(320),
    1,
    sym_comment,
    [10745] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(269),
    1,
    sym_simple_declarator,
    STATE(321),
    1,
    sym_comment,
    [10758] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_simple_declarator,
    STATE(322),
    1,
    sym_comment,
    [10771] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    ACTIONS(824),
    1,
    anon_sym_COMMA,
    STATE(323),
    1,
    sym_comment,
    [10784] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_LPAREN,
    STATE(268),
    1,
    sym_exception_list,
    STATE(324),
    1,
    sym_comment,
    [10797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1080),
    1,
    anon_sym_name,
    STATE(325),
    1,
    sym_comment,
    [10807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    anon_sym_SEMI,
    STATE(326),
    1,
    sym_comment,
    [10817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    [10827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    sym_identifier,
    STATE(328),
    1,
    sym_comment,
    [10837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_LBRACE,
    STATE(329),
    1,
    sym_comment,
    [10847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    sym_identifier,
    STATE(330),
    1,
    sym_comment,
    [10857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_DQUOTE,
    STATE(331),
    1,
    sym_comment,
    [10867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1094),
    1,
    anon_sym_SQUOTE,
    STATE(332),
    1,
    sym_comment,
    [10877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    sym_identifier,
    STATE(333),
    1,
    sym_comment,
    [10887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    anon_sym_name,
    STATE(334),
    1,
    sym_comment,
    [10897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1098),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [10907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(336),
    1,
    sym_comment,
    [10917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_RPAREN,
    STATE(337),
    1,
    sym_comment,
    [10927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1102),
    1,
    anon_sym_GT,
    STATE(338),
    1,
    sym_comment,
    [10937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_LT,
    STATE(339),
    1,
    sym_comment,
    [10947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_LT,
    STATE(340),
    1,
    sym_comment,
    [10957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    [10967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(828),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [10977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [10987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_RPAREN,
    STATE(344),
    1,
    sym_comment,
    [10997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [11007] = 3,
    ACTIONS(1018),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    aux_sym_comment_token1,
    STATE(346),
    1,
    sym_comment,
    [11017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    sym_comment,
    [11027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1118),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [11037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1120),
    1,
    sym_identifier,
    STATE(349),
    1,
    sym_comment,
    [11047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [11057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1124),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [11067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    sym_identifier,
    STATE(352),
    1,
    sym_comment,
    [11077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    anon_sym_DQUOTE,
    STATE(353),
    1,
    sym_comment,
    [11087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1130),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [11097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1132),
    1,
    anon_sym_LT,
    STATE(355),
    1,
    sym_comment,
    [11107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1134),
    1,
    anon_sym_RBRACE,
    STATE(356),
    1,
    sym_comment,
    [11117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [11127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    anon_sym_LBRACE,
    STATE(358),
    1,
    sym_comment,
    [11137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [11147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1142),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [11157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [11167] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    anon_sym_RPAREN,
    STATE(362),
    1,
    sym_comment,
    [11177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1148),
    1,
    anon_sym_RPAREN,
    STATE(363),
    1,
    sym_comment,
    [11187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_LBRACE,
    STATE(364),
    1,
    sym_comment,
    [11197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    anon_sym_RBRACK,
    STATE(365),
    1,
    sym_comment,
    [11207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_LBRACE,
    STATE(366),
    1,
    sym_comment,
    [11217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [11227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_GT,
    STATE(368),
    1,
    sym_comment,
    [11237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    anon_sym_LPAREN,
    STATE(369),
    1,
    sym_comment,
    [11247] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_LBRACE,
    STATE(370),
    1,
    sym_comment,
    [11257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    anon_sym_LPAREN,
    STATE(371),
    1,
    sym_comment,
    [11267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    [11277] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    anon_sym_SEMI,
    STATE(373),
    1,
    sym_comment,
    [11287] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_EQ,
    STATE(374),
    1,
    sym_comment,
    [11297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    anon_sym_EQ,
    STATE(375),
    1,
    sym_comment,
    [11307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    anon_sym_EQ,
    STATE(376),
    1,
    sym_comment,
    [11317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    anon_sym_SEMI,
    STATE(377),
    1,
    sym_comment,
    [11327] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [11337] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_SQUOTE,
    STATE(379),
    1,
    sym_comment,
    [11347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [11357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_DQUOTE,
    STATE(381),
    1,
    sym_comment,
    [11367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1182),
    1,
    anon_sym_LBRACE,
    STATE(382),
    1,
    sym_comment,
    [11377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1184),
    1,
    aux_sym_char_literal_token1,
    STATE(383),
    1,
    sym_comment,
    [11387] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1186),
    1,
    aux_sym_string_literal_token1,
    STATE(384),
    1,
    sym_comment,
    [11397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1188),
    1,
    anon_sym_RPAREN,
    STATE(385),
    1,
    sym_comment,
    [11407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1190),
    1,
    anon_sym_RPAREN,
    STATE(386),
    1,
    sym_comment,
    [11417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    anon_sym_RPAREN,
    STATE(387),
    1,
    sym_comment,
    [11427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1192),
    1,
    anon_sym_LBRACE,
    STATE(388),
    1,
    sym_comment,
    [11437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1194),
    1,
    anon_sym_GT,
    STATE(389),
    1,
    sym_comment,
    [11447] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1196),
    1,
    anon_sym_GT,
    STATE(390),
    1,
    sym_comment,
    [11457] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_comment,
    [11467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1200),
    1,
    anon_sym_SEMI,
    STATE(392),
    1,
    sym_comment,
    [11477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1202),
    1,
    anon_sym_COLON,
    STATE(393),
    1,
    sym_comment,
    [11487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    sym_identifier,
    STATE(394),
    1,
    sym_comment,
    [11497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1206),
    1,
    anon_sym_SEMI,
    STATE(395),
    1,
    sym_comment,
    [11507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1208),
    1,
    anon_sym_LBRACE,
    STATE(396),
    1,
    sym_comment,
    [11517] = 3,
    ACTIONS(1018),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1210),
    1,
    aux_sym_preproc_call_token1,
    STATE(397),
    1,
    sym_comment,
    [11527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    anon_sym_GT,
    STATE(398),
    1,
    sym_comment,
    [11537] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1214),
    1,
    anon_sym_attribute,
    STATE(399),
    1,
    sym_comment,
    [11547] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1216),
    1,
    sym_identifier,
    STATE(400),
    1,
    sym_comment,
    [11557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1218),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [11567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1220),
    1,
    anon_sym_SEMI,
    STATE(402),
    1,
    sym_comment,
    [11577] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(241),
    1,
    anon_sym_RBRACE,
    STATE(403),
    1,
    sym_comment,
    [11587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1222),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [11597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1224),
    1,
    anon_sym_SEMI,
    STATE(405),
    1,
    sym_comment,
    [11607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1226),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [11617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1228),
    1,
    anon_sym_COLON,
    STATE(407),
    1,
    sym_comment,
    [11627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [11637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1232),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [11647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [11657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_enum,
    STATE(411),
    1,
    sym_comment,
    [11667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1238),
    1,
    anon_sym_enum,
    STATE(412),
    1,
    sym_comment,
    [11677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    anon_sym_LBRACE,
    STATE(413),
    1,
    sym_comment,
    [11687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [11697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(415),
    1,
    sym_comment,
    [11707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1244),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    [11717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    anon_sym_LBRACE,
    STATE(417),
    1,
    sym_comment,
    [11727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    anon_sym_LBRACE,
    STATE(418),
    1,
    sym_comment,
    [11737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_LPAREN,
    STATE(420),
    1,
    sym_comment,
    [11757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1254),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [11767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    aux_sym_string_literal_token1,
    STATE(422),
    1,
    sym_comment,
    [11777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1258),
    1,
    aux_sym_string_literal_token1,
    STATE(423),
    1,
    sym_comment,
    [11787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1260),
    1,
    anon_sym_COMMA,
    STATE(424),
    1,
    sym_comment,
    [11797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1262),
    1,
    anon_sym_GT,
    STATE(425),
    1,
    sym_comment,
    [11807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1264),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [11817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1266),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [11827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1268),
    1,
    anon_sym_GT,
    STATE(428),
    1,
    sym_comment,
    [11837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1270),
    1,
    anon_sym_SEMI,
    STATE(429),
    1,
    sym_comment,
    [11847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1068),
    1,
    anon_sym_const,
    STATE(430),
    1,
    sym_comment,
    [11857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1272),
    1,
    ts_builtin_sym_end,
    STATE(431),
    1,
    sym_comment,
    [11867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1274),
    1,
    anon_sym_LPAREN,
    STATE(432),
    1,
    sym_comment,
    [11877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1276),
    1,
    anon_sym_COMMA,
    STATE(433),
    1,
    sym_comment,
    [11887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_const,
    STATE(434),
    1,
    sym_comment,
    [11897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1278),
    1,
    anon_sym_LPAREN,
    STATE(435),
    1,
    sym_comment,
    [11907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1280),
    1,
    anon_sym_LPAREN,
    STATE(436),
    1,
    sym_comment,
    [11917] = 3,
    ACTIONS(1018),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1282),
    1,
    aux_sym_predefine_token1,
    STATE(437),
    1,
    sym_comment,
    [11927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1284),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_comment,
    [11937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1286),
    1,
    anon_sym_enum,
    STATE(439),
    1,
    sym_comment,
    [11947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1288),
    1,
    sym_identifier,
    STATE(440),
    1,
    sym_comment,
    [11957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1290),
    1,
    sym_identifier,
    STATE(441),
    1,
    sym_comment,
    [11967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_const,
    STATE(442),
    1,
    sym_comment,
    [11977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1292),
    1,
    aux_sym_char_literal_token1,
    STATE(443),
    1,
    sym_comment,
    [11987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1294),
    1,
    aux_sym_string_literal_token1,
    STATE(444),
    1,
    sym_comment,
    [11997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1296),
    1,
    sym_identifier,
    STATE(445),
    1,
    sym_comment,
    [12007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1298),
    1,
    anon_sym_SEMI,
    STATE(446),
    1,
    sym_comment,
    [12017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1300),
    1,
    sym_identifier,
    STATE(447),
    1,
    sym_comment,
    [12027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_const,
    STATE(448),
    1,
    sym_comment,
    [12037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1302),
    1,
    sym_identifier,
    STATE(449),
    1,
    sym_comment,
    [12047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    anon_sym_RBRACE,
    STATE(450),
    1,
    sym_comment,
    [12057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    sym_identifier,
    STATE(451),
    1,
    sym_comment,
    [12067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    sym_identifier,
    STATE(452),
    1,
    sym_comment,
    [12077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1306),
    1,
    sym_identifier,
    STATE(453),
    1,
    sym_comment,
    [12087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1308),
    1,
    anon_sym_EQ,
    STATE(454),
    1,
    sym_comment,
    [12097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1310),
    1,
    anon_sym_SEMI,
    STATE(455),
    1,
    sym_comment,
    [12107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1312),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [12117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1314),
    1,
    anon_sym_SEMI,
    STATE(457),
    1,
    sym_comment,
    [12127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1316),
    1,
    anon_sym_LT,
    STATE(458),
    1,
    sym_comment,
    [12137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1318),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    [12147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1320),
    1,
    anon_sym_SEMI,
    STATE(460),
    1,
    sym_comment,
    [12157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1322),
    1,
    sym_identifier,
    STATE(461),
    1,
    sym_comment,
    [12167] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1324),
    1,
    sym_identifier,
    STATE(462),
    1,
    sym_comment,
    [12177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(229),
    1,
    anon_sym_RBRACE,
    STATE(463),
    1,
    sym_comment,
    [12187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1326),
    1,
    anon_sym_SEMI,
    STATE(464),
    1,
    sym_comment,
    [12197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1328),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [12207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1330),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [12217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1332),
    1,
    anon_sym_LBRACE,
    STATE(467),
    1,
    sym_comment,
    [12227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1334),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [12237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1336),
    1,
    anon_sym_LBRACE,
    STATE(469),
    1,
    sym_comment,
    [12247] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1338),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [12257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1340),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(471),
    1,
    sym_comment,
    [12267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1342),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [12277] = 1,
    ACTIONS(1344),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 120,
    [SMALL_STATE(4)] = 238,
    [SMALL_STATE(5)] = 358,
    [SMALL_STATE(6)] = 478,
    [SMALL_STATE(7)] = 598,
    [SMALL_STATE(8)] = 718,
    [SMALL_STATE(9)] = 838,
    [SMALL_STATE(10)] = 958,
    [SMALL_STATE(11)] = 1078,
    [SMALL_STATE(12)] = 1198,
    [SMALL_STATE(13)] = 1318,
    [SMALL_STATE(14)] = 1448,
    [SMALL_STATE(15)] = 1567,
    [SMALL_STATE(16)] = 1687,
    [SMALL_STATE(17)] = 1798,
    [SMALL_STATE(18)] = 1917,
    [SMALL_STATE(19)] = 2038,
    [SMALL_STATE(20)] = 2157,
    [SMALL_STATE(21)] = 2278,
    [SMALL_STATE(22)] = 2397,
    [SMALL_STATE(23)] = 2518,
    [SMALL_STATE(24)] = 2639,
    [SMALL_STATE(25)] = 2755,
    [SMALL_STATE(26)] = 2869,
    [SMALL_STATE(27)] = 2966,
    [SMALL_STATE(28)] = 3067,
    [SMALL_STATE(29)] = 3163,
    [SMALL_STATE(30)] = 3261,
    [SMALL_STATE(31)] = 3354,
    [SMALL_STATE(32)] = 3441,
    [SMALL_STATE(33)] = 3528,
    [SMALL_STATE(34)] = 3615,
    [SMALL_STATE(35)] = 3702,
    [SMALL_STATE(36)] = 3789,
    [SMALL_STATE(37)] = 3843,
    [SMALL_STATE(38)] = 3884,
    [SMALL_STATE(39)] = 3925,
    [SMALL_STATE(40)] = 3966,
    [SMALL_STATE(41)] = 4007,
    [SMALL_STATE(42)] = 4048,
    [SMALL_STATE(43)] = 4088,
    [SMALL_STATE(44)] = 4128,
    [SMALL_STATE(45)] = 4168,
    [SMALL_STATE(46)] = 4208,
    [SMALL_STATE(47)] = 4278,
    [SMALL_STATE(48)] = 4348,
    [SMALL_STATE(49)] = 4428,
    [SMALL_STATE(50)] = 4508,
    [SMALL_STATE(51)] = 4588,
    [SMALL_STATE(52)] = 4668,
    [SMALL_STATE(53)] = 4748,
    [SMALL_STATE(54)] = 4828,
    [SMALL_STATE(55)] = 4908,
    [SMALL_STATE(56)] = 4985,
    [SMALL_STATE(57)] = 5062,
    [SMALL_STATE(58)] = 5139,
    [SMALL_STATE(59)] = 5216,
    [SMALL_STATE(60)] = 5293,
    [SMALL_STATE(61)] = 5370,
    [SMALL_STATE(62)] = 5447,
    [SMALL_STATE(63)] = 5483,
    [SMALL_STATE(64)] = 5519,
    [SMALL_STATE(65)] = 5590,
    [SMALL_STATE(66)] = 5629,
    [SMALL_STATE(67)] = 5664,
    [SMALL_STATE(68)] = 5699,
    [SMALL_STATE(69)] = 5770,
    [SMALL_STATE(70)] = 5838,
    [SMALL_STATE(71)] = 5906,
    [SMALL_STATE(72)] = 5940,
    [SMALL_STATE(73)] = 5974,
    [SMALL_STATE(74)] = 6008,
    [SMALL_STATE(75)] = 6042,
    [SMALL_STATE(76)] = 6075,
    [SMALL_STATE(77)] = 6140,
    [SMALL_STATE(78)] = 6173,
    [SMALL_STATE(79)] = 6204,
    [SMALL_STATE(80)] = 6269,
    [SMALL_STATE(81)] = 6300,
    [SMALL_STATE(82)] = 6333,
    [SMALL_STATE(83)] = 6364,
    [SMALL_STATE(84)] = 6395,
    [SMALL_STATE(85)] = 6457,
    [SMALL_STATE(86)] = 6489,
    [SMALL_STATE(87)] = 6551,
    [SMALL_STATE(88)] = 6610,
    [SMALL_STATE(89)] = 6669,
    [SMALL_STATE(90)] = 6725,
    [SMALL_STATE(91)] = 6781,
    [SMALL_STATE(92)] = 6810,
    [SMALL_STATE(93)] = 6839,
    [SMALL_STATE(94)] = 6867,
    [SMALL_STATE(95)] = 6895,
    [SMALL_STATE(96)] = 6925,
    [SMALL_STATE(97)] = 6953,
    [SMALL_STATE(98)] = 6981,
    [SMALL_STATE(99)] = 7009,
    [SMALL_STATE(100)] = 7057,
    [SMALL_STATE(101)] = 7085,
    [SMALL_STATE(102)] = 7113,
    [SMALL_STATE(103)] = 7141,
    [SMALL_STATE(104)] = 7169,
    [SMALL_STATE(105)] = 7197,
    [SMALL_STATE(106)] = 7227,
    [SMALL_STATE(107)] = 7255,
    [SMALL_STATE(108)] = 7283,
    [SMALL_STATE(109)] = 7314,
    [SMALL_STATE(110)] = 7345,
    [SMALL_STATE(111)] = 7388,
    [SMALL_STATE(112)] = 7431,
    [SMALL_STATE(113)] = 7457,
    [SMALL_STATE(114)] = 7483,
    [SMALL_STATE(115)] = 7506,
    [SMALL_STATE(116)] = 7531,
    [SMALL_STATE(117)] = 7566,
    [SMALL_STATE(118)] = 7591,
    [SMALL_STATE(119)] = 7614,
    [SMALL_STATE(120)] = 7638,
    [SMALL_STATE(121)] = 7662,
    [SMALL_STATE(122)] = 7686,
    [SMALL_STATE(123)] = 7710,
    [SMALL_STATE(124)] = 7745,
    [SMALL_STATE(125)] = 7765,
    [SMALL_STATE(126)] = 7793,
    [SMALL_STATE(127)] = 7813,
    [SMALL_STATE(128)] = 7833,
    [SMALL_STATE(129)] = 7852,
    [SMALL_STATE(130)] = 7871,
    [SMALL_STATE(131)] = 7890,
    [SMALL_STATE(132)] = 7921,
    [SMALL_STATE(133)] = 7940,
    [SMALL_STATE(134)] = 7958,
    [SMALL_STATE(135)] = 7984,
    [SMALL_STATE(136)] = 8000,
    [SMALL_STATE(137)] = 8021,
    [SMALL_STATE(138)] = 8046,
    [SMALL_STATE(139)] = 8071,
    [SMALL_STATE(140)] = 8092,
    [SMALL_STATE(141)] = 8115,
    [SMALL_STATE(142)] = 8132,
    [SMALL_STATE(143)] = 8157,
    [SMALL_STATE(144)] = 8176,
    [SMALL_STATE(145)] = 8201,
    [SMALL_STATE(146)] = 8226,
    [SMALL_STATE(147)] = 8243,
    [SMALL_STATE(148)] = 8268,
    [SMALL_STATE(149)] = 8290,
    [SMALL_STATE(150)] = 8312,
    [SMALL_STATE(151)] = 8326,
    [SMALL_STATE(152)] = 8348,
    [SMALL_STATE(153)] = 8370,
    [SMALL_STATE(154)] = 8384,
    [SMALL_STATE(155)] = 8406,
    [SMALL_STATE(156)] = 8420,
    [SMALL_STATE(157)] = 8442,
    [SMALL_STATE(158)] = 8456,
    [SMALL_STATE(159)] = 8476,
    [SMALL_STATE(160)] = 8498,
    [SMALL_STATE(161)] = 8518,
    [SMALL_STATE(162)] = 8538,
    [SMALL_STATE(163)] = 8558,
    [SMALL_STATE(164)] = 8578,
    [SMALL_STATE(165)] = 8598,
    [SMALL_STATE(166)] = 8613,
    [SMALL_STATE(167)] = 8626,
    [SMALL_STATE(168)] = 8641,
    [SMALL_STATE(169)] = 8654,
    [SMALL_STATE(170)] = 8667,
    [SMALL_STATE(171)] = 8684,
    [SMALL_STATE(172)] = 8701,
    [SMALL_STATE(173)] = 8720,
    [SMALL_STATE(174)] = 8733,
    [SMALL_STATE(175)] = 8748,
    [SMALL_STATE(176)] = 8761,
    [SMALL_STATE(177)] = 8778,
    [SMALL_STATE(178)] = 8797,
    [SMALL_STATE(179)] = 8814,
    [SMALL_STATE(180)] = 8833,
    [SMALL_STATE(181)] = 8846,
    [SMALL_STATE(182)] = 8863,
    [SMALL_STATE(183)] = 8882,
    [SMALL_STATE(184)] = 8899,
    [SMALL_STATE(185)] = 8916,
    [SMALL_STATE(186)] = 8935,
    [SMALL_STATE(187)] = 8952,
    [SMALL_STATE(188)] = 8971,
    [SMALL_STATE(189)] = 8990,
    [SMALL_STATE(190)] = 9005,
    [SMALL_STATE(191)] = 9017,
    [SMALL_STATE(192)] = 9033,
    [SMALL_STATE(193)] = 9049,
    [SMALL_STATE(194)] = 9061,
    [SMALL_STATE(195)] = 9073,
    [SMALL_STATE(196)] = 9085,
    [SMALL_STATE(197)] = 9097,
    [SMALL_STATE(198)] = 9109,
    [SMALL_STATE(199)] = 9125,
    [SMALL_STATE(200)] = 9141,
    [SMALL_STATE(201)] = 9157,
    [SMALL_STATE(202)] = 9173,
    [SMALL_STATE(203)] = 9187,
    [SMALL_STATE(204)] = 9199,
    [SMALL_STATE(205)] = 9215,
    [SMALL_STATE(206)] = 9231,
    [SMALL_STATE(207)] = 9247,
    [SMALL_STATE(208)] = 9261,
    [SMALL_STATE(209)] = 9273,
    [SMALL_STATE(210)] = 9285,
    [SMALL_STATE(211)] = 9299,
    [SMALL_STATE(212)] = 9313,
    [SMALL_STATE(213)] = 9325,
    [SMALL_STATE(214)] = 9339,
    [SMALL_STATE(215)] = 9353,
    [SMALL_STATE(216)] = 9369,
    [SMALL_STATE(217)] = 9385,
    [SMALL_STATE(218)] = 9397,
    [SMALL_STATE(219)] = 9409,
    [SMALL_STATE(220)] = 9425,
    [SMALL_STATE(221)] = 9441,
    [SMALL_STATE(222)] = 9457,
    [SMALL_STATE(223)] = 9473,
    [SMALL_STATE(224)] = 9489,
    [SMALL_STATE(225)] = 9501,
    [SMALL_STATE(226)] = 9517,
    [SMALL_STATE(227)] = 9529,
    [SMALL_STATE(228)] = 9545,
    [SMALL_STATE(229)] = 9559,
    [SMALL_STATE(230)] = 9575,
    [SMALL_STATE(231)] = 9589,
    [SMALL_STATE(232)] = 9605,
    [SMALL_STATE(233)] = 9619,
    [SMALL_STATE(234)] = 9631,
    [SMALL_STATE(235)] = 9647,
    [SMALL_STATE(236)] = 9661,
    [SMALL_STATE(237)] = 9677,
    [SMALL_STATE(238)] = 9689,
    [SMALL_STATE(239)] = 9705,
    [SMALL_STATE(240)] = 9721,
    [SMALL_STATE(241)] = 9737,
    [SMALL_STATE(242)] = 9749,
    [SMALL_STATE(243)] = 9763,
    [SMALL_STATE(244)] = 9779,
    [SMALL_STATE(245)] = 9791,
    [SMALL_STATE(246)] = 9807,
    [SMALL_STATE(247)] = 9823,
    [SMALL_STATE(248)] = 9839,
    [SMALL_STATE(249)] = 9853,
    [SMALL_STATE(250)] = 9869,
    [SMALL_STATE(251)] = 9885,
    [SMALL_STATE(252)] = 9901,
    [SMALL_STATE(253)] = 9913,
    [SMALL_STATE(254)] = 9929,
    [SMALL_STATE(255)] = 9941,
    [SMALL_STATE(256)] = 9957,
    [SMALL_STATE(257)] = 9973,
    [SMALL_STATE(258)] = 9989,
    [SMALL_STATE(259)] = 10003,
    [SMALL_STATE(260)] = 10015,
    [SMALL_STATE(261)] = 10027,
    [SMALL_STATE(262)] = 10041,
    [SMALL_STATE(263)] = 10057,
    [SMALL_STATE(264)] = 10073,
    [SMALL_STATE(265)] = 10089,
    [SMALL_STATE(266)] = 10100,
    [SMALL_STATE(267)] = 10111,
    [SMALL_STATE(268)] = 10122,
    [SMALL_STATE(269)] = 10133,
    [SMALL_STATE(270)] = 10144,
    [SMALL_STATE(271)] = 10155,
    [SMALL_STATE(272)] = 10168,
    [SMALL_STATE(273)] = 10179,
    [SMALL_STATE(274)] = 10192,
    [SMALL_STATE(275)] = 10203,
    [SMALL_STATE(276)] = 10214,
    [SMALL_STATE(277)] = 10225,
    [SMALL_STATE(278)] = 10236,
    [SMALL_STATE(279)] = 10249,
    [SMALL_STATE(280)] = 10260,
    [SMALL_STATE(281)] = 10271,
    [SMALL_STATE(282)] = 10282,
    [SMALL_STATE(283)] = 10293,
    [SMALL_STATE(284)] = 10304,
    [SMALL_STATE(285)] = 10315,
    [SMALL_STATE(286)] = 10328,
    [SMALL_STATE(287)] = 10341,
    [SMALL_STATE(288)] = 10354,
    [SMALL_STATE(289)] = 10367,
    [SMALL_STATE(290)] = 10380,
    [SMALL_STATE(291)] = 10393,
    [SMALL_STATE(292)] = 10404,
    [SMALL_STATE(293)] = 10415,
    [SMALL_STATE(294)] = 10428,
    [SMALL_STATE(295)] = 10441,
    [SMALL_STATE(296)] = 10454,
    [SMALL_STATE(297)] = 10465,
    [SMALL_STATE(298)] = 10476,
    [SMALL_STATE(299)] = 10489,
    [SMALL_STATE(300)] = 10500,
    [SMALL_STATE(301)] = 10511,
    [SMALL_STATE(302)] = 10522,
    [SMALL_STATE(303)] = 10533,
    [SMALL_STATE(304)] = 10544,
    [SMALL_STATE(305)] = 10555,
    [SMALL_STATE(306)] = 10566,
    [SMALL_STATE(307)] = 10579,
    [SMALL_STATE(308)] = 10592,
    [SMALL_STATE(309)] = 10603,
    [SMALL_STATE(310)] = 10614,
    [SMALL_STATE(311)] = 10625,
    [SMALL_STATE(312)] = 10636,
    [SMALL_STATE(313)] = 10647,
    [SMALL_STATE(314)] = 10658,
    [SMALL_STATE(315)] = 10671,
    [SMALL_STATE(316)] = 10682,
    [SMALL_STATE(317)] = 10695,
    [SMALL_STATE(318)] = 10706,
    [SMALL_STATE(319)] = 10719,
    [SMALL_STATE(320)] = 10732,
    [SMALL_STATE(321)] = 10745,
    [SMALL_STATE(322)] = 10758,
    [SMALL_STATE(323)] = 10771,
    [SMALL_STATE(324)] = 10784,
    [SMALL_STATE(325)] = 10797,
    [SMALL_STATE(326)] = 10807,
    [SMALL_STATE(327)] = 10817,
    [SMALL_STATE(328)] = 10827,
    [SMALL_STATE(329)] = 10837,
    [SMALL_STATE(330)] = 10847,
    [SMALL_STATE(331)] = 10857,
    [SMALL_STATE(332)] = 10867,
    [SMALL_STATE(333)] = 10877,
    [SMALL_STATE(334)] = 10887,
    [SMALL_STATE(335)] = 10897,
    [SMALL_STATE(336)] = 10907,
    [SMALL_STATE(337)] = 10917,
    [SMALL_STATE(338)] = 10927,
    [SMALL_STATE(339)] = 10937,
    [SMALL_STATE(340)] = 10947,
    [SMALL_STATE(341)] = 10957,
    [SMALL_STATE(342)] = 10967,
    [SMALL_STATE(343)] = 10977,
    [SMALL_STATE(344)] = 10987,
    [SMALL_STATE(345)] = 10997,
    [SMALL_STATE(346)] = 11007,
    [SMALL_STATE(347)] = 11017,
    [SMALL_STATE(348)] = 11027,
    [SMALL_STATE(349)] = 11037,
    [SMALL_STATE(350)] = 11047,
    [SMALL_STATE(351)] = 11057,
    [SMALL_STATE(352)] = 11067,
    [SMALL_STATE(353)] = 11077,
    [SMALL_STATE(354)] = 11087,
    [SMALL_STATE(355)] = 11097,
    [SMALL_STATE(356)] = 11107,
    [SMALL_STATE(357)] = 11117,
    [SMALL_STATE(358)] = 11127,
    [SMALL_STATE(359)] = 11137,
    [SMALL_STATE(360)] = 11147,
    [SMALL_STATE(361)] = 11157,
    [SMALL_STATE(362)] = 11167,
    [SMALL_STATE(363)] = 11177,
    [SMALL_STATE(364)] = 11187,
    [SMALL_STATE(365)] = 11197,
    [SMALL_STATE(366)] = 11207,
    [SMALL_STATE(367)] = 11217,
    [SMALL_STATE(368)] = 11227,
    [SMALL_STATE(369)] = 11237,
    [SMALL_STATE(370)] = 11247,
    [SMALL_STATE(371)] = 11257,
    [SMALL_STATE(372)] = 11267,
    [SMALL_STATE(373)] = 11277,
    [SMALL_STATE(374)] = 11287,
    [SMALL_STATE(375)] = 11297,
    [SMALL_STATE(376)] = 11307,
    [SMALL_STATE(377)] = 11317,
    [SMALL_STATE(378)] = 11327,
    [SMALL_STATE(379)] = 11337,
    [SMALL_STATE(380)] = 11347,
    [SMALL_STATE(381)] = 11357,
    [SMALL_STATE(382)] = 11367,
    [SMALL_STATE(383)] = 11377,
    [SMALL_STATE(384)] = 11387,
    [SMALL_STATE(385)] = 11397,
    [SMALL_STATE(386)] = 11407,
    [SMALL_STATE(387)] = 11417,
    [SMALL_STATE(388)] = 11427,
    [SMALL_STATE(389)] = 11437,
    [SMALL_STATE(390)] = 11447,
    [SMALL_STATE(391)] = 11457,
    [SMALL_STATE(392)] = 11467,
    [SMALL_STATE(393)] = 11477,
    [SMALL_STATE(394)] = 11487,
    [SMALL_STATE(395)] = 11497,
    [SMALL_STATE(396)] = 11507,
    [SMALL_STATE(397)] = 11517,
    [SMALL_STATE(398)] = 11527,
    [SMALL_STATE(399)] = 11537,
    [SMALL_STATE(400)] = 11547,
    [SMALL_STATE(401)] = 11557,
    [SMALL_STATE(402)] = 11567,
    [SMALL_STATE(403)] = 11577,
    [SMALL_STATE(404)] = 11587,
    [SMALL_STATE(405)] = 11597,
    [SMALL_STATE(406)] = 11607,
    [SMALL_STATE(407)] = 11617,
    [SMALL_STATE(408)] = 11627,
    [SMALL_STATE(409)] = 11637,
    [SMALL_STATE(410)] = 11647,
    [SMALL_STATE(411)] = 11657,
    [SMALL_STATE(412)] = 11667,
    [SMALL_STATE(413)] = 11677,
    [SMALL_STATE(414)] = 11687,
    [SMALL_STATE(415)] = 11697,
    [SMALL_STATE(416)] = 11707,
    [SMALL_STATE(417)] = 11717,
    [SMALL_STATE(418)] = 11727,
    [SMALL_STATE(419)] = 11737,
    [SMALL_STATE(420)] = 11747,
    [SMALL_STATE(421)] = 11757,
    [SMALL_STATE(422)] = 11767,
    [SMALL_STATE(423)] = 11777,
    [SMALL_STATE(424)] = 11787,
    [SMALL_STATE(425)] = 11797,
    [SMALL_STATE(426)] = 11807,
    [SMALL_STATE(427)] = 11817,
    [SMALL_STATE(428)] = 11827,
    [SMALL_STATE(429)] = 11837,
    [SMALL_STATE(430)] = 11847,
    [SMALL_STATE(431)] = 11857,
    [SMALL_STATE(432)] = 11867,
    [SMALL_STATE(433)] = 11877,
    [SMALL_STATE(434)] = 11887,
    [SMALL_STATE(435)] = 11897,
    [SMALL_STATE(436)] = 11907,
    [SMALL_STATE(437)] = 11917,
    [SMALL_STATE(438)] = 11927,
    [SMALL_STATE(439)] = 11937,
    [SMALL_STATE(440)] = 11947,
    [SMALL_STATE(441)] = 11957,
    [SMALL_STATE(442)] = 11967,
    [SMALL_STATE(443)] = 11977,
    [SMALL_STATE(444)] = 11987,
    [SMALL_STATE(445)] = 11997,
    [SMALL_STATE(446)] = 12007,
    [SMALL_STATE(447)] = 12017,
    [SMALL_STATE(448)] = 12027,
    [SMALL_STATE(449)] = 12037,
    [SMALL_STATE(450)] = 12047,
    [SMALL_STATE(451)] = 12057,
    [SMALL_STATE(452)] = 12067,
    [SMALL_STATE(453)] = 12077,
    [SMALL_STATE(454)] = 12087,
    [SMALL_STATE(455)] = 12097,
    [SMALL_STATE(456)] = 12107,
    [SMALL_STATE(457)] = 12117,
    [SMALL_STATE(458)] = 12127,
    [SMALL_STATE(459)] = 12137,
    [SMALL_STATE(460)] = 12147,
    [SMALL_STATE(461)] = 12157,
    [SMALL_STATE(462)] = 12167,
    [SMALL_STATE(463)] = 12177,
    [SMALL_STATE(464)] = 12187,
    [SMALL_STATE(465)] = 12197,
    [SMALL_STATE(466)] = 12207,
    [SMALL_STATE(467)] = 12217,
    [SMALL_STATE(468)] = 12227,
    [SMALL_STATE(469)] = 12237,
    [SMALL_STATE(470)] = 12247,
    [SMALL_STATE(471)] = 12257,
    [SMALL_STATE(472)] = 12267,
    [SMALL_STATE(473)] = 12277,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(285),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(244),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(173),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(340),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(339),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [90] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(244),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(355),
    [99] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(233),
    [108] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(233),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(169),
    [114] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(415),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(167),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(340),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(339),
    [129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(43),
    [134] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(471),
    [137] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(465),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(92),
    [143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [145] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [147] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [151] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [161] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(441),
    [163] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(440),
    [165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(438),
    [167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [169] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(462),
    [172] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(461),
    [175] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(287),
    [178] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [181] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(453),
    [184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(447),
    [187] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(319),
    [190] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(445),
    [193] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(441),
    [196] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(440),
    [199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(439),
    [202] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(438),
    [205] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(14),
    [208] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(437),
    [211] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(157),
    [214] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(436),
    [217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(435),
    [220] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(46),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(208),
    [226] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(432),
    [229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [231] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(394),
    [233] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(399),
    [235] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [249] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [251] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [254] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [257] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(244),
    [260] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(355),
    [263] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [266] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [269] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(233),
    [272] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(233),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(169),
    [278] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(415),
    [281] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(167),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(197),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(340),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(339),
    [293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(394),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(399),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(32),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(92),
    [307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [309] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [311] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(333),
    [313] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(330),
    [315] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(456),
    [317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [319] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(470),
    [321] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [324] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [327] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(333),
    [330] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(330),
    [333] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [336] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [339] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(233),
    [342] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(233),
    [345] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(169),
    [348] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(415),
    [351] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(167),
    [354] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(456),
    [357] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(340),
    [360] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [362] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(470),
    [365] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(439),
    [368] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(92),
    [371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [385] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(43),
    [388] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(471),
    [391] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(465),
    [394] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [398] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [402] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [404] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [406] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [408] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [410] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [414] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [418] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [420] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [422] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [424] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [426] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [428] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [434] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(306),
    [438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [442] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [448] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [450] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [452] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [454] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [456] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [458] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [460] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(285),
    [463] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [465] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [469] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [473] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [477] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [481] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [485] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [491] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [495] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [497] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [503] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [509] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [513] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [517] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [521] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [525] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [527] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [529] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [535] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [539] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [543] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [547] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(387),
    [549] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [551] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [553] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [557] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [561] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [565] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [569] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [571] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [573] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [579] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [581] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [587] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [593] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [597] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [603] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [605] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [607] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [611] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [619] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [623] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [625] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(157),
    [628] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(436),
    [631] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(435),
    [634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [638] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [640] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [644] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [660] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [662] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [674] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [678] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [680] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [684] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [686] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(393),
    [689] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(57),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [698] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(52),
    [701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [731] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(208),
    [734] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(432),
    [737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [741] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [743] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(458),
    [746] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(171),
    [749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [761] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [781] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [785] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(313),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [792] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [798] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [802] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [806] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [809] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [814] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [816] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [820] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [822] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [824] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [828] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [830] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [834] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [836] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(156),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [853] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(223),
    [856] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [860] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(290),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(426),
    [871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [873] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [881] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [885] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [887] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [889] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [893] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [895] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(292),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [902] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(182),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [907] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [915] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [917] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(161),
    [920] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [936] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(369),
    [938] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [940] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(181),
    [943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [945] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [949] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [959] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(321),
    [962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [970] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [976] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [978] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [992] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [994] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [1016] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [1018] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(346),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1114] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(473),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [1214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [1264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [1282] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1290] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1316] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1318] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [1320] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1322] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1324] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [1326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1328] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1330] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1332] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [1334] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [1336] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1338] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [1342] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [1344] = { .entry = { .count = 1, .reusable = true } },
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
