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
#define STATE_COUNT 436
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 247
#define ALIAS_COUNT 3
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
    anon_sym_short = 1,
    anon_sym_int16 = 2,
    anon_sym_long = 3,
    anon_sym_int32 = 4,
    anon_sym_longlong = 5,
    anon_sym_int64 = 6,
    sym_unsigned_tiny_int = 7,
    sym_boolean_type = 8,
    anon_sym_fixed = 9,
    sym_octet_type = 10,
    sym_signed_tiny_int = 11,
    anon_sym_unsignedshort = 12,
    anon_sym_uint16 = 13,
    anon_sym_unsignedlong = 14,
    anon_sym_uint32 = 15,
    anon_sym_unsignedlonglong = 16,
    anon_sym_uint64 = 17,
    anon_sym_float = 18,
    anon_sym_double = 19,
    anon_sym_longdouble = 20,
    anon_sym_char = 21,
    anon_sym_wchar = 22,
    anon_sym_COLON_COLON = 23,
    anon_sym_string = 24,
    anon_sym_wstring = 25,
    anon_sym_LT = 26,
    anon_sym_GT = 27,
    anon_sym_any = 28,
    anon_sym_COMMA = 29,
    anon_sym_sequence = 30,
    anon_sym_map = 31,
    anon_sym_PIPE = 32,
    anon_sym_CARET = 33,
    anon_sym_DOLLAR = 34,
    anon_sym_GT_GT = 35,
    anon_sym_LT_LT = 36,
    anon_sym_PLUS = 37,
    anon_sym_DASH = 38,
    anon_sym_STAR = 39,
    anon_sym_SLASH = 40,
    anon_sym_PERCENT = 41,
    anon_sym_LPAREN = 42,
    anon_sym_RPAREN = 43,
    anon_sym_TILDE = 44,
    anon_sym_L = 45,
    anon_sym_DQUOTE = 46,
    aux_sym_string_literal_token1 = 47,
    anon_sym_SQUOTE = 48,
    aux_sym_char_literal_token1 = 49,
    anon_sym_TRUE = 50,
    anon_sym_FALSE = 51,
    sym_number_literal = 52,
    aux_sym_preproc_call_token1 = 53,
    sym_preproc_directive = 54,
    sym_preproc_arg = 55,
    anon_sym_exception = 56,
    anon_sym_LBRACE = 57,
    anon_sym_RBRACE = 58,
    anon_sym_interface = 59,
    anon_sym_local = 60,
    anon_sym_COLON = 61,
    anon_sym_SEMI = 62,
    anon_sym_void = 63,
    anon_sym_in = 64,
    anon_sym_out = 65,
    anon_sym_inout = 66,
    anon_sym_raises = 67,
    anon_sym_readonly = 68,
    anon_sym_attribute = 69,
    anon_sym_getraises = 70,
    anon_sym_setraises = 71,
    anon_sym_bitset = 72,
    anon_sym_bitfield = 73,
    anon_sym_bitmask = 74,
    anon_sym_ATannotation = 75,
    anon_sym_default = 76,
    anon_sym_AT = 77,
    anon_sym_EQ = 78,
    anon_sym_native = 79,
    anon_sym_module = 80,
    anon_sym_struct = 81,
    anon_sym_enum = 82,
    anon_sym_ATdefault_literal = 83,
    anon_sym_ATignore_literal_names = 84,
    anon_sym_union = 85,
    anon_sym_switch = 86,
    anon_sym_case = 87,
    anon_sym_typedef = 88,
    anon_sym_POUNDdefine = 89,
    aux_sym_predefine_token1 = 90,
    sym_dds_service = 91,
    anon_sym_ATDDSRequestTopic = 92,
    anon_sym_name = 93,
    anon_sym_ATDDSReplyTopic = 94,
    anon_sym_const = 95,
    sym_optional = 96,
    sym_key = 97,
    sym_must_understand = 98,
    sym_non_serialized = 99,
    sym_id = 100,
    sym_external = 101,
    anon_sym_AThashid = 102,
    anon_sym_LPAREN_DQUOTE = 103,
    anon_sym_ATtry_construct = 104,
    sym_final = 105,
    anon_sym_ATdata_representation = 106,
    anon_sym_XCDR = 107,
    anon_sym_XCDR2 = 108,
    sym_identifier = 109,
    anon_sym_LBRACK = 110,
    anon_sym_RBRACK = 111,
    anon_sym_SLASH_SLASH = 112,
    aux_sym_comment_token1 = 113,
    sym__eof = 114,
    sym_specification = 115,
    sym_signed_short_int = 116,
    sym_signed_long_int = 117,
    sym_signed_longlong_int = 118,
    sym_unsigned_int = 119,
    sym_fixed_pt_const_type = 120,
    sym_integer_type = 121,
    sym_signed_int = 122,
    sym_unsigned_short_int = 123,
    sym_unsigned_long_int = 124,
    sym_unsigned_longlong_int = 125,
    sym_floating_pt_type = 126,
    sym_char_type = 127,
    sym_scoped_name = 128,
    sym_string_type = 129,
    sym_type_spec = 130,
    sym_simple_type_spec = 131,
    sym_base_type_spec = 132,
    sym_any_type = 133,
    sym_fixed_pt_type = 134,
    sym_template_type_spec = 135,
    sym_sequence_type = 136,
    sym_map_type = 137,
    sym_const_expr = 138,
    sym_or_expr = 139,
    sym_xor_expr = 140,
    sym_and_expr = 141,
    sym_shift_expr = 142,
    sym_add_expr = 143,
    sym_mult_expr = 144,
    sym_unary_expr = 145,
    sym_unary_operator = 146,
    sym_literal = 147,
    sym_string_literal = 148,
    sym_char_literal = 149,
    sym_boolean_literal = 150,
    sym_preproc_call = 151,
    sym_except_dcl = 152,
    sym_interface_dcl = 153,
    sym_interface_forward_dcl = 154,
    sym_interface_def = 155,
    sym_interface_header = 156,
    sym_interface_inheritance_spec = 157,
    sym_interface_name = 158,
    sym_interface_body = 159,
    sym_export = 160,
    sym_op_dcl = 161,
    sym_op_type_spec = 162,
    sym_parameter_dcls = 163,
    sym_param_dcl = 164,
    sym_param_attribute = 165,
    sym_raises_expr = 166,
    sym_attr_dcl = 167,
    sym_readonly_attr_spec = 168,
    sym_readonly_attr_declarator = 169,
    sym_attr_spec = 170,
    sym_attr_declarator = 171,
    sym_attr_raises_expr = 172,
    sym_get_excep_expr = 173,
    sym_set_excep_expr = 174,
    sym_exception_list = 175,
    sym_interface_anno = 176,
    sym_bitset_dcl = 177,
    sym_bitfield = 178,
    sym_bitfield_spec = 179,
    sym_destination_type = 180,
    sym_bitmask_dcl = 181,
    sym_bit_value = 182,
    sym_annotation_dcl = 183,
    sym_annotation_body = 184,
    sym_annotation_member = 185,
    sym_annotation_member_type = 186,
    sym_any_const_type = 187,
    sym__definition = 188,
    sym_native_dcl = 189,
    sym_module_dcl = 190,
    sym_struct_forward_dcl = 191,
    sym_struct_def = 192,
    sym_member = 193,
    sym_default = 194,
    sym_enum_dcl = 195,
    sym_enumerator = 196,
    sym_enum_modifier = 197,
    sym_enum_anno = 198,
    sym_union_forward_dcl = 199,
    sym_union_def = 200,
    sym_case = 201,
    sym_case_label = 202,
    sym_element_spec = 203,
    sym_switch_type_spec = 204,
    sym_typedef_dcl = 205,
    sym_predefine = 206,
    sym_dds_request_topic = 207,
    sym_dds_reply_topic = 208,
    sym_const_dcl = 209,
    sym_const_type = 210,
    sym_hashid = 211,
    sym_try_construct = 212,
    sym_data_representation = 213,
    sym_struct_modifier = 214,
    sym_simple_declarator = 215,
    sym_declarator = 216,
    sym_declarators = 217,
    sym_array_declarator = 218,
    sym_positive_int_const = 219,
    sym_fixed_array_size = 220,
    sym_type_declarator = 221,
    sym_any_declarators = 222,
    sym_any_declarator = 223,
    sym_comment = 224,
    aux_sym_specification_repeat1 = 225,
    aux_sym_specification_repeat2 = 226,
    aux_sym_except_dcl_repeat1 = 227,
    aux_sym_interface_def_repeat1 = 228,
    aux_sym_interface_inheritance_spec_repeat1 = 229,
    aux_sym_interface_body_repeat1 = 230,
    aux_sym_parameter_dcls_repeat1 = 231,
    aux_sym_raises_expr_repeat1 = 232,
    aux_sym_readonly_attr_declarator_repeat1 = 233,
    aux_sym_bitset_dcl_repeat1 = 234,
    aux_sym_bitfield_repeat1 = 235,
    aux_sym_bitmask_dcl_repeat1 = 236,
    aux_sym_annotation_dcl_repeat1 = 237,
    aux_sym_struct_def_repeat1 = 238,
    aux_sym_member_repeat1 = 239,
    aux_sym_enum_dcl_repeat1 = 240,
    aux_sym_enumerator_repeat1 = 241,
    aux_sym_union_def_repeat1 = 242,
    aux_sym_data_representation_repeat1 = 243,
    aux_sym_declarators_repeat1 = 244,
    aux_sym_array_declarator_repeat1 = 245,
    aux_sym_any_declarators_repeat1 = 246,
    alias_sym_data_rep = 247,
    alias_sym_hashid_value = 248,
    alias_sym_try_construct_value = 249,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_short] = "short",
    [anon_sym_int16] = "int16",
    [anon_sym_long] = "long",
    [anon_sym_int32] = "int32",
    [anon_sym_longlong] = "long long",
    [anon_sym_int64] = "int64",
    [sym_unsigned_tiny_int] = "unsigned_tiny_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [sym_signed_tiny_int] = "signed_tiny_int",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_uint16] = "uint16",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_uint32] = "uint32",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_uint64] = "uint64",
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_unsigned_int] = "unsigned_int",
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
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
    [aux_sym_annotation_dcl_repeat1] = "annotation_dcl_repeat1",
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
    [anon_sym_short] = anon_sym_short,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_int64] = anon_sym_int64,
    [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [sym_signed_tiny_int] = sym_signed_tiny_int,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_uint64] = anon_sym_uint64,
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
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
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
    [aux_sym_annotation_dcl_repeat1] = aux_sym_annotation_dcl_repeat1,
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
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
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
    [sym_signed_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_unsignedshort] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
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
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
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
    [aux_sym_annotation_dcl_repeat1] = {
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
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
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
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
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
    [165] = 165,
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
    [192] = 87,
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
    [207] = 86,
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
    [245] = 245,
    [246] = 246,
    [247] = 247,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 193,
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
    [363] = 317,
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
    [379] = 193,
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
    [435] = 435,
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
                ADVANCE(461);
            if(lookahead == '"')
                ADVANCE(536);
            if(lookahead == '#')
                ADVANCE(133);
            if(lookahead == '$')
                ADVANCE(521);
            if(lookahead == '%')
                ADVANCE(530);
            if(lookahead == '\'')
                ADVANCE(538);
            if(lookahead == '(')
                ADVANCE(531);
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == '*')
                ADVANCE(528);
            if(lookahead == '+')
                ADVANCE(524);
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '-')
                ADVANCE(526);
            if(lookahead == '/')
                ADVANCE(529);
            if(lookahead == ':')
                ADVANCE(614);
            if(lookahead == ';')
                ADVANCE(615);
            if(lookahead == '<')
                ADVANCE(509);
            if(lookahead == '=')
                ADVANCE(637);
            if(lookahead == '>')
                ADVANCE(511);
            if(lookahead == '@')
                ADVANCE(636);
            if(lookahead == 'F')
                ADVANCE(540);
            if(lookahead == 'L')
                ADVANCE(534);
            if(lookahead == 'T')
                ADVANCE(542);
            if(lookahead == 'X')
                ADVANCE(541);
            if(lookahead == '[')
                ADVANCE(845);
            if(lookahead == '\\')
                SKIP(454)
            if(lookahead == ']')
                ADVANCE(846);
            if(lookahead == '^')
                ADVANCE(520);
            if(lookahead == 'a')
                ADVANCE(555);
            if(lookahead == 'b')
                ADVANCE(553);
            if(lookahead == 'c')
                ADVANCE(543);
            if(lookahead == 'd')
                ADVANCE(549);
            if(lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'f')
                ADVANCE(552);
            if(lookahead == 'g')
                ADVANCE(551);
            if(lookahead == 'i')
                ADVANCE(556);
            if(lookahead == 'l')
                ADVANCE(558);
            if(lookahead == 'm')
                ADVANCE(544);
            if(lookahead == 'n')
                ADVANCE(545);
            if(lookahead == 'o')
                ADVANCE(548);
            if(lookahead == 'r')
                ADVANCE(546);
            if(lookahead == 's')
                ADVANCE(550);
            if(lookahead == 't')
                ADVANCE(560);
            if(lookahead == 'u')
                ADVANCE(554);
            if(lookahead == 'v')
                ADVANCE(559);
            if(lookahead == 'w')
                ADVANCE(547);
            if(lookahead == '{')
                ADVANCE(610);
            if(lookahead == '|')
                ADVANCE(519);
            if(lookahead == '}')
                ADVANCE(611);
            if(lookahead == '~')
                ADVANCE(533);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(539);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(42)
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
                SKIP(43)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(43)
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
                SKIP(48)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(40)
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
                ADVANCE(595);
            if(lookahead == '\r')
                ADVANCE(28);
            if(lookahead == '/')
                ADVANCE(604);
            if(lookahead == '\\')
                ADVANCE(602);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(605);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                ADVANCE(595);
            if(lookahead == '\r')
                ADVANCE(27);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(30)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(52)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(595);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(30)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(595);
            if(lookahead == '/')
                ADVANCE(604);
            if(lookahead == '\\')
                ADVANCE(602);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(605);
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
                ADVANCE(851);
            if(lookahead == '\r')
                ADVANCE(850);
            if(lookahead == '\\')
                ADVANCE(854);
            if(lookahead != 0)
                ADVANCE(853);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == ' ')
                ADVANCE(265);
            END_STATE();
        case 37:
            if(lookahead == '"')
                ADVANCE(536);
            if(lookahead == '\'')
                ADVANCE(538);
            if(lookahead == '(')
                ADVANCE(531);
            if(lookahead == '+')
                ADVANCE(525);
            if(lookahead == '-')
                ADVANCE(527);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '0')
                ADVANCE(572);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == 'F')
                ADVANCE(690);
            if(lookahead == 'L')
                ADVANCE(535);
            if(lookahead == 'T')
                ADVANCE(694);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == '~')
                ADVANCE(533);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 38:
            if(lookahead == '"')
                ADVANCE(674);
            END_STATE();
        case 39:
            if(lookahead == '$')
                ADVANCE(521);
            if(lookahead == '%')
                ADVANCE(530);
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == '*')
                ADVANCE(528);
            if(lookahead == '+')
                ADVANCE(524);
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '-')
                ADVANCE(526);
            if(lookahead == '/')
                ADVANCE(529);
            if(lookahead == ':')
                ADVANCE(614);
            if(lookahead == ';')
                ADVANCE(615);
            if(lookahead == '<')
                ADVANCE(65);
            if(lookahead == '>')
                ADVANCE(511);
            if(lookahead == '@')
                ADVANCE(149);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == ']')
                ADVANCE(846);
            if(lookahead == '^')
                ADVANCE(520);
            if(lookahead == '{')
                ADVANCE(610);
            if(lookahead == '|')
                ADVANCE(519);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 40:
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '<')
                ADVANCE(508);
            if(lookahead == '>')
                ADVANCE(510);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 41:
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'i')
                ADVANCE(272);
            if(lookahead == 'o')
                ADVANCE(422);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            END_STATE();
        case 42:
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '<')
                ADVANCE(508);
            if(lookahead == '>')
                ADVANCE(510);
            if(lookahead == '@')
                ADVANCE(148);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(846);
            if(lookahead == 'a')
                ADVANCE(777);
            if(lookahead == 'b')
                ADVANCE(753);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'e')
                ADVANCE(779);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'm')
                ADVANCE(697);
            if(lookahead == 'n')
                ADVANCE(701);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 'r')
                ADVANCE(732);
            if(lookahead == 's')
                ADVANCE(721);
            if(lookahead == 't')
                ADVANCE(842);
            if(lookahead == 'u')
                ADVANCE(761);
            if(lookahead == 'v')
                ADVANCE(790);
            if(lookahead == 'w')
                ADVANCE(709);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 43:
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '>')
                ADVANCE(510);
            if(lookahead == '@')
                ADVANCE(164);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(778);
            if(lookahead == 'b')
                ADVANCE(793);
            if(lookahead == 'c')
                ADVANCE(748);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'm')
                ADVANCE(697);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 's')
                ADVANCE(722);
            if(lookahead == 'u')
                ADVANCE(762);
            if(lookahead == 'w')
                ADVANCE(709);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(569);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(571);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            END_STATE();
        case 45:
            if(lookahead == '/')
                ADVANCE(847);
            END_STATE();
        case 46:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '@')
                ADVANCE(148);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(778);
            if(lookahead == 'b')
                ADVANCE(753);
            if(lookahead == 'c')
                ADVANCE(748);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'e')
                ADVANCE(780);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'm')
                ADVANCE(697);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 's')
                ADVANCE(721);
            if(lookahead == 'u')
                ADVANCE(761);
            if(lookahead == 'w')
                ADVANCE(709);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '@')
                ADVANCE(235);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(778);
            if(lookahead == 'b')
                ADVANCE(793);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'e')
                ADVANCE(780);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 's')
                ADVANCE(722);
            if(lookahead == 't')
                ADVANCE(842);
            if(lookahead == 'u')
                ADVANCE(762);
            if(lookahead == 'w')
                ADVANCE(709);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(778);
            if(lookahead == 'b')
                ADVANCE(793);
            if(lookahead == 'c')
                ADVANCE(702);
            if(lookahead == 'd')
                ADVANCE(729);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'm')
                ADVANCE(697);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 's')
                ADVANCE(722);
            if(lookahead == 'u')
                ADVANCE(762);
            if(lookahead == 'w')
                ADVANCE(709);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'b')
                ADVANCE(793);
            if(lookahead == 'c')
                ADVANCE(748);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'f')
                ADVANCE(751);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(792);
            if(lookahead == 'o')
                ADVANCE(713);
            if(lookahead == 's')
                ADVANCE(722);
            if(lookahead == 'u')
                ADVANCE(762);
            if(lookahead == 'w')
                ADVANCE(709);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(64);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'b')
                ADVANCE(793);
            if(lookahead == 'c')
                ADVANCE(748);
            if(lookahead == 'i')
                ADVANCE(781);
            if(lookahead == 'l')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(749);
            if(lookahead == 'u')
                ADVANCE(762);
            if(lookahead == 'w')
                ADVANCE(710);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ';')
                ADVANCE(615);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 's')
                ADVANCE(838);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(30)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(539);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(537);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(604);
            if(lookahead == '\\')
                ADVANCE(602);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(605);
            END_STATE();
        case 56:
            if(lookahead == '1')
                ADVANCE(62);
            if(lookahead == '3')
                ADVANCE(58);
            if(lookahead == '6')
                ADVANCE(60);
            if(lookahead == '8')
                ADVANCE(475);
            END_STATE();
        case 57:
            if(lookahead == '1')
                ADVANCE(63);
            if(lookahead == '3')
                ADVANCE(59);
            if(lookahead == '6')
                ADVANCE(61);
            if(lookahead == '8')
                ADVANCE(483);
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 58:
            if(lookahead == '2')
                ADVANCE(489);
            END_STATE();
        case 59:
            if(lookahead == '2')
                ADVANCE(470);
            END_STATE();
        case 60:
            if(lookahead == '4')
                ADVANCE(492);
            END_STATE();
        case 61:
            if(lookahead == '4')
                ADVANCE(473);
            END_STATE();
        case 62:
            if(lookahead == '6')
                ADVANCE(486);
            END_STATE();
        case 63:
            if(lookahead == '6')
                ADVANCE(464);
            END_STATE();
        case 64:
            if(lookahead == ':')
                ADVANCE(503);
            END_STATE();
        case 65:
            if(lookahead == '<')
                ADVANCE(523);
            END_STATE();
        case 66:
            if(lookahead == 'C')
                ADVANCE(67);
            END_STATE();
        case 67:
            if(lookahead == 'D')
                ADVANCE(73);
            END_STATE();
        case 68:
            if(lookahead == 'D')
                ADVANCE(69);
            if(lookahead == 'a')
                ADVANCE(291);
            if(lookahead == 'd')
                ADVANCE(107);
            if(lookahead == 'f')
                ADVANCE(230);
            if(lookahead == 'i')
                ADVANCE(210);
            END_STATE();
        case 69:
            if(lookahead == 'D')
                ADVANCE(75);
            END_STATE();
        case 70:
            if(lookahead == 'E')
                ADVANCE(561);
            END_STATE();
        case 71:
            if(lookahead == 'E')
                ADVANCE(563);
            END_STATE();
        case 72:
            if(lookahead == 'L')
                ADVANCE(76);
            END_STATE();
        case 73:
            if(lookahead == 'R')
                ADVANCE(678);
            END_STATE();
        case 74:
            if(lookahead == 'R')
                ADVANCE(159);
            if(lookahead == 'S')
                ADVANCE(183);
            END_STATE();
        case 75:
            if(lookahead == 'S')
                ADVANCE(74);
            END_STATE();
        case 76:
            if(lookahead == 'S')
                ADVANCE(71);
            END_STATE();
        case 77:
            if(lookahead == 'T')
                ADVANCE(311);
            END_STATE();
        case 78:
            if(lookahead == 'T')
                ADVANCE(322);
            END_STATE();
        case 79:
            if(lookahead == 'U')
                ADVANCE(70);
            END_STATE();
        case 80:
            if(lookahead == '_')
                ADVANCE(127);
            END_STATE();
        case 81:
            if(lookahead == '_')
                ADVANCE(264);
            END_STATE();
        case 82:
            if(lookahead == '_')
                ADVANCE(425);
            END_STATE();
        case 83:
            if(lookahead == '_')
                ADVANCE(356);
            END_STATE();
        case 84:
            if(lookahead == '_')
                ADVANCE(293);
            END_STATE();
        case 85:
            if(lookahead == '_')
                ADVANCE(375);
            END_STATE();
        case 86:
            if(lookahead == '_')
                ADVANCE(267);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(360);
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(234);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(83);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(147);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(247);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(271);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(361);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(339);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(421);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(340);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(382);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(366);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(274);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(249);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(250);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(401);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(292);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(395);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(428);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(131);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(237);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(411);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 116:
            if(lookahead == 'b')
                ADVANCE(427);
            END_STATE();
        case 117:
            if(lookahead == 'b')
                ADVANCE(258);
            END_STATE();
        case 118:
            if(lookahead == 'b')
                ADVANCE(262);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(664);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(662);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(211);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(167);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(397);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(92);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(92);
            if(lookahead == 'n')
                ADVANCE(202);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(92);
            if(lookahead == 'n')
                ADVANCE(208);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(321);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(387);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(156);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(391);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(160);
            END_STATE();
        case 132:
            if(lookahead == 'c')
                ADVANCE(161);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(596);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(444);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(616);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(479);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(630);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(36);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(671);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(673);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(670);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(669);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(429);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(328);
            if(lookahead == 'l')
                ADVANCE(324);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(163);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(186);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(166);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(310);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(107);
            if(lookahead == 'f')
                ADVANCE(230);
            if(lookahead == 'i')
                ADVANCE(210);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(194);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(651);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(663);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(496);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(640);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(638);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(515);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(624);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(498);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(330);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(612);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(661);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(655);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(196);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(436);
            if(lookahead == 'h')
                ADVANCE(100);
            if(lookahead == 'i')
                ADVANCE(138);
            if(lookahead == 'k')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(430);
            if(lookahead == 'n')
                ADVANCE(318);
            if(lookahead == 'o')
                ADVANCE(336);
            if(lookahead == 't')
                ADVANCE(342);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(81);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(200);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(332);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(135);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(256);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(440);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(363);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(144);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(364);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(298);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(101);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(384);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(140);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(341);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(386);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(358);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(396);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(304);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(374);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(201);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(416);
            if(lookahead == 'h')
                ADVANCE(312);
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 196:
            if(lookahead == 'f')
                ADVANCE(653);
            END_STATE();
        case 197:
            if(lookahead == 'f')
                ADVANCE(96);
            END_STATE();
        case 198:
            if(lookahead == 'f')
                ADVANCE(229);
            if(lookahead == 'm')
                ADVANCE(94);
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 199:
            if(lookahead == 'f')
                ADVANCE(111);
            END_STATE();
        case 200:
            if(lookahead == 'f')
                ADVANCE(232);
            END_STATE();
        case 201:
            if(lookahead == 'f')
                ADVANCE(110);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(466);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(504);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(506);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(472);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(488);
            END_STATE();
        case 207:
            if(lookahead == 'g')
                ADVANCE(491);
            END_STATE();
        case 208:
            if(lookahead == 'g')
                ADVANCE(468);
            END_STATE();
        case 209:
            if(lookahead == 'g')
                ADVANCE(302);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(299);
            END_STATE();
        case 211:
            if(lookahead == 'h')
                ADVANCE(649);
            END_STATE();
        case 212:
            if(lookahead == 'h')
                ADVANCE(228);
            END_STATE();
        case 213:
            if(lookahead == 'h')
                ADVANCE(97);
            END_STATE();
        case 214:
            if(lookahead == 'h')
                ADVANCE(323);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(434);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(443);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(378);
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(285);
            if(lookahead == 'n')
                ADVANCE(224);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(209);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(280);
            if(lookahead == 'u')
                ADVANCE(128);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(134);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(309);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(309);
            if(lookahead == 's')
                ADVANCE(220);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(119);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(120);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(139);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(171);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(290);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(105);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(297);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(392);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(368);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(210);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(281);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(369);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(403);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(314);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(370);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(132);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(316);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(317);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(319);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 246:
            if(lookahead == 'k')
                ADVANCE(631);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(613);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(676);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(672);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(667);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(645);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(438);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(84);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(439);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(324);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(136);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(179);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(153);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(154);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(388);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(216);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(417);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(238);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(325);
            if(lookahead == 's')
                ADVANCE(214);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(326);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(245);
            END_STATE();
        case 268:
            if(lookahead == 'm')
                ADVANCE(643);
            END_STATE();
        case 269:
            if(lookahead == 'm')
                ADVANCE(152);
            if(lookahead == 't')
                ADVANCE(215);
            END_STATE();
        case 270:
            if(lookahead == 'm')
                ADVANCE(94);
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 271:
            if(lookahead == 'm')
                ADVANCE(177);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(618);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(647);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(477);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(608);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(633);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(677);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(367);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(419);
            if(lookahead == 'x')
                ADVANCE(122);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(85);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(252);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(205);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(380);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(320);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(376);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(98);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(288);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(141);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(93);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(103);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(104);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(390);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(162);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(129);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(315);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(145);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(223);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(178);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(405);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(415);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(142);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(257);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(99);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(331);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(347);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(124);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(275);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(353);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(295);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(408);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(289);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(333);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(350);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(284);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(286);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(126);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(432);
            END_STATE();
        case 329:
            if(lookahead == 'p')
                ADVANCE(517);
            END_STATE();
        case 330:
            if(lookahead == 'p')
                ADVANCE(254);
            if(lookahead == 'q')
                ADVANCE(426);
            END_STATE();
        case 331:
            if(lookahead == 'p')
                ADVANCE(225);
            END_STATE();
        case 332:
            if(lookahead == 'p')
                ADVANCE(400);
            END_STATE();
        case 333:
            if(lookahead == 'p')
                ADVANCE(227);
            END_STATE();
        case 334:
            if(lookahead == 'p')
                ADVANCE(174);
            END_STATE();
        case 335:
            if(lookahead == 'p')
                ADVANCE(354);
            END_STATE();
        case 336:
            if(lookahead == 'p')
                ADVANCE(414);
            END_STATE();
        case 337:
            if(lookahead == 'q')
                ADVANCE(423);
            if(lookahead == 't')
                ADVANCE(359);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(221);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(499);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(501);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(433);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(442);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(219);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(112);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(420);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(236);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(385);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(102);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(231);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(389);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(294);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(106);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(165);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(193);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(199);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(169);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(431);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(373);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(114);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(151);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(246);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(621);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(626);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(627);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(646);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(212);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(381);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(168);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(173);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(175);
            END_STATE();
        case 371:
            if(lookahead == 's')
                ADVANCE(409);
            END_STATE();
        case 372:
            if(lookahead == 's')
                ADVANCE(398);
            END_STATE();
        case 373:
            if(lookahead == 's')
                ADVANCE(407);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(190);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(191);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(410);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(393);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(198);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(619);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(56);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(665);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(494);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(620);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(481);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(462);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(628);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(641);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(634);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(485);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(57);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(675);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(270);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(343);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(121);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(215);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(344);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(239);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(90);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(157);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(189);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(185);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(180);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(346);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(108);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(113);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(78);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(357);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(242);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(192);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(243);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(244);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(115);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(359);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(117);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(268);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(128);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(260);
            END_STATE();
        case 422:
            if(lookahead == 'u')
                ADVANCE(379);
            END_STATE();
        case 423:
            if(lookahead == 'u')
                ADVANCE(176);
            END_STATE();
        case 424:
            if(lookahead == 'u')
                ADVANCE(383);
            END_STATE();
        case 425:
            if(lookahead == 'u')
                ADVANCE(300);
            END_STATE();
        case 426:
            if(lookahead == 'u')
                ADVANCE(188);
            END_STATE();
        case 427:
            if(lookahead == 'u')
                ADVANCE(402);
            END_STATE();
        case 428:
            if(lookahead == 'u')
                ADVANCE(263);
            END_STATE();
        case 429:
            if(lookahead == 'u')
                ADVANCE(259);
            END_STATE();
        case 430:
            if(lookahead == 'u')
                ADVANCE(372);
            END_STATE();
        case 431:
            if(lookahead == 'u')
                ADVANCE(130);
            END_STATE();
        case 432:
            if(lookahead == 'u')
                ADVANCE(118);
            END_STATE();
        case 433:
            if(lookahead == 'v')
                ADVANCE(241);
            END_STATE();
        case 434:
            if(lookahead == 'v')
                ADVANCE(155);
            END_STATE();
        case 435:
            if(lookahead == 'x')
                ADVANCE(170);
            END_STATE();
        case 436:
            if(lookahead == 'x')
                ADVANCE(404);
            END_STATE();
        case 437:
            if(lookahead == 'y')
                ADVANCE(512);
            END_STATE();
        case 438:
            if(lookahead == 'y')
                ADVANCE(622);
            END_STATE();
        case 439:
            if(lookahead == 'y')
                ADVANCE(77);
            END_STATE();
        case 440:
            if(lookahead == 'y')
                ADVANCE(668);
            END_STATE();
        case 441:
            if(lookahead == 'y')
                ADVANCE(334);
            END_STATE();
        case 442:
            if(lookahead == 'y')
                ADVANCE(80);
            END_STATE();
        case 443:
            if(lookahead == 'z')
                ADVANCE(182);
            END_STATE();
        case 444:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(444);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 445:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 446:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(565);
            END_STATE();
        case 447:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(571);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            END_STATE();
        case 448:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(579);
            END_STATE();
        case 449:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            END_STATE();
        case 450:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(567);
            END_STATE();
        case 451:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\r')
                ADVANCE(855);
            if(lookahead == '\\')
                ADVANCE(854);
            END_STATE();
        case 452:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(605);
            END_STATE();
        case 453:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 454:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(453)
            END_STATE();
        case 455:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(459)
            END_STATE();
        case 456:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(459)
            if(lookahead == '\r')
                SKIP(455)
            END_STATE();
        case 457:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(460)
            END_STATE();
        case 458:
            if(eof)
                ADVANCE(461);
            if(lookahead == '\n')
                SKIP(460)
            if(lookahead == '\r')
                SKIP(457)
            END_STATE();
        case 459:
            if(eof)
                ADVANCE(461);
            if(lookahead == '#')
                ADVANCE(133);
            if(lookahead == '$')
                ADVANCE(521);
            if(lookahead == '%')
                ADVANCE(530);
            if(lookahead == '(')
                ADVANCE(38);
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == '*')
                ADVANCE(528);
            if(lookahead == '+')
                ADVANCE(524);
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '-')
                ADVANCE(526);
            if(lookahead == '/')
                ADVANCE(529);
            if(lookahead == ':')
                ADVANCE(614);
            if(lookahead == ';')
                ADVANCE(615);
            if(lookahead == '<')
                ADVANCE(65);
            if(lookahead == '>')
                ADVANCE(511);
            if(lookahead == '@')
                ADVANCE(68);
            if(lookahead == 'X')
                ADVANCE(66);
            if(lookahead == '[')
                ADVANCE(845);
            if(lookahead == '\\')
                SKIP(456)
            if(lookahead == ']')
                ADVANCE(846);
            if(lookahead == '^')
                ADVANCE(520);
            if(lookahead == 'a')
                ADVANCE(377);
            if(lookahead == 'b')
                ADVANCE(217);
            if(lookahead == 'c')
                ADVANCE(87);
            if(lookahead == 'd')
                ADVANCE(150);
            if(lookahead == 'e')
                ADVANCE(279);
            if(lookahead == 'g')
                ADVANCE(187);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(327);
            if(lookahead == 'm')
                ADVANCE(306);
            if(lookahead == 'n')
                ADVANCE(88);
            if(lookahead == 'o')
                ADVANCE(123);
            if(lookahead == 'r')
                ADVANCE(89);
            if(lookahead == 's')
                ADVANCE(195);
            if(lookahead == 't')
                ADVANCE(441);
            if(lookahead == 'u')
                ADVANCE(218);
            if(lookahead == '|')
                ADVANCE(519);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(459)
            END_STATE();
        case 460:
            if(eof)
                ADVANCE(461);
            if(lookahead == '#')
                ADVANCE(146);
            if(lookahead == '$')
                ADVANCE(521);
            if(lookahead == ')')
                ADVANCE(532);
            if(lookahead == ',')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(614);
            if(lookahead == ';')
                ADVANCE(615);
            if(lookahead == '>')
                ADVANCE(510);
            if(lookahead == '@')
                ADVANCE(68);
            if(lookahead == '\\')
                SKIP(458)
            if(lookahead == ']')
                ADVANCE(846);
            if(lookahead == '^')
                ADVANCE(520);
            if(lookahead == 'b')
                ADVANCE(233);
            if(lookahead == 'c')
                ADVANCE(305);
            if(lookahead == 'e')
                ADVANCE(279);
            if(lookahead == 'i')
                ADVANCE(303);
            if(lookahead == 'l')
                ADVANCE(313);
            if(lookahead == 'm')
                ADVANCE(306);
            if(lookahead == 'n')
                ADVANCE(109);
            if(lookahead == 's')
                ADVANCE(399);
            if(lookahead == 't')
                ADVANCE(441);
            if(lookahead == 'u')
                ADVANCE(301);
            if(lookahead == '|')
                ADVANCE(519);
            if(lookahead == '}')
                ADVANCE(611);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(460)
            END_STATE();
        case 461:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(143);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(143);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(255);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(255);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(266);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(523);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(522);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(573);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(573);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(847);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(537);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(72);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(67);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(79);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(360);
            if(lookahead == 'h')
                ADVANCE(95);
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(329);
            if(lookahead == 'o')
                ADVANCE(142);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(234);
            if(lookahead == 'e')
                ADVANCE(91);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(213);
            if(lookahead == 's')
                ADVANCE(406);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(397);
            if(lookahead == 'u')
                ADVANCE(379);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(197);
            if(lookahead == 'o')
                ADVANCE(418);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(337);
            if(lookahead == 'h')
                ADVANCE(312);
            if(lookahead == 't')
                ADVANCE(338);
            if(lookahead == 'w')
                ADVANCE(226);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(396);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(435);
            if(lookahead == 'l')
                ADVANCE(308);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(378);
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(285);
            if(lookahead == 'n')
                ADVANCE(224);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(437);
            if(lookahead == 't')
                ADVANCE(393);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(618);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(419);
            if(lookahead == 'x')
                ADVANCE(122);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(222);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(334);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(565);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(594);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(450);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(566);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(566);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(450);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(567);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(567);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(582);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(843);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(584);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(581);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(449);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(585);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(571);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(583);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(581);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(585);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(571);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(586);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(681);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(587);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(44);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(589);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(591);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(843);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(592);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(449);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(589);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(593);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(594);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(448);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(450);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(578);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(579);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(579);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(448);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(578);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(579);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(579);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(450);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(450);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(581);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(585);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(583);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(581);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(585);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(571);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(581);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(585);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(585);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(574);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(575);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(594);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(450);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(566);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(566);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(450);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(567);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(567);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(578);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(589);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(579);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(579);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(594);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(594);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                ADVANCE(603);
            if(lookahead == '/')
                ADVANCE(452);
            if(lookahead == '\\')
                ADVANCE(606);
            if(lookahead != 0)
                ADVANCE(605);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '/')
                ADVANCE(452);
            if(lookahead == '\\')
                ADVANCE(606);
            if(lookahead != 0)
                ADVANCE(605);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(847);
            if(lookahead == '\\')
                ADVANCE(606);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(605);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(452);
            if(lookahead == '\\')
                ADVANCE(606);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(605);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(605);
            if(lookahead == '\r')
                ADVANCE(607);
            if(lookahead == '/')
                ADVANCE(452);
            if(lookahead == '\\')
                ADVANCE(606);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(605);
            if(lookahead == '/')
                ADVANCE(452);
            if(lookahead == '\\')
                ADVANCE(606);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(424);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(601);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(660);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(660);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(659);
            if(lookahead == '\\')
                ADVANCE(657);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(658);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(660);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(849);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(660);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(660);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(679);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(265);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(446);
            if(lookahead == '0')
                ADVANCE(568);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(688);
            if(lookahead == '3')
                ADVANCE(684);
            if(lookahead == '6')
                ADVANCE(686);
            if(lookahead == '8')
                ADVANCE(484);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(689);
            if(lookahead == '3')
                ADVANCE(685);
            if(lookahead == '6')
                ADVANCE(687);
            if(lookahead == '8')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(490);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(465);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'h')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(750);
            if(lookahead == 's')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(803);
            if(lookahead == 'h')
                ADVANCE(794);
            if(lookahead == 't')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(803);
            if(lookahead == 'h')
                ADVANCE(794);
            if(lookahead == 't')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(740);
            if(lookahead == 'o')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(467);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(469);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(700);
            if(lookahead == 'o')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(839);
            if(lookahead == 'l')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(783);
            if(lookahead == 'u')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(785);
            if(lookahead == 'n')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(785);
            if(lookahead == 'n')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(795);
            if(lookahead == 's')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(699);
            if(lookahead == 's')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(840);
            if(lookahead == 't')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(833);
            if(lookahead == 'x')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(844);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(451);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(660);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(851);
            if(lookahead == '\\')
                ADVANCE(451);
            if(lookahead != 0)
                ADVANCE(853);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(852);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(851);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(848);
            if(lookahead == '\\')
                ADVANCE(451);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(451);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\r')
                ADVANCE(855);
            if(lookahead == '\\')
                ADVANCE(854);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\\')
                ADVANCE(451);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 459 },
    [2] = { .lex_state = 42 },
    [3] = { .lex_state = 42 },
    [4] = { .lex_state = 42 },
    [5] = { .lex_state = 42 },
    [6] = { .lex_state = 42 },
    [7] = { .lex_state = 46 },
    [8] = { .lex_state = 43 },
    [9] = { .lex_state = 43 },
    [10] = { .lex_state = 43 },
    [11] = { .lex_state = 43 },
    [12] = { .lex_state = 43 },
    [13] = { .lex_state = 43 },
    [14] = { .lex_state = 43 },
    [15] = { .lex_state = 43 },
    [16] = { .lex_state = 43 },
    [17] = { .lex_state = 43 },
    [18] = { .lex_state = 43 },
    [19] = { .lex_state = 43 },
    [20] = { .lex_state = 47 },
    [21] = { .lex_state = 47 },
    [22] = { .lex_state = 47 },
    [23] = { .lex_state = 48 },
    [24] = { .lex_state = 43 },
    [25] = { .lex_state = 459 },
    [26] = { .lex_state = 43 },
    [27] = { .lex_state = 43 },
    [28] = { .lex_state = 43 },
    [29] = { .lex_state = 43 },
    [30] = { .lex_state = 43 },
    [31] = { .lex_state = 460 },
    [32] = { .lex_state = 460 },
    [33] = { .lex_state = 460 },
    [34] = { .lex_state = 460 },
    [35] = { .lex_state = 460 },
    [36] = { .lex_state = 42 },
    [37] = { .lex_state = 42 },
    [38] = { .lex_state = 49 },
    [39] = { .lex_state = 43 },
    [40] = { .lex_state = 43 },
    [41] = { .lex_state = 43 },
    [42] = { .lex_state = 43 },
    [43] = { .lex_state = 43 },
    [44] = { .lex_state = 43 },
    [45] = { .lex_state = 43 },
    [46] = { .lex_state = 43 },
    [47] = { .lex_state = 43 },
    [48] = { .lex_state = 43 },
    [49] = { .lex_state = 47 },
    [50] = { .lex_state = 47 },
    [51] = { .lex_state = 47 },
    [52] = { .lex_state = 47 },
    [53] = { .lex_state = 47 },
    [54] = { .lex_state = 48 },
    [55] = { .lex_state = 48 },
    [56] = { .lex_state = 50 },
    [57] = { .lex_state = 43 },
    [58] = { .lex_state = 37 },
    [59] = { .lex_state = 37 },
    [60] = { .lex_state = 37 },
    [61] = { .lex_state = 37 },
    [62] = { .lex_state = 37 },
    [63] = { .lex_state = 37 },
    [64] = { .lex_state = 37 },
    [65] = { .lex_state = 37 },
    [66] = { .lex_state = 37 },
    [67] = { .lex_state = 37 },
    [68] = { .lex_state = 37 },
    [69] = { .lex_state = 37 },
    [70] = { .lex_state = 37 },
    [71] = { .lex_state = 459 },
    [72] = { .lex_state = 37 },
    [73] = { .lex_state = 459 },
    [74] = { .lex_state = 37 },
    [75] = { .lex_state = 459 },
    [76] = { .lex_state = 37 },
    [77] = { .lex_state = 460 },
    [78] = { .lex_state = 459 },
    [79] = { .lex_state = 459 },
    [80] = { .lex_state = 460 },
    [81] = { .lex_state = 460 },
    [82] = { .lex_state = 460 },
    [83] = { .lex_state = 37 },
    [84] = { .lex_state = 37 },
    [85] = { .lex_state = 37 },
    [86] = { .lex_state = 39 },
    [87] = { .lex_state = 39 },
    [88] = { .lex_state = 39 },
    [89] = { .lex_state = 39 },
    [90] = { .lex_state = 459 },
    [91] = { .lex_state = 459 },
    [92] = { .lex_state = 459 },
    [93] = { .lex_state = 459 },
    [94] = { .lex_state = 459 },
    [95] = { .lex_state = 459 },
    [96] = { .lex_state = 459 },
    [97] = { .lex_state = 459 },
    [98] = { .lex_state = 459 },
    [99] = { .lex_state = 459 },
    [100] = { .lex_state = 459 },
    [101] = { .lex_state = 459 },
    [102] = { .lex_state = 459 },
    [103] = { .lex_state = 459 },
    [104] = { .lex_state = 37 },
    [105] = { .lex_state = 459 },
    [106] = { .lex_state = 459 },
    [107] = { .lex_state = 459 },
    [108] = { .lex_state = 459 },
    [109] = { .lex_state = 459 },
    [110] = { .lex_state = 459 },
    [111] = { .lex_state = 460 },
    [112] = { .lex_state = 37 },
    [113] = { .lex_state = 460 },
    [114] = { .lex_state = 460 },
    [115] = { .lex_state = 460 },
    [116] = { .lex_state = 459 },
    [117] = { .lex_state = 459 },
    [118] = { .lex_state = 460 },
    [119] = { .lex_state = 41 },
    [120] = { .lex_state = 39 },
    [121] = { .lex_state = 39 },
    [122] = { .lex_state = 459 },
    [123] = { .lex_state = 459 },
    [124] = { .lex_state = 459 },
    [125] = { .lex_state = 459 },
    [126] = { .lex_state = 459 },
    [127] = { .lex_state = 459 },
    [128] = { .lex_state = 39 },
    [129] = { .lex_state = 459 },
    [130] = { .lex_state = 459 },
    [131] = { .lex_state = 459 },
    [132] = { .lex_state = 39 },
    [133] = { .lex_state = 41 },
    [134] = { .lex_state = 459 },
    [135] = { .lex_state = 459 },
    [136] = { .lex_state = 459 },
    [137] = { .lex_state = 39 },
    [138] = { .lex_state = 459 },
    [139] = { .lex_state = 459 },
    [140] = { .lex_state = 459 },
    [141] = { .lex_state = 459 },
    [142] = { .lex_state = 39 },
    [143] = { .lex_state = 459 },
    [144] = { .lex_state = 459 },
    [145] = { .lex_state = 459 },
    [146] = { .lex_state = 39 },
    [147] = { .lex_state = 39 },
    [148] = { .lex_state = 40 },
    [149] = { .lex_state = 40 },
    [150] = { .lex_state = 39 },
    [151] = { .lex_state = 40 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 40 },
    [154] = { .lex_state = 39 },
    [155] = { .lex_state = 40 },
    [156] = { .lex_state = 40 },
    [157] = { .lex_state = 459 },
    [158] = { .lex_state = 40 },
    [159] = { .lex_state = 40 },
    [160] = { .lex_state = 40 },
    [161] = { .lex_state = 40 },
    [162] = { .lex_state = 40 },
    [163] = { .lex_state = 459 },
    [164] = { .lex_state = 459 },
    [165] = { .lex_state = 39 },
    [166] = { .lex_state = 39 },
    [167] = { .lex_state = 459 },
    [168] = { .lex_state = 40 },
    [169] = { .lex_state = 39 },
    [170] = { .lex_state = 40 },
    [171] = { .lex_state = 459 },
    [172] = { .lex_state = 459 },
    [173] = { .lex_state = 39 },
    [174] = { .lex_state = 40 },
    [175] = { .lex_state = 0 },
    [176] = { .lex_state = 0 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 51 },
    [179] = { .lex_state = 0 },
    [180] = { .lex_state = 459 },
    [181] = { .lex_state = 40 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 459 },
    [184] = { .lex_state = 39 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 459 },
    [187] = { .lex_state = 40 },
    [188] = { .lex_state = 40 },
    [189] = { .lex_state = 42 },
    [190] = { .lex_state = 459 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 40 },
    [193] = { .lex_state = 40 },
    [194] = { .lex_state = 40 },
    [195] = { .lex_state = 0 },
    [196] = { .lex_state = 40 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 40 },
    [200] = { .lex_state = 40 },
    [201] = { .lex_state = 40 },
    [202] = { .lex_state = 40 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 40 },
    [206] = { .lex_state = 459 },
    [207] = { .lex_state = 40 },
    [208] = { .lex_state = 459 },
    [209] = { .lex_state = 40 },
    [210] = { .lex_state = 40 },
    [211] = { .lex_state = 459 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 39 },
    [215] = { .lex_state = 40 },
    [216] = { .lex_state = 459 },
    [217] = { .lex_state = 39 },
    [218] = { .lex_state = 459 },
    [219] = { .lex_state = 39 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 40 },
    [222] = { .lex_state = 0 },
    [223] = { .lex_state = 39 },
    [224] = { .lex_state = 459 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 459 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 40 },
    [229] = { .lex_state = 40 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 39 },
    [234] = { .lex_state = 39 },
    [235] = { .lex_state = 39 },
    [236] = { .lex_state = 40 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 459 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 459 },
    [242] = { .lex_state = 40 },
    [243] = { .lex_state = 39 },
    [244] = { .lex_state = 39 },
    [245] = { .lex_state = 459 },
    [246] = { .lex_state = 459 },
    [247] = { .lex_state = 39 },
    [248] = { .lex_state = 39 },
    [249] = { .lex_state = 39 },
    [250] = { .lex_state = 39 },
    [251] = { .lex_state = 39 },
    [252] = { .lex_state = 39 },
    [253] = { .lex_state = 39 },
    [254] = { .lex_state = 39 },
    [255] = { .lex_state = 39 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 39 },
    [258] = { .lex_state = 39 },
    [259] = { .lex_state = 39 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 39 },
    [264] = { .lex_state = 459 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 39 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 39 },
    [269] = { .lex_state = 39 },
    [270] = { .lex_state = 42 },
    [271] = { .lex_state = 39 },
    [272] = { .lex_state = 39 },
    [273] = { .lex_state = 39 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 39 },
    [276] = { .lex_state = 39 },
    [277] = { .lex_state = 39 },
    [278] = { .lex_state = 459 },
    [279] = { .lex_state = 39 },
    [280] = { .lex_state = 39 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 39 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 459 },
    [286] = { .lex_state = 39 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 39 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 39 },
    [291] = { .lex_state = 459 },
    [292] = { .lex_state = 39 },
    [293] = { .lex_state = 39 },
    [294] = { .lex_state = 39 },
    [295] = { .lex_state = 39 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 459 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 25 },
    [300] = { .lex_state = 39 },
    [301] = { .lex_state = 459 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 42 },
    [305] = { .lex_state = 459 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 39 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 26 },
    [310] = { .lex_state = 851 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 39 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 459 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 39 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 42 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 42 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 53 },
    [342] = { .lex_state = 54 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 42 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 39 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 658 },
    [361] = { .lex_state = 39 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 39 },
    [364] = { .lex_state = 459 },
    [365] = { .lex_state = 54 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 54 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 39 },
    [370] = { .lex_state = 39 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 42 },
    [373] = { .lex_state = 42 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 42 },
    [378] = { .lex_state = 42 },
    [379] = { .lex_state = 39 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 53 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 54 },
    [386] = { .lex_state = 459 },
    [387] = { .lex_state = 459 },
    [388] = { .lex_state = 39 },
    [389] = { .lex_state = 39 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 39 },
    [392] = { .lex_state = 39 },
    [393] = { .lex_state = 42 },
    [394] = { .lex_state = 42 },
    [395] = { .lex_state = 39 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 39 },
    [400] = { .lex_state = 39 },
    [401] = { .lex_state = 39 },
    [402] = { .lex_state = 42 },
    [403] = { .lex_state = 39 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 39 },
    [407] = { .lex_state = 42 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 39 },
    [411] = { .lex_state = 39 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 39 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 39 },
    [416] = { .lex_state = 459 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 39 },
    [422] = { .lex_state = 39 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 459 },
    [428] = { .lex_state = 39 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [sym_unsigned_tiny_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
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
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(329),
        [sym_preproc_call] = STATE(78),
        [sym_except_dcl] = STATE(328),
        [sym_interface_dcl] = STATE(328),
        [sym_interface_forward_dcl] = STATE(327),
        [sym_interface_def] = STATE(327),
        [sym_interface_header] = STATE(324),
        [sym_interface_anno] = STATE(141),
        [sym_bitset_dcl] = STATE(328),
        [sym_bitmask_dcl] = STATE(328),
        [sym_annotation_dcl] = STATE(328),
        [sym__definition] = STATE(82),
        [sym_native_dcl] = STATE(328),
        [sym_module_dcl] = STATE(328),
        [sym_struct_forward_dcl] = STATE(328),
        [sym_struct_def] = STATE(328),
        [sym_enum_dcl] = STATE(328),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(328),
        [sym_union_def] = STATE(328),
        [sym_typedef_dcl] = STATE(328),
        [sym_predefine] = STATE(81),
        [sym_dds_request_topic] = STATE(136),
        [sym_dds_reply_topic] = STATE(136),
        [sym_const_dcl] = STATE(328),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(25),
        [aux_sym_specification_repeat2] = STATE(34),
        [aux_sym_interface_def_repeat1] = STATE(109),
        [aux_sym_struct_def_repeat1] = STATE(134),
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
    [2] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(428),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_except_dcl] = STATE(426),
        [sym_interface_body] = STATE(424),
        [sym_export] = STATE(37),
        [sym_op_dcl] = STATE(426),
        [sym_op_type_spec] = STATE(421),
        [sym_attr_dcl] = STATE(426),
        [sym_readonly_attr_spec] = STATE(420),
        [sym_attr_spec] = STATE(420),
        [sym_bitset_dcl] = STATE(426),
        [sym_bitmask_dcl] = STATE(426),
        [sym_native_dcl] = STATE(426),
        [sym_struct_forward_dcl] = STATE(426),
        [sym_struct_def] = STATE(426),
        [sym_enum_dcl] = STATE(426),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(426),
        [sym_union_def] = STATE(426),
        [sym_typedef_dcl] = STATE(426),
        [sym_const_dcl] = STATE(426),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(2),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(93),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(428),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_except_dcl] = STATE(426),
        [sym_interface_body] = STATE(312),
        [sym_export] = STATE(37),
        [sym_op_dcl] = STATE(426),
        [sym_op_type_spec] = STATE(421),
        [sym_attr_dcl] = STATE(426),
        [sym_readonly_attr_spec] = STATE(420),
        [sym_attr_spec] = STATE(420),
        [sym_bitset_dcl] = STATE(426),
        [sym_bitmask_dcl] = STATE(426),
        [sym_native_dcl] = STATE(426),
        [sym_struct_forward_dcl] = STATE(426),
        [sym_struct_def] = STATE(426),
        [sym_enum_dcl] = STATE(426),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(426),
        [sym_union_def] = STATE(426),
        [sym_typedef_dcl] = STATE(426),
        [sym_const_dcl] = STATE(426),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(3),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(428),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_except_dcl] = STATE(426),
        [sym_interface_body] = STATE(408),
        [sym_export] = STATE(37),
        [sym_op_dcl] = STATE(426),
        [sym_op_type_spec] = STATE(421),
        [sym_attr_dcl] = STATE(426),
        [sym_readonly_attr_spec] = STATE(420),
        [sym_attr_spec] = STATE(420),
        [sym_bitset_dcl] = STATE(426),
        [sym_bitmask_dcl] = STATE(426),
        [sym_native_dcl] = STATE(426),
        [sym_struct_forward_dcl] = STATE(426),
        [sym_struct_def] = STATE(426),
        [sym_enum_dcl] = STATE(426),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(426),
        [sym_union_def] = STATE(426),
        [sym_typedef_dcl] = STATE(426),
        [sym_const_dcl] = STATE(426),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(4),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(428),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_except_dcl] = STATE(426),
        [sym_export] = STATE(37),
        [sym_op_dcl] = STATE(426),
        [sym_op_type_spec] = STATE(421),
        [sym_attr_dcl] = STATE(426),
        [sym_readonly_attr_spec] = STATE(420),
        [sym_attr_spec] = STATE(420),
        [sym_bitset_dcl] = STATE(426),
        [sym_bitmask_dcl] = STATE(426),
        [sym_native_dcl] = STATE(426),
        [sym_struct_forward_dcl] = STATE(426),
        [sym_struct_def] = STATE(426),
        [sym_enum_dcl] = STATE(426),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(426),
        [sym_union_def] = STATE(426),
        [sym_typedef_dcl] = STATE(426),
        [sym_const_dcl] = STATE(426),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(123),
        [anon_sym_int16] = ACTIONS(123),
        [anon_sym_long] = ACTIONS(126),
        [anon_sym_int32] = ACTIONS(126),
        [anon_sym_longlong] = ACTIONS(129),
        [anon_sym_int64] = ACTIONS(132),
        [sym_unsigned_tiny_int] = ACTIONS(135),
        [sym_boolean_type] = ACTIONS(138),
        [anon_sym_fixed] = ACTIONS(141),
        [sym_octet_type] = ACTIONS(138),
        [sym_signed_tiny_int] = ACTIONS(144),
        [anon_sym_unsignedshort] = ACTIONS(147),
        [anon_sym_uint16] = ACTIONS(150),
        [anon_sym_unsignedlong] = ACTIONS(153),
        [anon_sym_uint32] = ACTIONS(153),
        [anon_sym_unsignedlonglong] = ACTIONS(156),
        [anon_sym_uint64] = ACTIONS(159),
        [anon_sym_float] = ACTIONS(162),
        [anon_sym_double] = ACTIONS(162),
        [anon_sym_longdouble] = ACTIONS(165),
        [anon_sym_char] = ACTIONS(168),
        [anon_sym_wchar] = ACTIONS(168),
        [anon_sym_COLON_COLON] = ACTIONS(171),
        [anon_sym_string] = ACTIONS(174),
        [anon_sym_wstring] = ACTIONS(174),
        [anon_sym_any] = ACTIONS(177),
        [anon_sym_sequence] = ACTIONS(180),
        [anon_sym_map] = ACTIONS(183),
        [anon_sym_exception] = ACTIONS(186),
        [anon_sym_RBRACE] = ACTIONS(189),
        [anon_sym_void] = ACTIONS(191),
        [anon_sym_readonly] = ACTIONS(194),
        [anon_sym_attribute] = ACTIONS(197),
        [anon_sym_bitset] = ACTIONS(200),
        [anon_sym_bitmask] = ACTIONS(203),
        [anon_sym_native] = ACTIONS(206),
        [anon_sym_struct] = ACTIONS(209),
        [anon_sym_enum] = ACTIONS(212),
        [anon_sym_ATignore_literal_names] = ACTIONS(215),
        [anon_sym_union] = ACTIONS(218),
        [anon_sym_typedef] = ACTIONS(221),
        [anon_sym_const] = ACTIONS(224),
        [sym_final] = ACTIONS(227),
        [anon_sym_ATdata_representation] = ACTIONS(230),
        [sym_identifier] = ACTIONS(233),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(428),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_except_dcl] = STATE(426),
        [sym_export] = STATE(37),
        [sym_op_dcl] = STATE(426),
        [sym_op_type_spec] = STATE(421),
        [sym_attr_dcl] = STATE(426),
        [sym_readonly_attr_spec] = STATE(420),
        [sym_attr_spec] = STATE(420),
        [sym_bitset_dcl] = STATE(426),
        [sym_bitmask_dcl] = STATE(426),
        [sym_native_dcl] = STATE(426),
        [sym_struct_forward_dcl] = STATE(426),
        [sym_struct_def] = STATE(426),
        [sym_enum_dcl] = STATE(426),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(426),
        [sym_union_def] = STATE(426),
        [sym_typedef_dcl] = STATE(426),
        [sym_const_dcl] = STATE(426),
        [sym_data_representation] = STATE(239),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(236),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_simple_type_spec] = STATE(132),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(132),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_bitset_dcl] = STATE(132),
        [sym_bitmask_dcl] = STATE(132),
        [sym_struct_forward_dcl] = STATE(132),
        [sym_struct_def] = STATE(132),
        [sym_enum_dcl] = STATE(132),
        [sym_enum_anno] = STATE(320),
        [sym_union_forward_dcl] = STATE(132),
        [sym_union_def] = STATE(132),
        [sym_data_representation] = STATE(239),
        [sym_type_declarator] = STATE(380),
        [sym_comment] = STATE(7),
        [aux_sym_struct_def_repeat1] = STATE(134),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(8),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(238),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(9),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(246),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(10),
        [aux_sym_except_dcl_repeat1] = STATE(18),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(248),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(11),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(250),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(12),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(252),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(13),
        [aux_sym_except_dcl_repeat1] = STATE(8),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(254),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [14] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(14),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(256),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [15] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(15),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(248),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [16] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(16),
        [aux_sym_except_dcl_repeat1] = STATE(12),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(258),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [17] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(17),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(260),
        [anon_sym_int16] = ACTIONS(260),
        [anon_sym_long] = ACTIONS(263),
        [anon_sym_int32] = ACTIONS(263),
        [anon_sym_longlong] = ACTIONS(266),
        [anon_sym_int64] = ACTIONS(269),
        [sym_unsigned_tiny_int] = ACTIONS(272),
        [sym_boolean_type] = ACTIONS(275),
        [anon_sym_fixed] = ACTIONS(278),
        [sym_octet_type] = ACTIONS(275),
        [sym_signed_tiny_int] = ACTIONS(281),
        [anon_sym_unsignedshort] = ACTIONS(284),
        [anon_sym_uint16] = ACTIONS(287),
        [anon_sym_unsignedlong] = ACTIONS(290),
        [anon_sym_uint32] = ACTIONS(290),
        [anon_sym_unsignedlonglong] = ACTIONS(293),
        [anon_sym_uint64] = ACTIONS(296),
        [anon_sym_float] = ACTIONS(299),
        [anon_sym_double] = ACTIONS(299),
        [anon_sym_longdouble] = ACTIONS(302),
        [anon_sym_char] = ACTIONS(305),
        [anon_sym_wchar] = ACTIONS(305),
        [anon_sym_COLON_COLON] = ACTIONS(308),
        [anon_sym_string] = ACTIONS(311),
        [anon_sym_wstring] = ACTIONS(311),
        [anon_sym_any] = ACTIONS(314),
        [anon_sym_sequence] = ACTIONS(317),
        [anon_sym_map] = ACTIONS(320),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_optional] = ACTIONS(325),
        [sym_key] = ACTIONS(325),
        [sym_must_understand] = ACTIONS(325),
        [sym_non_serialized] = ACTIONS(325),
        [sym_id] = ACTIONS(325),
        [sym_external] = ACTIONS(325),
        [anon_sym_AThashid] = ACTIONS(328),
        [anon_sym_ATtry_construct] = ACTIONS(331),
        [sym_identifier] = ACTIONS(334),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [18] = {
        [sym_signed_short_int] = STATE(158),
        [sym_signed_long_int] = STATE(158),
        [sym_signed_longlong_int] = STATE(158),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(155),
        [sym_unsigned_long_int] = STATE(155),
        [sym_unsigned_longlong_int] = STATE(155),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(379),
        [sym_string_type] = STATE(194),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(181),
        [sym_base_type_spec] = STATE(188),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(194),
        [sym_template_type_spec] = STATE(181),
        [sym_sequence_type] = STATE(194),
        [sym_map_type] = STATE(194),
        [sym_member] = STATE(41),
        [sym_hashid] = STATE(45),
        [sym_try_construct] = STATE(45),
        [sym_struct_modifier] = STATE(46),
        [sym_comment] = STATE(18),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_optional] = ACTIONS(240),
        [sym_key] = ACTIONS(240),
        [sym_must_understand] = ACTIONS(240),
        [sym_non_serialized] = ACTIONS(240),
        [sym_id] = ACTIONS(240),
        [sym_external] = ACTIONS(240),
        [anon_sym_AThashid] = ACTIONS(242),
        [anon_sym_ATtry_construct] = ACTIONS(244),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(242),
    1,
    anon_sym_AThashid,
    ACTIONS(244),
    1,
    anon_sym_ATtry_construct,
    STATE(19),
    1,
    sym_comment,
    STATE(39),
    1,
    aux_sym_member_repeat1,
    STATE(46),
    1,
    sym_struct_modifier,
    STATE(137),
    1,
    sym_type_spec,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(379),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(45),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(240),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [143] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(109),
    1,
    anon_sym_enum,
    ACTIONS(113),
    1,
    anon_sym_typedef,
    ACTIONS(115),
    1,
    anon_sym_const,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(341),
    1,
    anon_sym_fixed,
    ACTIONS(343),
    1,
    anon_sym_any,
    ACTIONS(345),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    sym_comment,
    STATE(22),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(49),
    1,
    sym_annotation_member,
    STATE(50),
    1,
    sym_annotation_body,
    STATE(279),
    1,
    sym_annotation_member_type,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(403),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(339),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(399),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(388),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [284] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_longlong,
    ACTIONS(356),
    1,
    anon_sym_int64,
    ACTIONS(359),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(365),
    1,
    anon_sym_fixed,
    ACTIONS(368),
    1,
    sym_signed_tiny_int,
    ACTIONS(371),
    1,
    anon_sym_unsignedshort,
    ACTIONS(374),
    1,
    anon_sym_uint16,
    ACTIONS(380),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(383),
    1,
    anon_sym_uint64,
    ACTIONS(389),
    1,
    anon_sym_longdouble,
    ACTIONS(395),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(401),
    1,
    anon_sym_any,
    ACTIONS(404),
    1,
    anon_sym_sequence,
    ACTIONS(407),
    1,
    anon_sym_RBRACE,
    ACTIONS(409),
    1,
    anon_sym_enum,
    ACTIONS(412),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(415),
    1,
    anon_sym_typedef,
    ACTIONS(418),
    1,
    anon_sym_const,
    ACTIONS(421),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_annotation_member,
    STATE(50),
    1,
    sym_annotation_body,
    STATE(279),
    1,
    sym_annotation_member_type,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(403),
    1,
    sym_scoped_name,
    ACTIONS(347),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(350),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(362),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(377),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(386),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(392),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(398),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(21),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(399),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(388),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [423] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(109),
    1,
    anon_sym_enum,
    ACTIONS(113),
    1,
    anon_sym_typedef,
    ACTIONS(115),
    1,
    anon_sym_const,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(341),
    1,
    anon_sym_fixed,
    ACTIONS(343),
    1,
    anon_sym_any,
    ACTIONS(424),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(49),
    1,
    sym_annotation_member,
    STATE(50),
    1,
    sym_annotation_body,
    STATE(279),
    1,
    sym_annotation_member_type,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(403),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(339),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(399),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(388),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [564] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(426),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_comment,
    STATE(154),
    1,
    sym_type_spec,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(379),
    1,
    sym_scoped_name,
    STATE(414),
    1,
    sym_element_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(428),
    2,
    anon_sym_default,
    anon_sym_case,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [693] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(430),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(432),
    1,
    anon_sym_GT,
    ACTIONS(434),
    1,
    anon_sym_COMMA,
    ACTIONS(436),
    1,
    sym_identifier,
    STATE(24),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(193),
    1,
    sym_scoped_name,
    STATE(372),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [818] = 38,
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
    ACTIONS(438),
    1,
    ts_builtin_sym_end,
    STATE(25),
    1,
    sym_comment,
    STATE(32),
    1,
    aux_sym_specification_repeat2,
    STATE(73),
    1,
    aux_sym_specification_repeat1,
    STATE(78),
    1,
    sym_preproc_call,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [948] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(26),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(273),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1067] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(430),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(436),
    1,
    sym_identifier,
    STATE(27),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(193),
    1,
    sym_scoped_name,
    STATE(270),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1186] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(28),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(214),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1305] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(29),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(223),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1424] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_base_type_spec,
    STATE(255),
    1,
    sym_scoped_name,
    STATE(368),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(181),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(194),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1543] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(442),
    1,
    anon_sym_exception,
    ACTIONS(445),
    1,
    anon_sym_interface,
    ACTIONS(448),
    1,
    anon_sym_local,
    ACTIONS(451),
    1,
    anon_sym_bitset,
    ACTIONS(454),
    1,
    anon_sym_bitmask,
    ACTIONS(457),
    1,
    anon_sym_ATannotation,
    ACTIONS(460),
    1,
    anon_sym_native,
    ACTIONS(463),
    1,
    anon_sym_module,
    ACTIONS(466),
    1,
    anon_sym_struct,
    ACTIONS(469),
    1,
    anon_sym_enum,
    ACTIONS(472),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(475),
    1,
    anon_sym_union,
    ACTIONS(478),
    1,
    anon_sym_typedef,
    ACTIONS(481),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(484),
    1,
    sym_dds_service,
    ACTIONS(487),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(490),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(493),
    1,
    anon_sym_const,
    ACTIONS(496),
    1,
    sym_final,
    ACTIONS(499),
    1,
    anon_sym_ATdata_representation,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    ACTIONS(440),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(31),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [1663] = 35,
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
    ACTIONS(502),
    1,
    ts_builtin_sym_end,
    ACTIONS(504),
    1,
    anon_sym_POUNDdefine,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(32),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [1784] = 35,
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
    ACTIONS(504),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(506),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(33),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [1905] = 35,
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
    ACTIONS(438),
    1,
    ts_builtin_sym_end,
    ACTIONS(504),
    1,
    anon_sym_POUNDdefine,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [2026] = 35,
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
    ACTIONS(504),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(508),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(35),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(82),
    1,
    sym__definition,
    STATE(109),
    1,
    aux_sym_interface_def_repeat1,
    STATE(134),
    1,
    aux_sym_struct_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(239),
    1,
    sym_data_representation,
    STATE(320),
    1,
    sym_enum_anno,
    STATE(324),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(327),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(328),
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
    [2147] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(512),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(510),
    36,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2203] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(516),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(514),
    36,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2259] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(341),
    1,
    anon_sym_fixed,
    STATE(38),
    1,
    sym_comment,
    STATE(401),
    1,
    sym_const_type,
    STATE(422),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(339),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(388),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2361] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    anon_sym_AThashid,
    ACTIONS(528),
    1,
    anon_sym_ATtry_construct,
    STATE(46),
    1,
    sym_struct_modifier,
    STATE(39),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(45),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(520),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(522),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(518),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2423] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(533),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(531),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2472] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(537),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(535),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2521] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(541),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(539),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2570] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(545),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(543),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2619] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(549),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(547),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2668] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(553),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(551),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(557),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(555),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2764] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(561),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(559),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2812] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(565),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
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
    ACTIONS(563),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [2860] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(569),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(567),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2904] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(573),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(571),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2948] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(577),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(575),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2992] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(581),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(579),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [3036] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(585),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(583),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [3080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(589),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(587),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [3123] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(593),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(591),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [3166] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(595),
    1,
    sym_boolean_type,
    STATE(56),
    1,
    sym_comment,
    STATE(259),
    1,
    sym_scoped_name,
    STATE(346),
    1,
    sym_switch_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(347),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [3246] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(599),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(597),
    24,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
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
    [3286] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(304),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3366] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(318),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3446] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(325),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3526] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(402),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3606] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(62),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(373),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3686] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(63),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(332),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3766] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(64),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(189),
    1,
    sym_const_expr,
    STATE(374),
    1,
    sym_positive_int_const,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3846] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(65),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(366),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3923] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(66),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(359),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4000] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(67),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(314),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4077] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(68),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(412),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4154] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(69),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(331),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4231] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(70),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(114),
    1,
    sym_xor_expr,
    STATE(118),
    1,
    sym_or_expr,
    STATE(344),
    1,
    sym_const_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4308] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_long,
    ACTIONS(69),
    1,
    anon_sym_unsignedlong,
    ACTIONS(619),
    1,
    anon_sym_int32,
    ACTIONS(621),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(625),
    1,
    sym_signed_tiny_int,
    ACTIONS(627),
    1,
    anon_sym_uint32,
    STATE(71),
    1,
    sym_comment,
    STATE(393),
    1,
    sym_integer_type,
    STATE(394),
    1,
    sym_destination_type,
    ACTIONS(53),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(65),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(71),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(617),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(623),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(155),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(158),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [4373] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(72),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_and_expr,
    STATE(115),
    1,
    sym_xor_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4444] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(631),
    1,
    sym_preproc_directive,
    ACTIONS(634),
    1,
    anon_sym_POUNDdefine,
    STATE(78),
    1,
    sym_preproc_call,
    STATE(73),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(629),
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
    [4483] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(74),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(108),
    1,
    sym_shift_expr,
    STATE(111),
    1,
    sym_and_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4551] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(638),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(636),
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
    [4584] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(76),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(106),
    1,
    sym_add_expr,
    STATE(107),
    1,
    sym_shift_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4649] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(640),
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
    [4680] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(644),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(642),
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
    [4713] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(648),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(646),
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
    [4746] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(650),
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
    [4777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(652),
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
    [4808] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(654),
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
    [4839] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(83),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    STATE(105),
    1,
    sym_add_expr,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4901] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(84),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(94),
    1,
    sym_literal,
    STATE(95),
    1,
    sym_mult_expr,
    STATE(104),
    1,
    sym_unary_operator,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4960] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(603),
    1,
    anon_sym_LPAREN,
    ACTIONS(605),
    1,
    anon_sym_TILDE,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(94),
    1,
    sym_literal,
    STATE(96),
    1,
    sym_unary_expr,
    STATE(104),
    1,
    sym_unary_operator,
    ACTIONS(601),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5016] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(656),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(658),
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
    sym_identifier,
    anon_sym_RBRACK,
    [5045] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(662),
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
    sym_identifier,
    anon_sym_RBRACK,
    [5074] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(664),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(666),
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
    [5104] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(670),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(672),
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
    [5134] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(674),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(676),
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
    [5161] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(678),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(680),
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
    [5188] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(682),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(684),
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
    [5215] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(686),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(688),
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
    [5242] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(664),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(666),
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
    [5269] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(690),
    1,
    anon_sym_GT,
    ACTIONS(696),
    1,
    anon_sym_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(694),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(692),
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
    [5300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(698),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(700),
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
    [5327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(670),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(672),
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
    [5354] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(702),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(704),
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
    [5381] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(706),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(708),
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
    [5408] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(710),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(712),
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
    [5435] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(696),
    1,
    anon_sym_SLASH,
    ACTIONS(714),
    1,
    anon_sym_GT,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(694),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(716),
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
    [5466] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(718),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(720),
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
    [5493] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(722),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(724),
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
    [5520] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(607),
    1,
    anon_sym_L,
    ACTIONS(609),
    1,
    anon_sym_DQUOTE,
    ACTIONS(611),
    1,
    anon_sym_SQUOTE,
    ACTIONS(615),
    1,
    sym_number_literal,
    ACTIONS(726),
    1,
    anon_sym_LPAREN,
    STATE(89),
    1,
    sym_scoped_name,
    STATE(97),
    1,
    sym_literal,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(613),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(100),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5563] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(728),
    1,
    anon_sym_GT,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(732),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(730),
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
    [5589] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(734),
    1,
    anon_sym_GT,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(732),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(736),
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
    [5615] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(738),
    1,
    anon_sym_GT,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(740),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5639] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_GT,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(746),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5663] = 11,
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
    ACTIONS(748),
    1,
    anon_sym_interface,
    ACTIONS(750),
    1,
    anon_sym_local,
    STATE(109),
    1,
    sym_comment,
    STATE(110),
    1,
    aux_sym_interface_def_repeat1,
    STATE(141),
    1,
    sym_interface_anno,
    STATE(326),
    1,
    sym_interface_header,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5698] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(754),
    1,
    sym_dds_service,
    ACTIONS(757),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(760),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(141),
    1,
    sym_interface_anno,
    ACTIONS(752),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(110),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(136),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5726] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(765),
    1,
    anon_sym_DOLLAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(763),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5746] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(767),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(769),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [5766] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(765),
    1,
    anon_sym_DOLLAR,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(771),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5786] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(775),
    1,
    anon_sym_CARET,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(773),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5805] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(775),
    1,
    anon_sym_CARET,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(777),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5824] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    ACTIONS(781),
    1,
    anon_sym_SEMI,
    ACTIONS(783),
    1,
    anon_sym_getraises,
    ACTIONS(785),
    1,
    anon_sym_setraises,
    STATE(116),
    1,
    sym_comment,
    STATE(186),
    1,
    sym_get_excep_expr,
    STATE(195),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(343),
    1,
    sym_attr_raises_expr,
    STATE(345),
    1,
    sym_set_excep_expr,
    [5855] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(787),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [5871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(791),
    1,
    anon_sym_PIPE,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(789),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [5889] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(793),
    1,
    anon_sym_RPAREN,
    ACTIONS(795),
    1,
    anon_sym_in,
    STATE(26),
    1,
    sym_param_attribute,
    STATE(119),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_param_dcl,
    STATE(349),
    1,
    sym_parameter_dcls,
    ACTIONS(797),
    2,
    anon_sym_out,
    anon_sym_inout,
    [5915] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(799),
    1,
    anon_sym_RBRACE,
    ACTIONS(801),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(803),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(179),
    1,
    sym_enumerator,
    STATE(266),
    1,
    sym_enum_modifier,
    [5940] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(801),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(803),
    1,
    sym_identifier,
    ACTIONS(805),
    1,
    anon_sym_RBRACE,
    STATE(121),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(238),
    1,
    sym_enumerator,
    STATE(266),
    1,
    sym_enum_modifier,
    [5965] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(807),
    1,
    anon_sym_LBRACK,
    STATE(122),
    1,
    sym_comment,
    STATE(123),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(167),
    1,
    sym_fixed_array_size,
    ACTIONS(787),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [5986] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(807),
    1,
    anon_sym_LBRACK,
    STATE(123),
    1,
    sym_comment,
    STATE(127),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(167),
    1,
    sym_fixed_array_size,
    ACTIONS(809),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6007] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_RBRACE,
    ACTIONS(813),
    1,
    anon_sym_default,
    ACTIONS(815),
    1,
    anon_sym_case,
    STATE(23),
    1,
    sym_case_label,
    STATE(124),
    1,
    sym_comment,
    STATE(126),
    1,
    aux_sym_union_def_repeat1,
    STATE(206),
    1,
    sym_case,
    [6032] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_RBRACE,
    ACTIONS(819),
    1,
    anon_sym_default,
    ACTIONS(822),
    1,
    anon_sym_case,
    STATE(23),
    1,
    sym_case_label,
    STATE(206),
    1,
    sym_case,
    STATE(125),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6055] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(813),
    1,
    anon_sym_default,
    ACTIONS(815),
    1,
    anon_sym_case,
    ACTIONS(825),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_case_label,
    STATE(125),
    1,
    aux_sym_union_def_repeat1,
    STATE(126),
    1,
    sym_comment,
    STATE(206),
    1,
    sym_case,
    [6080] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_LBRACK,
    STATE(167),
    1,
    sym_fixed_array_size,
    STATE(127),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(827),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6099] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(801),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(803),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(266),
    1,
    sym_enum_modifier,
    STATE(284),
    1,
    sym_enumerator,
    [6121] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(832),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(834),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6149] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(836),
    1,
    anon_sym_RBRACE,
    ACTIONS(838),
    1,
    anon_sym_bitfield,
    STATE(131),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(219),
    1,
    sym_bitfield_spec,
    STATE(285),
    1,
    sym_bitfield,
    [6171] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(132),
    1,
    sym_comment,
    STATE(203),
    1,
    sym_any_declarator,
    STATE(434),
    1,
    sym_any_declarators,
    STATE(303),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6191] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(795),
    1,
    anon_sym_in,
    STATE(26),
    1,
    sym_param_attribute,
    STATE(133),
    1,
    sym_comment,
    STATE(287),
    1,
    sym_param_dcl,
    ACTIONS(797),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6211] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(842),
    1,
    anon_sym_struct,
    STATE(134),
    1,
    sym_comment,
    STATE(139),
    1,
    aux_sym_struct_def_repeat1,
    STATE(239),
    1,
    sym_data_representation,
    [6233] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_bitfield,
    ACTIONS(844),
    1,
    anon_sym_RBRACE,
    STATE(135),
    1,
    sym_comment,
    STATE(140),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(219),
    1,
    sym_bitfield_spec,
    STATE(285),
    1,
    sym_bitfield,
    [6255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(846),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6269] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(137),
    1,
    sym_comment,
    STATE(157),
    1,
    sym_declarator,
    STATE(218),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6289] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    ACTIONS(848),
    1,
    anon_sym_SEMI,
    ACTIONS(850),
    1,
    anon_sym_raises,
    STATE(138),
    1,
    sym_comment,
    STATE(197),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(376),
    1,
    sym_raises_expr,
    [6311] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    anon_sym_struct,
    ACTIONS(854),
    1,
    sym_final,
    ACTIONS(857),
    1,
    anon_sym_ATdata_representation,
    STATE(239),
    1,
    sym_data_representation,
    STATE(139),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6331] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_RBRACE,
    ACTIONS(862),
    1,
    anon_sym_bitfield,
    STATE(219),
    1,
    sym_bitfield_spec,
    STATE(285),
    1,
    sym_bitfield,
    STATE(140),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [6351] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(865),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6365] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(157),
    1,
    sym_declarator,
    STATE(226),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6385] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_bitfield,
    ACTIONS(867),
    1,
    anon_sym_RBRACE,
    STATE(140),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(143),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_bitfield_spec,
    STATE(285),
    1,
    sym_bitfield,
    [6407] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_bitfield,
    ACTIONS(869),
    1,
    anon_sym_RBRACE,
    STATE(143),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(144),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_bitfield_spec,
    STATE(285),
    1,
    sym_bitfield,
    [6429] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(871),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [6442] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(873),
    1,
    anon_sym_LBRACE,
    ACTIONS(875),
    1,
    anon_sym_COLON,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(877),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6459] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(147),
    1,
    sym_comment,
    STATE(216),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6476] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(879),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6489] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(149),
    1,
    sym_comment,
    STATE(230),
    1,
    sym_interface_name,
    STATE(233),
    1,
    sym_scoped_name,
    [6508] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(883),
    1,
    anon_sym_COMMA,
    ACTIONS(885),
    1,
    anon_sym_RPAREN,
    STATE(150),
    1,
    sym_comment,
    STATE(182),
    1,
    aux_sym_raises_expr_repeat1,
    [6527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(887),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6540] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_LBRACE,
    ACTIONS(891),
    1,
    anon_sym_COLON,
    ACTIONS(893),
    1,
    anon_sym_SEMI,
    STATE(152),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_interface_inheritance_spec,
    [6559] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(895),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6572] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(423),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6589] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(897),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6602] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_comment,
    STATE(233),
    1,
    sym_scoped_name,
    STATE(302),
    1,
    sym_interface_name,
    [6621] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_COMMA,
    STATE(157),
    1,
    sym_comment,
    STATE(171),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(901),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6638] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(903),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(905),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6664] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(907),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(909),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6690] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(911),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6703] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    anon_sym_RPAREN,
    ACTIONS(915),
    1,
    anon_sym_XCDR,
    ACTIONS(918),
    1,
    anon_sym_XCDR2,
    STATE(163),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6720] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    anon_sym_COMMA,
    ACTIONS(924),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(164),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [6735] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(883),
    1,
    anon_sym_COMMA,
    ACTIONS(926),
    1,
    anon_sym_RPAREN,
    STATE(165),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_raises_expr_repeat1,
    [6754] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    sym_identifier,
    STATE(166),
    1,
    sym_comment,
    STATE(282),
    1,
    sym_any_declarator,
    STATE(303),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6771] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(928),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [6784] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(930),
    1,
    anon_sym_LT,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(932),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [6799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(937),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_enum_modifier,
    STATE(169),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6816] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(939),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [6829] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_COMMA,
    STATE(164),
    1,
    aux_sym_declarators_repeat1,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(941),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6846] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    anon_sym_RPAREN,
    ACTIONS(945),
    1,
    anon_sym_XCDR,
    ACTIONS(947),
    1,
    anon_sym_XCDR2,
    STATE(163),
    1,
    aux_sym_data_representation_repeat1,
    STATE(172),
    1,
    sym_comment,
    [6865] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(801),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(949),
    1,
    sym_identifier,
    STATE(169),
    1,
    aux_sym_enumerator_repeat1,
    STATE(173),
    1,
    sym_comment,
    STATE(266),
    1,
    sym_enum_modifier,
    [6884] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(951),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [6896] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_COMMA,
    ACTIONS(955),
    1,
    anon_sym_SEMI,
    STATE(175),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_any_declarators_repeat1,
    [6912] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_COMMA,
    ACTIONS(959),
    1,
    anon_sym_RPAREN,
    STATE(176),
    1,
    sym_comment,
    STATE(225),
    1,
    aux_sym_parameter_dcls_repeat1,
    [6928] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_LBRACE,
    ACTIONS(891),
    1,
    anon_sym_COLON,
    STATE(177),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_interface_inheritance_spec,
    [6944] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_SEMI,
    ACTIONS(963),
    1,
    anon_sym_switch,
    ACTIONS(965),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_comment,
    [6960] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(805),
    1,
    anon_sym_RBRACE,
    ACTIONS(967),
    1,
    anon_sym_COMMA,
    STATE(179),
    1,
    sym_comment,
    STATE(204),
    1,
    aux_sym_enum_dcl_repeat1,
    [6976] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(969),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(971),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7000] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    anon_sym_COMMA,
    ACTIONS(973),
    1,
    anon_sym_RPAREN,
    STATE(182),
    1,
    sym_comment,
    STATE(191),
    1,
    aux_sym_raises_expr_repeat1,
    [7016] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(850),
    1,
    anon_sym_raises,
    ACTIONS(975),
    1,
    anon_sym_SEMI,
    STATE(183),
    1,
    sym_comment,
    STATE(405),
    1,
    sym_raises_expr,
    [7032] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(977),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [7046] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_COMMA,
    ACTIONS(982),
    1,
    anon_sym_SEMI,
    STATE(185),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [7060] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(785),
    1,
    anon_sym_setraises,
    ACTIONS(984),
    1,
    anon_sym_SEMI,
    STATE(186),
    1,
    sym_comment,
    STATE(382),
    1,
    sym_set_excep_expr,
    [7076] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(165),
    1,
    sym_scoped_name,
    STATE(187),
    1,
    sym_comment,
    [7092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(986),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7104] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(988),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [7116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    anon_sym_XCDR,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [7130] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(977),
    1,
    anon_sym_RPAREN,
    ACTIONS(994),
    1,
    anon_sym_COMMA,
    STATE(191),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [7144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(662),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7156] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(986),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [7170] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(999),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    ACTIONS(1001),
    1,
    anon_sym_SEMI,
    STATE(185),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(195),
    1,
    sym_comment,
    [7198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_scoped_name,
    STATE(196),
    1,
    sym_comment,
    [7214] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    ACTIONS(1003),
    1,
    anon_sym_SEMI,
    STATE(185),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(197),
    1,
    sym_comment,
    [7230] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    anon_sym_COMMA,
    ACTIONS(1005),
    1,
    anon_sym_RPAREN,
    STATE(191),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(198),
    1,
    sym_comment,
    [7246] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(1007),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7258] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(1009),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7270] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1011),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(1013),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7294] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_COMMA,
    ACTIONS(1015),
    1,
    anon_sym_SEMI,
    STATE(175),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(203),
    1,
    sym_comment,
    [7310] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_COMMA,
    ACTIONS(1017),
    1,
    anon_sym_RBRACE,
    STATE(204),
    1,
    sym_comment,
    STATE(213),
    1,
    aux_sym_enum_dcl_repeat1,
    [7326] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(1019),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7338] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(1021),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(658),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7362] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_XCDR,
    ACTIONS(947),
    1,
    anon_sym_XCDR2,
    STATE(172),
    1,
    aux_sym_data_representation_repeat1,
    STATE(208),
    1,
    sym_comment,
    [7378] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(1023),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7390] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_scoped_name,
    STATE(210),
    1,
    sym_comment,
    [7406] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(1025),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7418] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1027),
    1,
    anon_sym_COMMA,
    ACTIONS(1029),
    1,
    anon_sym_RBRACE,
    STATE(212),
    1,
    sym_comment,
    STATE(237),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [7434] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1031),
    1,
    anon_sym_COMMA,
    ACTIONS(1034),
    1,
    anon_sym_RBRACE,
    STATE(213),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [7448] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(116),
    1,
    sym_simple_declarator,
    STATE(214),
    1,
    sym_comment,
    STATE(313),
    1,
    sym_attr_declarator,
    [7464] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(1038),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7476] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(924),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7488] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_SEMI,
    ACTIONS(1042),
    1,
    sym_identifier,
    STATE(217),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [7502] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1045),
    1,
    anon_sym_SEMI,
    ACTIONS(1047),
    1,
    anon_sym_default,
    STATE(218),
    1,
    sym_comment,
    STATE(362),
    1,
    sym_default,
    [7518] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_SEMI,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(219),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_bitfield_repeat1,
    [7534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_COMMA,
    ACTIONS(1056),
    1,
    anon_sym_SEMI,
    STATE(220),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [7548] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_scoped_name,
    [7564] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_COMMA,
    ACTIONS(1061),
    1,
    anon_sym_LBRACE,
    STATE(222),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7578] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_simple_declarator,
    STATE(223),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_readonly_attr_declarator,
    [7594] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(1063),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7606] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1065),
    1,
    anon_sym_COMMA,
    ACTIONS(1068),
    1,
    anon_sym_RPAREN,
    STATE(225),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [7620] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_default,
    ACTIONS(1070),
    1,
    anon_sym_SEMI,
    STATE(226),
    1,
    sym_comment,
    STATE(308),
    1,
    sym_default,
    [7636] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_COMMA,
    ACTIONS(1072),
    1,
    anon_sym_RBRACE,
    STATE(213),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(227),
    1,
    sym_comment,
    [7652] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(228),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_scoped_name,
    [7668] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(1074),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7680] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1078),
    1,
    anon_sym_LBRACE,
    STATE(230),
    1,
    sym_comment,
    STATE(231),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [7696] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1080),
    1,
    anon_sym_LBRACE,
    STATE(222),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(231),
    1,
    sym_comment,
    [7712] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_COMMA,
    ACTIONS(1082),
    1,
    anon_sym_RPAREN,
    STATE(176),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(232),
    1,
    sym_comment,
    [7728] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(1084),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [7742] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    sym_identifier,
    ACTIONS(1086),
    1,
    anon_sym_SEMI,
    STATE(217),
    1,
    aux_sym_bitfield_repeat1,
    STATE(234),
    1,
    sym_comment,
    [7758] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_RBRACE,
    ACTIONS(1090),
    1,
    sym_identifier,
    STATE(212),
    1,
    sym_bit_value,
    STATE(235),
    1,
    sym_comment,
    [7774] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_scoped_name,
    [7790] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1027),
    1,
    anon_sym_COMMA,
    ACTIONS(1092),
    1,
    anon_sym_RBRACE,
    STATE(237),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [7806] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_COMMA,
    ACTIONS(1017),
    1,
    anon_sym_RBRACE,
    STATE(227),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(238),
    1,
    sym_comment,
    [7822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1094),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    anon_sym_COMMA,
    ACTIONS(1099),
    1,
    anon_sym_RBRACE,
    STATE(240),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [7848] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(850),
    1,
    anon_sym_raises,
    ACTIONS(1101),
    1,
    anon_sym_SEMI,
    STATE(241),
    1,
    sym_comment,
    STATE(384),
    1,
    sym_raises_expr,
    [7864] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(1103),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7876] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1105),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(1107),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7898] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(1109),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [7909] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1111),
    1,
    anon_sym_SEMI,
    ACTIONS(1113),
    1,
    anon_sym_default,
    STATE(246),
    1,
    sym_comment,
    [7922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1115),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(1117),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7944] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1119),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(1121),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7966] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(1123),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(1125),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7988] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(298),
    1,
    sym_bit_value,
    [8001] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(1127),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8012] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(986),
    1,
    anon_sym_COMMA,
    STATE(255),
    1,
    sym_comment,
    [8025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(1129),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8036] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(1131),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8047] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(258),
    1,
    sym_comment,
    STATE(335),
    1,
    sym_simple_declarator,
    [8060] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(1133),
    1,
    anon_sym_RPAREN,
    STATE(259),
    1,
    sym_comment,
    [8073] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [8084] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1135),
    1,
    anon_sym_LPAREN,
    STATE(261),
    1,
    sym_comment,
    STATE(381),
    1,
    sym_exception_list,
    [8097] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1135),
    1,
    anon_sym_LPAREN,
    STATE(262),
    1,
    sym_comment,
    STATE(264),
    1,
    sym_exception_list,
    [8110] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_simple_declarator,
    STATE(263),
    1,
    sym_comment,
    [8123] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(1137),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8134] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1139),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1141),
    1,
    anon_sym_SQUOTE,
    STATE(265),
    1,
    sym_comment,
    [8147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(1143),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1145),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8169] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(1147),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8180] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1149),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8191] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1151),
    1,
    anon_sym_GT,
    ACTIONS(1153),
    1,
    anon_sym_COMMA,
    STATE(270),
    1,
    sym_comment,
    [8204] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(1155),
    1,
    anon_sym_LBRACE,
    STATE(271),
    1,
    sym_comment,
    [8217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1157),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(273),
    1,
    sym_comment,
    STATE(289),
    1,
    sym_simple_declarator,
    [8241] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1159),
    1,
    anon_sym_LBRACE,
    ACTIONS(1161),
    1,
    anon_sym_COLON,
    STATE(274),
    1,
    sym_comment,
    [8254] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(1163),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(1165),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8276] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(1167),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8287] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(748),
    1,
    anon_sym_interface,
    STATE(278),
    1,
    sym_comment,
    STATE(326),
    1,
    sym_interface_header,
    [8300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    sym_identifier,
    STATE(246),
    1,
    sym_simple_declarator,
    STATE(279),
    1,
    sym_comment,
    [8313] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(1169),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8324] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(1171),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1056),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [8346] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(1173),
    1,
    anon_sym_LBRACE,
    STATE(283),
    1,
    sym_comment,
    [8359] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1034),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8370] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(1175),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8381] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(1177),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8392] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1068),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8403] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1179),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8414] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1181),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(1183),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8436] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(748),
    1,
    anon_sym_interface,
    STATE(291),
    1,
    sym_comment,
    STATE(418),
    1,
    sym_interface_header,
    [8449] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1185),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8460] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(1187),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8471] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    ACTIONS(1189),
    1,
    anon_sym_LBRACE,
    STATE(294),
    1,
    sym_comment,
    [8484] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(1191),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8495] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1193),
    1,
    anon_sym_LBRACE,
    ACTIONS(1195),
    1,
    anon_sym_COLON,
    STATE(296),
    1,
    sym_comment,
    [8508] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1197),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8519] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1099),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8530] = 4,
    ACTIONS(1199),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1201),
    1,
    sym_preproc_arg,
    ACTIONS(1203),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    [8543] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1205),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8554] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1207),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1061),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8576] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(1209),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [8587] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1211),
    1,
    anon_sym_GT,
    ACTIONS(1213),
    1,
    anon_sym_COMMA,
    STATE(304),
    1,
    sym_comment,
    [8600] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1215),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1217),
    1,
    anon_sym_LBRACE,
    STATE(306),
    1,
    sym_comment,
    [8621] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1219),
    1,
    sym_identifier,
    STATE(307),
    1,
    sym_comment,
    [8631] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_SEMI,
    STATE(308),
    1,
    sym_comment,
    [8641] = 3,
    ACTIONS(1203),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1223),
    1,
    aux_sym_preproc_call_token1,
    STATE(309),
    1,
    sym_comment,
    [8651] = 3,
    ACTIONS(1203),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1225),
    1,
    aux_sym_comment_token1,
    STATE(310),
    1,
    sym_comment,
    [8661] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1227),
    1,
    anon_sym_DQUOTE,
    STATE(311),
    1,
    sym_comment,
    [8671] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1229),
    1,
    anon_sym_RBRACE,
    STATE(312),
    1,
    sym_comment,
    [8681] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1231),
    1,
    anon_sym_SEMI,
    STATE(313),
    1,
    sym_comment,
    [8691] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1233),
    1,
    anon_sym_SEMI,
    STATE(314),
    1,
    sym_comment,
    [8701] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1235),
    1,
    anon_sym_RPAREN,
    STATE(315),
    1,
    sym_comment,
    [8711] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1237),
    1,
    anon_sym_RPAREN,
    STATE(316),
    1,
    sym_comment,
    [8721] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    sym_identifier,
    STATE(317),
    1,
    sym_comment,
    [8731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1239),
    1,
    anon_sym_RBRACK,
    STATE(318),
    1,
    sym_comment,
    [8741] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1241),
    1,
    anon_sym_LBRACE,
    STATE(319),
    1,
    sym_comment,
    [8751] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1243),
    1,
    anon_sym_enum,
    STATE(320),
    1,
    sym_comment,
    [8761] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1245),
    1,
    anon_sym_DQUOTE,
    STATE(321),
    1,
    sym_comment,
    [8771] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1247),
    1,
    anon_sym_SQUOTE,
    STATE(322),
    1,
    sym_comment,
    [8781] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1249),
    1,
    sym_identifier,
    STATE(323),
    1,
    sym_comment,
    [8791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1251),
    1,
    anon_sym_LBRACE,
    STATE(324),
    1,
    sym_comment,
    [8801] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1253),
    1,
    anon_sym_GT,
    STATE(325),
    1,
    sym_comment,
    [8811] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1255),
    1,
    anon_sym_LBRACE,
    STATE(326),
    1,
    sym_comment,
    [8821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1257),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    [8831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1259),
    1,
    anon_sym_SEMI,
    STATE(328),
    1,
    sym_comment,
    [8841] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1261),
    1,
    ts_builtin_sym_end,
    STATE(329),
    1,
    sym_comment,
    [8851] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1263),
    1,
    anon_sym_LPAREN,
    STATE(330),
    1,
    sym_comment,
    [8861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_RPAREN,
    STATE(331),
    1,
    sym_comment,
    [8871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1267),
    1,
    anon_sym_GT,
    STATE(332),
    1,
    sym_comment,
    [8881] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1269),
    1,
    anon_sym_LBRACE,
    STATE(333),
    1,
    sym_comment,
    [8891] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1271),
    1,
    anon_sym_LBRACE,
    STATE(334),
    1,
    sym_comment,
    [8901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1273),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [8911] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1275),
    1,
    anon_sym_LBRACE,
    STATE(336),
    1,
    sym_comment,
    [8921] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1277),
    1,
    anon_sym_LBRACE,
    STATE(337),
    1,
    sym_comment,
    [8931] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1279),
    1,
    anon_sym_SEMI,
    STATE(338),
    1,
    sym_comment,
    [8941] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1281),
    1,
    anon_sym_SQUOTE,
    STATE(339),
    1,
    sym_comment,
    [8951] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1283),
    1,
    anon_sym_DQUOTE,
    STATE(340),
    1,
    sym_comment,
    [8961] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1285),
    1,
    aux_sym_char_literal_token1,
    STATE(341),
    1,
    sym_comment,
    [8971] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1287),
    1,
    aux_sym_string_literal_token1,
    STATE(342),
    1,
    sym_comment,
    [8981] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1001),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [8991] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1289),
    1,
    anon_sym_RPAREN,
    STATE(344),
    1,
    sym_comment,
    [9001] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [9011] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1291),
    1,
    anon_sym_RPAREN,
    STATE(346),
    1,
    sym_comment,
    [9021] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1133),
    1,
    anon_sym_RPAREN,
    STATE(347),
    1,
    sym_comment,
    [9031] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1293),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [9041] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1295),
    1,
    anon_sym_RPAREN,
    STATE(349),
    1,
    sym_comment,
    [9051] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1297),
    1,
    anon_sym_LPAREN,
    STATE(350),
    1,
    sym_comment,
    [9061] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1299),
    1,
    anon_sym_LPAREN,
    STATE(351),
    1,
    sym_comment,
    [9071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1301),
    1,
    anon_sym_SEMI,
    STATE(352),
    1,
    sym_comment,
    [9081] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1303),
    1,
    anon_sym_SEMI,
    STATE(353),
    1,
    sym_comment,
    [9091] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1305),
    1,
    anon_sym_LT,
    STATE(354),
    1,
    sym_comment,
    [9101] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1307),
    1,
    anon_sym_LPAREN,
    STATE(355),
    1,
    sym_comment,
    [9111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1309),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [9121] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1311),
    1,
    sym_identifier,
    STATE(357),
    1,
    sym_comment,
    [9131] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1313),
    1,
    anon_sym_LPAREN,
    STATE(358),
    1,
    sym_comment,
    [9141] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1315),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [9151] = 3,
    ACTIONS(1203),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1317),
    1,
    aux_sym_predefine_token1,
    STATE(360),
    1,
    sym_comment,
    [9161] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1319),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    [9171] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1321),
    1,
    anon_sym_SEMI,
    STATE(362),
    1,
    sym_comment,
    [9181] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    sym_identifier,
    STATE(363),
    1,
    sym_comment,
    [9191] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1323),
    1,
    anon_sym_enum,
    STATE(364),
    1,
    sym_comment,
    [9201] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1325),
    1,
    aux_sym_string_literal_token1,
    STATE(365),
    1,
    sym_comment,
    [9211] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1327),
    1,
    anon_sym_SEMI,
    STATE(366),
    1,
    sym_comment,
    [9221] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1329),
    1,
    aux_sym_string_literal_token1,
    STATE(367),
    1,
    sym_comment,
    [9231] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1331),
    1,
    anon_sym_COMMA,
    STATE(368),
    1,
    sym_comment,
    [9241] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(369),
    1,
    sym_comment,
    [9251] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1335),
    1,
    sym_identifier,
    STATE(370),
    1,
    sym_comment,
    [9261] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1337),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [9271] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1339),
    1,
    anon_sym_GT,
    STATE(372),
    1,
    sym_comment,
    [9281] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1341),
    1,
    anon_sym_GT,
    STATE(373),
    1,
    sym_comment,
    [9291] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    STATE(374),
    1,
    sym_comment,
    [9301] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1345),
    1,
    anon_sym_LPAREN,
    STATE(375),
    1,
    sym_comment,
    [9311] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    anon_sym_SEMI,
    STATE(376),
    1,
    sym_comment,
    [9321] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1347),
    1,
    anon_sym_LT,
    STATE(377),
    1,
    sym_comment,
    [9331] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    anon_sym_LT,
    STATE(378),
    1,
    sym_comment,
    [9341] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    sym_identifier,
    STATE(379),
    1,
    sym_comment,
    [9351] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1351),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [9361] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1353),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [9371] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1355),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [9381] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    aux_sym_char_literal_token1,
    STATE(383),
    1,
    sym_comment,
    [9391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(975),
    1,
    anon_sym_SEMI,
    STATE(384),
    1,
    sym_comment,
    [9401] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1359),
    1,
    aux_sym_string_literal_token1,
    STATE(385),
    1,
    sym_comment,
    [9411] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1361),
    1,
    anon_sym_name,
    STATE(386),
    1,
    sym_comment,
    [9421] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1363),
    1,
    anon_sym_name,
    STATE(387),
    1,
    sym_comment,
    [9431] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [9441] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1367),
    1,
    sym_identifier,
    STATE(389),
    1,
    sym_comment,
    [9451] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1369),
    1,
    anon_sym_SEMI,
    STATE(390),
    1,
    sym_comment,
    [9461] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1371),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_comment,
    [9471] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1373),
    1,
    sym_identifier,
    STATE(392),
    1,
    sym_comment,
    [9481] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1375),
    1,
    anon_sym_GT,
    STATE(393),
    1,
    sym_comment,
    [9491] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1377),
    1,
    anon_sym_GT,
    STATE(394),
    1,
    sym_comment,
    [9501] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1379),
    1,
    sym_identifier,
    STATE(395),
    1,
    sym_comment,
    [9511] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1381),
    1,
    anon_sym_LBRACE,
    STATE(396),
    1,
    sym_comment,
    [9521] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1383),
    1,
    anon_sym_COLON,
    STATE(397),
    1,
    sym_comment,
    [9531] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1385),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [9541] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1387),
    1,
    sym_identifier,
    STATE(399),
    1,
    sym_comment,
    [9551] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1389),
    1,
    sym_identifier,
    STATE(400),
    1,
    sym_comment,
    [9561] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    sym_identifier,
    STATE(401),
    1,
    sym_comment,
    [9571] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1393),
    1,
    anon_sym_GT,
    STATE(402),
    1,
    sym_comment,
    [9581] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    sym_identifier,
    STATE(403),
    1,
    sym_comment,
    [9591] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1395),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [9601] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1397),
    1,
    anon_sym_SEMI,
    STATE(405),
    1,
    sym_comment,
    [9611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1399),
    1,
    sym_identifier,
    STATE(406),
    1,
    sym_comment,
    [9621] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_LT,
    STATE(407),
    1,
    sym_comment,
    [9631] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(119),
    1,
    anon_sym_RBRACE,
    STATE(408),
    1,
    sym_comment,
    [9641] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1403),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [9651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1405),
    1,
    sym_identifier,
    STATE(410),
    1,
    sym_comment,
    [9661] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1407),
    1,
    sym_identifier,
    STATE(411),
    1,
    sym_comment,
    [9671] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1409),
    1,
    anon_sym_COLON,
    STATE(412),
    1,
    sym_comment,
    [9681] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1411),
    1,
    sym_identifier,
    STATE(413),
    1,
    sym_comment,
    [9691] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1413),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [9701] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(415),
    1,
    sym_comment,
    [9711] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1417),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(416),
    1,
    sym_comment,
    [9721] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1419),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [9731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1421),
    1,
    anon_sym_LBRACE,
    STATE(418),
    1,
    sym_comment,
    [9741] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1423),
    1,
    anon_sym_LBRACE,
    STATE(419),
    1,
    sym_comment,
    [9751] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1425),
    1,
    anon_sym_SEMI,
    STATE(420),
    1,
    sym_comment,
    [9761] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1427),
    1,
    sym_identifier,
    STATE(421),
    1,
    sym_comment,
    [9771] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    sym_identifier,
    STATE(422),
    1,
    sym_comment,
    [9781] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1429),
    1,
    anon_sym_SEMI,
    STATE(423),
    1,
    sym_comment,
    [9791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(121),
    1,
    anon_sym_RBRACE,
    STATE(424),
    1,
    sym_comment,
    [9801] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1431),
    1,
    anon_sym_SEMI,
    STATE(425),
    1,
    sym_comment,
    [9811] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1433),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [9821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1435),
    1,
    anon_sym_attribute,
    STATE(427),
    1,
    sym_comment,
    [9831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1437),
    1,
    sym_identifier,
    STATE(428),
    1,
    sym_comment,
    [9841] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1439),
    1,
    anon_sym_SEMI,
    STATE(429),
    1,
    sym_comment,
    [9851] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1441),
    1,
    anon_sym_SEMI,
    STATE(430),
    1,
    sym_comment,
    [9861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1443),
    1,
    anon_sym_EQ,
    STATE(431),
    1,
    sym_comment,
    [9871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1445),
    1,
    anon_sym_EQ,
    STATE(432),
    1,
    sym_comment,
    [9881] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1447),
    1,
    anon_sym_EQ,
    STATE(433),
    1,
    sym_comment,
    [9891] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1449),
    1,
    anon_sym_SEMI,
    STATE(434),
    1,
    sym_comment,
    [9901] = 1,
    ACTIONS(1451),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(19)] = 0,
    [SMALL_STATE(20)] = 143,
    [SMALL_STATE(21)] = 284,
    [SMALL_STATE(22)] = 423,
    [SMALL_STATE(23)] = 564,
    [SMALL_STATE(24)] = 693,
    [SMALL_STATE(25)] = 818,
    [SMALL_STATE(26)] = 948,
    [SMALL_STATE(27)] = 1067,
    [SMALL_STATE(28)] = 1186,
    [SMALL_STATE(29)] = 1305,
    [SMALL_STATE(30)] = 1424,
    [SMALL_STATE(31)] = 1543,
    [SMALL_STATE(32)] = 1663,
    [SMALL_STATE(33)] = 1784,
    [SMALL_STATE(34)] = 1905,
    [SMALL_STATE(35)] = 2026,
    [SMALL_STATE(36)] = 2147,
    [SMALL_STATE(37)] = 2203,
    [SMALL_STATE(38)] = 2259,
    [SMALL_STATE(39)] = 2361,
    [SMALL_STATE(40)] = 2423,
    [SMALL_STATE(41)] = 2472,
    [SMALL_STATE(42)] = 2521,
    [SMALL_STATE(43)] = 2570,
    [SMALL_STATE(44)] = 2619,
    [SMALL_STATE(45)] = 2668,
    [SMALL_STATE(46)] = 2716,
    [SMALL_STATE(47)] = 2764,
    [SMALL_STATE(48)] = 2812,
    [SMALL_STATE(49)] = 2860,
    [SMALL_STATE(50)] = 2904,
    [SMALL_STATE(51)] = 2948,
    [SMALL_STATE(52)] = 2992,
    [SMALL_STATE(53)] = 3036,
    [SMALL_STATE(54)] = 3080,
    [SMALL_STATE(55)] = 3123,
    [SMALL_STATE(56)] = 3166,
    [SMALL_STATE(57)] = 3246,
    [SMALL_STATE(58)] = 3286,
    [SMALL_STATE(59)] = 3366,
    [SMALL_STATE(60)] = 3446,
    [SMALL_STATE(61)] = 3526,
    [SMALL_STATE(62)] = 3606,
    [SMALL_STATE(63)] = 3686,
    [SMALL_STATE(64)] = 3766,
    [SMALL_STATE(65)] = 3846,
    [SMALL_STATE(66)] = 3923,
    [SMALL_STATE(67)] = 4000,
    [SMALL_STATE(68)] = 4077,
    [SMALL_STATE(69)] = 4154,
    [SMALL_STATE(70)] = 4231,
    [SMALL_STATE(71)] = 4308,
    [SMALL_STATE(72)] = 4373,
    [SMALL_STATE(73)] = 4444,
    [SMALL_STATE(74)] = 4483,
    [SMALL_STATE(75)] = 4551,
    [SMALL_STATE(76)] = 4584,
    [SMALL_STATE(77)] = 4649,
    [SMALL_STATE(78)] = 4680,
    [SMALL_STATE(79)] = 4713,
    [SMALL_STATE(80)] = 4746,
    [SMALL_STATE(81)] = 4777,
    [SMALL_STATE(82)] = 4808,
    [SMALL_STATE(83)] = 4839,
    [SMALL_STATE(84)] = 4901,
    [SMALL_STATE(85)] = 4960,
    [SMALL_STATE(86)] = 5016,
    [SMALL_STATE(87)] = 5045,
    [SMALL_STATE(88)] = 5074,
    [SMALL_STATE(89)] = 5104,
    [SMALL_STATE(90)] = 5134,
    [SMALL_STATE(91)] = 5161,
    [SMALL_STATE(92)] = 5188,
    [SMALL_STATE(93)] = 5215,
    [SMALL_STATE(94)] = 5242,
    [SMALL_STATE(95)] = 5269,
    [SMALL_STATE(96)] = 5300,
    [SMALL_STATE(97)] = 5327,
    [SMALL_STATE(98)] = 5354,
    [SMALL_STATE(99)] = 5381,
    [SMALL_STATE(100)] = 5408,
    [SMALL_STATE(101)] = 5435,
    [SMALL_STATE(102)] = 5466,
    [SMALL_STATE(103)] = 5493,
    [SMALL_STATE(104)] = 5520,
    [SMALL_STATE(105)] = 5563,
    [SMALL_STATE(106)] = 5589,
    [SMALL_STATE(107)] = 5615,
    [SMALL_STATE(108)] = 5639,
    [SMALL_STATE(109)] = 5663,
    [SMALL_STATE(110)] = 5698,
    [SMALL_STATE(111)] = 5726,
    [SMALL_STATE(112)] = 5746,
    [SMALL_STATE(113)] = 5766,
    [SMALL_STATE(114)] = 5786,
    [SMALL_STATE(115)] = 5805,
    [SMALL_STATE(116)] = 5824,
    [SMALL_STATE(117)] = 5855,
    [SMALL_STATE(118)] = 5871,
    [SMALL_STATE(119)] = 5889,
    [SMALL_STATE(120)] = 5915,
    [SMALL_STATE(121)] = 5940,
    [SMALL_STATE(122)] = 5965,
    [SMALL_STATE(123)] = 5986,
    [SMALL_STATE(124)] = 6007,
    [SMALL_STATE(125)] = 6032,
    [SMALL_STATE(126)] = 6055,
    [SMALL_STATE(127)] = 6080,
    [SMALL_STATE(128)] = 6099,
    [SMALL_STATE(129)] = 6121,
    [SMALL_STATE(130)] = 6135,
    [SMALL_STATE(131)] = 6149,
    [SMALL_STATE(132)] = 6171,
    [SMALL_STATE(133)] = 6191,
    [SMALL_STATE(134)] = 6211,
    [SMALL_STATE(135)] = 6233,
    [SMALL_STATE(136)] = 6255,
    [SMALL_STATE(137)] = 6269,
    [SMALL_STATE(138)] = 6289,
    [SMALL_STATE(139)] = 6311,
    [SMALL_STATE(140)] = 6331,
    [SMALL_STATE(141)] = 6351,
    [SMALL_STATE(142)] = 6365,
    [SMALL_STATE(143)] = 6385,
    [SMALL_STATE(144)] = 6407,
    [SMALL_STATE(145)] = 6429,
    [SMALL_STATE(146)] = 6442,
    [SMALL_STATE(147)] = 6459,
    [SMALL_STATE(148)] = 6476,
    [SMALL_STATE(149)] = 6489,
    [SMALL_STATE(150)] = 6508,
    [SMALL_STATE(151)] = 6527,
    [SMALL_STATE(152)] = 6540,
    [SMALL_STATE(153)] = 6559,
    [SMALL_STATE(154)] = 6572,
    [SMALL_STATE(155)] = 6589,
    [SMALL_STATE(156)] = 6602,
    [SMALL_STATE(157)] = 6621,
    [SMALL_STATE(158)] = 6638,
    [SMALL_STATE(159)] = 6651,
    [SMALL_STATE(160)] = 6664,
    [SMALL_STATE(161)] = 6677,
    [SMALL_STATE(162)] = 6690,
    [SMALL_STATE(163)] = 6703,
    [SMALL_STATE(164)] = 6720,
    [SMALL_STATE(165)] = 6735,
    [SMALL_STATE(166)] = 6754,
    [SMALL_STATE(167)] = 6771,
    [SMALL_STATE(168)] = 6784,
    [SMALL_STATE(169)] = 6799,
    [SMALL_STATE(170)] = 6816,
    [SMALL_STATE(171)] = 6829,
    [SMALL_STATE(172)] = 6846,
    [SMALL_STATE(173)] = 6865,
    [SMALL_STATE(174)] = 6884,
    [SMALL_STATE(175)] = 6896,
    [SMALL_STATE(176)] = 6912,
    [SMALL_STATE(177)] = 6928,
    [SMALL_STATE(178)] = 6944,
    [SMALL_STATE(179)] = 6960,
    [SMALL_STATE(180)] = 6976,
    [SMALL_STATE(181)] = 6988,
    [SMALL_STATE(182)] = 7000,
    [SMALL_STATE(183)] = 7016,
    [SMALL_STATE(184)] = 7032,
    [SMALL_STATE(185)] = 7046,
    [SMALL_STATE(186)] = 7060,
    [SMALL_STATE(187)] = 7076,
    [SMALL_STATE(188)] = 7092,
    [SMALL_STATE(189)] = 7104,
    [SMALL_STATE(190)] = 7116,
    [SMALL_STATE(191)] = 7130,
    [SMALL_STATE(192)] = 7144,
    [SMALL_STATE(193)] = 7156,
    [SMALL_STATE(194)] = 7170,
    [SMALL_STATE(195)] = 7182,
    [SMALL_STATE(196)] = 7198,
    [SMALL_STATE(197)] = 7214,
    [SMALL_STATE(198)] = 7230,
    [SMALL_STATE(199)] = 7246,
    [SMALL_STATE(200)] = 7258,
    [SMALL_STATE(201)] = 7270,
    [SMALL_STATE(202)] = 7282,
    [SMALL_STATE(203)] = 7294,
    [SMALL_STATE(204)] = 7310,
    [SMALL_STATE(205)] = 7326,
    [SMALL_STATE(206)] = 7338,
    [SMALL_STATE(207)] = 7350,
    [SMALL_STATE(208)] = 7362,
    [SMALL_STATE(209)] = 7378,
    [SMALL_STATE(210)] = 7390,
    [SMALL_STATE(211)] = 7406,
    [SMALL_STATE(212)] = 7418,
    [SMALL_STATE(213)] = 7434,
    [SMALL_STATE(214)] = 7448,
    [SMALL_STATE(215)] = 7464,
    [SMALL_STATE(216)] = 7476,
    [SMALL_STATE(217)] = 7488,
    [SMALL_STATE(218)] = 7502,
    [SMALL_STATE(219)] = 7518,
    [SMALL_STATE(220)] = 7534,
    [SMALL_STATE(221)] = 7548,
    [SMALL_STATE(222)] = 7564,
    [SMALL_STATE(223)] = 7578,
    [SMALL_STATE(224)] = 7594,
    [SMALL_STATE(225)] = 7606,
    [SMALL_STATE(226)] = 7620,
    [SMALL_STATE(227)] = 7636,
    [SMALL_STATE(228)] = 7652,
    [SMALL_STATE(229)] = 7668,
    [SMALL_STATE(230)] = 7680,
    [SMALL_STATE(231)] = 7696,
    [SMALL_STATE(232)] = 7712,
    [SMALL_STATE(233)] = 7728,
    [SMALL_STATE(234)] = 7742,
    [SMALL_STATE(235)] = 7758,
    [SMALL_STATE(236)] = 7774,
    [SMALL_STATE(237)] = 7790,
    [SMALL_STATE(238)] = 7806,
    [SMALL_STATE(239)] = 7822,
    [SMALL_STATE(240)] = 7834,
    [SMALL_STATE(241)] = 7848,
    [SMALL_STATE(242)] = 7864,
    [SMALL_STATE(243)] = 7876,
    [SMALL_STATE(244)] = 7887,
    [SMALL_STATE(245)] = 7898,
    [SMALL_STATE(246)] = 7909,
    [SMALL_STATE(247)] = 7922,
    [SMALL_STATE(248)] = 7933,
    [SMALL_STATE(249)] = 7944,
    [SMALL_STATE(250)] = 7955,
    [SMALL_STATE(251)] = 7966,
    [SMALL_STATE(252)] = 7977,
    [SMALL_STATE(253)] = 7988,
    [SMALL_STATE(254)] = 8001,
    [SMALL_STATE(255)] = 8012,
    [SMALL_STATE(256)] = 8025,
    [SMALL_STATE(257)] = 8036,
    [SMALL_STATE(258)] = 8047,
    [SMALL_STATE(259)] = 8060,
    [SMALL_STATE(260)] = 8073,
    [SMALL_STATE(261)] = 8084,
    [SMALL_STATE(262)] = 8097,
    [SMALL_STATE(263)] = 8110,
    [SMALL_STATE(264)] = 8123,
    [SMALL_STATE(265)] = 8134,
    [SMALL_STATE(266)] = 8147,
    [SMALL_STATE(267)] = 8158,
    [SMALL_STATE(268)] = 8169,
    [SMALL_STATE(269)] = 8180,
    [SMALL_STATE(270)] = 8191,
    [SMALL_STATE(271)] = 8204,
    [SMALL_STATE(272)] = 8217,
    [SMALL_STATE(273)] = 8228,
    [SMALL_STATE(274)] = 8241,
    [SMALL_STATE(275)] = 8254,
    [SMALL_STATE(276)] = 8265,
    [SMALL_STATE(277)] = 8276,
    [SMALL_STATE(278)] = 8287,
    [SMALL_STATE(279)] = 8300,
    [SMALL_STATE(280)] = 8313,
    [SMALL_STATE(281)] = 8324,
    [SMALL_STATE(282)] = 8335,
    [SMALL_STATE(283)] = 8346,
    [SMALL_STATE(284)] = 8359,
    [SMALL_STATE(285)] = 8370,
    [SMALL_STATE(286)] = 8381,
    [SMALL_STATE(287)] = 8392,
    [SMALL_STATE(288)] = 8403,
    [SMALL_STATE(289)] = 8414,
    [SMALL_STATE(290)] = 8425,
    [SMALL_STATE(291)] = 8436,
    [SMALL_STATE(292)] = 8449,
    [SMALL_STATE(293)] = 8460,
    [SMALL_STATE(294)] = 8471,
    [SMALL_STATE(295)] = 8484,
    [SMALL_STATE(296)] = 8495,
    [SMALL_STATE(297)] = 8508,
    [SMALL_STATE(298)] = 8519,
    [SMALL_STATE(299)] = 8530,
    [SMALL_STATE(300)] = 8543,
    [SMALL_STATE(301)] = 8554,
    [SMALL_STATE(302)] = 8565,
    [SMALL_STATE(303)] = 8576,
    [SMALL_STATE(304)] = 8587,
    [SMALL_STATE(305)] = 8600,
    [SMALL_STATE(306)] = 8611,
    [SMALL_STATE(307)] = 8621,
    [SMALL_STATE(308)] = 8631,
    [SMALL_STATE(309)] = 8641,
    [SMALL_STATE(310)] = 8651,
    [SMALL_STATE(311)] = 8661,
    [SMALL_STATE(312)] = 8671,
    [SMALL_STATE(313)] = 8681,
    [SMALL_STATE(314)] = 8691,
    [SMALL_STATE(315)] = 8701,
    [SMALL_STATE(316)] = 8711,
    [SMALL_STATE(317)] = 8721,
    [SMALL_STATE(318)] = 8731,
    [SMALL_STATE(319)] = 8741,
    [SMALL_STATE(320)] = 8751,
    [SMALL_STATE(321)] = 8761,
    [SMALL_STATE(322)] = 8771,
    [SMALL_STATE(323)] = 8781,
    [SMALL_STATE(324)] = 8791,
    [SMALL_STATE(325)] = 8801,
    [SMALL_STATE(326)] = 8811,
    [SMALL_STATE(327)] = 8821,
    [SMALL_STATE(328)] = 8831,
    [SMALL_STATE(329)] = 8841,
    [SMALL_STATE(330)] = 8851,
    [SMALL_STATE(331)] = 8861,
    [SMALL_STATE(332)] = 8871,
    [SMALL_STATE(333)] = 8881,
    [SMALL_STATE(334)] = 8891,
    [SMALL_STATE(335)] = 8901,
    [SMALL_STATE(336)] = 8911,
    [SMALL_STATE(337)] = 8921,
    [SMALL_STATE(338)] = 8931,
    [SMALL_STATE(339)] = 8941,
    [SMALL_STATE(340)] = 8951,
    [SMALL_STATE(341)] = 8961,
    [SMALL_STATE(342)] = 8971,
    [SMALL_STATE(343)] = 8981,
    [SMALL_STATE(344)] = 8991,
    [SMALL_STATE(345)] = 9001,
    [SMALL_STATE(346)] = 9011,
    [SMALL_STATE(347)] = 9021,
    [SMALL_STATE(348)] = 9031,
    [SMALL_STATE(349)] = 9041,
    [SMALL_STATE(350)] = 9051,
    [SMALL_STATE(351)] = 9061,
    [SMALL_STATE(352)] = 9071,
    [SMALL_STATE(353)] = 9081,
    [SMALL_STATE(354)] = 9091,
    [SMALL_STATE(355)] = 9101,
    [SMALL_STATE(356)] = 9111,
    [SMALL_STATE(357)] = 9121,
    [SMALL_STATE(358)] = 9131,
    [SMALL_STATE(359)] = 9141,
    [SMALL_STATE(360)] = 9151,
    [SMALL_STATE(361)] = 9161,
    [SMALL_STATE(362)] = 9171,
    [SMALL_STATE(363)] = 9181,
    [SMALL_STATE(364)] = 9191,
    [SMALL_STATE(365)] = 9201,
    [SMALL_STATE(366)] = 9211,
    [SMALL_STATE(367)] = 9221,
    [SMALL_STATE(368)] = 9231,
    [SMALL_STATE(369)] = 9241,
    [SMALL_STATE(370)] = 9251,
    [SMALL_STATE(371)] = 9261,
    [SMALL_STATE(372)] = 9271,
    [SMALL_STATE(373)] = 9281,
    [SMALL_STATE(374)] = 9291,
    [SMALL_STATE(375)] = 9301,
    [SMALL_STATE(376)] = 9311,
    [SMALL_STATE(377)] = 9321,
    [SMALL_STATE(378)] = 9331,
    [SMALL_STATE(379)] = 9341,
    [SMALL_STATE(380)] = 9351,
    [SMALL_STATE(381)] = 9361,
    [SMALL_STATE(382)] = 9371,
    [SMALL_STATE(383)] = 9381,
    [SMALL_STATE(384)] = 9391,
    [SMALL_STATE(385)] = 9401,
    [SMALL_STATE(386)] = 9411,
    [SMALL_STATE(387)] = 9421,
    [SMALL_STATE(388)] = 9431,
    [SMALL_STATE(389)] = 9441,
    [SMALL_STATE(390)] = 9451,
    [SMALL_STATE(391)] = 9461,
    [SMALL_STATE(392)] = 9471,
    [SMALL_STATE(393)] = 9481,
    [SMALL_STATE(394)] = 9491,
    [SMALL_STATE(395)] = 9501,
    [SMALL_STATE(396)] = 9511,
    [SMALL_STATE(397)] = 9521,
    [SMALL_STATE(398)] = 9531,
    [SMALL_STATE(399)] = 9541,
    [SMALL_STATE(400)] = 9551,
    [SMALL_STATE(401)] = 9561,
    [SMALL_STATE(402)] = 9571,
    [SMALL_STATE(403)] = 9581,
    [SMALL_STATE(404)] = 9591,
    [SMALL_STATE(405)] = 9601,
    [SMALL_STATE(406)] = 9611,
    [SMALL_STATE(407)] = 9621,
    [SMALL_STATE(408)] = 9631,
    [SMALL_STATE(409)] = 9641,
    [SMALL_STATE(410)] = 9651,
    [SMALL_STATE(411)] = 9661,
    [SMALL_STATE(412)] = 9671,
    [SMALL_STATE(413)] = 9681,
    [SMALL_STATE(414)] = 9691,
    [SMALL_STATE(415)] = 9701,
    [SMALL_STATE(416)] = 9711,
    [SMALL_STATE(417)] = 9721,
    [SMALL_STATE(418)] = 9731,
    [SMALL_STATE(419)] = 9741,
    [SMALL_STATE(420)] = 9751,
    [SMALL_STATE(421)] = 9761,
    [SMALL_STATE(422)] = 9771,
    [SMALL_STATE(423)] = 9781,
    [SMALL_STATE(424)] = 9791,
    [SMALL_STATE(425)] = 9801,
    [SMALL_STATE(426)] = 9811,
    [SMALL_STATE(427)] = 9821,
    [SMALL_STATE(428)] = 9831,
    [SMALL_STATE(429)] = 9841,
    [SMALL_STATE(430)] = 9851,
    [SMALL_STATE(431)] = 9861,
    [SMALL_STATE(432)] = 9871,
    [SMALL_STATE(433)] = 9881,
    [SMALL_STATE(434)] = 9891,
    [SMALL_STATE(435)] = 9901,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(299),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(360),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(155),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(229),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(354),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(161),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(215),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(162),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(411),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(428),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(427),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(28),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(395),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(392),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(258),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(370),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(369),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(361),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(87),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(148),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(151),
    [129] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(153),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(153),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(155),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(229),
    [141] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(354),
    [144] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(158),
    [147] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(159),
    [150] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(159),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(160),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(161),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(161),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(215),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(215),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(162),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(363),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(168),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(202),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(377),
    [183] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(378),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(411),
    [189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [191] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(428),
    [194] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(427),
    [197] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(28),
    [200] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(395),
    [203] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(392),
    [206] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(258),
    [209] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(370),
    [212] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(369),
    [215] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(364),
    [218] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(361),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(7),
    [224] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(38),
    [227] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(239),
    [230] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(330),
    [233] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(87),
    [236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [260] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(148),
    [263] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(151),
    [266] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [269] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [272] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(155),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(229),
    [278] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(354),
    [281] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(158),
    [284] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [293] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(161),
    [296] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(161),
    [299] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(215),
    [302] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(215),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(162),
    [308] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(363),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(168),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(377),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(378),
    [323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [325] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(45),
    [328] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(416),
    [331] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(415),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(87),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [339] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(388),
    [341] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(389),
    [343] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(406),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [347] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(148),
    [350] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(151),
    [353] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [356] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [359] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(155),
    [362] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(388),
    [365] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(389),
    [368] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(158),
    [371] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [374] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [377] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [380] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(161),
    [383] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(161),
    [386] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(215),
    [389] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(215),
    [392] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(162),
    [395] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(363),
    [398] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(168),
    [401] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(406),
    [404] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(377),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    [409] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(369),
    [412] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(364),
    [415] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(7),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(38),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(87),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [426] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [428] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [434] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [436] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [440] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [442] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(411),
    [445] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(400),
    [448] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(278),
    [451] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(395),
    [454] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(392),
    [457] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(391),
    [460] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(258),
    [463] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(307),
    [466] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(370),
    [469] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(369),
    [472] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(364),
    [475] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(361),
    [478] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(7),
    [481] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(360),
    [484] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(136),
    [487] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(355),
    [490] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(351),
    [493] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(38),
    [496] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(239),
    [499] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(330),
    [502] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [504] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [506] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [510] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [512] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [514] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [516] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [518] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [520] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [522] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(45),
    [525] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(416),
    [528] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(415),
    [531] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [533] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [535] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [539] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [543] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [547] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [551] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [555] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [559] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [563] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [567] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1),
    [569] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [571] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [573] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [575] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [579] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [583] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2),
    [585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2),
    [587] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [591] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [595] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(347),
    [597] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [599] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [601] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(112),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [607] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(265),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [613] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [615] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [631] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(299),
    [634] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [638] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [644] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [648] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [656] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [660] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [664] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [670] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [672] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [674] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [678] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [682] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [684] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [686] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [688] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [690] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [696] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [698] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [702] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [706] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [708] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [710] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [714] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [718] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [722] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [726] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [728] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [730] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [732] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [734] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [738] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [744] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [746] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [748] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [750] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [754] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(136),
    [757] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(355),
    [760] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(351),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [769] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [795] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [803] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [819] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(397),
    [822] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(68),
    [825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [829] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(59),
    [832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [834] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [838] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [840] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [842] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [848] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [854] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(239),
    [857] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(330),
    [860] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [862] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(407),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [877] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [885] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [889] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [893] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [897] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [901] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [903] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [913] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [915] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(190),
    [918] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(190),
    [921] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(147),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [934] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(268),
    [937] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [941] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [945] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [953] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [959] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [963] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(350),
    [965] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [979] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(263),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [992] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [994] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(196),
    [997] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1021] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [1031] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(128),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1042] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(247),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [1053] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(166),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1058] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(156),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1065] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(133),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [1096] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(253),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1107] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(309),
    [1203] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(310),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1225] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(435),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1317] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1451] = { .entry = { .count = 1, .reusable = true } },
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
