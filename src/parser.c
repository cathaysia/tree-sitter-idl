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
#define STATE_COUNT 459
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 233
#define ALIAS_COUNT 3
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
    anon_sym_SEMI = 1,
    anon_sym_exception = 2,
    anon_sym_LBRACE = 3,
    anon_sym_RBRACE = 4,
    anon_sym_native = 5,
    anon_sym_module = 6,
    anon_sym_struct = 7,
    anon_sym_COLON = 8,
    anon_sym_PIPE = 9,
    anon_sym_CARET = 10,
    anon_sym_DOLLAR = 11,
    anon_sym_GT_GT = 12,
    anon_sym_LT_LT = 13,
    anon_sym_PLUS = 14,
    anon_sym_DASH = 15,
    anon_sym_STAR = 16,
    anon_sym_SLASH = 17,
    anon_sym_PERCENT = 18,
    anon_sym_TILDE = 19,
    anon_sym_LPAREN = 20,
    anon_sym_RPAREN = 21,
    anon_sym_SQUOTE = 22,
    aux_sym_char_literal_token1 = 23,
    anon_sym_L = 24,
    anon_sym_default = 25,
    anon_sym_enum = 26,
    anon_sym_COMMA = 27,
    anon_sym_ATdefault_literal = 28,
    anon_sym_ATignore_literal_names = 29,
    anon_sym_ATannotation = 30,
    sym_any_const_type = 31,
    anon_sym_AT = 32,
    anon_sym_LBRACK = 33,
    anon_sym_RBRACK = 34,
    anon_sym_EQ = 35,
    anon_sym_union = 36,
    anon_sym_switch = 37,
    anon_sym_case = 38,
    anon_sym_bitset = 39,
    anon_sym_bitfield = 40,
    anon_sym_LT = 41,
    anon_sym_GT = 42,
    anon_sym_bitmask = 43,
    anon_sym_typedef = 44,
    anon_sym_POUNDdefine = 45,
    aux_sym_predefine_token1 = 46,
    anon_sym_interface = 47,
    anon_sym_local = 48,
    anon_sym_void = 49,
    anon_sym_in = 50,
    anon_sym_out = 51,
    anon_sym_inout = 52,
    anon_sym_raises = 53,
    anon_sym_readonly = 54,
    anon_sym_attribute = 55,
    anon_sym_getraises = 56,
    anon_sym_setraises = 57,
    sym_dds_service = 58,
    anon_sym_ATDDSRequestTopic = 59,
    anon_sym_name = 60,
    anon_sym_ATDDSReplyTopic = 61,
    anon_sym_const = 62,
    sym_number_literal = 63,
    sym_optional = 64,
    sym_key = 65,
    sym_must_understand = 66,
    sym_non_serialized = 67,
    sym_id = 68,
    sym_external = 69,
    anon_sym_AThashid = 70,
    anon_sym_LPAREN_DQUOTE = 71,
    anon_sym_DQUOTE = 72,
    anon_sym_ATtry_construct = 73,
    sym_final = 74,
    anon_sym_ATdata_representation = 75,
    anon_sym_XCDR = 76,
    anon_sym_XCDR2 = 77,
    sym_boolean_type = 78,
    sym_octet_type = 79,
    anon_sym_float = 80,
    anon_sym_double = 81,
    anon_sym_short = 82,
    anon_sym_long = 83,
    anon_sym_longdouble = 84,
    anon_sym_unsignedshort = 85,
    anon_sym_longlong = 86,
    anon_sym_unsignedlong = 87,
    anon_sym_unsignedlonglong = 88,
    anon_sym_int = 89,
    anon_sym_int8 = 90,
    anon_sym_int16 = 91,
    anon_sym_int32 = 92,
    anon_sym_int64 = 93,
    anon_sym_uint8 = 94,
    anon_sym_uint16 = 95,
    anon_sym_uint32 = 96,
    anon_sym_uint64 = 97,
    anon_sym_float32 = 98,
    anon_sym_float64 = 99,
    anon_sym_float128 = 100,
    anon_sym_char = 101,
    anon_sym_wchar = 102,
    anon_sym_byte = 103,
    anon_sym_char8 = 104,
    anon_sym_char16 = 105,
    anon_sym_COLON_COLON = 106,
    sym_identifier = 107,
    anon_sym_sequence = 108,
    anon_sym_string = 109,
    anon_sym_wstring = 110,
    anon_sym_fixed = 111,
    anon_sym_map = 112,
    anon_sym_SLASH_SLASH = 113,
    aux_sym_comment_token1 = 114,
    sym__eof = 115,
    sym_specification = 116,
    sym__definition = 117,
    sym_except_dcl = 118,
    sym_native_dcl = 119,
    sym_module_dcl = 120,
    sym_struct_forward_dcl = 121,
    sym_struct_def = 122,
    sym_member = 123,
    sym_or_expr = 124,
    sym_xor_expr = 125,
    sym_and_expr = 126,
    sym_shift_expr = 127,
    sym_add_expr = 128,
    sym_mult_expr = 129,
    sym_unary_expr = 130,
    sym_unary_operator = 131,
    sym_char_literal = 132,
    sym_wchar_literal = 133,
    sym_literal = 134,
    sym_default = 135,
    sym_enum_dcl = 136,
    sym_enumerator = 137,
    sym_enum_modifier = 138,
    sym_enum_anno = 139,
    sym_annotation_dcl = 140,
    sym_annotation_body = 141,
    sym_annotation_member = 142,
    sym_annotation_member_type = 143,
    sym_union_forward_dcl = 144,
    sym_union_def = 145,
    sym_case = 146,
    sym_case_label = 147,
    sym_element_spec = 148,
    sym_switch_type_spec = 149,
    sym_bitset_dcl = 150,
    sym_bitfield = 151,
    sym_bitfield_spec = 152,
    sym_destination_type = 153,
    sym_bitmask_dcl = 154,
    sym_bit_value = 155,
    sym_typedef_dcl = 156,
    sym_predefine = 157,
    sym_interface_dcl = 158,
    sym_interface_forward_dcl = 159,
    sym_interface_def = 160,
    sym_interface_header = 161,
    sym_interface_inheritance_spec = 162,
    sym_interface_name = 163,
    sym_interface_body = 164,
    sym_export = 165,
    sym_op_dcl = 166,
    sym_op_type_spec = 167,
    sym_parameter_dcls = 168,
    sym_param_dcl = 169,
    sym_param_attribute = 170,
    sym_raises_expr = 171,
    sym_attr_dcl = 172,
    sym_readonly_attr_spec = 173,
    sym_readonly_attr_declarator = 174,
    sym_attr_spec = 175,
    sym_attr_declarator = 176,
    sym_attr_raises_expr = 177,
    sym_get_excep_expr = 178,
    sym_set_excep_expr = 179,
    sym_exception_list = 180,
    sym_dds_request_topic = 181,
    sym_dds_reply_topic = 182,
    sym_interface_anno = 183,
    sym_const_dcl = 184,
    sym_const_type = 185,
    sym_const_expr = 186,
    sym_hashid = 187,
    sym_try_construct = 188,
    sym_data_representation = 189,
    sym_struct_modifier = 190,
    sym_integer_type = 191,
    sym_primitive_type = 192,
    sym_scoped_name = 193,
    sym_simple_type_spec = 194,
    sym_type_spec = 195,
    sym_simple_declarator = 196,
    sym_declarator = 197,
    sym_declarators = 198,
    sym_array_declarator = 199,
    sym_positive_int_const = 200,
    sym_fixed_array_size = 201,
    sym_sequence_type = 202,
    sym_string_type = 203,
    sym_fixed_pt_type = 204,
    sym_template_type_spec = 205,
    sym_map_type = 206,
    sym_type_declarator = 207,
    sym_any_declarators = 208,
    sym_any_declarator = 209,
    sym_comment = 210,
    aux_sym_specification_repeat1 = 211,
    aux_sym_except_dcl_repeat1 = 212,
    aux_sym_struct_def_repeat1 = 213,
    aux_sym_member_repeat1 = 214,
    aux_sym_enum_dcl_repeat1 = 215,
    aux_sym_enumerator_repeat1 = 216,
    aux_sym_annotation_body_repeat1 = 217,
    aux_sym_union_def_repeat1 = 218,
    aux_sym_bitset_dcl_repeat1 = 219,
    aux_sym_bitfield_repeat1 = 220,
    aux_sym_bitmask_dcl_repeat1 = 221,
    aux_sym_interface_def_repeat1 = 222,
    aux_sym_interface_inheritance_spec_repeat1 = 223,
    aux_sym_interface_body_repeat1 = 224,
    aux_sym_parameter_dcls_repeat1 = 225,
    aux_sym_raises_expr_repeat1 = 226,
    aux_sym_readonly_attr_declarator_repeat1 = 227,
    aux_sym_attr_raises_expr_repeat1 = 228,
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
    [anon_sym_SEMI] = ";",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_COLON] = ":",
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
    [anon_sym_TILDE] = "~",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_L] = "L",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_COMMA] = ",",
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
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
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
    [sym_number_literal] = "number_literal",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_DQUOTE] = "\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [sym_final] = "final",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [sym_boolean_type] = "boolean_type",
    [sym_octet_type] = "octet_type",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_short] = "short",
    [anon_sym_long] = "long",
    [anon_sym_longdouble] = "long double",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_longlong] = "long long",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_int] = "int",
    [anon_sym_int8] = "int8",
    [anon_sym_int16] = "int16",
    [anon_sym_int32] = "int32",
    [anon_sym_int64] = "int64",
    [anon_sym_uint8] = "uint8",
    [anon_sym_uint16] = "uint16",
    [anon_sym_uint32] = "uint32",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float32] = "float32",
    [anon_sym_float64] = "float64",
    [anon_sym_float128] = "float128",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_byte] = "byte",
    [anon_sym_char8] = "char8",
    [anon_sym_char16] = "char16",
    [anon_sym_COLON_COLON] = "::",
    [sym_identifier] = "identifier",
    [anon_sym_sequence] = "sequence",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_fixed] = "fixed",
    [anon_sym_map] = "map",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym__definition] = "_definition",
    [sym_except_dcl] = "except_dcl",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_or_expr] = "or_expr",
    [sym_xor_expr] = "xor_expr",
    [sym_and_expr] = "and_expr",
    [sym_shift_expr] = "shift_expr",
    [sym_add_expr] = "add_expr",
    [sym_mult_expr] = "mult_expr",
    [sym_unary_expr] = "unary_expr",
    [sym_unary_operator] = "unary_operator",
    [sym_char_literal] = "char_literal",
    [sym_wchar_literal] = "wchar_literal",
    [sym_literal] = "literal",
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
    [sym_const_expr] = "const_expr",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_integer_type] = "integer_type",
    [sym_primitive_type] = "primitive_type",
    [sym_scoped_name] = "scoped_name",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_type_spec] = "type_spec",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_sequence_type] = "sequence_type",
    [sym_string_type] = "string_type",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_map_type] = "map_type",
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
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_COLON] = anon_sym_COLON,
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
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_COMMA] = anon_sym_COMMA,
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
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
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
    [sym_number_literal] = sym_number_literal,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [sym_final] = sym_final,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [sym_boolean_type] = sym_boolean_type,
    [sym_octet_type] = sym_octet_type,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_int] = anon_sym_int,
    [anon_sym_int8] = anon_sym_int8,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_int64] = anon_sym_int64,
    [anon_sym_uint8] = anon_sym_uint8,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float32] = anon_sym_float32,
    [anon_sym_float64] = anon_sym_float64,
    [anon_sym_float128] = anon_sym_float128,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_byte] = anon_sym_byte,
    [anon_sym_char8] = anon_sym_char8,
    [anon_sym_char16] = anon_sym_char16,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [sym_identifier] = sym_identifier,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_fixed] = anon_sym_fixed,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym__definition] = sym__definition,
    [sym_except_dcl] = sym_except_dcl,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_or_expr] = sym_or_expr,
    [sym_xor_expr] = sym_xor_expr,
    [sym_and_expr] = sym_and_expr,
    [sym_shift_expr] = sym_shift_expr,
    [sym_add_expr] = sym_add_expr,
    [sym_mult_expr] = sym_mult_expr,
    [sym_unary_expr] = sym_unary_expr,
    [sym_unary_operator] = sym_unary_operator,
    [sym_char_literal] = sym_char_literal,
    [sym_wchar_literal] = sym_wchar_literal,
    [sym_literal] = sym_literal,
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
    [sym_const_expr] = sym_const_expr,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_integer_type] = sym_integer_type,
    [sym_primitive_type] = sym_primitive_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_sequence_type] = sym_sequence_type,
    [sym_string_type] = sym_string_type,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_map_type] = sym_map_type,
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
    [anon_sym_TILDE] = {
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
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_L] = {
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
    [anon_sym_COMMA] = {
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
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
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
    [sym_number_literal] = {
        .visible = true,
        .named = true,
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
    [anon_sym_DQUOTE] = {
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
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [sym_octet_type] = {
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
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedshort] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint8] = {
        .visible = true,
        .named = false,
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
    [anon_sym_float32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float128] = {
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
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_sequence] = {
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
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_map] = {
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
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_wchar_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
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
    [sym_const_expr] = {
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
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_primitive_type] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
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
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
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
    [sym_map_type] = {
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
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 43,
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
    [70] = 61,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 74,
    [76] = 76,
    [77] = 76,
    [78] = 78,
    [79] = 78,
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
    [93] = 89,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 97,
    [99] = 99,
    [100] = 99,
    [101] = 101,
    [102] = 102,
    [103] = 84,
    [104] = 86,
    [105] = 88,
    [106] = 87,
    [107] = 95,
    [108] = 96,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 112,
    [114] = 114,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 102,
    [119] = 119,
    [120] = 101,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 110,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 127,
    [133] = 131,
    [134] = 109,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 84,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 86,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 116,
    [163] = 115,
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
    [245] = 225,
    [246] = 216,
    [247] = 247,
    [248] = 239,
    [249] = 119,
    [250] = 250,
    [251] = 251,
    [252] = 228,
    [253] = 253,
    [254] = 121,
    [255] = 255,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 124,
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
    [409] = 236,
    [410] = 410,
    [411] = 411,
    [412] = 412,
    [413] = 413,
    [414] = 414,
    [415] = 415,
    [416] = 305,
    [417] = 417,
    [418] = 288,
    [419] = 419,
    [420] = 284,
    [421] = 303,
    [422] = 422,
    [423] = 423,
    [424] = 415,
    [425] = 425,
    [426] = 426,
    [427] = 427,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 428,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 415,
    [445] = 423,
    [446] = 375,
    [447] = 372,
    [448] = 448,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 450,
    [455] = 400,
    [456] = 394,
    [457] = 457,
    [458] = 458,
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
                ADVANCE(454);
            if(lookahead == '"')
                ADVANCE(573);
            if(lookahead == '#')
                ADVANCE(132);
            if(lookahead == '$')
                ADVANCE(466);
            if(lookahead == '%')
                ADVANCE(475);
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(473);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '/')
                ADVANCE(474);
            if(lookahead == '0')
                ADVANCE(542);
            if(lookahead == ':')
                ADVANCE(463);
            if(lookahead == ';')
                ADVANCE(455);
            if(lookahead == '<')
                ADVANCE(505);
            if(lookahead == '=')
                ADVANCE(496);
            if(lookahead == '>')
                ADVANCE(507);
            if(lookahead == '@')
                ADVANCE(493);
            if(lookahead == 'L')
                ADVANCE(482);
            if(lookahead == 'X')
                ADVANCE(60);
            if(lookahead == '[')
                ADVANCE(494);
            if(lookahead == '\\')
                SKIP(450)
            if(lookahead == ']')
                ADVANCE(495);
            if(lookahead == '^')
                ADVANCE(465);
            if(lookahead == 'a')
                ADVANCE(272);
            if(lookahead == 'b')
                ADVANCE(209);
            if(lookahead == 'c')
                ADVANCE(76);
            if(lookahead == 'd')
                ADVANCE(140);
            if(lookahead == 'e')
                ADVANCE(274);
            if(lookahead == 'f')
                ADVANCE(206);
            if(lookahead == 'g')
                ADVANCE(178);
            if(lookahead == 'i')
                ADVANCE(265);
            if(lookahead == 'l')
                ADVANCE(301);
            if(lookahead == 'm')
                ADVANCE(77);
            if(lookahead == 'n')
                ADVANCE(78);
            if(lookahead == 'o')
                ADVANCE(114);
            if(lookahead == 'r')
                ADVANCE(79);
            if(lookahead == 's')
                ADVANCE(141);
            if(lookahead == 't')
                ADVANCE(439);
            if(lookahead == 'u')
                ADVANCE(212);
            if(lookahead == 'v')
                ADVANCE(306);
            if(lookahead == 'w')
                ADVANCE(109);
            if(lookahead == '{')
                ADVANCE(457);
            if(lookahead == '|')
                ADVANCE(464);
            if(lookahead == '}')
                ADVANCE(458);
            if(lookahead == '~')
                ADVANCE(476);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(34)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(34)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(38)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(38)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(32)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(32)
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
                SKIP(30)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(31)
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
                SKIP(43)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                ADVANCE(774);
            if(lookahead == '\r')
                ADVANCE(773);
            if(lookahead == '\\')
                ADVANCE(777);
            if(lookahead != 0)
                ADVANCE(776);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(26)
            END_STATE();
        case 28:
            if(lookahead == ' ')
                ADVANCE(258);
            END_STATE();
        case 29:
            if(lookahead == '"')
                ADVANCE(572);
            END_STATE();
        case 30:
            if(lookahead == '$')
                ADVANCE(466);
            if(lookahead == '%')
                ADVANCE(475);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(473);
            if(lookahead == '+')
                ADVANCE(469);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(471);
            if(lookahead == '/')
                ADVANCE(474);
            if(lookahead == ':')
                ADVANCE(463);
            if(lookahead == ';')
                ADVANCE(455);
            if(lookahead == '<')
                ADVANCE(58);
            if(lookahead == '>')
                ADVANCE(507);
            if(lookahead == '@')
                ADVANCE(137);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == ']')
                ADVANCE(495);
            if(lookahead == '^')
                ADVANCE(465);
            if(lookahead == '{')
                ADVANCE(457);
            if(lookahead == '|')
                ADVANCE(464);
            if(lookahead == '}')
                ADVANCE(458);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 31:
            if(lookahead == '$')
                ADVANCE(466);
            if(lookahead == '%')
                ADVANCE(475);
            if(lookahead == '*')
                ADVANCE(473);
            if(lookahead == '+')
                ADVANCE(469);
            if(lookahead == '-')
                ADVANCE(471);
            if(lookahead == '/')
                ADVANCE(474);
            if(lookahead == '<')
                ADVANCE(58);
            if(lookahead == '>')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '^')
                ADVANCE(465);
            if(lookahead == 't')
                ADVANCE(757);
            if(lookahead == '|')
                ADVANCE(464);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 32:
            if(lookahead == '$')
                ADVANCE(466);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(463);
            if(lookahead == ';')
                ADVANCE(455);
            if(lookahead == '>')
                ADVANCE(506);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == ']')
                ADVANCE(495);
            if(lookahead == '^')
                ADVANCE(465);
            if(lookahead == 'b')
                ADVANCE(305);
            if(lookahead == 'd')
                ADVANCE(300);
            if(lookahead == 'f')
                ADVANCE(247);
            if(lookahead == 'i')
                ADVANCE(294);
            if(lookahead == 'l')
                ADVANCE(323);
            if(lookahead == 'o')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(202);
            if(lookahead == 'u')
                ADVANCE(213);
            if(lookahead == '|')
                ADVANCE(464);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            END_STATE();
        case 33:
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == '(')
                ADVANCE(477);
            if(lookahead == '+')
                ADVANCE(470);
            if(lookahead == '-')
                ADVANCE(472);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == '0')
                ADVANCE(544);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == 'L')
                ADVANCE(483);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == '~')
                ADVANCE(476);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(33)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 34:
            if(lookahead == '(')
                ADVANCE(29);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '<')
                ADVANCE(504);
            if(lookahead == '>')
                ADVANCE(506);
            if(lookahead == '@')
                ADVANCE(156);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(495);
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'f')
                ADVANCE(688);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'm')
                ADVANCE(645);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 's')
                ADVANCE(664);
            if(lookahead == 'u')
                ADVANCE(695);
            if(lookahead == 'w')
                ADVANCE(657);
            if(lookahead == '}')
                ADVANCE(458);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(34)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 35:
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '<')
                ADVANCE(504);
            if(lookahead == '>')
                ADVANCE(506);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == '{')
                ADVANCE(457);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 36:
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(538);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(540);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(770);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '@')
                ADVANCE(139);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'e')
                ADVANCE(711);
            if(lookahead == 'f')
                ADVANCE(688);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'm')
                ADVANCE(645);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 's')
                ADVANCE(665);
            if(lookahead == 'u')
                ADVANCE(696);
            if(lookahead == 'w')
                ADVANCE(657);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(710);
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'e')
                ADVANCE(711);
            if(lookahead == 'f')
                ADVANCE(700);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 's')
                ADVANCE(666);
            if(lookahead == 'u')
                ADVANCE(695);
            if(lookahead == 'w')
                ADVANCE(658);
            if(lookahead == '}')
                ADVANCE(458);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(747);
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'f')
                ADVANCE(688);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'm')
                ADVANCE(645);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 'r')
                ADVANCE(676);
            if(lookahead == 's')
                ADVANCE(664);
            if(lookahead == 'u')
                ADVANCE(695);
            if(lookahead == 'v')
                ADVANCE(722);
            if(lookahead == 'w')
                ADVANCE(657);
            if(lookahead == '}')
                ADVANCE(458);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'f')
                ADVANCE(700);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 's')
                ADVANCE(666);
            if(lookahead == 'u')
                ADVANCE(695);
            if(lookahead == 'w')
                ADVANCE(658);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 42:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ':')
                ADVANCE(57);
            if(lookahead == '\\')
                SKIP(27)
            if(lookahead == 'b')
                ADVANCE(719);
            if(lookahead == 'c')
                ADVANCE(685);
            if(lookahead == 'd')
                ADVANCE(716);
            if(lookahead == 'f')
                ADVANCE(700);
            if(lookahead == 'i')
                ADVANCE(708);
            if(lookahead == 'l')
                ADVANCE(718);
            if(lookahead == 'o')
                ADVANCE(656);
            if(lookahead == 's')
                ADVANCE(686);
            if(lookahead == 'u')
                ADVANCE(695);
            if(lookahead == 'w')
                ADVANCE(658);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 43:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == ';')
                ADVANCE(455);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == 's')
                ADVANCE(753);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 44:
            if(lookahead == '/')
                ADVANCE(37);
            if(lookahead == '\\')
                SKIP(24)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(481);
            END_STATE();
        case 45:
            if(lookahead == '1')
                ADVANCE(54);
            if(lookahead == '3')
                ADVANCE(46);
            if(lookahead == '6')
                ADVANCE(50);
            if(lookahead == '8')
                ADVANCE(606);
            END_STATE();
        case 46:
            if(lookahead == '2')
                ADVANCE(610);
            END_STATE();
        case 47:
            if(lookahead == '2')
                ADVANCE(56);
            END_STATE();
        case 48:
            if(lookahead == '2')
                ADVANCE(614);
            END_STATE();
        case 49:
            if(lookahead == '2')
                ADVANCE(602);
            END_STATE();
        case 50:
            if(lookahead == '4')
                ADVANCE(612);
            END_STATE();
        case 51:
            if(lookahead == '4')
                ADVANCE(616);
            END_STATE();
        case 52:
            if(lookahead == '4')
                ADVANCE(604);
            END_STATE();
        case 53:
            if(lookahead == '6')
                ADVANCE(628);
            END_STATE();
        case 54:
            if(lookahead == '6')
                ADVANCE(608);
            END_STATE();
        case 55:
            if(lookahead == '6')
                ADVANCE(600);
            END_STATE();
        case 56:
            if(lookahead == '8')
                ADVANCE(618);
            END_STATE();
        case 57:
            if(lookahead == ':')
                ADVANCE(630);
            END_STATE();
        case 58:
            if(lookahead == '<')
                ADVANCE(468);
            END_STATE();
        case 59:
            if(lookahead == '>')
                ADVANCE(467);
            END_STATE();
        case 60:
            if(lookahead == 'C')
                ADVANCE(61);
            END_STATE();
        case 61:
            if(lookahead == 'D')
                ADVANCE(64);
            END_STATE();
        case 62:
            if(lookahead == 'D')
                ADVANCE(66);
            END_STATE();
        case 63:
            if(lookahead == 'D')
                ADVANCE(62);
            if(lookahead == 'a')
                ADVANCE(292);
            if(lookahead == 'd')
                ADVANCE(98);
            if(lookahead == 'f')
                ADVANCE(225);
            if(lookahead == 'i')
                ADVANCE(199);
            END_STATE();
        case 64:
            if(lookahead == 'R')
                ADVANCE(577);
            END_STATE();
        case 65:
            if(lookahead == 'R')
                ADVANCE(152);
            if(lookahead == 'S')
                ADVANCE(173);
            END_STATE();
        case 66:
            if(lookahead == 'S')
                ADVANCE(65);
            END_STATE();
        case 67:
            if(lookahead == 'T')
                ADVANCE(310);
            END_STATE();
        case 68:
            if(lookahead == 'T')
                ADVANCE(325);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(123);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(424);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(257);
            END_STATE();
        case 72:
            if(lookahead == '_')
                ADVANCE(288);
            END_STATE();
        case 73:
            if(lookahead == '_')
                ADVANCE(353);
            END_STATE();
        case 74:
            if(lookahead == '_')
                ADVANCE(375);
            END_STATE();
        case 75:
            if(lookahead == '_')
                ADVANCE(260);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(364);
            if(lookahead == 'h')
                ADVANCE(85);
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(328);
            if(lookahead == 'o')
                ADVANCE(133);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(262);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(228);
            if(lookahead == 'e')
                ADVANCE(83);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(73);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(134);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(359);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(338);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(420);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(339);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(241);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(365);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(381);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(246);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(242);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(244);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(395);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(399);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(284);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(427);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(121);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(231);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(411);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(233);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 106:
            if(lookahead == 'b')
                ADVANCE(251);
            END_STATE();
        case 107:
            if(lookahead == 'b')
                ADVANCE(423);
            END_STATE();
        case 108:
            if(lookahead == 'b')
                ADVANCE(255);
            END_STATE();
        case 109:
            if(lookahead == 'c')
                ADVANCE(203);
            if(lookahead == 's')
                ADVANCE(406);
            END_STATE();
        case 110:
            if(lookahead == 'c')
                ADVANCE(533);
            END_STATE();
        case 111:
            if(lookahead == 'c')
                ADVANCE(531);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(201);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(405);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(405);
            if(lookahead == 'u')
                ADVANCE(378);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(159);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(81);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(81);
            if(lookahead == 'n')
                ADVANCE(193);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(386);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(390);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(153);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(154);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(324);
            END_STATE();
        case 124:
            if(lookahead == 'd')
                ADVANCE(518);
            END_STATE();
        case 125:
            if(lookahead == 'd')
                ADVANCE(766);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(503);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(28);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(569);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(571);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(568);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(567);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(155);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(428);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(312);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(327);
            if(lookahead == 'l')
                ADVANCE(314);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(177);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(186);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(158);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(98);
            if(lookahead == 'f')
                ADVANCE(225);
            if(lookahead == 'i')
                ADVANCE(199);
            END_STATE();
        case 140:
            if(lookahead == 'e')
                ADVANCE(188);
            if(lookahead == 'o')
                ADVANCE(417);
            END_STATE();
        case 141:
            if(lookahead == 'e')
                ADVANCE(336);
            if(lookahead == 'h')
                ADVANCE(311);
            if(lookahead == 't')
                ADVANCE(337);
            if(lookahead == 'w')
                ADVANCE(220);
            END_STATE();
        case 142:
            if(lookahead == 'e')
                ADVANCE(624);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(501);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(532);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(585);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(460);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(459);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(511);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(760);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(526);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(330);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(516);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(530);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(189);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(434);
            if(lookahead == 'h')
                ADVANCE(89);
            if(lookahead == 'i')
                ADVANCE(128);
            if(lookahead == 'k')
                ADVANCE(164);
            if(lookahead == 'm')
                ADVANCE(429);
            if(lookahead == 'n')
                ADVANCE(321);
            if(lookahead == 'o')
                ADVANCE(335);
            if(lookahead == 't')
                ADVANCE(341);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(71);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(187);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(331);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(360);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(334);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(249);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(125);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(438);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(361);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(127);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(363);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(296);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(91);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(130);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(340);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(383);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(396);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(347);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(299);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(350);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(374);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(192);
            END_STATE();
        case 187:
            if(lookahead == 'f')
                ADVANCE(509);
            END_STATE();
        case 188:
            if(lookahead == 'f')
                ADVANCE(86);
            END_STATE();
        case 189:
            if(lookahead == 'f')
                ADVANCE(217);
            END_STATE();
        case 190:
            if(lookahead == 'f')
                ADVANCE(224);
            if(lookahead == 'm')
                ADVANCE(84);
            if(lookahead == 's')
                ADVANCE(176);
            END_STATE();
        case 191:
            if(lookahead == 'f')
                ADVANCE(101);
            END_STATE();
        case 192:
            if(lookahead == 'f')
                ADVANCE(100);
            END_STATE();
        case 193:
            if(lookahead == 'g')
                ADVANCE(589);
            END_STATE();
        case 194:
            if(lookahead == 'g')
                ADVANCE(762);
            END_STATE();
        case 195:
            if(lookahead == 'g')
                ADVANCE(764);
            END_STATE();
        case 196:
            if(lookahead == 'g')
                ADVANCE(593);
            END_STATE();
        case 197:
            if(lookahead == 'g')
                ADVANCE(594);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(595);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(297);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(291);
            END_STATE();
        case 201:
            if(lookahead == 'h')
                ADVANCE(499);
            END_STATE();
        case 202:
            if(lookahead == 'h')
                ADVANCE(311);
            END_STATE();
        case 203:
            if(lookahead == 'h')
                ADVANCE(87);
            END_STATE();
        case 204:
            if(lookahead == 'h')
                ADVANCE(222);
            END_STATE();
        case 205:
            if(lookahead == 'h')
                ADVANCE(326);
            END_STATE();
        case 206:
            if(lookahead == 'i')
                ADVANCE(433);
            if(lookahead == 'l')
                ADVANCE(309);
            END_STATE();
        case 207:
            if(lookahead == 'i')
                ADVANCE(432);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(441);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(377);
            if(lookahead == 'o')
                ADVANCE(302);
            if(lookahead == 'y')
                ADVANCE(393);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(107);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(200);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(281);
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(281);
            if(lookahead == 'n')
                ADVANCE(366);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(124);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(275);
            if(lookahead == 'u')
                ADVANCE(118);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(110);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(289);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(308);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(308);
            if(lookahead == 's')
                ADVANCE(211);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(111);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(129);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(276);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(162);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(285);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(95);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(389);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(368);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(199);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(315);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(369);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(403);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(370);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(122);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(318);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(319);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(322);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 239:
            if(lookahead == 'k')
                ADVANCE(508);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(517);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(575);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(570);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(565);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(488);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(436);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(72);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(309);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(437);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(126);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(171);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(145);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(146);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(387);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(208);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(151);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(416);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(232);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(316);
            if(lookahead == 's')
                ADVANCE(205);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(317);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(238);
            END_STATE();
        case 261:
            if(lookahead == 'm')
                ADVANCE(485);
            END_STATE();
        case 262:
            if(lookahead == 'm')
                ADVANCE(144);
            if(lookahead == 't')
                ADVANCE(207);
            END_STATE();
        case 263:
            if(lookahead == 'm')
                ADVANCE(84);
            if(lookahead == 's')
                ADVANCE(176);
            END_STATE();
        case 264:
            if(lookahead == 'm')
                ADVANCE(168);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(520);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(193);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(497);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(579);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(456);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(490);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(576);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(435);
            if(lookahead == 't')
                ADVANCE(392);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(367);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(418);
            if(lookahead == 'x')
                ADVANCE(115);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(194);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(195);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(74);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(245);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(196);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(197);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(379);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(376);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(131);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(320);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(82);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(148);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(93);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(167);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(287);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(94);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(391);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(136);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(119);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(313);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(402);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(415);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(417);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(117);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(250);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(133);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(302);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(214);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(116);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(267);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(90);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(332);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(346);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(352);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(270);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(409);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(266);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(333);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(349);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(430);
            END_STATE();
        case 328:
            if(lookahead == 'p')
                ADVANCE(768);
            END_STATE();
        case 329:
            if(lookahead == 'p')
                ADVANCE(185);
            END_STATE();
        case 330:
            if(lookahead == 'p')
                ADVANCE(248);
            if(lookahead == 'q')
                ADVANCE(425);
            END_STATE();
        case 331:
            if(lookahead == 'p')
                ADVANCE(400);
            END_STATE();
        case 332:
            if(lookahead == 'p')
                ADVANCE(216);
            END_STATE();
        case 333:
            if(lookahead == 'p')
                ADVANCE(221);
            END_STATE();
        case 334:
            if(lookahead == 'p')
                ADVANCE(354);
            END_STATE();
        case 335:
            if(lookahead == 'p')
                ADVANCE(414);
            END_STATE();
        case 336:
            if(lookahead == 'q')
                ADVANCE(422);
            if(lookahead == 't')
                ADVANCE(358);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(215);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(620);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(622);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(431);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(440);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(419);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(210);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(102);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(223);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(384);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(92);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(226);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(388);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(96);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(290);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(157);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(161);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(184);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(191);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(426);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(373);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(104);
            END_STATE();
        case 359:
            if(lookahead == 's')
                ADVANCE(239);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(523);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(528);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(529);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(489);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(143);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(204);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(211);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(380);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(160);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(165);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(166);
            END_STATE();
        case 371:
            if(lookahead == 's')
                ADVANCE(410);
            END_STATE();
        case 372:
            if(lookahead == 's')
                ADVANCE(397);
            END_STATE();
        case 373:
            if(lookahead == 's')
                ADVANCE(408);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(182);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(181);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(407);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(521);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(45);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(534);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(583);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(522);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(581);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(587);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(502);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(461);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(484);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(592);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(263);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(574);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(597);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(343);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(142);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(112);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(207);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(344);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(70);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(342);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(80);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(150);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(170);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(180);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(175);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(174);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(356);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(99);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(103);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(68);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(235);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(183);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(236);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(237);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(105);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 417:
            if(lookahead == 'u')
                ADVANCE(106);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(261);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(118);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(253);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(382);
            END_STATE();
        case 422:
            if(lookahead == 'u')
                ADVANCE(169);
            END_STATE();
        case 423:
            if(lookahead == 'u')
                ADVANCE(401);
            END_STATE();
        case 424:
            if(lookahead == 'u')
                ADVANCE(295);
            END_STATE();
        case 425:
            if(lookahead == 'u')
                ADVANCE(179);
            END_STATE();
        case 426:
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 427:
            if(lookahead == 'u')
                ADVANCE(256);
            END_STATE();
        case 428:
            if(lookahead == 'u')
                ADVANCE(252);
            END_STATE();
        case 429:
            if(lookahead == 'u')
                ADVANCE(372);
            END_STATE();
        case 430:
            if(lookahead == 'u')
                ADVANCE(108);
            END_STATE();
        case 431:
            if(lookahead == 'v')
                ADVANCE(234);
            END_STATE();
        case 432:
            if(lookahead == 'v')
                ADVANCE(147);
            END_STATE();
        case 433:
            if(lookahead == 'x')
                ADVANCE(163);
            END_STATE();
        case 434:
            if(lookahead == 'x')
                ADVANCE(404);
            END_STATE();
        case 435:
            if(lookahead == 'y')
                ADVANCE(491);
            END_STATE();
        case 436:
            if(lookahead == 'y')
                ADVANCE(524);
            END_STATE();
        case 437:
            if(lookahead == 'y')
                ADVANCE(67);
            END_STATE();
        case 438:
            if(lookahead == 'y')
                ADVANCE(566);
            END_STATE();
        case 439:
            if(lookahead == 'y')
                ADVANCE(329);
            END_STATE();
        case 440:
            if(lookahead == 'y')
                ADVANCE(69);
            END_STATE();
        case 441:
            if(lookahead == 'z')
                ADVANCE(172);
            END_STATE();
        case 442:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 443:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(535);
            END_STATE();
        case 444:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(540);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 445:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(549);
            END_STATE();
        case 446:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 447:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(536);
            END_STATE();
        case 448:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(776);
            if(lookahead == '\r')
                ADVANCE(778);
            if(lookahead == '\\')
                ADVANCE(777);
            END_STATE();
        case 449:
            if(eof)
                ADVANCE(454);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 450:
            if(eof)
                ADVANCE(454);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(449)
            END_STATE();
        case 451:
            if(eof)
                ADVANCE(454);
            if(lookahead == '\n')
                SKIP(453)
            END_STATE();
        case 452:
            if(eof)
                ADVANCE(454);
            if(lookahead == '\n')
                SKIP(453)
            if(lookahead == '\r')
                SKIP(451)
            END_STATE();
        case 453:
            if(eof)
                ADVANCE(454);
            if(lookahead == '#')
                ADVANCE(132);
            if(lookahead == '$')
                ADVANCE(466);
            if(lookahead == '%')
                ADVANCE(475);
            if(lookahead == '(')
                ADVANCE(477);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(473);
            if(lookahead == '+')
                ADVANCE(469);
            if(lookahead == ',')
                ADVANCE(487);
            if(lookahead == '-')
                ADVANCE(471);
            if(lookahead == '/')
                ADVANCE(474);
            if(lookahead == ':')
                ADVANCE(463);
            if(lookahead == ';')
                ADVANCE(455);
            if(lookahead == '<')
                ADVANCE(58);
            if(lookahead == '>')
                ADVANCE(507);
            if(lookahead == '@')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(452)
            if(lookahead == ']')
                ADVANCE(495);
            if(lookahead == '^')
                ADVANCE(465);
            if(lookahead == 'b')
                ADVANCE(227);
            if(lookahead == 'c')
                ADVANCE(304);
            if(lookahead == 'e')
                ADVANCE(274);
            if(lookahead == 'i')
                ADVANCE(298);
            if(lookahead == 'l')
                ADVANCE(307);
            if(lookahead == 'm')
                ADVANCE(303);
            if(lookahead == 'n')
                ADVANCE(97);
            if(lookahead == 's')
                ADVANCE(398);
            if(lookahead == 't')
                ADVANCE(439);
            if(lookahead == 'u')
                ADVANCE(286);
            if(lookahead == '|')
                ADVANCE(464);
            if(lookahead == '}')
                ADVANCE(458);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(453)
            END_STATE();
        case 454:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(542);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(542);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(770);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(572);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(481);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(sym_any_const_type);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(sym_any_const_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(468);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(467);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(515);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(514);
            if(lookahead == '\\')
                ADVANCE(512);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(513);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(772);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(421);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(443);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(558);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(535);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(563);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(536);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(536);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(447);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(537);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(444);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(552);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(550);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(446);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(540);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(444);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(554);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(758);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(444);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(550);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(553);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(540);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(444);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(555);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(556);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(36);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(558);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(561);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(446);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(558);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(557);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(632);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(562);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(758);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(558);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(563);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(447);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(549);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(549);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(445);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(549);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(549);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(447);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(550);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(447);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
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
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(550);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(553);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(540);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(550);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(555);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(446);
            if(lookahead == '.')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
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
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(543);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(563);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(545);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(447);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(536);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(536);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(447);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(537);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(558);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(549);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(549);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(563);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(563);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(578);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(47);
            if(lookahead == '3')
                ADVANCE(48);
            if(lookahead == '6')
                ADVANCE(51);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(636);
            if(lookahead == '3')
                ADVANCE(637);
            if(lookahead == '6')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(259);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(641);
            if(lookahead == '3')
                ADVANCE(634);
            if(lookahead == '6')
                ADVANCE(638);
            if(lookahead == '8')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(55);
            if(lookahead == '3')
                ADVANCE(49);
            if(lookahead == '6')
                ADVANCE(52);
            if(lookahead == '8')
                ADVANCE(598);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_int8);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(53);
            if(lookahead == '8')
                ADVANCE(626);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(642);
            if(lookahead == '8')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(258);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(443);
            if(lookahead == '0')
                ADVANCE(539);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(643);
            if(lookahead == '3')
                ADVANCE(635);
            if(lookahead == '6')
                ADVANCE(639);
            if(lookahead == '8')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(687);
            if(lookahead == 's')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(519);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(727);
            if(lookahead == 'h')
                ADVANCE(721);
            if(lookahead == 't')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(727);
            if(lookahead == 'h')
                ADVANCE(721);
            if(lookahead == 't')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(727);
            if(lookahead == 'h')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(586);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(754);
            if(lookahead == 'l')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(712);
            if(lookahead == 'u')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(713);
            if(lookahead == 'n')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(713);
            if(lookahead == 'n')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(723);
            if(lookahead == 's')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(498);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(717);
            if(lookahead == 'y')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(584);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(582);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(759);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(448);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(776);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(774);
            if(lookahead == '\\')
                ADVANCE(448);
            if(lookahead != 0)
                ADVANCE(776);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(775);
            if(lookahead == '\\')
                ADVANCE(25);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(774);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(776);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(771);
            if(lookahead == '\\')
                ADVANCE(448);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(776);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(448);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(776);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(776);
            if(lookahead == '\r')
                ADVANCE(778);
            if(lookahead == '\\')
                ADVANCE(777);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(776);
            if(lookahead == '\\')
                ADVANCE(448);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 453 },
    [2] = { .lex_state = 34 },
    [3] = { .lex_state = 34 },
    [4] = { .lex_state = 34 },
    [5] = { .lex_state = 34 },
    [6] = { .lex_state = 34 },
    [7] = { .lex_state = 34 },
    [8] = { .lex_state = 34 },
    [9] = { .lex_state = 34 },
    [10] = { .lex_state = 34 },
    [11] = { .lex_state = 34 },
    [12] = { .lex_state = 34 },
    [13] = { .lex_state = 38 },
    [14] = { .lex_state = 34 },
    [15] = { .lex_state = 40 },
    [16] = { .lex_state = 40 },
    [17] = { .lex_state = 40 },
    [18] = { .lex_state = 40 },
    [19] = { .lex_state = 453 },
    [20] = { .lex_state = 453 },
    [21] = { .lex_state = 453 },
    [22] = { .lex_state = 453 },
    [23] = { .lex_state = 34 },
    [24] = { .lex_state = 34 },
    [25] = { .lex_state = 34 },
    [26] = { .lex_state = 39 },
    [27] = { .lex_state = 34 },
    [28] = { .lex_state = 34 },
    [29] = { .lex_state = 34 },
    [30] = { .lex_state = 34 },
    [31] = { .lex_state = 39 },
    [32] = { .lex_state = 39 },
    [33] = { .lex_state = 34 },
    [34] = { .lex_state = 34 },
    [35] = { .lex_state = 34 },
    [36] = { .lex_state = 34 },
    [37] = { .lex_state = 34 },
    [38] = { .lex_state = 34 },
    [39] = { .lex_state = 34 },
    [40] = { .lex_state = 34 },
    [41] = { .lex_state = 34 },
    [42] = { .lex_state = 34 },
    [43] = { .lex_state = 41 },
    [44] = { .lex_state = 41 },
    [45] = { .lex_state = 39 },
    [46] = { .lex_state = 39 },
    [47] = { .lex_state = 34 },
    [48] = { .lex_state = 39 },
    [49] = { .lex_state = 34 },
    [50] = { .lex_state = 39 },
    [51] = { .lex_state = 34 },
    [52] = { .lex_state = 42 },
    [53] = { .lex_state = 32 },
    [54] = { .lex_state = 33 },
    [55] = { .lex_state = 33 },
    [56] = { .lex_state = 33 },
    [57] = { .lex_state = 33 },
    [58] = { .lex_state = 33 },
    [59] = { .lex_state = 33 },
    [60] = { .lex_state = 33 },
    [61] = { .lex_state = 33 },
    [62] = { .lex_state = 453 },
    [63] = { .lex_state = 33 },
    [64] = { .lex_state = 453 },
    [65] = { .lex_state = 453 },
    [66] = { .lex_state = 453 },
    [67] = { .lex_state = 33 },
    [68] = { .lex_state = 453 },
    [69] = { .lex_state = 33 },
    [70] = { .lex_state = 33 },
    [71] = { .lex_state = 33 },
    [72] = { .lex_state = 33 },
    [73] = { .lex_state = 453 },
    [74] = { .lex_state = 33 },
    [75] = { .lex_state = 33 },
    [76] = { .lex_state = 33 },
    [77] = { .lex_state = 33 },
    [78] = { .lex_state = 33 },
    [79] = { .lex_state = 33 },
    [80] = { .lex_state = 453 },
    [81] = { .lex_state = 453 },
    [82] = { .lex_state = 453 },
    [83] = { .lex_state = 453 },
    [84] = { .lex_state = 30 },
    [85] = { .lex_state = 453 },
    [86] = { .lex_state = 30 },
    [87] = { .lex_state = 30 },
    [88] = { .lex_state = 30 },
    [89] = { .lex_state = 33 },
    [90] = { .lex_state = 453 },
    [91] = { .lex_state = 453 },
    [92] = { .lex_state = 453 },
    [93] = { .lex_state = 33 },
    [94] = { .lex_state = 453 },
    [95] = { .lex_state = 453 },
    [96] = { .lex_state = 453 },
    [97] = { .lex_state = 33 },
    [98] = { .lex_state = 33 },
    [99] = { .lex_state = 33 },
    [100] = { .lex_state = 33 },
    [101] = { .lex_state = 453 },
    [102] = { .lex_state = 453 },
    [103] = { .lex_state = 31 },
    [104] = { .lex_state = 31 },
    [105] = { .lex_state = 31 },
    [106] = { .lex_state = 31 },
    [107] = { .lex_state = 453 },
    [108] = { .lex_state = 453 },
    [109] = { .lex_state = 453 },
    [110] = { .lex_state = 453 },
    [111] = { .lex_state = 453 },
    [112] = { .lex_state = 33 },
    [113] = { .lex_state = 33 },
    [114] = { .lex_state = 453 },
    [115] = { .lex_state = 32 },
    [116] = { .lex_state = 32 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 453 },
    [119] = { .lex_state = 32 },
    [120] = { .lex_state = 453 },
    [121] = { .lex_state = 32 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 0 },
    [124] = { .lex_state = 32 },
    [125] = { .lex_state = 0 },
    [126] = { .lex_state = 453 },
    [127] = { .lex_state = 30 },
    [128] = { .lex_state = 0 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 30 },
    [132] = { .lex_state = 30 },
    [133] = { .lex_state = 30 },
    [134] = { .lex_state = 453 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 33 },
    [138] = { .lex_state = 30 },
    [139] = { .lex_state = 30 },
    [140] = { .lex_state = 453 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 453 },
    [144] = { .lex_state = 35 },
    [145] = { .lex_state = 453 },
    [146] = { .lex_state = 30 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 30 },
    [149] = { .lex_state = 453 },
    [150] = { .lex_state = 453 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 453 },
    [154] = { .lex_state = 35 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 0 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 0 },
    [161] = { .lex_state = 30 },
    [162] = { .lex_state = 0 },
    [163] = { .lex_state = 0 },
    [164] = { .lex_state = 30 },
    [165] = { .lex_state = 35 },
    [166] = { .lex_state = 35 },
    [167] = { .lex_state = 35 },
    [168] = { .lex_state = 30 },
    [169] = { .lex_state = 0 },
    [170] = { .lex_state = 0 },
    [171] = { .lex_state = 30 },
    [172] = { .lex_state = 30 },
    [173] = { .lex_state = 30 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 30 },
    [176] = { .lex_state = 0 },
    [177] = { .lex_state = 35 },
    [178] = { .lex_state = 0 },
    [179] = { .lex_state = 35 },
    [180] = { .lex_state = 30 },
    [181] = { .lex_state = 35 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 35 },
    [184] = { .lex_state = 0 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 35 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 30 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 453 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 30 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 35 },
    [202] = { .lex_state = 35 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 30 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 35 },
    [208] = { .lex_state = 0 },
    [209] = { .lex_state = 35 },
    [210] = { .lex_state = 35 },
    [211] = { .lex_state = 30 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 35 },
    [215] = { .lex_state = 35 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 34 },
    [219] = { .lex_state = 35 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 35 },
    [222] = { .lex_state = 0 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 35 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 30 },
    [230] = { .lex_state = 35 },
    [231] = { .lex_state = 30 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 35 },
    [237] = { .lex_state = 35 },
    [238] = { .lex_state = 30 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 30 },
    [243] = { .lex_state = 43 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 453 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 35 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 30 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 30 },
    [259] = { .lex_state = 30 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 453 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 30 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 30 },
    [269] = { .lex_state = 30 },
    [270] = { .lex_state = 30 },
    [271] = { .lex_state = 30 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 453 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 30 },
    [276] = { .lex_state = 30 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 30 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 30 },
    [282] = { .lex_state = 30 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 30 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 30 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 30 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 34 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 30 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 30 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 453 },
    [302] = { .lex_state = 453 },
    [303] = { .lex_state = 30 },
    [304] = { .lex_state = 30 },
    [305] = { .lex_state = 30 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 30 },
    [308] = { .lex_state = 30 },
    [309] = { .lex_state = 0 },
    [310] = { .lex_state = 34 },
    [311] = { .lex_state = 30 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 30 },
    [314] = { .lex_state = 30 },
    [315] = { .lex_state = 30 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 453 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 44 },
    [322] = { .lex_state = 44 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 34 },
    [329] = { .lex_state = 34 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 44 },
    [332] = { .lex_state = 34 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 34 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 30 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 30 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 774 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 30 },
    [352] = { .lex_state = 34 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 453 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 30 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 30 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 34 },
    [380] = { .lex_state = 34 },
    [381] = { .lex_state = 34 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 453 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 30 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 30 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 30 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 30 },
    [397] = { .lex_state = 34 },
    [398] = { .lex_state = 30 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 30 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 30 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 30 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 34 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 34 },
    [414] = { .lex_state = 34 },
    [415] = { .lex_state = 30 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 30 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 453 },
    [435] = { .lex_state = 453 },
    [436] = { .lex_state = 453 },
    [437] = { .lex_state = 44 },
    [438] = { .lex_state = 30 },
    [439] = { .lex_state = 513 },
    [440] = { .lex_state = 30 },
    [441] = { .lex_state = 30 },
    [442] = { .lex_state = 30 },
    [443] = { .lex_state = 30 },
    [444] = { .lex_state = 30 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 30 },
    [451] = { .lex_state = 30 },
    [452] = { .lex_state = 30 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 30 },
    [455] = { .lex_state = 30 },
    [456] = { .lex_state = 30 },
    [457] = { .lex_state = 30 },
    [458] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
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
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
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
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
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
        [sym_number_literal] = ACTIONS(1),
        [anon_sym_LPAREN_DQUOTE] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint8] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float32] = ACTIONS(1),
        [anon_sym_float64] = ACTIONS(1),
        [anon_sym_float128] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_byte] = ACTIONS(1),
        [anon_sym_char8] = ACTIONS(1),
        [anon_sym_char16] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(433),
        [sym__definition] = STATE(62),
        [sym_except_dcl] = STATE(66),
        [sym_native_dcl] = STATE(432),
        [sym_module_dcl] = STATE(432),
        [sym_struct_forward_dcl] = STATE(432),
        [sym_struct_def] = STATE(432),
        [sym_enum_dcl] = STATE(432),
        [sym_enum_anno] = STATE(431),
        [sym_annotation_dcl] = STATE(432),
        [sym_union_forward_dcl] = STATE(432),
        [sym_union_def] = STATE(432),
        [sym_bitset_dcl] = STATE(432),
        [sym_bitmask_dcl] = STATE(432),
        [sym_typedef_dcl] = STATE(432),
        [sym_predefine] = STATE(66),
        [sym_interface_dcl] = STATE(432),
        [sym_interface_forward_dcl] = STATE(430),
        [sym_interface_def] = STATE(430),
        [sym_interface_header] = STATE(429),
        [sym_dds_request_topic] = STATE(153),
        [sym_dds_reply_topic] = STATE(153),
        [sym_interface_anno] = STATE(149),
        [sym_const_dcl] = STATE(432),
        [sym_data_representation] = STATE(247),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(21),
        [aux_sym_struct_def_repeat1] = STATE(150),
        [aux_sym_interface_def_repeat1] = STATE(111),
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
    [0] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(2),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [115] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(73),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [230] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(75),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [345] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(5),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [460] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [575] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(79),
    1,
    anon_sym_RBRACE,
    ACTIONS(84),
    1,
    anon_sym_AThashid,
    ACTIONS(87),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(99),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(102),
    1,
    sym_identifier,
    ACTIONS(105),
    1,
    anon_sym_sequence,
    ACTIONS(111),
    1,
    anon_sym_fixed,
    ACTIONS(114),
    1,
    anon_sym_map,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(108),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(7),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(96),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(81),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(90),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(93),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [688] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(8),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [803] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(119),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [918] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(121),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1033] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1148] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(125),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(148),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1263] = 26,
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
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(127),
    1,
    anon_sym_struct,
    ACTIONS(129),
    1,
    anon_sym_enum,
    ACTIONS(131),
    1,
    anon_sym_union,
    STATE(13),
    1,
    sym_comment,
    STATE(150),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_data_representation,
    STATE(408),
    1,
    sym_type_declarator,
    STATE(409),
    1,
    sym_scoped_name,
    STATE(431),
    1,
    sym_enum_anno,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    STATE(146),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1377] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(14),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(139),
    1,
    sym_type_spec,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1483] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    anon_sym_RBRACE,
    ACTIONS(135),
    1,
    anon_sym_void,
    ACTIONS(137),
    1,
    anon_sym_readonly,
    ACTIONS(139),
    1,
    anon_sym_attribute,
    STATE(15),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(192),
    1,
    sym_export,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(363),
    1,
    sym_op_type_spec,
    STATE(370),
    1,
    sym_type_spec,
    STATE(390),
    1,
    sym_interface_body,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(362),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(365),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1594] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(135),
    1,
    anon_sym_void,
    ACTIONS(137),
    1,
    anon_sym_readonly,
    ACTIONS(139),
    1,
    anon_sym_attribute,
    ACTIONS(141),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(192),
    1,
    sym_export,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(363),
    1,
    sym_op_type_spec,
    STATE(366),
    1,
    sym_interface_body,
    STATE(370),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(362),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(365),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1705] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(135),
    1,
    anon_sym_void,
    ACTIONS(137),
    1,
    anon_sym_readonly,
    ACTIONS(139),
    1,
    anon_sym_attribute,
    ACTIONS(143),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(192),
    1,
    sym_export,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(323),
    1,
    sym_interface_body,
    STATE(363),
    1,
    sym_op_type_spec,
    STATE(370),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(362),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(365),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1816] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(135),
    1,
    anon_sym_void,
    ACTIONS(137),
    1,
    anon_sym_readonly,
    ACTIONS(139),
    1,
    anon_sym_attribute,
    STATE(18),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(267),
    1,
    sym_export,
    STATE(363),
    1,
    sym_op_type_spec,
    STATE(370),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(362),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(365),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1921] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(147),
    1,
    anon_sym_exception,
    ACTIONS(150),
    1,
    anon_sym_native,
    ACTIONS(153),
    1,
    anon_sym_module,
    ACTIONS(156),
    1,
    anon_sym_struct,
    ACTIONS(159),
    1,
    anon_sym_enum,
    ACTIONS(162),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(165),
    1,
    anon_sym_ATannotation,
    ACTIONS(168),
    1,
    anon_sym_union,
    ACTIONS(171),
    1,
    anon_sym_bitset,
    ACTIONS(174),
    1,
    anon_sym_bitmask,
    ACTIONS(177),
    1,
    anon_sym_typedef,
    ACTIONS(180),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(183),
    1,
    anon_sym_interface,
    ACTIONS(186),
    1,
    anon_sym_local,
    ACTIONS(189),
    1,
    sym_dds_service,
    ACTIONS(192),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(195),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(198),
    1,
    anon_sym_const,
    ACTIONS(201),
    1,
    sym_final,
    ACTIONS(204),
    1,
    anon_sym_ATdata_representation,
    STATE(62),
    1,
    sym__definition,
    STATE(111),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(150),
    1,
    aux_sym_struct_def_repeat1,
    STATE(247),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_interface_header,
    STATE(431),
    1,
    sym_enum_anno,
    ACTIONS(145),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(19),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(66),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(430),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(432),
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
    [2041] = 35,
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
    ACTIONS(207),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(20),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(111),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(150),
    1,
    aux_sym_struct_def_repeat1,
    STATE(247),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_interface_header,
    STATE(431),
    1,
    sym_enum_anno,
    STATE(66),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(430),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(432),
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
    [2162] = 35,
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
    ACTIONS(209),
    1,
    ts_builtin_sym_end,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(21),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(111),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(150),
    1,
    aux_sym_struct_def_repeat1,
    STATE(247),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_interface_header,
    STATE(431),
    1,
    sym_enum_anno,
    STATE(66),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(430),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(432),
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
    [2283] = 35,
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
    ACTIONS(211),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    aux_sym_specification_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(111),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(150),
    1,
    aux_sym_struct_def_repeat1,
    STATE(247),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_interface_header,
    STATE(431),
    1,
    sym_enum_anno,
    STATE(66),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(430),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(432),
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
    [2404] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(216),
    1,
    anon_sym_AThashid,
    ACTIONS(219),
    1,
    anon_sym_ATtry_construct,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(23),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(40),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(224),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(213),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(222),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [2472] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    ACTIONS(226),
    1,
    anon_sym_COMMA,
    ACTIONS(228),
    1,
    anon_sym_GT,
    STATE(24),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(236),
    1,
    sym_scoped_name,
    STATE(332),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2560] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(25),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(173),
    1,
    sym_type_spec,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(393),
    1,
    sym_element_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2645] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(230),
    1,
    anon_sym_RBRACE,
    ACTIONS(232),
    1,
    anon_sym_enum,
    ACTIONS(234),
    1,
    sym_any_const_type,
    STATE(26),
    1,
    sym_comment,
    STATE(31),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(50),
    1,
    sym_annotation_member,
    STATE(165),
    1,
    sym_integer_type,
    STATE(258),
    1,
    sym_annotation_member_type,
    STATE(298),
    1,
    sym_enum_dcl,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(341),
    1,
    sym_annotation_body,
    STATE(343),
    1,
    sym_const_type,
    STATE(428),
    1,
    sym_enum_anno,
    STATE(398),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2738] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(27),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(286),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2820] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(28),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(238),
    1,
    sym_type_spec,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2902] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(29),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(197),
    1,
    sym_type_spec,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(409),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2984] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(30),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(236),
    1,
    sym_scoped_name,
    STATE(325),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3066] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(232),
    1,
    anon_sym_enum,
    ACTIONS(234),
    1,
    sym_any_const_type,
    ACTIONS(236),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    sym_comment,
    STATE(32),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(50),
    1,
    sym_annotation_member,
    STATE(165),
    1,
    sym_integer_type,
    STATE(258),
    1,
    sym_annotation_member_type,
    STATE(298),
    1,
    sym_enum_dcl,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(343),
    1,
    sym_const_type,
    STATE(428),
    1,
    sym_enum_anno,
    STATE(398),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3156] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(238),
    1,
    anon_sym_RBRACE,
    ACTIONS(240),
    1,
    anon_sym_enum,
    ACTIONS(243),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(246),
    1,
    sym_any_const_type,
    ACTIONS(258),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(261),
    1,
    sym_identifier,
    ACTIONS(264),
    1,
    anon_sym_sequence,
    STATE(50),
    1,
    sym_annotation_member,
    STATE(165),
    1,
    sym_integer_type,
    STATE(258),
    1,
    sym_annotation_member_type,
    STATE(298),
    1,
    sym_enum_dcl,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(343),
    1,
    sym_const_type,
    STATE(428),
    1,
    sym_enum_anno,
    STATE(32),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(398),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(255),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(249),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(252),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3244] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    ACTIONS(69),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_map,
    STATE(33),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(230),
    1,
    sym_primitive_type,
    STATE(236),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(187),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(226),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3326] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(34),
    1,
    sym_comment,
    ACTIONS(267),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(269),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3381] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(35),
    1,
    sym_comment,
    ACTIONS(271),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(273),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3436] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(275),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(277),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3491] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(279),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(281),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(283),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(285),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3601] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(287),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(289),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3655] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(291),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(293),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3709] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(295),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(297),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3763] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(299),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3817] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    STATE(43),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(396),
    1,
    sym_scoped_name,
    STATE(455),
    1,
    sym_const_type,
    STATE(398),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3880] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    ACTIONS(65),
    1,
    anon_sym_sequence,
    STATE(44),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(396),
    1,
    sym_scoped_name,
    STATE(400),
    1,
    sym_const_type,
    STATE(398),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(303),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(305),
    28,
    anon_sym_enum,
    sym_any_const_type,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    [3989] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(307),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(309),
    28,
    anon_sym_enum,
    sym_any_const_type,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    [4035] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(313),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(311),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [4081] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(315),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(317),
    28,
    anon_sym_enum,
    sym_any_const_type,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    [4127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(321),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(319),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [4173] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(323),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(325),
    28,
    anon_sym_enum,
    sym_any_const_type,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    [4219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(329),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(327),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [4265] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_integer_type,
    STATE(276),
    1,
    sym_scoped_name,
    STATE(383),
    1,
    sym_switch_type_spec,
    STATE(387),
    1,
    sym_primitive_type,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(57),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [4324] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    STATE(379),
    1,
    sym_integer_type,
    STATE(380),
    1,
    sym_destination_type,
    ACTIONS(331),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    4,
    anon_sym_float,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    ACTIONS(59),
    17,
    anon_sym_double,
    anon_sym_short,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [4366] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(381),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4438] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(290),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4510] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(326),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4582] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(329),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4654] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(397),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4726] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(328),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4798] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(355),
    1,
    sym_positive_int_const,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4870] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4939] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(349),
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
    [4970] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(345),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5039] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(351),
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
    [5070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(353),
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
    [5101] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(355),
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
    [5132] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(347),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5201] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(357),
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
    [5232] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(392),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5301] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(70),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(120),
    1,
    sym_add_expr,
    STATE(126),
    1,
    sym_shift_expr,
    STATE(162),
    1,
    sym_and_expr,
    STATE(254),
    1,
    sym_xor_expr,
    STATE(260),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5370] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(327),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5439] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(72),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(124),
    1,
    sym_or_expr,
    STATE(401),
    1,
    sym_const_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5508] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(363),
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
    [5539] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(74),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    STATE(119),
    1,
    sym_xor_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5602] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(75),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(120),
    1,
    sym_add_expr,
    STATE(126),
    1,
    sym_shift_expr,
    STATE(162),
    1,
    sym_and_expr,
    STATE(249),
    1,
    sym_xor_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5665] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(76),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(120),
    1,
    sym_add_expr,
    STATE(126),
    1,
    sym_shift_expr,
    STATE(163),
    1,
    sym_and_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5725] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(77),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    STATE(115),
    1,
    sym_and_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5785] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(78),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(120),
    1,
    sym_add_expr,
    STATE(134),
    1,
    sym_shift_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5842] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(79),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(101),
    1,
    sym_add_expr,
    STATE(109),
    1,
    sym_shift_expr,
    STATE(113),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5899] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(367),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(365),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5927] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(371),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(369),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5955] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(375),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(373),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5983] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(379),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(377),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6011] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(383),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(381),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    sym_identifier,
    [6039] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(387),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(385),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6067] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(391),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(389),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    sym_identifier,
    [6095] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(393),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(375),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(373),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6125] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(393),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(371),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(369),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6155] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(89),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(113),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6209] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(397),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(395),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6237] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(401),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(399),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6265] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(405),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(403),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6293] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(93),
    1,
    sym_comment,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_add_expr,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6347] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(409),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(407),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6375] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_SLASH,
    ACTIONS(417),
    1,
    anon_sym_GT,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(413),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(411),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6406] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_SLASH,
    ACTIONS(421),
    1,
    anon_sym_GT,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(413),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(419),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6437] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(97),
    1,
    sym_comment,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(112),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6488] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(95),
    1,
    sym_mult_expr,
    STATE(98),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6539] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(83),
    1,
    sym_unary_expr,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6587] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(335),
    1,
    anon_sym_TILDE,
    ACTIONS(337),
    1,
    anon_sym_LPAREN,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_literal,
    STATE(83),
    1,
    sym_unary_expr,
    STATE(100),
    1,
    sym_comment,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_operator,
    ACTIONS(333),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6635] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(427),
    1,
    anon_sym_GT,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(425),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(423),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6661] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(431),
    1,
    anon_sym_GT,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(425),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(429),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6687] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(383),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(381),
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
    [6710] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(391),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(389),
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
    [6733] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(371),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(369),
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
    [6758] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(375),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(373),
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
    [6783] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(435),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(411),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6807] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(435),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(419),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6831] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    anon_sym_GT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(441),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(439),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6855] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_GT,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(441),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(445),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6879] = 11,
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
    ACTIONS(449),
    1,
    anon_sym_interface,
    ACTIONS(451),
    1,
    anon_sym_local,
    STATE(111),
    1,
    sym_comment,
    STATE(114),
    1,
    aux_sym_interface_def_repeat1,
    STATE(149),
    1,
    sym_interface_anno,
    STATE(404),
    1,
    sym_interface_header,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6914] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(359),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    sym_identifier,
    ACTIONS(453),
    1,
    anon_sym_LPAREN,
    STATE(81),
    1,
    sym_literal,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_comment,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6949] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(339),
    1,
    anon_sym_SQUOTE,
    ACTIONS(341),
    1,
    anon_sym_L,
    ACTIONS(343),
    1,
    sym_number_literal,
    ACTIONS(345),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(347),
    1,
    sym_identifier,
    ACTIONS(453),
    1,
    anon_sym_LPAREN,
    STATE(81),
    1,
    sym_literal,
    STATE(88),
    1,
    sym_scoped_name,
    STATE(113),
    1,
    sym_comment,
    STATE(94),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [6984] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(457),
    1,
    sym_dds_service,
    ACTIONS(460),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(463),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(149),
    1,
    sym_interface_anno,
    ACTIONS(455),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(114),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(153),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7012] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(468),
    1,
    anon_sym_DOLLAR,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(466),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7032] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(468),
    1,
    anon_sym_DOLLAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(470),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7052] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(472),
    1,
    anon_sym_SEMI,
    ACTIONS(474),
    1,
    anon_sym_COMMA,
    ACTIONS(476),
    1,
    anon_sym_getraises,
    ACTIONS(478),
    1,
    anon_sym_setraises,
    STATE(117),
    1,
    sym_comment,
    STATE(159),
    1,
    sym_get_excep_expr,
    STATE(251),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(335),
    1,
    sym_attr_raises_expr,
    STATE(336),
    1,
    sym_set_excep_expr,
    [7083] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(480),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(429),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7102] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(484),
    1,
    anon_sym_CARET,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(482),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7121] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(480),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(423),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(484),
    1,
    anon_sym_CARET,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(486),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7159] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(488),
    7,
    anon_sym_SEMI,
    anon_sym_RPAREN,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [7175] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(490),
    1,
    anon_sym_RPAREN,
    ACTIONS(492),
    1,
    anon_sym_in,
    STATE(27),
    1,
    sym_param_attribute,
    STATE(123),
    1,
    sym_comment,
    STATE(233),
    1,
    sym_param_dcl,
    STATE(339),
    1,
    sym_parameter_dcls,
    ACTIONS(494),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7201] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(498),
    1,
    anon_sym_PIPE,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(496),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7219] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(502),
    1,
    anon_sym_LBRACK,
    STATE(178),
    1,
    sym_fixed_array_size,
    STATE(125),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(500),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7238] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(505),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(445),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7255] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(507),
    1,
    anon_sym_RBRACE,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(511),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(245),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [7280] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(513),
    1,
    anon_sym_LBRACK,
    STATE(128),
    1,
    sym_comment,
    STATE(136),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(178),
    1,
    sym_fixed_array_size,
    ACTIONS(488),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7301] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    anon_sym_RBRACE,
    ACTIONS(517),
    1,
    anon_sym_default,
    ACTIONS(519),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(129),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_union_def_repeat1,
    STATE(198),
    1,
    sym_case,
    [7326] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(517),
    1,
    anon_sym_default,
    ACTIONS(519),
    1,
    anon_sym_case,
    ACTIONS(521),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_case_label,
    STATE(129),
    1,
    aux_sym_union_def_repeat1,
    STATE(130),
    1,
    sym_comment,
    STATE(198),
    1,
    sym_case,
    [7351] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(511),
    1,
    sym_identifier,
    ACTIONS(523),
    1,
    anon_sym_RBRACE,
    STATE(131),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(248),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [7376] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(511),
    1,
    sym_identifier,
    ACTIONS(525),
    1,
    anon_sym_RBRACE,
    STATE(132),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(225),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [7401] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(511),
    1,
    sym_identifier,
    ACTIONS(527),
    1,
    anon_sym_RBRACE,
    STATE(133),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(239),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [7426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(505),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(439),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7443] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    anon_sym_RBRACE,
    ACTIONS(531),
    1,
    anon_sym_default,
    ACTIONS(534),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(198),
    1,
    sym_case,
    STATE(135),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7466] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(513),
    1,
    anon_sym_LBRACK,
    STATE(125),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(136),
    1,
    sym_comment,
    STATE(178),
    1,
    sym_fixed_array_size,
    ACTIONS(537),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7487] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(539),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(541),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [7504] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(511),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(283),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [7526] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(139),
    1,
    sym_comment,
    STATE(176),
    1,
    sym_declarator,
    STATE(186),
    1,
    sym_declarators,
    STATE(206),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7546] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(545),
    1,
    anon_sym_struct,
    ACTIONS(547),
    1,
    sym_final,
    ACTIONS(550),
    1,
    anon_sym_ATdata_representation,
    STATE(247),
    1,
    sym_data_representation,
    STATE(140),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7566] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(553),
    1,
    anon_sym_RBRACE,
    ACTIONS(555),
    1,
    anon_sym_bitfield,
    STATE(141),
    1,
    sym_comment,
    STATE(152),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(306),
    1,
    sym_bitfield,
    [7588] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(474),
    1,
    anon_sym_COMMA,
    ACTIONS(557),
    1,
    anon_sym_SEMI,
    ACTIONS(559),
    1,
    anon_sym_raises,
    STATE(142),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(317),
    1,
    sym_raises_expr,
    [7610] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(561),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7624] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(381),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7638] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(563),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7652] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(146),
    1,
    sym_comment,
    STATE(203),
    1,
    sym_any_declarator,
    STATE(382),
    1,
    sym_any_declarators,
    STATE(277),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7672] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(492),
    1,
    anon_sym_in,
    STATE(27),
    1,
    sym_param_attribute,
    STATE(147),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_param_dcl,
    ACTIONS(494),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7692] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(176),
    1,
    sym_declarator,
    STATE(185),
    1,
    sym_declarators,
    STATE(206),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(565),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7726] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(567),
    1,
    anon_sym_struct,
    STATE(140),
    1,
    aux_sym_struct_def_repeat1,
    STATE(150),
    1,
    sym_comment,
    STATE(247),
    1,
    sym_data_representation,
    [7748] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_bitfield,
    ACTIONS(569),
    1,
    anon_sym_RBRACE,
    STATE(151),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(306),
    1,
    sym_bitfield,
    [7770] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_RBRACE,
    ACTIONS(573),
    1,
    anon_sym_bitfield,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(306),
    1,
    sym_bitfield,
    STATE(152),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(576),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7804] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(389),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7818] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_bitfield,
    ACTIONS(578),
    1,
    anon_sym_RBRACE,
    STATE(141),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(155),
    1,
    sym_comment,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(306),
    1,
    sym_bitfield,
    [7840] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_bitfield,
    ACTIONS(580),
    1,
    anon_sym_RBRACE,
    STATE(152),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(156),
    1,
    sym_comment,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(306),
    1,
    sym_bitfield,
    [7862] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_RPAREN,
    ACTIONS(584),
    1,
    anon_sym_XCDR,
    ACTIONS(587),
    1,
    anon_sym_XCDR2,
    STATE(157),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7879] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(590),
    1,
    anon_sym_RPAREN,
    ACTIONS(592),
    1,
    anon_sym_XCDR,
    ACTIONS(594),
    1,
    anon_sym_XCDR2,
    STATE(157),
    1,
    aux_sym_data_representation_repeat1,
    STATE(158),
    1,
    sym_comment,
    [7898] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(478),
    1,
    anon_sym_setraises,
    ACTIONS(596),
    1,
    anon_sym_SEMI,
    STATE(159),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(289),
    1,
    sym_set_excep_expr,
    [7917] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(600),
    1,
    anon_sym_COMMA,
    ACTIONS(598),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(160),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7932] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(603),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_enumerator_repeat1,
    STATE(308),
    1,
    sym_enum_modifier,
    [7951] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(605),
    1,
    anon_sym_DOLLAR,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(470),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7966] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(605),
    1,
    anon_sym_DOLLAR,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(466),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7981] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_LBRACE,
    ACTIONS(611),
    1,
    anon_sym_COLON,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(607),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7998] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(613),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8011] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(615),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8024] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(619),
    1,
    anon_sym_LT,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(617),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8039] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_declarator,
    STATE(206),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8056] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_COMMA,
    STATE(160),
    1,
    aux_sym_declarators_repeat1,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(621),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8073] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(625),
    1,
    anon_sym_SEMI,
    ACTIONS(627),
    1,
    anon_sym_LBRACE,
    ACTIONS(629),
    1,
    anon_sym_COLON,
    STATE(170),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_interface_inheritance_spec,
    [8092] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(631),
    1,
    anon_sym_RPAREN,
    ACTIONS(633),
    1,
    anon_sym_COMMA,
    ACTIONS(635),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_comment,
    STATE(227),
    1,
    aux_sym_raises_expr_repeat1,
    [8111] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(637),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(640),
    1,
    sym_identifier,
    STATE(308),
    1,
    sym_enum_modifier,
    STATE(172),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8128] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(173),
    1,
    sym_comment,
    STATE(406),
    1,
    sym_declarator,
    STATE(206),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8145] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(642),
    1,
    anon_sym_SEMI,
    ACTIONS(644),
    1,
    anon_sym_setraises,
    STATE(289),
    1,
    sym_set_excep_expr,
    STATE(174),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [8162] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_COMMA,
    ACTIONS(635),
    1,
    sym_identifier,
    ACTIONS(647),
    1,
    anon_sym_RPAREN,
    STATE(175),
    1,
    sym_comment,
    STATE(222),
    1,
    aux_sym_raises_expr_repeat1,
    [8181] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_COMMA,
    STATE(169),
    1,
    aux_sym_declarators_repeat1,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(649),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8198] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(651),
    1,
    anon_sym_RPAREN,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_scoped_name,
    STATE(177),
    1,
    sym_comment,
    [8217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(655),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [8230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    ACTIONS(657),
    1,
    anon_sym_RPAREN,
    STATE(175),
    1,
    sym_scoped_name,
    STATE(179),
    1,
    sym_comment,
    [8249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(543),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(257),
    1,
    sym_any_declarator,
    STATE(277),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8266] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(181),
    1,
    sym_comment,
    STATE(189),
    1,
    sym_interface_name,
    STATE(190),
    1,
    sym_scoped_name,
    [8285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(659),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [8298] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_comment,
    STATE(190),
    1,
    sym_scoped_name,
    STATE(312),
    1,
    sym_interface_name,
    [8317] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(478),
    1,
    anon_sym_setraises,
    ACTIONS(661),
    1,
    anon_sym_SEMI,
    STATE(174),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(184),
    1,
    sym_comment,
    STATE(289),
    1,
    sym_set_excep_expr,
    [8336] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(663),
    1,
    anon_sym_SEMI,
    ACTIONS(665),
    1,
    anon_sym_default,
    STATE(185),
    1,
    sym_comment,
    STATE(384),
    1,
    sym_default,
    [8352] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(665),
    1,
    anon_sym_default,
    ACTIONS(667),
    1,
    anon_sym_SEMI,
    STATE(186),
    1,
    sym_comment,
    STATE(346),
    1,
    sym_default,
    [8368] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(669),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8380] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(671),
    1,
    anon_sym_SEMI,
    ACTIONS(673),
    1,
    anon_sym_COMMA,
    STATE(188),
    1,
    sym_comment,
    STATE(253),
    1,
    aux_sym_any_declarators_repeat1,
    [8396] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(675),
    1,
    anon_sym_LBRACE,
    ACTIONS(677),
    1,
    anon_sym_COMMA,
    STATE(189),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(679),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [8426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    anon_sym_SEMI,
    ACTIONS(683),
    1,
    anon_sym_COMMA,
    STATE(191),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8440] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    anon_sym_RBRACE,
    ACTIONS(688),
    1,
    anon_sym_COMMA,
    STATE(192),
    1,
    sym_comment,
    STATE(199),
    1,
    aux_sym_interface_body_repeat1,
    [8456] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(559),
    1,
    anon_sym_raises,
    ACTIONS(690),
    1,
    anon_sym_SEMI,
    STATE(193),
    1,
    sym_comment,
    STATE(386),
    1,
    sym_raises_expr,
    [8472] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(692),
    1,
    anon_sym_RPAREN,
    ACTIONS(694),
    1,
    anon_sym_COMMA,
    STATE(194),
    1,
    sym_comment,
    STATE(212),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8488] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(696),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8500] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(700),
    1,
    anon_sym_XCDR,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(698),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [8514] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_simple_declarator,
    STATE(197),
    1,
    sym_comment,
    STATE(410),
    1,
    sym_attr_declarator,
    [8530] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(704),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8542] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(688),
    1,
    anon_sym_COMMA,
    ACTIONS(706),
    1,
    anon_sym_RBRACE,
    STATE(199),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_interface_body_repeat1,
    [8558] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(627),
    1,
    anon_sym_LBRACE,
    ACTIONS(629),
    1,
    anon_sym_COLON,
    STATE(200),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_interface_inheritance_spec,
    [8574] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(708),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8586] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(202),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_scoped_name,
    [8602] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    anon_sym_COMMA,
    ACTIONS(710),
    1,
    anon_sym_SEMI,
    STATE(188),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(203),
    1,
    sym_comment,
    [8618] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(712),
    1,
    anon_sym_RBRACE,
    ACTIONS(714),
    1,
    anon_sym_COMMA,
    STATE(204),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8632] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(717),
    1,
    anon_sym_RBRACE,
    ACTIONS(719),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    STATE(223),
    1,
    sym_bit_value,
    [8648] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(721),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [8660] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    STATE(304),
    1,
    sym_scoped_name,
    [8676] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(559),
    1,
    anon_sym_raises,
    ACTIONS(723),
    1,
    anon_sym_SEMI,
    STATE(208),
    1,
    sym_comment,
    STATE(364),
    1,
    sym_raises_expr,
    [8692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(209),
    1,
    sym_comment,
    STATE(313),
    1,
    sym_scoped_name,
    [8708] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(725),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8720] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_SEMI,
    ACTIONS(729),
    1,
    sym_identifier,
    STATE(211),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8734] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(732),
    1,
    anon_sym_RPAREN,
    ACTIONS(734),
    1,
    anon_sym_COMMA,
    STATE(212),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8748] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(592),
    1,
    anon_sym_XCDR,
    ACTIONS(594),
    1,
    anon_sym_XCDR2,
    STATE(158),
    1,
    aux_sym_data_representation_repeat1,
    STATE(213),
    1,
    sym_comment,
    [8764] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(737),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8776] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(739),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8788] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_RBRACE,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    STATE(216),
    1,
    sym_comment,
    STATE(217),
    1,
    aux_sym_enum_dcl_repeat1,
    [8804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    anon_sym_RBRACE,
    ACTIONS(747),
    1,
    anon_sym_COMMA,
    STATE(217),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8818] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(750),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [8830] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(752),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8842] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(474),
    1,
    anon_sym_COMMA,
    ACTIONS(754),
    1,
    anon_sym_SEMI,
    STATE(191),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(220),
    1,
    sym_comment,
    [8858] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(653),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(231),
    1,
    sym_scoped_name,
    [8874] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_COMMA,
    ACTIONS(756),
    1,
    anon_sym_RPAREN,
    STATE(222),
    1,
    sym_comment,
    STATE(232),
    1,
    aux_sym_raises_expr_repeat1,
    [8890] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(758),
    1,
    anon_sym_RBRACE,
    ACTIONS(760),
    1,
    anon_sym_COMMA,
    STATE(223),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8906] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(762),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8918] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    anon_sym_RBRACE,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    STATE(216),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(225),
    1,
    sym_comment,
    [8934] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(764),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8946] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_COMMA,
    ACTIONS(766),
    1,
    anon_sym_RPAREN,
    STATE(227),
    1,
    sym_comment,
    STATE(232),
    1,
    aux_sym_raises_expr_repeat1,
    [8962] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    ACTIONS(768),
    1,
    anon_sym_RBRACE,
    STATE(217),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(228),
    1,
    sym_comment,
    [8978] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(770),
    1,
    anon_sym_SEMI,
    ACTIONS(772),
    1,
    sym_identifier,
    STATE(211),
    1,
    aux_sym_bitfield_repeat1,
    STATE(229),
    1,
    sym_comment,
    [8994] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(774),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9006] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(776),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [9020] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(776),
    1,
    anon_sym_RPAREN,
    ACTIONS(778),
    1,
    anon_sym_COMMA,
    STATE(232),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9034] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_COMMA,
    ACTIONS(781),
    1,
    anon_sym_RPAREN,
    STATE(194),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(233),
    1,
    sym_comment,
    [9050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(783),
    1,
    anon_sym_RBRACE,
    ACTIONS(785),
    1,
    anon_sym_COMMA,
    STATE(234),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [9064] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(760),
    1,
    anon_sym_COMMA,
    ACTIONS(788),
    1,
    anon_sym_RBRACE,
    STATE(204),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(235),
    1,
    sym_comment,
    [9080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(774),
    2,
    anon_sym_COMMA,
    anon_sym_GT,
    [9094] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(790),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9106] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_simple_declarator,
    STATE(238),
    1,
    sym_comment,
    STATE(333),
    1,
    sym_readonly_attr_declarator,
    [9122] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_RBRACE,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    STATE(228),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(239),
    1,
    sym_comment,
    [9138] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(677),
    1,
    anon_sym_COMMA,
    ACTIONS(792),
    1,
    anon_sym_LBRACE,
    STATE(240),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9154] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(598),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [9166] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(772),
    1,
    sym_identifier,
    ACTIONS(794),
    1,
    anon_sym_SEMI,
    STATE(229),
    1,
    aux_sym_bitfield_repeat1,
    STATE(242),
    1,
    sym_comment,
    [9182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    anon_sym_SEMI,
    ACTIONS(798),
    1,
    anon_sym_switch,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_comment,
    [9198] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_LBRACE,
    ACTIONS(804),
    1,
    anon_sym_COMMA,
    STATE(244),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [9212] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(523),
    1,
    anon_sym_RBRACE,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    STATE(245),
    1,
    sym_comment,
    STATE(246),
    1,
    aux_sym_enum_dcl_repeat1,
    [9228] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    ACTIONS(807),
    1,
    anon_sym_RBRACE,
    STATE(217),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(246),
    1,
    sym_comment,
    [9244] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(809),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9256] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    ACTIONS(807),
    1,
    anon_sym_RBRACE,
    STATE(248),
    1,
    sym_comment,
    STATE(252),
    1,
    aux_sym_enum_dcl_repeat1,
    [9272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_CARET,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(482),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9286] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(813),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9298] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(474),
    1,
    anon_sym_COMMA,
    ACTIONS(815),
    1,
    anon_sym_SEMI,
    STATE(191),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(251),
    1,
    sym_comment,
    [9314] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    anon_sym_COMMA,
    ACTIONS(817),
    1,
    anon_sym_RBRACE,
    STATE(217),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(252),
    1,
    sym_comment,
    [9330] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    anon_sym_SEMI,
    ACTIONS(821),
    1,
    anon_sym_COMMA,
    STATE(253),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_CARET,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(486),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9358] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(824),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9369] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(826),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9380] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(819),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9391] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(258),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_simple_declarator,
    [9404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_simple_declarator,
    [9417] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(496),
    1,
    anon_sym_typedef,
    ACTIONS(828),
    1,
    anon_sym_PIPE,
    STATE(260),
    1,
    sym_comment,
    [9430] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(449),
    1,
    anon_sym_interface,
    STATE(261),
    1,
    sym_comment,
    STATE(404),
    1,
    sym_interface_header,
    [9443] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(830),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [9454] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    anon_sym_LBRACE,
    ACTIONS(834),
    1,
    anon_sym_COLON,
    STATE(263),
    1,
    sym_comment,
    [9467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(836),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9478] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(838),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9489] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(840),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(783),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9511] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(842),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9522] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(719),
    1,
    sym_identifier,
    STATE(269),
    1,
    sym_comment,
    STATE(295),
    1,
    sym_bit_value,
    [9535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(844),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    ACTIONS(846),
    1,
    anon_sym_LBRACE,
    STATE(271),
    1,
    sym_comment,
    [9559] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(848),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [9570] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(449),
    1,
    anon_sym_interface,
    STATE(273),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_interface_header,
    [9583] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(732),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [9594] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(850),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    ACTIONS(852),
    1,
    anon_sym_RPAREN,
    STATE(276),
    1,
    sym_comment,
    [9618] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(854),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9629] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(856),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(858),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9651] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_SEMI,
    ACTIONS(862),
    1,
    anon_sym_default,
    STATE(280),
    1,
    sym_comment,
    [9664] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(864),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9675] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(866),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(745),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(868),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9708] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    STATE(285),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_typedef_dcl,
    [9721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(272),
    1,
    sym_simple_declarator,
    STATE(286),
    1,
    sym_comment,
    [9734] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(870),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(872),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9756] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(874),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9767] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_COMMA,
    ACTIONS(878),
    1,
    anon_sym_GT,
    STATE(290),
    1,
    sym_comment,
    [9780] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(880),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(882),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(884),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(886),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9824] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(712),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9835] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(888),
    1,
    anon_sym_LBRACE,
    ACTIONS(890),
    1,
    anon_sym_COLON,
    STATE(296),
    1,
    sym_comment,
    [9848] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(681),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_const,
    STATE(285),
    1,
    sym_const_dcl,
    STATE(298),
    1,
    sym_comment,
    [9872] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_identifier,
    STATE(297),
    1,
    sym_simple_declarator,
    STATE(299),
    1,
    sym_comment,
    [9885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(894),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9896] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(896),
    1,
    anon_sym_LPAREN,
    STATE(294),
    1,
    sym_exception_list,
    STATE(301),
    1,
    sym_comment,
    [9909] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(896),
    1,
    anon_sym_LPAREN,
    STATE(293),
    1,
    sym_exception_list,
    STATE(302),
    1,
    sym_comment,
    [9922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(898),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9933] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    ACTIONS(900),
    1,
    anon_sym_LBRACE,
    STATE(304),
    1,
    sym_comment,
    [9946] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(902),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(904),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9968] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(906),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9979] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(908),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(910),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [10001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(912),
    1,
    anon_sym_COMMA,
    ACTIONS(914),
    1,
    anon_sym_GT,
    STATE(310),
    1,
    sym_comment,
    [10014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(802),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [10036] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    ACTIONS(918),
    1,
    anon_sym_LBRACE,
    STATE(313),
    1,
    sym_comment,
    [10049] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10060] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(922),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(924),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [10082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(754),
    1,
    anon_sym_SEMI,
    STATE(317),
    1,
    sym_comment,
    [10092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_SEMI,
    STATE(318),
    1,
    sym_comment,
    [10102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(928),
    1,
    anon_sym_LPAREN,
    STATE(319),
    1,
    sym_comment,
    [10112] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(930),
    1,
    anon_sym_SQUOTE,
    STATE(320),
    1,
    sym_comment,
    [10122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(932),
    1,
    aux_sym_char_literal_token1,
    STATE(321),
    1,
    sym_comment,
    [10132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    aux_sym_char_literal_token1,
    STATE(322),
    1,
    sym_comment,
    [10142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(133),
    1,
    anon_sym_RBRACE,
    STATE(323),
    1,
    sym_comment,
    [10152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(936),
    1,
    anon_sym_SEMI,
    STATE(324),
    1,
    sym_comment,
    [10162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(938),
    1,
    anon_sym_COMMA,
    STATE(325),
    1,
    sym_comment,
    [10172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    anon_sym_COMMA,
    STATE(326),
    1,
    sym_comment,
    [10182] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_RPAREN,
    STATE(327),
    1,
    sym_comment,
    [10192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(944),
    1,
    anon_sym_GT,
    STATE(328),
    1,
    sym_comment,
    [10202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(946),
    1,
    anon_sym_GT,
    STATE(329),
    1,
    sym_comment,
    [10212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(948),
    1,
    anon_sym_SQUOTE,
    STATE(330),
    1,
    sym_comment,
    [10222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(950),
    1,
    aux_sym_char_literal_token1,
    STATE(331),
    1,
    sym_comment,
    [10232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(952),
    1,
    anon_sym_GT,
    STATE(332),
    1,
    sym_comment,
    [10242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    anon_sym_SEMI,
    STATE(333),
    1,
    sym_comment,
    [10252] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    anon_sym_SEMI,
    STATE(334),
    1,
    sym_comment,
    [10262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(815),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [10272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(596),
    1,
    anon_sym_SEMI,
    STATE(336),
    1,
    sym_comment,
    [10282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(958),
    1,
    anon_sym_LT,
    STATE(337),
    1,
    sym_comment,
    [10292] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_SEMI,
    STATE(338),
    1,
    sym_comment,
    [10302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(962),
    1,
    anon_sym_RPAREN,
    STATE(339),
    1,
    sym_comment,
    [10312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(340),
    1,
    sym_comment,
    [10322] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_RBRACE,
    STATE(341),
    1,
    sym_comment,
    [10332] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [10342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    [10352] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(972),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [10362] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [10372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_SEMI,
    STATE(346),
    1,
    sym_comment,
    [10382] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(978),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    sym_comment,
    [10392] = 3,
    ACTIONS(980),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    aux_sym_comment_token1,
    STATE(348),
    1,
    sym_comment,
    [10402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [10412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [10422] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    sym_identifier,
    STATE(351),
    1,
    sym_comment,
    [10432] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(990),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(352),
    1,
    sym_comment,
    [10442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    anon_sym_SEMI,
    STATE(353),
    1,
    sym_comment,
    [10452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(994),
    1,
    anon_sym_LPAREN,
    STATE(354),
    1,
    sym_comment,
    [10462] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_RBRACK,
    STATE(355),
    1,
    sym_comment,
    [10472] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_LBRACE,
    STATE(356),
    1,
    sym_comment,
    [10482] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [10492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1002),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [10502] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1004),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [10512] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [10522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [10532] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1010),
    1,
    anon_sym_SEMI,
    STATE(362),
    1,
    sym_comment,
    [10542] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1012),
    1,
    sym_identifier,
    STATE(363),
    1,
    sym_comment,
    [10552] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(690),
    1,
    anon_sym_SEMI,
    STATE(364),
    1,
    sym_comment,
    [10562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    anon_sym_SEMI,
    STATE(365),
    1,
    sym_comment,
    [10572] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(143),
    1,
    anon_sym_RBRACE,
    STATE(366),
    1,
    sym_comment,
    [10582] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1016),
    1,
    anon_sym_attribute,
    STATE(367),
    1,
    sym_comment,
    [10592] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1018),
    1,
    anon_sym_LBRACE,
    STATE(368),
    1,
    sym_comment,
    [10602] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1020),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [10612] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    sym_identifier,
    STATE(370),
    1,
    sym_comment,
    [10622] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [10632] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_LBRACE,
    STATE(372),
    1,
    sym_comment,
    [10642] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1028),
    1,
    anon_sym_SEMI,
    STATE(373),
    1,
    sym_comment,
    [10652] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1030),
    1,
    anon_sym_COLON,
    STATE(374),
    1,
    sym_comment,
    [10662] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_EQ,
    STATE(375),
    1,
    sym_comment,
    [10672] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1034),
    1,
    anon_sym_EQ,
    STATE(376),
    1,
    sym_comment,
    [10682] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_EQ,
    STATE(377),
    1,
    sym_comment,
    [10692] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1038),
    1,
    anon_sym_LBRACE,
    STATE(378),
    1,
    sym_comment,
    [10702] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_GT,
    STATE(379),
    1,
    sym_comment,
    [10712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    anon_sym_GT,
    STATE(380),
    1,
    sym_comment,
    [10722] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1044),
    1,
    anon_sym_GT,
    STATE(381),
    1,
    sym_comment,
    [10732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [10742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    anon_sym_RPAREN,
    STATE(383),
    1,
    sym_comment,
    [10752] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1050),
    1,
    anon_sym_SEMI,
    STATE(384),
    1,
    sym_comment,
    [10762] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_LPAREN,
    STATE(385),
    1,
    sym_comment,
    [10772] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_SEMI,
    STATE(386),
    1,
    sym_comment,
    [10782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    anon_sym_RPAREN,
    STATE(387),
    1,
    sym_comment,
    [10792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [10802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_DQUOTE,
    STATE(389),
    1,
    sym_comment,
    [10812] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_RBRACE,
    STATE(390),
    1,
    sym_comment,
    [10822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1062),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_comment,
    [10832] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_COLON,
    STATE(392),
    1,
    sym_comment,
    [10842] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_SEMI,
    STATE(393),
    1,
    sym_comment,
    [10852] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1068),
    1,
    sym_identifier,
    STATE(394),
    1,
    sym_comment,
    [10862] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1070),
    1,
    anon_sym_SEMI,
    STATE(395),
    1,
    sym_comment,
    [10872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(396),
    1,
    sym_comment,
    [10882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_GT,
    STATE(397),
    1,
    sym_comment,
    [10892] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(398),
    1,
    sym_comment,
    [10902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1074),
    1,
    anon_sym_SEMI,
    STATE(399),
    1,
    sym_comment,
    [10912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    sym_identifier,
    STATE(400),
    1,
    sym_comment,
    [10922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1078),
    1,
    anon_sym_RPAREN,
    STATE(401),
    1,
    sym_comment,
    [10932] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1080),
    1,
    anon_sym_name,
    STATE(402),
    1,
    sym_comment,
    [10942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    anon_sym_name,
    STATE(403),
    1,
    sym_comment,
    [10952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_LBRACE,
    STATE(404),
    1,
    sym_comment,
    [10962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [10972] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [10982] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    anon_sym_SEMI,
    STATE(407),
    1,
    sym_comment,
    [10992] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_SEMI,
    STATE(408),
    1,
    sym_comment,
    [11002] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    [11012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1094),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [11022] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    anon_sym_LT,
    STATE(411),
    1,
    sym_comment,
    [11032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1098),
    1,
    anon_sym_SEMI,
    STATE(412),
    1,
    sym_comment,
    [11042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_LT,
    STATE(413),
    1,
    sym_comment,
    [11052] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1102),
    1,
    anon_sym_LT,
    STATE(414),
    1,
    sym_comment,
    [11062] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    sym_identifier,
    STATE(415),
    1,
    sym_comment,
    [11072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_const,
    STATE(416),
    1,
    sym_comment,
    [11082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_LBRACE,
    STATE(417),
    1,
    sym_comment,
    [11092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(872),
    1,
    anon_sym_const,
    STATE(418),
    1,
    sym_comment,
    [11102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_SQUOTE,
    STATE(419),
    1,
    sym_comment,
    [11112] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    anon_sym_const,
    STATE(420),
    1,
    sym_comment,
    [11122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_const,
    STATE(421),
    1,
    sym_comment,
    [11132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_LBRACE,
    STATE(422),
    1,
    sym_comment,
    [11142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_LBRACE,
    STATE(423),
    1,
    sym_comment,
    [11152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(393),
    1,
    sym_identifier,
    STATE(424),
    1,
    sym_comment,
    [11162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_LBRACE,
    STATE(425),
    1,
    sym_comment,
    [11172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [11182] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_LBRACE,
    STATE(427),
    1,
    sym_comment,
    [11192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1118),
    1,
    anon_sym_enum,
    STATE(428),
    1,
    sym_comment,
    [11202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1120),
    1,
    anon_sym_LBRACE,
    STATE(429),
    1,
    sym_comment,
    [11212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_SEMI,
    STATE(430),
    1,
    sym_comment,
    [11222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1124),
    1,
    anon_sym_enum,
    STATE(431),
    1,
    sym_comment,
    [11232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    anon_sym_SEMI,
    STATE(432),
    1,
    sym_comment,
    [11242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    ts_builtin_sym_end,
    STATE(433),
    1,
    sym_comment,
    [11252] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1130),
    1,
    anon_sym_LPAREN,
    STATE(434),
    1,
    sym_comment,
    [11262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1132),
    1,
    anon_sym_LPAREN,
    STATE(435),
    1,
    sym_comment,
    [11272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1134),
    1,
    anon_sym_LPAREN,
    STATE(436),
    1,
    sym_comment,
    [11282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    aux_sym_char_literal_token1,
    STATE(437),
    1,
    sym_comment,
    [11292] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_comment,
    [11302] = 3,
    ACTIONS(980),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    aux_sym_predefine_token1,
    STATE(439),
    1,
    sym_comment,
    [11312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1142),
    1,
    sym_identifier,
    STATE(440),
    1,
    sym_comment,
    [11322] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    sym_identifier,
    STATE(441),
    1,
    sym_comment,
    [11332] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(442),
    1,
    sym_comment,
    [11342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1148),
    1,
    sym_identifier,
    STATE(443),
    1,
    sym_comment,
    [11352] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    sym_identifier,
    STATE(444),
    1,
    sym_comment,
    [11362] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    anon_sym_LBRACE,
    STATE(445),
    1,
    sym_comment,
    [11372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_EQ,
    STATE(446),
    1,
    sym_comment,
    [11382] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_LBRACE,
    STATE(447),
    1,
    sym_comment,
    [11392] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_RPAREN,
    STATE(448),
    1,
    sym_comment,
    [11402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    anon_sym_enum,
    STATE(449),
    1,
    sym_comment,
    [11412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [11422] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    sym_identifier,
    STATE(451),
    1,
    sym_comment,
    [11432] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    sym_identifier,
    STATE(452),
    1,
    sym_comment,
    [11442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_RPAREN,
    STATE(453),
    1,
    sym_comment,
    [11452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    sym_identifier,
    STATE(454),
    1,
    sym_comment,
    [11462] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    sym_identifier,
    STATE(455),
    1,
    sym_comment,
    [11472] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [11482] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11492] = 1,
    ACTIONS(1178),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 115,
    [SMALL_STATE(4)] = 230,
    [SMALL_STATE(5)] = 345,
    [SMALL_STATE(6)] = 460,
    [SMALL_STATE(7)] = 575,
    [SMALL_STATE(8)] = 688,
    [SMALL_STATE(9)] = 803,
    [SMALL_STATE(10)] = 918,
    [SMALL_STATE(11)] = 1033,
    [SMALL_STATE(12)] = 1148,
    [SMALL_STATE(13)] = 1263,
    [SMALL_STATE(14)] = 1377,
    [SMALL_STATE(15)] = 1483,
    [SMALL_STATE(16)] = 1594,
    [SMALL_STATE(17)] = 1705,
    [SMALL_STATE(18)] = 1816,
    [SMALL_STATE(19)] = 1921,
    [SMALL_STATE(20)] = 2041,
    [SMALL_STATE(21)] = 2162,
    [SMALL_STATE(22)] = 2283,
    [SMALL_STATE(23)] = 2404,
    [SMALL_STATE(24)] = 2472,
    [SMALL_STATE(25)] = 2560,
    [SMALL_STATE(26)] = 2645,
    [SMALL_STATE(27)] = 2738,
    [SMALL_STATE(28)] = 2820,
    [SMALL_STATE(29)] = 2902,
    [SMALL_STATE(30)] = 2984,
    [SMALL_STATE(31)] = 3066,
    [SMALL_STATE(32)] = 3156,
    [SMALL_STATE(33)] = 3244,
    [SMALL_STATE(34)] = 3326,
    [SMALL_STATE(35)] = 3381,
    [SMALL_STATE(36)] = 3436,
    [SMALL_STATE(37)] = 3491,
    [SMALL_STATE(38)] = 3546,
    [SMALL_STATE(39)] = 3601,
    [SMALL_STATE(40)] = 3655,
    [SMALL_STATE(41)] = 3709,
    [SMALL_STATE(42)] = 3763,
    [SMALL_STATE(43)] = 3817,
    [SMALL_STATE(44)] = 3880,
    [SMALL_STATE(45)] = 3943,
    [SMALL_STATE(46)] = 3989,
    [SMALL_STATE(47)] = 4035,
    [SMALL_STATE(48)] = 4081,
    [SMALL_STATE(49)] = 4127,
    [SMALL_STATE(50)] = 4173,
    [SMALL_STATE(51)] = 4219,
    [SMALL_STATE(52)] = 4265,
    [SMALL_STATE(53)] = 4324,
    [SMALL_STATE(54)] = 4366,
    [SMALL_STATE(55)] = 4438,
    [SMALL_STATE(56)] = 4510,
    [SMALL_STATE(57)] = 4582,
    [SMALL_STATE(58)] = 4654,
    [SMALL_STATE(59)] = 4726,
    [SMALL_STATE(60)] = 4798,
    [SMALL_STATE(61)] = 4870,
    [SMALL_STATE(62)] = 4939,
    [SMALL_STATE(63)] = 4970,
    [SMALL_STATE(64)] = 5039,
    [SMALL_STATE(65)] = 5070,
    [SMALL_STATE(66)] = 5101,
    [SMALL_STATE(67)] = 5132,
    [SMALL_STATE(68)] = 5201,
    [SMALL_STATE(69)] = 5232,
    [SMALL_STATE(70)] = 5301,
    [SMALL_STATE(71)] = 5370,
    [SMALL_STATE(72)] = 5439,
    [SMALL_STATE(73)] = 5508,
    [SMALL_STATE(74)] = 5539,
    [SMALL_STATE(75)] = 5602,
    [SMALL_STATE(76)] = 5665,
    [SMALL_STATE(77)] = 5725,
    [SMALL_STATE(78)] = 5785,
    [SMALL_STATE(79)] = 5842,
    [SMALL_STATE(80)] = 5899,
    [SMALL_STATE(81)] = 5927,
    [SMALL_STATE(82)] = 5955,
    [SMALL_STATE(83)] = 5983,
    [SMALL_STATE(84)] = 6011,
    [SMALL_STATE(85)] = 6039,
    [SMALL_STATE(86)] = 6067,
    [SMALL_STATE(87)] = 6095,
    [SMALL_STATE(88)] = 6125,
    [SMALL_STATE(89)] = 6155,
    [SMALL_STATE(90)] = 6209,
    [SMALL_STATE(91)] = 6237,
    [SMALL_STATE(92)] = 6265,
    [SMALL_STATE(93)] = 6293,
    [SMALL_STATE(94)] = 6347,
    [SMALL_STATE(95)] = 6375,
    [SMALL_STATE(96)] = 6406,
    [SMALL_STATE(97)] = 6437,
    [SMALL_STATE(98)] = 6488,
    [SMALL_STATE(99)] = 6539,
    [SMALL_STATE(100)] = 6587,
    [SMALL_STATE(101)] = 6635,
    [SMALL_STATE(102)] = 6661,
    [SMALL_STATE(103)] = 6687,
    [SMALL_STATE(104)] = 6710,
    [SMALL_STATE(105)] = 6733,
    [SMALL_STATE(106)] = 6758,
    [SMALL_STATE(107)] = 6783,
    [SMALL_STATE(108)] = 6807,
    [SMALL_STATE(109)] = 6831,
    [SMALL_STATE(110)] = 6855,
    [SMALL_STATE(111)] = 6879,
    [SMALL_STATE(112)] = 6914,
    [SMALL_STATE(113)] = 6949,
    [SMALL_STATE(114)] = 6984,
    [SMALL_STATE(115)] = 7012,
    [SMALL_STATE(116)] = 7032,
    [SMALL_STATE(117)] = 7052,
    [SMALL_STATE(118)] = 7083,
    [SMALL_STATE(119)] = 7102,
    [SMALL_STATE(120)] = 7121,
    [SMALL_STATE(121)] = 7140,
    [SMALL_STATE(122)] = 7159,
    [SMALL_STATE(123)] = 7175,
    [SMALL_STATE(124)] = 7201,
    [SMALL_STATE(125)] = 7219,
    [SMALL_STATE(126)] = 7238,
    [SMALL_STATE(127)] = 7255,
    [SMALL_STATE(128)] = 7280,
    [SMALL_STATE(129)] = 7301,
    [SMALL_STATE(130)] = 7326,
    [SMALL_STATE(131)] = 7351,
    [SMALL_STATE(132)] = 7376,
    [SMALL_STATE(133)] = 7401,
    [SMALL_STATE(134)] = 7426,
    [SMALL_STATE(135)] = 7443,
    [SMALL_STATE(136)] = 7466,
    [SMALL_STATE(137)] = 7487,
    [SMALL_STATE(138)] = 7504,
    [SMALL_STATE(139)] = 7526,
    [SMALL_STATE(140)] = 7546,
    [SMALL_STATE(141)] = 7566,
    [SMALL_STATE(142)] = 7588,
    [SMALL_STATE(143)] = 7610,
    [SMALL_STATE(144)] = 7624,
    [SMALL_STATE(145)] = 7638,
    [SMALL_STATE(146)] = 7652,
    [SMALL_STATE(147)] = 7672,
    [SMALL_STATE(148)] = 7692,
    [SMALL_STATE(149)] = 7712,
    [SMALL_STATE(150)] = 7726,
    [SMALL_STATE(151)] = 7748,
    [SMALL_STATE(152)] = 7770,
    [SMALL_STATE(153)] = 7790,
    [SMALL_STATE(154)] = 7804,
    [SMALL_STATE(155)] = 7818,
    [SMALL_STATE(156)] = 7840,
    [SMALL_STATE(157)] = 7862,
    [SMALL_STATE(158)] = 7879,
    [SMALL_STATE(159)] = 7898,
    [SMALL_STATE(160)] = 7917,
    [SMALL_STATE(161)] = 7932,
    [SMALL_STATE(162)] = 7951,
    [SMALL_STATE(163)] = 7966,
    [SMALL_STATE(164)] = 7981,
    [SMALL_STATE(165)] = 7998,
    [SMALL_STATE(166)] = 8011,
    [SMALL_STATE(167)] = 8024,
    [SMALL_STATE(168)] = 8039,
    [SMALL_STATE(169)] = 8056,
    [SMALL_STATE(170)] = 8073,
    [SMALL_STATE(171)] = 8092,
    [SMALL_STATE(172)] = 8111,
    [SMALL_STATE(173)] = 8128,
    [SMALL_STATE(174)] = 8145,
    [SMALL_STATE(175)] = 8162,
    [SMALL_STATE(176)] = 8181,
    [SMALL_STATE(177)] = 8198,
    [SMALL_STATE(178)] = 8217,
    [SMALL_STATE(179)] = 8230,
    [SMALL_STATE(180)] = 8249,
    [SMALL_STATE(181)] = 8266,
    [SMALL_STATE(182)] = 8285,
    [SMALL_STATE(183)] = 8298,
    [SMALL_STATE(184)] = 8317,
    [SMALL_STATE(185)] = 8336,
    [SMALL_STATE(186)] = 8352,
    [SMALL_STATE(187)] = 8368,
    [SMALL_STATE(188)] = 8380,
    [SMALL_STATE(189)] = 8396,
    [SMALL_STATE(190)] = 8412,
    [SMALL_STATE(191)] = 8426,
    [SMALL_STATE(192)] = 8440,
    [SMALL_STATE(193)] = 8456,
    [SMALL_STATE(194)] = 8472,
    [SMALL_STATE(195)] = 8488,
    [SMALL_STATE(196)] = 8500,
    [SMALL_STATE(197)] = 8514,
    [SMALL_STATE(198)] = 8530,
    [SMALL_STATE(199)] = 8542,
    [SMALL_STATE(200)] = 8558,
    [SMALL_STATE(201)] = 8574,
    [SMALL_STATE(202)] = 8586,
    [SMALL_STATE(203)] = 8602,
    [SMALL_STATE(204)] = 8618,
    [SMALL_STATE(205)] = 8632,
    [SMALL_STATE(206)] = 8648,
    [SMALL_STATE(207)] = 8660,
    [SMALL_STATE(208)] = 8676,
    [SMALL_STATE(209)] = 8692,
    [SMALL_STATE(210)] = 8708,
    [SMALL_STATE(211)] = 8720,
    [SMALL_STATE(212)] = 8734,
    [SMALL_STATE(213)] = 8748,
    [SMALL_STATE(214)] = 8764,
    [SMALL_STATE(215)] = 8776,
    [SMALL_STATE(216)] = 8788,
    [SMALL_STATE(217)] = 8804,
    [SMALL_STATE(218)] = 8818,
    [SMALL_STATE(219)] = 8830,
    [SMALL_STATE(220)] = 8842,
    [SMALL_STATE(221)] = 8858,
    [SMALL_STATE(222)] = 8874,
    [SMALL_STATE(223)] = 8890,
    [SMALL_STATE(224)] = 8906,
    [SMALL_STATE(225)] = 8918,
    [SMALL_STATE(226)] = 8934,
    [SMALL_STATE(227)] = 8946,
    [SMALL_STATE(228)] = 8962,
    [SMALL_STATE(229)] = 8978,
    [SMALL_STATE(230)] = 8994,
    [SMALL_STATE(231)] = 9006,
    [SMALL_STATE(232)] = 9020,
    [SMALL_STATE(233)] = 9034,
    [SMALL_STATE(234)] = 9050,
    [SMALL_STATE(235)] = 9064,
    [SMALL_STATE(236)] = 9080,
    [SMALL_STATE(237)] = 9094,
    [SMALL_STATE(238)] = 9106,
    [SMALL_STATE(239)] = 9122,
    [SMALL_STATE(240)] = 9138,
    [SMALL_STATE(241)] = 9154,
    [SMALL_STATE(242)] = 9166,
    [SMALL_STATE(243)] = 9182,
    [SMALL_STATE(244)] = 9198,
    [SMALL_STATE(245)] = 9212,
    [SMALL_STATE(246)] = 9228,
    [SMALL_STATE(247)] = 9244,
    [SMALL_STATE(248)] = 9256,
    [SMALL_STATE(249)] = 9272,
    [SMALL_STATE(250)] = 9286,
    [SMALL_STATE(251)] = 9298,
    [SMALL_STATE(252)] = 9314,
    [SMALL_STATE(253)] = 9330,
    [SMALL_STATE(254)] = 9344,
    [SMALL_STATE(255)] = 9358,
    [SMALL_STATE(256)] = 9369,
    [SMALL_STATE(257)] = 9380,
    [SMALL_STATE(258)] = 9391,
    [SMALL_STATE(259)] = 9404,
    [SMALL_STATE(260)] = 9417,
    [SMALL_STATE(261)] = 9430,
    [SMALL_STATE(262)] = 9443,
    [SMALL_STATE(263)] = 9454,
    [SMALL_STATE(264)] = 9467,
    [SMALL_STATE(265)] = 9478,
    [SMALL_STATE(266)] = 9489,
    [SMALL_STATE(267)] = 9500,
    [SMALL_STATE(268)] = 9511,
    [SMALL_STATE(269)] = 9522,
    [SMALL_STATE(270)] = 9535,
    [SMALL_STATE(271)] = 9546,
    [SMALL_STATE(272)] = 9559,
    [SMALL_STATE(273)] = 9570,
    [SMALL_STATE(274)] = 9583,
    [SMALL_STATE(275)] = 9594,
    [SMALL_STATE(276)] = 9605,
    [SMALL_STATE(277)] = 9618,
    [SMALL_STATE(278)] = 9629,
    [SMALL_STATE(279)] = 9640,
    [SMALL_STATE(280)] = 9651,
    [SMALL_STATE(281)] = 9664,
    [SMALL_STATE(282)] = 9675,
    [SMALL_STATE(283)] = 9686,
    [SMALL_STATE(284)] = 9697,
    [SMALL_STATE(285)] = 9708,
    [SMALL_STATE(286)] = 9721,
    [SMALL_STATE(287)] = 9734,
    [SMALL_STATE(288)] = 9745,
    [SMALL_STATE(289)] = 9756,
    [SMALL_STATE(290)] = 9767,
    [SMALL_STATE(291)] = 9780,
    [SMALL_STATE(292)] = 9791,
    [SMALL_STATE(293)] = 9802,
    [SMALL_STATE(294)] = 9813,
    [SMALL_STATE(295)] = 9824,
    [SMALL_STATE(296)] = 9835,
    [SMALL_STATE(297)] = 9848,
    [SMALL_STATE(298)] = 9859,
    [SMALL_STATE(299)] = 9872,
    [SMALL_STATE(300)] = 9885,
    [SMALL_STATE(301)] = 9896,
    [SMALL_STATE(302)] = 9909,
    [SMALL_STATE(303)] = 9922,
    [SMALL_STATE(304)] = 9933,
    [SMALL_STATE(305)] = 9946,
    [SMALL_STATE(306)] = 9957,
    [SMALL_STATE(307)] = 9968,
    [SMALL_STATE(308)] = 9979,
    [SMALL_STATE(309)] = 9990,
    [SMALL_STATE(310)] = 10001,
    [SMALL_STATE(311)] = 10014,
    [SMALL_STATE(312)] = 10025,
    [SMALL_STATE(313)] = 10036,
    [SMALL_STATE(314)] = 10049,
    [SMALL_STATE(315)] = 10060,
    [SMALL_STATE(316)] = 10071,
    [SMALL_STATE(317)] = 10082,
    [SMALL_STATE(318)] = 10092,
    [SMALL_STATE(319)] = 10102,
    [SMALL_STATE(320)] = 10112,
    [SMALL_STATE(321)] = 10122,
    [SMALL_STATE(322)] = 10132,
    [SMALL_STATE(323)] = 10142,
    [SMALL_STATE(324)] = 10152,
    [SMALL_STATE(325)] = 10162,
    [SMALL_STATE(326)] = 10172,
    [SMALL_STATE(327)] = 10182,
    [SMALL_STATE(328)] = 10192,
    [SMALL_STATE(329)] = 10202,
    [SMALL_STATE(330)] = 10212,
    [SMALL_STATE(331)] = 10222,
    [SMALL_STATE(332)] = 10232,
    [SMALL_STATE(333)] = 10242,
    [SMALL_STATE(334)] = 10252,
    [SMALL_STATE(335)] = 10262,
    [SMALL_STATE(336)] = 10272,
    [SMALL_STATE(337)] = 10282,
    [SMALL_STATE(338)] = 10292,
    [SMALL_STATE(339)] = 10302,
    [SMALL_STATE(340)] = 10312,
    [SMALL_STATE(341)] = 10322,
    [SMALL_STATE(342)] = 10332,
    [SMALL_STATE(343)] = 10342,
    [SMALL_STATE(344)] = 10352,
    [SMALL_STATE(345)] = 10362,
    [SMALL_STATE(346)] = 10372,
    [SMALL_STATE(347)] = 10382,
    [SMALL_STATE(348)] = 10392,
    [SMALL_STATE(349)] = 10402,
    [SMALL_STATE(350)] = 10412,
    [SMALL_STATE(351)] = 10422,
    [SMALL_STATE(352)] = 10432,
    [SMALL_STATE(353)] = 10442,
    [SMALL_STATE(354)] = 10452,
    [SMALL_STATE(355)] = 10462,
    [SMALL_STATE(356)] = 10472,
    [SMALL_STATE(357)] = 10482,
    [SMALL_STATE(358)] = 10492,
    [SMALL_STATE(359)] = 10502,
    [SMALL_STATE(360)] = 10512,
    [SMALL_STATE(361)] = 10522,
    [SMALL_STATE(362)] = 10532,
    [SMALL_STATE(363)] = 10542,
    [SMALL_STATE(364)] = 10552,
    [SMALL_STATE(365)] = 10562,
    [SMALL_STATE(366)] = 10572,
    [SMALL_STATE(367)] = 10582,
    [SMALL_STATE(368)] = 10592,
    [SMALL_STATE(369)] = 10602,
    [SMALL_STATE(370)] = 10612,
    [SMALL_STATE(371)] = 10622,
    [SMALL_STATE(372)] = 10632,
    [SMALL_STATE(373)] = 10642,
    [SMALL_STATE(374)] = 10652,
    [SMALL_STATE(375)] = 10662,
    [SMALL_STATE(376)] = 10672,
    [SMALL_STATE(377)] = 10682,
    [SMALL_STATE(378)] = 10692,
    [SMALL_STATE(379)] = 10702,
    [SMALL_STATE(380)] = 10712,
    [SMALL_STATE(381)] = 10722,
    [SMALL_STATE(382)] = 10732,
    [SMALL_STATE(383)] = 10742,
    [SMALL_STATE(384)] = 10752,
    [SMALL_STATE(385)] = 10762,
    [SMALL_STATE(386)] = 10772,
    [SMALL_STATE(387)] = 10782,
    [SMALL_STATE(388)] = 10792,
    [SMALL_STATE(389)] = 10802,
    [SMALL_STATE(390)] = 10812,
    [SMALL_STATE(391)] = 10822,
    [SMALL_STATE(392)] = 10832,
    [SMALL_STATE(393)] = 10842,
    [SMALL_STATE(394)] = 10852,
    [SMALL_STATE(395)] = 10862,
    [SMALL_STATE(396)] = 10872,
    [SMALL_STATE(397)] = 10882,
    [SMALL_STATE(398)] = 10892,
    [SMALL_STATE(399)] = 10902,
    [SMALL_STATE(400)] = 10912,
    [SMALL_STATE(401)] = 10922,
    [SMALL_STATE(402)] = 10932,
    [SMALL_STATE(403)] = 10942,
    [SMALL_STATE(404)] = 10952,
    [SMALL_STATE(405)] = 10962,
    [SMALL_STATE(406)] = 10972,
    [SMALL_STATE(407)] = 10982,
    [SMALL_STATE(408)] = 10992,
    [SMALL_STATE(409)] = 11002,
    [SMALL_STATE(410)] = 11012,
    [SMALL_STATE(411)] = 11022,
    [SMALL_STATE(412)] = 11032,
    [SMALL_STATE(413)] = 11042,
    [SMALL_STATE(414)] = 11052,
    [SMALL_STATE(415)] = 11062,
    [SMALL_STATE(416)] = 11072,
    [SMALL_STATE(417)] = 11082,
    [SMALL_STATE(418)] = 11092,
    [SMALL_STATE(419)] = 11102,
    [SMALL_STATE(420)] = 11112,
    [SMALL_STATE(421)] = 11122,
    [SMALL_STATE(422)] = 11132,
    [SMALL_STATE(423)] = 11142,
    [SMALL_STATE(424)] = 11152,
    [SMALL_STATE(425)] = 11162,
    [SMALL_STATE(426)] = 11172,
    [SMALL_STATE(427)] = 11182,
    [SMALL_STATE(428)] = 11192,
    [SMALL_STATE(429)] = 11202,
    [SMALL_STATE(430)] = 11212,
    [SMALL_STATE(431)] = 11222,
    [SMALL_STATE(432)] = 11232,
    [SMALL_STATE(433)] = 11242,
    [SMALL_STATE(434)] = 11252,
    [SMALL_STATE(435)] = 11262,
    [SMALL_STATE(436)] = 11272,
    [SMALL_STATE(437)] = 11282,
    [SMALL_STATE(438)] = 11292,
    [SMALL_STATE(439)] = 11302,
    [SMALL_STATE(440)] = 11312,
    [SMALL_STATE(441)] = 11322,
    [SMALL_STATE(442)] = 11332,
    [SMALL_STATE(443)] = 11342,
    [SMALL_STATE(444)] = 11352,
    [SMALL_STATE(445)] = 11362,
    [SMALL_STATE(446)] = 11372,
    [SMALL_STATE(447)] = 11382,
    [SMALL_STATE(448)] = 11392,
    [SMALL_STATE(449)] = 11402,
    [SMALL_STATE(450)] = 11412,
    [SMALL_STATE(451)] = 11422,
    [SMALL_STATE(452)] = 11432,
    [SMALL_STATE(453)] = 11442,
    [SMALL_STATE(454)] = 11452,
    [SMALL_STATE(455)] = 11462,
    [SMALL_STATE(456)] = 11472,
    [SMALL_STATE(457)] = 11482,
    [SMALL_STATE(458)] = 11492,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(414),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(413),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(411),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [79] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [81] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(40),
    [84] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(352),
    [87] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(351),
    [90] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(165),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [96] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [99] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(415),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(144),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(414),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(167),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(413),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(411),
    [117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(451),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(450),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(442),
    [133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(370),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(367),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [147] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(457),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(259),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(452),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(451),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(450),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(449),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(443),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(442),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(441),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(440),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(439),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(438),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(261),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(153),
    [192] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(436),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(435),
    [198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(44),
    [201] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(247),
    [204] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(434),
    [207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [213] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(40),
    [216] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(352),
    [219] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(351),
    [222] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [232] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(454),
    [234] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(343),
    [236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [240] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(454),
    [243] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(449),
    [246] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(343),
    [249] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(165),
    [252] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [255] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [258] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(415),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(144),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(414),
    [267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [269] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 7),
    [273] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 7),
    [275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [277] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [281] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [285] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [289] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [293] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [297] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [301] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [305] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [309] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [311] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [317] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [319] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [327] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [333] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(137),
    [335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [341] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(330),
    [343] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [347] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [349] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [365] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [367] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [369] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [371] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [377] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [379] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [383] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [387] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [391] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 8),
    [397] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 8),
    [399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [401] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [405] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [409] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [415] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [421] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [427] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [431] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [433] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [443] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [447] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [457] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(153),
    [460] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(436),
    [463] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(435),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [470] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [472] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [478] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [480] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [482] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [486] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [488] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [490] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [498] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [500] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [502] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(60),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [531] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(374),
    [534] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(69),
    [537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [541] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [547] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(247),
    [550] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(434),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [571] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(337),
    [576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [584] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(196),
    [587] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(196),
    [590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [592] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [594] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [600] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(168),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [607] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [615] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [617] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [625] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [629] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [637] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(256),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [644] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(302),
    [647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [653] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [655] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [679] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [683] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(299),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [698] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [700] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [708] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [714] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(269),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [729] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(275),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [734] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(147),
    [737] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [747] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(138),
    [750] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [758] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [764] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [778] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(221),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [785] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(18),
    [788] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [794] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [798] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [800] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [804] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(183),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [821] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(180),
    [824] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [828] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [832] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [834] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [836] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [840] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [844] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 9),
    [846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [848] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [850] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [854] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [856] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [860] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [864] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [866] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 9),
    [868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [880] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [882] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [884] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [886] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [888] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [892] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [908] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [920] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [932] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [934] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [946] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [950] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [952] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [958] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [980] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(348),
    [982] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(458),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [988] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [996] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [1140] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [1178] = { .entry = { .count = 1, .reusable = true } },
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
