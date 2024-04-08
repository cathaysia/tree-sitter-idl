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
#define STATE_COUNT 409
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 236
#define ALIAS_COUNT 3
#define TOKEN_COUNT 121
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
    anon_sym_union = 31,
    anon_sym_switch = 32,
    anon_sym_case = 33,
    anon_sym_bitset = 34,
    anon_sym_bitfield = 35,
    anon_sym_LT = 36,
    anon_sym_GT = 37,
    anon_sym_bitmask = 38,
    anon_sym_typedef = 39,
    anon_sym_POUNDdefine = 40,
    aux_sym_predefine_token1 = 41,
    anon_sym_interface = 42,
    anon_sym_local = 43,
    anon_sym_void = 44,
    anon_sym_in = 45,
    anon_sym_out = 46,
    anon_sym_inout = 47,
    anon_sym_raises = 48,
    anon_sym_readonly = 49,
    anon_sym_attribute = 50,
    anon_sym_getraises = 51,
    anon_sym_setraises = 52,
    sym_dds_service = 53,
    anon_sym_ATDDSRequestTopic = 54,
    anon_sym_name = 55,
    anon_sym_EQ = 56,
    anon_sym_ATDDSReplyTopic = 57,
    anon_sym_const = 58,
    sym_number_literal = 59,
    sym_optional = 60,
    sym_key = 61,
    sym_must_understand = 62,
    sym_non_serialized = 63,
    sym_id = 64,
    sym_external = 65,
    anon_sym_AThashid = 66,
    anon_sym_LPAREN_DQUOTE = 67,
    anon_sym_DQUOTE = 68,
    anon_sym_ATtry_construct = 69,
    sym_extensibility = 70,
    sym_mutable = 71,
    sym_appendable = 72,
    sym_final = 73,
    sym_nested = 74,
    sym_value = 75,
    sym_autoid = 76,
    sym_verbatim = 77,
    anon_sym_ATdata_representation = 78,
    anon_sym_XCDR = 79,
    anon_sym_XCDR2 = 80,
    sym_boolean_type = 81,
    sym_octet_type = 82,
    anon_sym_float = 83,
    anon_sym_double = 84,
    anon_sym_short = 85,
    anon_sym_long = 86,
    anon_sym_longdouble = 87,
    anon_sym_unsignedshort = 88,
    anon_sym_longlong = 89,
    anon_sym_unsignedlong = 90,
    anon_sym_unsignedlonglong = 91,
    anon_sym_int = 92,
    anon_sym_int8 = 93,
    anon_sym_int16 = 94,
    anon_sym_int32 = 95,
    anon_sym_int64 = 96,
    anon_sym_uint8 = 97,
    anon_sym_uint16 = 98,
    anon_sym_uint32 = 99,
    anon_sym_uint64 = 100,
    anon_sym_float32 = 101,
    anon_sym_float64 = 102,
    anon_sym_float128 = 103,
    anon_sym_char = 104,
    anon_sym_wchar = 105,
    anon_sym_byte = 106,
    anon_sym_char8 = 107,
    anon_sym_char16 = 108,
    anon_sym_COLON_COLON = 109,
    sym_identifier = 110,
    anon_sym_LBRACK = 111,
    anon_sym_RBRACK = 112,
    anon_sym_sequence = 113,
    anon_sym_string = 114,
    anon_sym_wstring = 115,
    anon_sym_fixed = 116,
    anon_sym_map = 117,
    anon_sym_SLASH_SLASH = 118,
    aux_sym_comment_token1 = 119,
    sym__eof = 120,
    sym_specification = 121,
    sym__definition = 122,
    sym_except_dcl = 123,
    sym_native_dcl = 124,
    sym_module_dcl = 125,
    sym_struct_forward_dcl = 126,
    sym_struct_def = 127,
    sym_member = 128,
    sym_or_expr = 129,
    sym_xor_expr = 130,
    sym_and_expr = 131,
    sym_shift_expr = 132,
    sym_add_expr = 133,
    sym_mult_expr = 134,
    sym_unary_expr = 135,
    sym_unary_operator = 136,
    sym_char_literal = 137,
    sym_wchar_literal = 138,
    sym_literal = 139,
    sym_default = 140,
    sym_enum_dcl = 141,
    sym_enumerator = 142,
    sym_enum_modifier = 143,
    sym_enum_anno = 144,
    sym_annotation = 145,
    sym_annotation_field = 146,
    sym_union_forward_dcl = 147,
    sym_union_def = 148,
    sym_case = 149,
    sym_case_label = 150,
    sym_element_spec = 151,
    sym_switch_type_spec = 152,
    sym_bitset_dcl = 153,
    sym_bitfield = 154,
    sym_bitfield_spec = 155,
    sym_destination_type = 156,
    sym_bitmask_dcl = 157,
    sym_bit_value = 158,
    sym_typedef_dcl = 159,
    sym_predefine = 160,
    sym_interface_dcl = 161,
    sym_interface_forward_dcl = 162,
    sym_interface_def = 163,
    sym_interface_header = 164,
    sym_interface_inheritance_spec = 165,
    sym_interface_name = 166,
    sym_interface_body = 167,
    sym_export = 168,
    sym_op_dcl = 169,
    sym_op_type_spec = 170,
    sym_parameter_dcls = 171,
    sym_param_dcl = 172,
    sym_param_attribute = 173,
    sym_raises_expr = 174,
    sym_attr_dcl = 175,
    sym_readonly_attr_spec = 176,
    sym_readonly_attr_declarator = 177,
    sym_attr_spec = 178,
    sym_attr_declarator = 179,
    sym_attr_raises_expr = 180,
    sym_get_excep_expr = 181,
    sym_set_excep_expr = 182,
    sym_exception_list = 183,
    sym_dds_request_topic = 184,
    sym_dds_reply_topic = 185,
    sym_interface_anno = 186,
    sym_const_dcl = 187,
    sym_const_type = 188,
    sym_const_expr = 189,
    sym_hashid = 190,
    sym_try_construct = 191,
    sym_data_representation = 192,
    sym_struct_modifier = 193,
    sym_integer_type = 194,
    sym_primitive_type = 195,
    sym_scoped_name = 196,
    sym_simple_type_spec = 197,
    sym_type_spec = 198,
    sym_simple_declarator = 199,
    sym_declarator = 200,
    sym_declarators = 201,
    sym_array_declarator = 202,
    sym_positive_int_const = 203,
    sym_fixed_array_size = 204,
    sym_sequence_type = 205,
    sym_string_type = 206,
    sym_fixed_pt_type = 207,
    sym_template_type_spec = 208,
    sym_map_type = 209,
    sym_type_declarator = 210,
    sym_any_declarators = 211,
    sym_any_declarator = 212,
    sym_comment = 213,
    aux_sym_specification_repeat1 = 214,
    aux_sym_except_dcl_repeat1 = 215,
    aux_sym_struct_def_repeat1 = 216,
    aux_sym_member_repeat1 = 217,
    aux_sym_enum_dcl_repeat1 = 218,
    aux_sym_enumerator_repeat1 = 219,
    aux_sym_annotation_repeat1 = 220,
    aux_sym_union_def_repeat1 = 221,
    aux_sym_bitset_dcl_repeat1 = 222,
    aux_sym_bitfield_repeat1 = 223,
    aux_sym_bitmask_dcl_repeat1 = 224,
    aux_sym_interface_def_repeat1 = 225,
    aux_sym_interface_inheritance_spec_repeat1 = 226,
    aux_sym_interface_body_repeat1 = 227,
    aux_sym_parameter_dcls_repeat1 = 228,
    aux_sym_raises_expr_repeat1 = 229,
    aux_sym_readonly_attr_declarator_repeat1 = 230,
    aux_sym_attr_raises_expr_repeat1 = 231,
    aux_sym_data_representation_repeat1 = 232,
    aux_sym_declarators_repeat1 = 233,
    aux_sym_array_declarator_repeat1 = 234,
    aux_sym_any_declarators_repeat1 = 235,
    alias_sym_data_rep = 236,
    alias_sym_hashid_value = 237,
    alias_sym_try_construct_value = 238,
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
    [anon_sym_EQ] = "=",
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
    [sym_extensibility] = "extensibility",
    [sym_mutable] = "mutable",
    [sym_appendable] = "appendable",
    [sym_final] = "final",
    [sym_nested] = "nested",
    [sym_value] = "value",
    [sym_autoid] = "autoid",
    [sym_verbatim] = "verbatim",
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
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
    [sym_annotation] = "annotation",
    [sym_annotation_field] = "annotation_field",
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
    [aux_sym_annotation_repeat1] = "annotation_repeat1",
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
    [anon_sym_EQ] = anon_sym_EQ,
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
    [sym_extensibility] = sym_extensibility,
    [sym_mutable] = sym_mutable,
    [sym_appendable] = sym_appendable,
    [sym_final] = sym_final,
    [sym_nested] = sym_nested,
    [sym_value] = sym_value,
    [sym_autoid] = sym_autoid,
    [sym_verbatim] = sym_verbatim,
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
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
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
    [sym_annotation] = sym_annotation,
    [sym_annotation_field] = sym_annotation_field,
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
    [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
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
    [anon_sym_EQ] = {
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
    [sym_extensibility] = {
        .visible = true,
        .named = true,
    },
    [sym_mutable] = {
        .visible = true,
        .named = true,
    },
    [sym_appendable] = {
        .visible = true,
        .named = true,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [sym_nested] = {
        .visible = true,
        .named = true,
    },
    [sym_value] = {
        .visible = true,
        .named = true,
    },
    [sym_autoid] = {
        .visible = true,
        .named = true,
    },
    [sym_verbatim] = {
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
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
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
    [sym_annotation] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_field] = {
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
    [aux_sym_annotation_repeat1] = {
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
    [113] = 68,
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
    [124] = 70,
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
    [306] = 160,
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
    [337] = 315,
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
                ADVANCE(497);
            if(lookahead == '"')
                ADVANCE(611);
            if(lookahead == '#')
                ADVANCE(141);
            if(lookahead == '$')
                ADVANCE(509);
            if(lookahead == '%')
                ADVANCE(518);
            if(lookahead == '\'')
                ADVANCE(523);
            if(lookahead == '(')
                ADVANCE(521);
            if(lookahead == ')')
                ADVANCE(522);
            if(lookahead == '*')
                ADVANCE(516);
            if(lookahead == '+')
                ADVANCE(513);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '-')
                ADVANCE(515);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '/')
                ADVANCE(517);
            if(lookahead == '0')
                ADVANCE(580);
            if(lookahead == ':')
                ADVANCE(506);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '<')
                ADVANCE(543);
            if(lookahead == '=')
                ADVANCE(570);
            if(lookahead == '>')
                ADVANCE(545);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'L')
                ADVANCE(525);
            if(lookahead == 'X')
                ADVANCE(56);
            if(lookahead == '[')
                ADVANCE(803);
            if(lookahead == '\\')
                SKIP(493)
            if(lookahead == ']')
                ADVANCE(804);
            if(lookahead == '^')
                ADVANCE(508);
            if(lookahead == 'a')
                ADVANCE(426);
            if(lookahead == 'b')
                ADVANCE(228);
            if(lookahead == 'c')
                ADVANCE(73);
            if(lookahead == 'd')
                ADVANCE(150);
            if(lookahead == 'e')
                ADVANCE(299);
            if(lookahead == 'f')
                ADVANCE(225);
            if(lookahead == 'g')
                ADVANCE(194);
            if(lookahead == 'i')
                ADVANCE(291);
            if(lookahead == 'l')
                ADVANCE(328);
            if(lookahead == 'm')
                ADVANCE(77);
            if(lookahead == 'n')
                ADVANCE(74);
            if(lookahead == 'o')
                ADVANCE(120);
            if(lookahead == 'r')
                ADVANCE(76);
            if(lookahead == 's')
                ADVANCE(151);
            if(lookahead == 't')
                ADVANCE(483);
            if(lookahead == 'u')
                ADVANCE(229);
            if(lookahead == 'v')
                ADVANCE(334);
            if(lookahead == 'w')
                ADVANCE(115);
            if(lookahead == '{')
                ADVANCE(500);
            if(lookahead == '|')
                ADVANCE(507);
            if(lookahead == '}')
                ADVANCE(501);
            if(lookahead == '~')
                ADVANCE(519);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(31)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(35)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(35)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(36)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(36)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(29)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(29)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(30)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(28)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(28)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(32)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(32)
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
                SKIP(40)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(40)
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
                ADVANCE(819);
            if(lookahead == '\r')
                ADVANCE(818);
            if(lookahead == '\\')
                ADVANCE(822);
            if(lookahead != 0)
                ADVANCE(821);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(38)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(38)
            if(lookahead == '\r')
                SKIP(24)
            END_STATE();
        case 26:
            if(lookahead == ' ')
                ADVANCE(283);
            END_STATE();
        case 27:
            if(lookahead == '"')
                ADVANCE(610);
            END_STATE();
        case 28:
            if(lookahead == '$')
                ADVANCE(509);
            if(lookahead == '%')
                ADVANCE(518);
            if(lookahead == ')')
                ADVANCE(522);
            if(lookahead == '*')
                ADVANCE(516);
            if(lookahead == '+')
                ADVANCE(512);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '-')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(517);
            if(lookahead == ':')
                ADVANCE(506);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(545);
            if(lookahead == '@')
                ADVANCE(145);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(804);
            if(lookahead == '^')
                ADVANCE(508);
            if(lookahead == '{')
                ADVANCE(500);
            if(lookahead == '|')
                ADVANCE(507);
            if(lookahead == '}')
                ADVANCE(501);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(28)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 29:
            if(lookahead == '$')
                ADVANCE(509);
            if(lookahead == ')')
                ADVANCE(522);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(506);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '>')
                ADVANCE(544);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == ']')
                ADVANCE(804);
            if(lookahead == '^')
                ADVANCE(508);
            if(lookahead == 'b')
                ADVANCE(333);
            if(lookahead == 'd')
                ADVANCE(331);
            if(lookahead == 'f')
                ADVANCE(266);
            if(lookahead == 'i')
                ADVANCE(320);
            if(lookahead == 'l')
                ADVANCE(351);
            if(lookahead == 'o')
                ADVANCE(119);
            if(lookahead == 's')
                ADVANCE(219);
            if(lookahead == 'u')
                ADVANCE(230);
            if(lookahead == '|')
                ADVANCE(507);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(29)
            END_STATE();
        case 30:
            if(lookahead == '\'')
                ADVANCE(523);
            if(lookahead == '(')
                ADVANCE(520);
            if(lookahead == '+')
                ADVANCE(513);
            if(lookahead == '-')
                ADVANCE(515);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == '0')
                ADVANCE(582);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == 'L')
                ADVANCE(526);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(519);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 31:
            if(lookahead == '(')
                ADVANCE(27);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '<')
                ADVANCE(542);
            if(lookahead == '>')
                ADVANCE(544);
            if(lookahead == '@')
                ADVANCE(202);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(804);
            if(lookahead == 'b')
                ADVANCE(763);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(760);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(753);
            if(lookahead == 'l')
                ADVANCE(762);
            if(lookahead == 'm')
                ADVANCE(690);
            if(lookahead == 'o')
                ADVANCE(702);
            if(lookahead == 's')
                ADVANCE(709);
            if(lookahead == 'u')
                ADVANCE(739);
            if(lookahead == 'w')
                ADVANCE(703);
            if(lookahead == '}')
                ADVANCE(501);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 32:
            if(lookahead == ')')
                ADVANCE(522);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '<')
                ADVANCE(542);
            if(lookahead == '>')
                ADVANCE(544);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == '{')
                ADVANCE(500);
            if(lookahead == '}')
                ADVANCE(501);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(576);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(578);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            END_STATE();
        case 34:
            if(lookahead == '/')
                ADVANCE(815);
            END_STATE();
        case 35:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '@')
                ADVANCE(148);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(763);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(760);
            if(lookahead == 'e')
                ADVANCE(755);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(753);
            if(lookahead == 'l')
                ADVANCE(762);
            if(lookahead == 'm')
                ADVANCE(690);
            if(lookahead == 'o')
                ADVANCE(702);
            if(lookahead == 's')
                ADVANCE(710);
            if(lookahead == 'u')
                ADVANCE(740);
            if(lookahead == 'w')
                ADVANCE(703);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(791);
            if(lookahead == 'b')
                ADVANCE(763);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(760);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(753);
            if(lookahead == 'l')
                ADVANCE(762);
            if(lookahead == 'm')
                ADVANCE(690);
            if(lookahead == 'o')
                ADVANCE(702);
            if(lookahead == 'r')
                ADVANCE(721);
            if(lookahead == 's')
                ADVANCE(709);
            if(lookahead == 'u')
                ADVANCE(739);
            if(lookahead == 'v')
                ADVANCE(766);
            if(lookahead == 'w')
                ADVANCE(703);
            if(lookahead == '}')
                ADVANCE(501);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'b')
                ADVANCE(763);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(760);
            if(lookahead == 'f')
                ADVANCE(744);
            if(lookahead == 'i')
                ADVANCE(753);
            if(lookahead == 'l')
                ADVANCE(762);
            if(lookahead == 'o')
                ADVANCE(702);
            if(lookahead == 's')
                ADVANCE(711);
            if(lookahead == 'u')
                ADVANCE(739);
            if(lookahead == 'w')
                ADVANCE(704);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(25)
            if(lookahead == 'b')
                ADVANCE(763);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(760);
            if(lookahead == 'f')
                ADVANCE(744);
            if(lookahead == 'i')
                ADVANCE(753);
            if(lookahead == 'l')
                ADVANCE(762);
            if(lookahead == 'o')
                ADVANCE(702);
            if(lookahead == 's')
                ADVANCE(730);
            if(lookahead == 'u')
                ADVANCE(739);
            if(lookahead == 'w')
                ADVANCE(704);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'd')
                ADVANCE(717);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 's')
                ADVANCE(798);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(524);
            END_STATE();
        case 42:
            if(lookahead == '1')
                ADVANCE(51);
            if(lookahead == '3')
                ADVANCE(43);
            if(lookahead == '6')
                ADVANCE(47);
            if(lookahead == '8')
                ADVANCE(651);
            END_STATE();
        case 43:
            if(lookahead == '2')
                ADVANCE(655);
            END_STATE();
        case 44:
            if(lookahead == '2')
                ADVANCE(53);
            END_STATE();
        case 45:
            if(lookahead == '2')
                ADVANCE(659);
            END_STATE();
        case 46:
            if(lookahead == '2')
                ADVANCE(647);
            END_STATE();
        case 47:
            if(lookahead == '4')
                ADVANCE(657);
            END_STATE();
        case 48:
            if(lookahead == '4')
                ADVANCE(661);
            END_STATE();
        case 49:
            if(lookahead == '4')
                ADVANCE(649);
            END_STATE();
        case 50:
            if(lookahead == '6')
                ADVANCE(673);
            END_STATE();
        case 51:
            if(lookahead == '6')
                ADVANCE(653);
            END_STATE();
        case 52:
            if(lookahead == '6')
                ADVANCE(645);
            END_STATE();
        case 53:
            if(lookahead == '8')
                ADVANCE(663);
            END_STATE();
        case 54:
            if(lookahead == ':')
                ADVANCE(675);
            END_STATE();
        case 55:
            if(lookahead == '<')
                ADVANCE(511);
            END_STATE();
        case 56:
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 57:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(302);
            if(lookahead == 'd')
                ADVANCE(88);
            if(lookahead == 'e')
                ADVANCE(476);
            if(lookahead == 'f')
                ADVANCE(234);
            if(lookahead == 'h')
                ADVANCE(78);
            if(lookahead == 'i')
                ADVANCE(131);
            if(lookahead == 'k')
                ADVANCE(169);
            if(lookahead == 'm')
                ADVANCE(457);
            if(lookahead == 'n')
                ADVANCE(171);
            if(lookahead == 'o')
                ADVANCE(359);
            if(lookahead == 't')
                ADVANCE(372);
            if(lookahead == 'v')
                ADVANCE(75);
            END_STATE();
        case 58:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(301);
            if(lookahead == 'd')
                ADVANCE(87);
            if(lookahead == 'f')
                ADVANCE(234);
            if(lookahead == 'i')
                ADVANCE(216);
            END_STATE();
        case 59:
            if(lookahead == 'D')
                ADVANCE(63);
            END_STATE();
        case 60:
            if(lookahead == 'D')
                ADVANCE(61);
            END_STATE();
        case 61:
            if(lookahead == 'R')
                ADVANCE(622);
            END_STATE();
        case 62:
            if(lookahead == 'R')
                ADVANCE(156);
            if(lookahead == 'S')
                ADVANCE(184);
            END_STATE();
        case 63:
            if(lookahead == 'S')
                ADVANCE(62);
            END_STATE();
        case 64:
            if(lookahead == 'T')
                ADVANCE(335);
            END_STATE();
        case 65:
            if(lookahead == 'T')
                ADVANCE(353);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(124);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(463);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(280);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(381);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(403);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(317);
            END_STATE();
        case 72:
            if(lookahead == '_')
                ADVANCE(285);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(396);
            if(lookahead == 'h')
                ADVANCE(85);
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(281);
            if(lookahead == 'e')
                ADVANCE(370);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(250);
            if(lookahead == 'e')
                ADVANCE(79);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(357);
            if(lookahead == 'o')
                ADVANCE(142);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(395);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(147);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(289);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(69);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(262);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(368);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(461);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(435);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(435);
            if(lookahead == 'e')
                ADVANCE(209);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(369);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(263);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(272);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(415);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(295);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(265);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(440);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(431);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(467);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(129);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(112);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(252);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(452);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(113);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(454);
            END_STATE();
        case 108:
            if(lookahead == 'b')
                ADVANCE(470);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(258);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(273);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(98);
            END_STATE();
        case 112:
            if(lookahead == 'b')
                ADVANCE(277);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(278);
            END_STATE();
        case 114:
            if(lookahead == 'b')
                ADVANCE(279);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(221);
            if(lookahead == 's')
                ADVANCE(436);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(571);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(568);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(218);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(446);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(446);
            if(lookahead == 'u')
                ADVANCE(412);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(193);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(80);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(80);
            if(lookahead == 'n')
                ADVANCE(210);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(352);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(420);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(422);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(163);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(165);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(168);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(607);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(607);
            if(lookahead == 'g')
                ADVANCE(324);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(555);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(811);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(619);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(609);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(617);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(541);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(26);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(606);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(605);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(170);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(469);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(356);
            if(lookahead == 'l')
                ADVANCE(344);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(188);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(203);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(172);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(343);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(87);
            if(lookahead == 'f')
                ADVANCE(234);
            if(lookahead == 'i')
                ADVANCE(216);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(105);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(205);
            if(lookahead == 'o')
                ADVANCE(458);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(366);
            if(lookahead == 'h')
                ADVANCE(338);
            if(lookahead == 't')
                ADVANCE(367);
            if(lookahead == 'w')
                ADVANCE(244);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(669);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(539);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(569);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(306);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(358);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(618);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(630);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(503);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(502);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(548);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(614);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(805);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(563);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(567);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(615);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(636);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(553);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(478);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(208);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(409);
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(204);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(133);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(391);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(68);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(270);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(392);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(136);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(393);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(305);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(394);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(139);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(384);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(417);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(419);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(363);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(433);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(327);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(404);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(407);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(146);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(477);
            if(lookahead == 'h')
                ADVANCE(78);
            if(lookahead == 'i')
                ADVANCE(130);
            if(lookahead == 'k')
                ADVANCE(169);
            if(lookahead == 'm')
                ADVANCE(471);
            if(lookahead == 'n')
                ADVANCE(336);
            if(lookahead == 'o')
                ADVANCE(359);
            if(lookahead == 't')
                ADVANCE(372);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(209);
            END_STATE();
        case 204:
            if(lookahead == 'f')
                ADVANCE(547);
            END_STATE();
        case 205:
            if(lookahead == 'f')
                ADVANCE(86);
            END_STATE();
        case 206:
            if(lookahead == 'f')
                ADVANCE(247);
            if(lookahead == 'm')
                ADVANCE(83);
            if(lookahead == 's')
                ADVANCE(192);
            END_STATE();
        case 207:
            if(lookahead == 'f')
                ADVANCE(101);
            END_STATE();
        case 208:
            if(lookahead == 'f')
                ADVANCE(243);
            END_STATE();
        case 209:
            if(lookahead == 'f')
                ADVANCE(100);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(634);
            END_STATE();
        case 211:
            if(lookahead == 'g')
                ADVANCE(807);
            END_STATE();
        case 212:
            if(lookahead == 'g')
                ADVANCE(809);
            END_STATE();
        case 213:
            if(lookahead == 'g')
                ADVANCE(638);
            END_STATE();
        case 214:
            if(lookahead == 'g')
                ADVANCE(639);
            END_STATE();
        case 215:
            if(lookahead == 'g')
                ADVANCE(640);
            END_STATE();
        case 216:
            if(lookahead == 'g')
                ADVANCE(324);
            END_STATE();
        case 217:
            if(lookahead == 'g')
                ADVANCE(319);
            END_STATE();
        case 218:
            if(lookahead == 'h')
                ADVANCE(537);
            END_STATE();
        case 219:
            if(lookahead == 'h')
                ADVANCE(338);
            END_STATE();
        case 220:
            if(lookahead == 'h')
                ADVANCE(241);
            END_STATE();
        case 221:
            if(lookahead == 'h')
                ADVANCE(89);
            END_STATE();
        case 222:
            if(lookahead == 'h')
                ADVANCE(354);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(474);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(484);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(475);
            if(lookahead == 'l')
                ADVANCE(337);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(287);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(217);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(411);
            if(lookahead == 'o')
                ADVANCE(332);
            if(lookahead == 'y')
                ADVANCE(428);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 'n')
                ADVANCE(237);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 'n')
                ADVANCE(397);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(108);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(132);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(109);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(312);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(340);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(340);
            if(lookahead == 's')
                ADVANCE(227);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(117);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(134);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(300);
            if(lookahead == 'u')
                ADVANCE(125);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(135);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(355);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(318);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(427);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(303);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(92);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(177);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(432);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(424);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(401);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(128);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(405);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(345);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(406);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(443);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(347);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(350);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(282);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(453);
            END_STATE();
        case 260:
            if(lookahead == 'k')
                ADVANCE(546);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(554);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(616);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(608);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(603);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(532);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(337);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(479);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(480);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(71);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(137);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(187);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(224);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(421);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(456);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(162);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(166);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(167);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(255);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(464);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(248);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(348);
            if(lookahead == 's')
                ADVANCE(222);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(349);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(259);
            END_STATE();
        case 286:
            if(lookahead == 'm')
                ADVANCE(529);
            END_STATE();
        case 287:
            if(lookahead == 'm')
                ADVANCE(620);
            END_STATE();
        case 288:
            if(lookahead == 'm')
                ADVANCE(154);
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 289:
            if(lookahead == 'm')
                ADVANCE(182);
            END_STATE();
        case 290:
            if(lookahead == 'm')
                ADVANCE(83);
            if(lookahead == 's')
                ADVANCE(192);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(557);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(210);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(70);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(535);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(624);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(499);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(534);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(621);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(459);
            if(lookahead == 'x')
                ADVANCE(121);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(211);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(308);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(308);
            if(lookahead == 'p')
                ADVANCE(361);
            if(lookahead == 'u')
                ADVANCE(447);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(212);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(213);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(149);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(402);
            if(lookahead == 'r')
                ADVANCE(315);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(214);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(346);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(410);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(267);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(215);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(84);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(413);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(140);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(90);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(91);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(81);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(161);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(183);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(425);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(144);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(127);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(400);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(342);
            END_STATE();
        case 325:
            if(lookahead == 'n')
                ADVANCE(236);
            END_STATE();
        case 326:
            if(lookahead == 'n')
                ADVANCE(444);
            END_STATE();
        case 327:
            if(lookahead == 'n')
                ADVANCE(455);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(123);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(142);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(458);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(332);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(232);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(362);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(94);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(378);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(122);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(294);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(239);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(380);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(310);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(296);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(450);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 351:
            if(lookahead == 'o')
                ADVANCE(292);
            END_STATE();
        case 352:
            if(lookahead == 'o')
                ADVANCE(309);
            END_STATE();
        case 353:
            if(lookahead == 'o')
                ADVANCE(364);
            END_STATE();
        case 354:
            if(lookahead == 'o')
                ADVANCE(382);
            END_STATE();
        case 355:
            if(lookahead == 'o')
                ADVANCE(316);
            END_STATE();
        case 356:
            if(lookahead == 'o')
                ADVANCE(472);
            END_STATE();
        case 357:
            if(lookahead == 'p')
                ADVANCE(813);
            END_STATE();
        case 358:
            if(lookahead == 'p')
                ADVANCE(268);
            if(lookahead == 'q')
                ADVANCE(465);
            END_STATE();
        case 359:
            if(lookahead == 'p')
                ADVANCE(434);
            END_STATE();
        case 360:
            if(lookahead == 'p')
                ADVANCE(201);
            END_STATE();
        case 361:
            if(lookahead == 'p')
                ADVANCE(181);
            END_STATE();
        case 362:
            if(lookahead == 'p')
                ADVANCE(235);
            END_STATE();
        case 363:
            if(lookahead == 'p')
                ADVANCE(438);
            END_STATE();
        case 364:
            if(lookahead == 'p')
                ADVANCE(238);
            END_STATE();
        case 365:
            if(lookahead == 'p')
                ADVANCE(383);
            END_STATE();
        case 366:
            if(lookahead == 'q')
                ADVANCE(468);
            if(lookahead == 't')
                ADVANCE(389);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(240);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(665);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(667);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(473);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(482);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(231);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(466);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(103);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(93);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(246);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(418);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(96);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(176);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(173);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(423);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(200);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(207);
            END_STATE();
        case 385:
            if(lookahead == 'r')
                ADVANCE(315);
            END_STATE();
        case 386:
            if(lookahead == 'r')
                ADVANCE(460);
            END_STATE();
        case 387:
            if(lookahead == 'r')
                ADVANCE(245);
            END_STATE();
        case 388:
            if(lookahead == 'r')
                ADVANCE(408);
            END_STATE();
        case 389:
            if(lookahead == 'r')
                ADVANCE(106);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(260);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(560);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(565);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(566);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(533);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(220);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(153);
            END_STATE();
        case 397:
            if(lookahead == 's')
                ADVANCE(227);
            END_STATE();
        case 398:
            if(lookahead == 's')
                ADVANCE(430);
            END_STATE();
        case 399:
            if(lookahead == 's')
                ADVANCE(430);
            if(lookahead == 't')
                ADVANCE(102);
            END_STATE();
        case 400:
            if(lookahead == 's')
                ADVANCE(414);
            END_STATE();
        case 401:
            if(lookahead == 's')
                ADVANCE(175);
            END_STATE();
        case 402:
            if(lookahead == 's')
                ADVANCE(233);
            END_STATE();
        case 403:
            if(lookahead == 's')
                ADVANCE(196);
            END_STATE();
        case 404:
            if(lookahead == 's')
                ADVANCE(451);
            END_STATE();
        case 405:
            if(lookahead == 's')
                ADVANCE(178);
            END_STATE();
        case 406:
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 407:
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 408:
            if(lookahead == 's')
                ADVANCE(448);
            END_STATE();
        case 409:
            if(lookahead == 's')
                ADVANCE(441);
            END_STATE();
        case 410:
            if(lookahead == 's')
                ADVANCE(439);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(206);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(558);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(42);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(572);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(628);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(559);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(626);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(632);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(540);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(504);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(527);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(612);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(637);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(290);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(642);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(429);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(118);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(152);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(373);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(67);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(481);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(375);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(242);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(387);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(155);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(253);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(374);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(226);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(179);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(164);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(197);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(189);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(191);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(341);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(97);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(386);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 452:
            if(lookahead == 't')
                ADVANCE(256);
            END_STATE();
        case 453:
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 454:
            if(lookahead == 't')
                ADVANCE(257);
            END_STATE();
        case 455:
            if(lookahead == 't')
                ADVANCE(107);
            END_STATE();
        case 456:
            if(lookahead == 't')
                ADVANCE(72);
            END_STATE();
        case 457:
            if(lookahead == 'u')
                ADVANCE(399);
            END_STATE();
        case 458:
            if(lookahead == 'u')
                ADVANCE(110);
            END_STATE();
        case 459:
            if(lookahead == 'u')
                ADVANCE(286);
            END_STATE();
        case 460:
            if(lookahead == 'u')
                ADVANCE(125);
            END_STATE();
        case 461:
            if(lookahead == 'u')
                ADVANCE(275);
            END_STATE();
        case 462:
            if(lookahead == 'u')
                ADVANCE(416);
            END_STATE();
        case 463:
            if(lookahead == 'u')
                ADVANCE(321);
            END_STATE();
        case 464:
            if(lookahead == 'u')
                ADVANCE(157);
            END_STATE();
        case 465:
            if(lookahead == 'u')
                ADVANCE(198);
            END_STATE();
        case 466:
            if(lookahead == 'u')
                ADVANCE(126);
            END_STATE();
        case 467:
            if(lookahead == 'u')
                ADVANCE(276);
            END_STATE();
        case 468:
            if(lookahead == 'u')
                ADVANCE(186);
            END_STATE();
        case 469:
            if(lookahead == 'u')
                ADVANCE(274);
            END_STATE();
        case 470:
            if(lookahead == 'u')
                ADVANCE(442);
            END_STATE();
        case 471:
            if(lookahead == 'u')
                ADVANCE(398);
            END_STATE();
        case 472:
            if(lookahead == 'u')
                ADVANCE(114);
            END_STATE();
        case 473:
            if(lookahead == 'v')
                ADVANCE(251);
            END_STATE();
        case 474:
            if(lookahead == 'v')
                ADVANCE(160);
            END_STATE();
        case 475:
            if(lookahead == 'x')
                ADVANCE(174);
            END_STATE();
        case 476:
            if(lookahead == 'x')
                ADVANCE(437);
            END_STATE();
        case 477:
            if(lookahead == 'x')
                ADVANCE(445);
            END_STATE();
        case 478:
            if(lookahead == 'y')
                ADVANCE(604);
            END_STATE();
        case 479:
            if(lookahead == 'y')
                ADVANCE(561);
            END_STATE();
        case 480:
            if(lookahead == 'y')
                ADVANCE(64);
            END_STATE();
        case 481:
            if(lookahead == 'y')
                ADVANCE(613);
            END_STATE();
        case 482:
            if(lookahead == 'y')
                ADVANCE(66);
            END_STATE();
        case 483:
            if(lookahead == 'y')
                ADVANCE(360);
            END_STATE();
        case 484:
            if(lookahead == 'z')
                ADVANCE(185);
            END_STATE();
        case 485:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 486:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(573);
            END_STATE();
        case 487:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(578);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            END_STATE();
        case 488:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            END_STATE();
        case 489:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            END_STATE();
        case 490:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(574);
            END_STATE();
        case 491:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(821);
            if(lookahead == '\r')
                ADVANCE(823);
            if(lookahead == '\\')
                ADVANCE(822);
            END_STATE();
        case 492:
            if(eof)
                ADVANCE(497);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 493:
            if(eof)
                ADVANCE(497);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(492)
            END_STATE();
        case 494:
            if(eof)
                ADVANCE(497);
            if(lookahead == '\n')
                SKIP(496)
            END_STATE();
        case 495:
            if(eof)
                ADVANCE(497);
            if(lookahead == '\n')
                SKIP(496)
            if(lookahead == '\r')
                SKIP(494)
            END_STATE();
        case 496:
            if(eof)
                ADVANCE(497);
            if(lookahead == '#')
                ADVANCE(141);
            if(lookahead == '$')
                ADVANCE(509);
            if(lookahead == '%')
                ADVANCE(518);
            if(lookahead == '(')
                ADVANCE(520);
            if(lookahead == ')')
                ADVANCE(522);
            if(lookahead == '*')
                ADVANCE(516);
            if(lookahead == '+')
                ADVANCE(512);
            if(lookahead == ',')
                ADVANCE(531);
            if(lookahead == '-')
                ADVANCE(514);
            if(lookahead == '/')
                ADVANCE(517);
            if(lookahead == ':')
                ADVANCE(506);
            if(lookahead == ';')
                ADVANCE(498);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(545);
            if(lookahead == '@')
                ADVANCE(58);
            if(lookahead == '\\')
                SKIP(495)
            if(lookahead == ']')
                ADVANCE(804);
            if(lookahead == '^')
                ADVANCE(508);
            if(lookahead == 'b')
                ADVANCE(249);
            if(lookahead == 'c')
                ADVANCE(330);
            if(lookahead == 'e')
                ADVANCE(299);
            if(lookahead == 'i')
                ADVANCE(326);
            if(lookahead == 'l')
                ADVANCE(339);
            if(lookahead == 'm')
                ADVANCE(329);
            if(lookahead == 'n')
                ADVANCE(99);
            if(lookahead == 's')
                ADVANCE(449);
            if(lookahead == 't')
                ADVANCE(483);
            if(lookahead == 'u')
                ADVANCE(325);
            if(lookahead == '|')
                ADVANCE(507);
            if(lookahead == '}')
                ADVANCE(501);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(496)
            END_STATE();
        case 497:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(580);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(580);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(815);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(610);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(524);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(511);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(510);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(552);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(551);
            if(lookahead == '\\')
                ADVANCE(549);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(550);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(817);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(462);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(573);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(601);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(490);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(574);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(574);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(490);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(575);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(575);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(590);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(489);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(578);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(592);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(589);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(597);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(801);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(593);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(579);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(591);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(578);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(589);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(597);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(593);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(579);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(594);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(33);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(596);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(599);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(489);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(596);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(595);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(677);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(597);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(600);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(801);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(597);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(601);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(602);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(488);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(490);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(586);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(488);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(586);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(490);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(490);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(589);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(597);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(591);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(578);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(589);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(597);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(593);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(579);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(489);
            if(lookahead == '.')
                ADVANCE(598);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(589);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(597);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(581);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(601);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(583);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(602);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(490);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(574);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(574);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(490);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(575);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(575);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(586);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(596);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(584);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(601);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(602);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(601);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_extensibility);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_mutable);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_appendable);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_nested);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_value);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_autoid);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_verbatim);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(623);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(44);
            if(lookahead == '3')
                ADVANCE(45);
            if(lookahead == '6')
                ADVANCE(48);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(681);
            if(lookahead == '3')
                ADVANCE(682);
            if(lookahead == '6')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(143);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(143);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(284);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(686);
            if(lookahead == '3')
                ADVANCE(679);
            if(lookahead == '6')
                ADVANCE(683);
            if(lookahead == '8')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(52);
            if(lookahead == '3')
                ADVANCE(46);
            if(lookahead == '6')
                ADVANCE(49);
            if(lookahead == '8')
                ADVANCE(643);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_int8);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(50);
            if(lookahead == '8')
                ADVANCE(671);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(687);
            if(lookahead == '8')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(486);
            if(lookahead == '0')
                ADVANCE(577);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(579);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(688);
            if(lookahead == '3')
                ADVANCE(680);
            if(lookahead == '6')
                ADVANCE(684);
            if(lookahead == '8')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(731);
            if(lookahead == 's')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(770);
            if(lookahead == 'h')
                ADVANCE(765);
            if(lookahead == 't')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(770);
            if(lookahead == 'h')
                ADVANCE(765);
            if(lookahead == 't')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(770);
            if(lookahead == 'h')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(799);
            if(lookahead == 'l')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(756);
            if(lookahead == 'u')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(757);
            if(lookahead == 'n')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(757);
            if(lookahead == 'n')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(767);
            if(lookahead == 's')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(536);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(761);
            if(lookahead == 'y')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(528);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(802);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(491);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(821);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(819);
            if(lookahead == '\\')
                ADVANCE(491);
            if(lookahead != 0)
                ADVANCE(821);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(820);
            if(lookahead == '\\')
                ADVANCE(23);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(819);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(821);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(816);
            if(lookahead == '\\')
                ADVANCE(491);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(821);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(491);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(821);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(821);
            if(lookahead == '\r')
                ADVANCE(823);
            if(lookahead == '\\')
                ADVANCE(822);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(821);
            if(lookahead == '\\')
                ADVANCE(491);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 496 },
    [2] = { .lex_state = 31 },
    [3] = { .lex_state = 31 },
    [4] = { .lex_state = 31 },
    [5] = { .lex_state = 31 },
    [6] = { .lex_state = 31 },
    [7] = { .lex_state = 31 },
    [8] = { .lex_state = 31 },
    [9] = { .lex_state = 31 },
    [10] = { .lex_state = 31 },
    [11] = { .lex_state = 31 },
    [12] = { .lex_state = 31 },
    [13] = { .lex_state = 35 },
    [14] = { .lex_state = 31 },
    [15] = { .lex_state = 36 },
    [16] = { .lex_state = 36 },
    [17] = { .lex_state = 36 },
    [18] = { .lex_state = 36 },
    [19] = { .lex_state = 496 },
    [20] = { .lex_state = 496 },
    [21] = { .lex_state = 496 },
    [22] = { .lex_state = 496 },
    [23] = { .lex_state = 31 },
    [24] = { .lex_state = 31 },
    [25] = { .lex_state = 31 },
    [26] = { .lex_state = 31 },
    [27] = { .lex_state = 31 },
    [28] = { .lex_state = 31 },
    [29] = { .lex_state = 31 },
    [30] = { .lex_state = 31 },
    [31] = { .lex_state = 31 },
    [32] = { .lex_state = 31 },
    [33] = { .lex_state = 31 },
    [34] = { .lex_state = 31 },
    [35] = { .lex_state = 31 },
    [36] = { .lex_state = 31 },
    [37] = { .lex_state = 31 },
    [38] = { .lex_state = 31 },
    [39] = { .lex_state = 31 },
    [40] = { .lex_state = 37 },
    [41] = { .lex_state = 31 },
    [42] = { .lex_state = 31 },
    [43] = { .lex_state = 31 },
    [44] = { .lex_state = 38 },
    [45] = { .lex_state = 29 },
    [46] = { .lex_state = 30 },
    [47] = { .lex_state = 30 },
    [48] = { .lex_state = 30 },
    [49] = { .lex_state = 30 },
    [50] = { .lex_state = 30 },
    [51] = { .lex_state = 30 },
    [52] = { .lex_state = 30 },
    [53] = { .lex_state = 30 },
    [54] = { .lex_state = 30 },
    [55] = { .lex_state = 30 },
    [56] = { .lex_state = 30 },
    [57] = { .lex_state = 496 },
    [58] = { .lex_state = 30 },
    [59] = { .lex_state = 496 },
    [60] = { .lex_state = 496 },
    [61] = { .lex_state = 496 },
    [62] = { .lex_state = 496 },
    [63] = { .lex_state = 496 },
    [64] = { .lex_state = 30 },
    [65] = { .lex_state = 30 },
    [66] = { .lex_state = 30 },
    [67] = { .lex_state = 28 },
    [68] = { .lex_state = 28 },
    [69] = { .lex_state = 30 },
    [70] = { .lex_state = 28 },
    [71] = { .lex_state = 28 },
    [72] = { .lex_state = 496 },
    [73] = { .lex_state = 496 },
    [74] = { .lex_state = 496 },
    [75] = { .lex_state = 496 },
    [76] = { .lex_state = 496 },
    [77] = { .lex_state = 496 },
    [78] = { .lex_state = 30 },
    [79] = { .lex_state = 496 },
    [80] = { .lex_state = 496 },
    [81] = { .lex_state = 496 },
    [82] = { .lex_state = 496 },
    [83] = { .lex_state = 496 },
    [84] = { .lex_state = 30 },
    [85] = { .lex_state = 496 },
    [86] = { .lex_state = 496 },
    [87] = { .lex_state = 496 },
    [88] = { .lex_state = 496 },
    [89] = { .lex_state = 30 },
    [90] = { .lex_state = 496 },
    [91] = { .lex_state = 29 },
    [92] = { .lex_state = 496 },
    [93] = { .lex_state = 29 },
    [94] = { .lex_state = 29 },
    [95] = { .lex_state = 0 },
    [96] = { .lex_state = 29 },
    [97] = { .lex_state = 0 },
    [98] = { .lex_state = 29 },
    [99] = { .lex_state = 0 },
    [100] = { .lex_state = 28 },
    [101] = { .lex_state = 32 },
    [102] = { .lex_state = 0 },
    [103] = { .lex_state = 28 },
    [104] = { .lex_state = 0 },
    [105] = { .lex_state = 30 },
    [106] = { .lex_state = 0 },
    [107] = { .lex_state = 0 },
    [108] = { .lex_state = 0 },
    [109] = { .lex_state = 0 },
    [110] = { .lex_state = 32 },
    [111] = { .lex_state = 32 },
    [112] = { .lex_state = 28 },
    [113] = { .lex_state = 32 },
    [114] = { .lex_state = 0 },
    [115] = { .lex_state = 496 },
    [116] = { .lex_state = 496 },
    [117] = { .lex_state = 28 },
    [118] = { .lex_state = 496 },
    [119] = { .lex_state = 0 },
    [120] = { .lex_state = 496 },
    [121] = { .lex_state = 0 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 28 },
    [124] = { .lex_state = 32 },
    [125] = { .lex_state = 0 },
    [126] = { .lex_state = 0 },
    [127] = { .lex_state = 0 },
    [128] = { .lex_state = 28 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 28 },
    [132] = { .lex_state = 32 },
    [133] = { .lex_state = 28 },
    [134] = { .lex_state = 28 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 28 },
    [137] = { .lex_state = 0 },
    [138] = { .lex_state = 28 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 28 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 0 },
    [144] = { .lex_state = 28 },
    [145] = { .lex_state = 32 },
    [146] = { .lex_state = 0 },
    [147] = { .lex_state = 32 },
    [148] = { .lex_state = 0 },
    [149] = { .lex_state = 32 },
    [150] = { .lex_state = 39 },
    [151] = { .lex_state = 32 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 32 },
    [154] = { .lex_state = 28 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 32 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 32 },
    [161] = { .lex_state = 0 },
    [162] = { .lex_state = 32 },
    [163] = { .lex_state = 28 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 0 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 31 },
    [169] = { .lex_state = 28 },
    [170] = { .lex_state = 32 },
    [171] = { .lex_state = 32 },
    [172] = { .lex_state = 0 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 0 },
    [176] = { .lex_state = 0 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 0 },
    [179] = { .lex_state = 28 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 0 },
    [182] = { .lex_state = 32 },
    [183] = { .lex_state = 32 },
    [184] = { .lex_state = 32 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 32 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 28 },
    [190] = { .lex_state = 40 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 32 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 32 },
    [199] = { .lex_state = 32 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 32 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 28 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 32 },
    [208] = { .lex_state = 0 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 28 },
    [211] = { .lex_state = 32 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 32 },
    [215] = { .lex_state = 32 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 28 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 32 },
    [223] = { .lex_state = 32 },
    [224] = { .lex_state = 28 },
    [225] = { .lex_state = 28 },
    [226] = { .lex_state = 28 },
    [227] = { .lex_state = 28 },
    [228] = { .lex_state = 28 },
    [229] = { .lex_state = 28 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 28 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 28 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 28 },
    [238] = { .lex_state = 28 },
    [239] = { .lex_state = 28 },
    [240] = { .lex_state = 28 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 28 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 28 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 496 },
    [249] = { .lex_state = 28 },
    [250] = { .lex_state = 28 },
    [251] = { .lex_state = 28 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 28 },
    [257] = { .lex_state = 28 },
    [258] = { .lex_state = 28 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 28 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 28 },
    [266] = { .lex_state = 28 },
    [267] = { .lex_state = 496 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 31 },
    [270] = { .lex_state = 28 },
    [271] = { .lex_state = 31 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 496 },
    [274] = { .lex_state = 496 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 28 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 28 },
    [279] = { .lex_state = 28 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 496 },
    [284] = { .lex_state = 31 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 28 },
    [287] = { .lex_state = 28 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 28 },
    [290] = { .lex_state = 28 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 41 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 819 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 28 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 28 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 28 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 31 },
    [309] = { .lex_state = 31 },
    [310] = { .lex_state = 28 },
    [311] = { .lex_state = 31 },
    [312] = { .lex_state = 31 },
    [313] = { .lex_state = 28 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 28 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 496 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 28 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 41 },
    [346] = { .lex_state = 31 },
    [347] = { .lex_state = 496 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 41 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 496 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 28 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 28 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 496 },
    [364] = { .lex_state = 496 },
    [365] = { .lex_state = 41 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 31 },
    [369] = { .lex_state = 28 },
    [370] = { .lex_state = 550 },
    [371] = { .lex_state = 31 },
    [372] = { .lex_state = 31 },
    [373] = { .lex_state = 31 },
    [374] = { .lex_state = 28 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 28 },
    [377] = { .lex_state = 28 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 31 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 28 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 28 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 28 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 31 },
    [396] = { .lex_state = 28 },
    [397] = { .lex_state = 28 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 28 },
    [408] = { (TSStateId)(-1) },
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
        [anon_sym_ATdefault_literal] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_ATannotation] = ACTIONS(1),
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
        [sym_dds_service] = ACTIONS(1),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [sym_number_literal] = ACTIONS(1),
        [sym_optional] = ACTIONS(1),
        [sym_key] = ACTIONS(1),
        [sym_must_understand] = ACTIONS(1),
        [sym_non_serialized] = ACTIONS(1),
        [sym_id] = ACTIONS(1),
        [sym_external] = ACTIONS(1),
        [anon_sym_AThashid] = ACTIONS(1),
        [anon_sym_LPAREN_DQUOTE] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_ATtry_construct] = ACTIONS(1),
        [sym_extensibility] = ACTIONS(1),
        [sym_mutable] = ACTIONS(1),
        [sym_appendable] = ACTIONS(1),
        [sym_final] = ACTIONS(1),
        [sym_nested] = ACTIONS(1),
        [sym_value] = ACTIONS(1),
        [sym_autoid] = ACTIONS(1),
        [sym_verbatim] = ACTIONS(1),
        [anon_sym_ATdata_representation] = ACTIONS(1),
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
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(351),
        [sym__definition] = STATE(62),
        [sym_except_dcl] = STATE(61),
        [sym_native_dcl] = STATE(282),
        [sym_module_dcl] = STATE(282),
        [sym_struct_forward_dcl] = STATE(282),
        [sym_struct_def] = STATE(282),
        [sym_enum_dcl] = STATE(282),
        [sym_enum_anno] = STATE(342),
        [sym_annotation] = STATE(282),
        [sym_union_forward_dcl] = STATE(282),
        [sym_union_def] = STATE(282),
        [sym_bitset_dcl] = STATE(282),
        [sym_bitmask_dcl] = STATE(282),
        [sym_typedef_dcl] = STATE(282),
        [sym_predefine] = STATE(61),
        [sym_interface_dcl] = STATE(282),
        [sym_interface_forward_dcl] = STATE(341),
        [sym_interface_def] = STATE(341),
        [sym_interface_header] = STATE(338),
        [sym_dds_request_topic] = STATE(115),
        [sym_dds_reply_topic] = STATE(115),
        [sym_interface_anno] = STATE(116),
        [sym_const_dcl] = STATE(282),
        [sym_data_representation] = STATE(175),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(20),
        [aux_sym_struct_def_repeat1] = STATE(126),
        [aux_sym_interface_def_repeat1] = STATE(90),
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
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(4),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(5),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    ACTIONS(75),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [575] = 26,
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
    ACTIONS(79),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(7),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [690] = 26,
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
    ACTIONS(81),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    sym_comment,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [805] = 26,
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
    ACTIONS(83),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [920] = 26,
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
    ACTIONS(85),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [1035] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(87),
    1,
    anon_sym_RBRACE,
    ACTIONS(92),
    1,
    anon_sym_AThashid,
    ACTIONS(95),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(107),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(110),
    1,
    sym_identifier,
    ACTIONS(113),
    1,
    anon_sym_sequence,
    ACTIONS(119),
    1,
    anon_sym_fixed,
    ACTIONS(122),
    1,
    anon_sym_map,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(116),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(11),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(104),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(89),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(98),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(101),
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
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(31),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(126),
    1,
    aux_sym_struct_def_repeat1,
    STATE(156),
    1,
    sym_integer_type,
    STATE(175),
    1,
    sym_data_representation,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(304),
    1,
    sym_type_declarator,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(342),
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
    STATE(199),
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
    STATE(128),
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
    STATE(24),
    1,
    aux_sym_member_repeat1,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(117),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(205),
    1,
    sym_export,
    STATE(281),
    1,
    sym_interface_body,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_type_spec,
    STATE(397),
    1,
    sym_op_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(387),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(402),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(205),
    1,
    sym_export,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(356),
    1,
    sym_interface_body,
    STATE(361),
    1,
    sym_type_spec,
    STATE(397),
    1,
    sym_op_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(387),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(402),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(205),
    1,
    sym_export,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_type_spec,
    STATE(381),
    1,
    sym_interface_body,
    STATE(397),
    1,
    sym_op_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(387),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(402),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(268),
    1,
    sym_export,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_type_spec,
    STATE(397),
    1,
    sym_op_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(387),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(402),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    STATE(90),
    1,
    aux_sym_interface_def_repeat1,
    STATE(116),
    1,
    sym_interface_anno,
    STATE(126),
    1,
    aux_sym_struct_def_repeat1,
    STATE(175),
    1,
    sym_data_representation,
    STATE(338),
    1,
    sym_interface_header,
    STATE(342),
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
    STATE(61),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(341),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(282),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
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
    ts_builtin_sym_end,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(20),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(90),
    1,
    aux_sym_interface_def_repeat1,
    STATE(116),
    1,
    sym_interface_anno,
    STATE(126),
    1,
    aux_sym_struct_def_repeat1,
    STATE(175),
    1,
    sym_data_representation,
    STATE(338),
    1,
    sym_interface_header,
    STATE(342),
    1,
    sym_enum_anno,
    STATE(61),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(341),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(282),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
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
    anon_sym_RBRACE,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(21),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(90),
    1,
    aux_sym_interface_def_repeat1,
    STATE(116),
    1,
    sym_interface_anno,
    STATE(126),
    1,
    aux_sym_struct_def_repeat1,
    STATE(175),
    1,
    sym_data_representation,
    STATE(338),
    1,
    sym_interface_header,
    STATE(342),
    1,
    sym_enum_anno,
    STATE(61),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(341),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(282),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
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
    STATE(21),
    1,
    aux_sym_specification_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(62),
    1,
    sym__definition,
    STATE(90),
    1,
    aux_sym_interface_def_repeat1,
    STATE(116),
    1,
    sym_interface_anno,
    STATE(126),
    1,
    aux_sym_struct_def_repeat1,
    STATE(175),
    1,
    sym_data_representation,
    STATE(338),
    1,
    sym_interface_header,
    STATE(342),
    1,
    sym_enum_anno,
    STATE(61),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(341),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(282),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2404] = 19,
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
    ACTIONS(213),
    1,
    anon_sym_COMMA,
    ACTIONS(215),
    1,
    anon_sym_GT,
    STATE(23),
    1,
    sym_comment,
    STATE(156),
    1,
    sym_integer_type,
    STATE(160),
    1,
    sym_scoped_name,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(346),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2492] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(220),
    1,
    anon_sym_AThashid,
    ACTIONS(223),
    1,
    anon_sym_ATtry_construct,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(24),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(39),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(228),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(217),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(226),
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
    STATE(133),
    1,
    sym_type_spec,
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    STATE(385),
    1,
    sym_element_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2645] = 17,
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
    STATE(26),
    1,
    sym_comment,
    STATE(156),
    1,
    sym_integer_type,
    STATE(160),
    1,
    sym_scoped_name,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(269),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2727] = 17,
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(210),
    1,
    sym_type_spec,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2809] = 17,
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(160),
    1,
    sym_scoped_name,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(390),
    1,
    sym_type_spec,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2891] = 17,
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(251),
    1,
    sym_type_spec,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [2973] = 17,
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
    STATE(156),
    1,
    sym_integer_type,
    STATE(189),
    1,
    sym_type_spec,
    STATE(198),
    1,
    sym_primitive_type,
    STATE(306),
    1,
    sym_scoped_name,
    ACTIONS(67),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(199),
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
    [3055] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(230),
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
    ACTIONS(232),
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
    [3110] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(32),
    1,
    sym_comment,
    ACTIONS(234),
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
    ACTIONS(236),
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
    [3165] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(33),
    1,
    sym_comment,
    ACTIONS(238),
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
    ACTIONS(240),
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
    [3220] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(34),
    1,
    sym_comment,
    ACTIONS(242),
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
    ACTIONS(244),
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
    [3275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(35),
    1,
    sym_comment,
    ACTIONS(246),
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
    ACTIONS(248),
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
    [3330] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(250),
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
    ACTIONS(252),
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
    [3384] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(254),
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
    ACTIONS(256),
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
    [3438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(258),
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
    ACTIONS(260),
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
    [3492] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(262),
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
    ACTIONS(264),
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
    [3546] = 12,
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
    STATE(40),
    1,
    sym_comment,
    STATE(156),
    1,
    sym_integer_type,
    STATE(289),
    1,
    sym_scoped_name,
    STATE(313),
    1,
    sym_const_type,
    STATE(290),
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
    [3609] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(268),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(266),
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
    STATE(42),
    1,
    sym_comment,
    ACTIONS(272),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(270),
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
    [3701] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(276),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(274),
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
    [3747] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(63),
    1,
    sym_identifier,
    STATE(44),
    1,
    sym_comment,
    STATE(156),
    1,
    sym_integer_type,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(389),
    1,
    sym_primitive_type,
    STATE(393),
    1,
    sym_switch_type_spec,
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
    [3806] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_integer_type,
    STATE(372),
    1,
    sym_destination_type,
    ACTIONS(278),
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
    [3848] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(46),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(373),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3920] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(379),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3992] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(329),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4064] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(271),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4136] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(308),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4208] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(395),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4280] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(168),
    1,
    sym_const_expr,
    STATE(394),
    1,
    sym_positive_int_const,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4352] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(331),
    1,
    sym_const_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4421] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(307),
    1,
    sym_const_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4490] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(375),
    1,
    sym_const_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4559] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(320),
    1,
    sym_const_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4628] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(296),
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
    [4659] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(98),
    1,
    sym_or_expr,
    STATE(384),
    1,
    sym_const_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4728] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(298),
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
    [4759] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(300),
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
    [4790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(302),
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
    [4821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(304),
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
    [4852] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(306),
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
    [4883] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(93),
    1,
    sym_and_expr,
    STATE(94),
    1,
    sym_xor_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4946] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5006] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_comment,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(88),
    1,
    sym_shift_expr,
    STATE(89),
    1,
    sym_unary_operator,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5063] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(312),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(310),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(308),
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
    [5093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(316),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(314),
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
    sym_identifier,
    anon_sym_RBRACK,
    [5121] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(69),
    1,
    sym_comment,
    STATE(73),
    1,
    sym_mult_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(86),
    1,
    sym_add_expr,
    STATE(89),
    1,
    sym_unary_operator,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5175] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(320),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(318),
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
    sym_identifier,
    anon_sym_RBRACK,
    [5203] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(312),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(324),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(322),
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
    [5233] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(328),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(326),
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
    [5260] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(334),
    1,
    anon_sym_SLASH,
    ACTIONS(336),
    1,
    anon_sym_GT,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(332),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(330),
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
    [5291] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(334),
    1,
    anon_sym_SLASH,
    ACTIONS(340),
    1,
    anon_sym_GT,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(332),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(338),
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
    [5322] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(344),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(342),
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
    [5349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(348),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(346),
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
    [5376] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(352),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(350),
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
    [5403] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(74),
    1,
    sym_mult_expr,
    STATE(78),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_literal,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(89),
    1,
    sym_unary_operator,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5454] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(324),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(322),
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
    [5481] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(356),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(354),
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
    [5508] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(310),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(308),
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
    [5535] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(360),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(358),
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
    [5562] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(364),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(362),
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
    [5589] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    anon_sym_TILDE,
    ACTIONS(284),
    1,
    anon_sym_LPAREN,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(75),
    1,
    sym_unary_expr,
    STATE(81),
    1,
    sym_literal,
    STATE(84),
    1,
    sym_comment,
    STATE(89),
    1,
    sym_unary_operator,
    ACTIONS(280),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5637] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_GT,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(366),
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
    [5663] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(374),
    1,
    anon_sym_GT,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(368),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(372),
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
    [5689] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(380),
    1,
    anon_sym_GT,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(378),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(376),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5713] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(384),
    1,
    anon_sym_GT,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(378),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(382),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5737] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(286),
    1,
    anon_sym_SQUOTE,
    ACTIONS(288),
    1,
    anon_sym_L,
    ACTIONS(290),
    1,
    sym_number_literal,
    ACTIONS(292),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(294),
    1,
    sym_identifier,
    ACTIONS(386),
    1,
    anon_sym_LPAREN,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(79),
    1,
    sym_literal,
    STATE(89),
    1,
    sym_comment,
    STATE(80),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5772] = 11,
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
    ACTIONS(388),
    1,
    anon_sym_interface,
    ACTIONS(390),
    1,
    anon_sym_local,
    STATE(90),
    1,
    sym_comment,
    STATE(92),
    1,
    aux_sym_interface_def_repeat1,
    STATE(116),
    1,
    sym_interface_anno,
    STATE(302),
    1,
    sym_interface_header,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(394),
    1,
    anon_sym_DOLLAR,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(392),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5827] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(398),
    1,
    sym_dds_service,
    ACTIONS(401),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(404),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(116),
    1,
    sym_interface_anno,
    ACTIONS(396),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(92),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(115),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(394),
    1,
    anon_sym_DOLLAR,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(407),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(411),
    1,
    anon_sym_CARET,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(409),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5894] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(413),
    1,
    anon_sym_SEMI,
    ACTIONS(415),
    1,
    anon_sym_COMMA,
    ACTIONS(417),
    1,
    anon_sym_getraises,
    ACTIONS(419),
    1,
    anon_sym_setraises,
    STATE(95),
    1,
    sym_comment,
    STATE(146),
    1,
    sym_get_excep_expr,
    STATE(194),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(316),
    1,
    sym_attr_raises_expr,
    STATE(318),
    1,
    sym_set_excep_expr,
    [5925] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(411),
    1,
    anon_sym_CARET,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(421),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5944] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(423),
    1,
    anon_sym_RPAREN,
    ACTIONS(425),
    1,
    anon_sym_in,
    STATE(29),
    1,
    sym_param_attribute,
    STATE(97),
    1,
    sym_comment,
    STATE(192),
    1,
    sym_param_dcl,
    STATE(322),
    1,
    sym_parameter_dcls,
    ACTIONS(427),
    2,
    anon_sym_out,
    anon_sym_inout,
    [5970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(431),
    1,
    anon_sym_PIPE,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(429),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(433),
    6,
    anon_sym_SEMI,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [6003] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(435),
    1,
    anon_sym_RBRACE,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(136),
    1,
    aux_sym_enumerator_repeat1,
    STATE(188),
    1,
    sym_enumerator,
    STATE(257),
    1,
    sym_enum_modifier,
    [6028] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(441),
    1,
    anon_sym_RBRACE,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(111),
    1,
    aux_sym_annotation_repeat1,
    STATE(184),
    1,
    sym_annotation_field,
    STATE(359),
    1,
    sym_scoped_name,
    [6053] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_LBRACK,
    STATE(102),
    1,
    sym_comment,
    STATE(107),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(142),
    1,
    sym_fixed_array_size,
    ACTIONS(445),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6074] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(449),
    1,
    anon_sym_RBRACE,
    STATE(103),
    1,
    sym_comment,
    STATE(136),
    1,
    aux_sym_enumerator_repeat1,
    STATE(206),
    1,
    sym_enumerator,
    STATE(257),
    1,
    sym_enum_modifier,
    [6099] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(451),
    1,
    anon_sym_RBRACE,
    ACTIONS(453),
    1,
    anon_sym_default,
    ACTIONS(455),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(104),
    1,
    sym_comment,
    STATE(109),
    1,
    aux_sym_union_def_repeat1,
    STATE(173),
    1,
    sym_case,
    [6124] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(457),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(459),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [6141] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_LBRACK,
    STATE(102),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(106),
    1,
    sym_comment,
    STATE(142),
    1,
    sym_fixed_array_size,
    ACTIONS(433),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6162] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(463),
    1,
    anon_sym_LBRACK,
    STATE(142),
    1,
    sym_fixed_array_size,
    STATE(107),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(461),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6181] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(466),
    1,
    anon_sym_RBRACE,
    ACTIONS(468),
    1,
    anon_sym_default,
    ACTIONS(471),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(173),
    1,
    sym_case,
    STATE(108),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6204] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(453),
    1,
    anon_sym_default,
    ACTIONS(455),
    1,
    anon_sym_case,
    ACTIONS(474),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_case_label,
    STATE(108),
    1,
    aux_sym_union_def_repeat1,
    STATE(109),
    1,
    sym_comment,
    STATE(173),
    1,
    sym_case,
    [6229] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(476),
    1,
    anon_sym_RBRACE,
    STATE(101),
    1,
    aux_sym_annotation_repeat1,
    STATE(110),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_annotation_field,
    STATE(359),
    1,
    sym_scoped_name,
    [6254] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(478),
    1,
    anon_sym_RBRACE,
    ACTIONS(480),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(483),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_annotation_field,
    STATE(359),
    1,
    sym_scoped_name,
    STATE(111),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [6277] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(112),
    1,
    sym_comment,
    STATE(136),
    1,
    aux_sym_enumerator_repeat1,
    STATE(257),
    1,
    sym_enum_modifier,
    STATE(280),
    1,
    sym_enumerator,
    [6299] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(314),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6313] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(486),
    1,
    anon_sym_RBRACE,
    ACTIONS(488),
    1,
    anon_sym_bitfield,
    STATE(114),
    1,
    sym_comment,
    STATE(130),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(169),
    1,
    sym_bitfield_spec,
    STATE(244),
    1,
    sym_bitfield,
    [6335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(490),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6349] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(492),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6363] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_declarator,
    STATE(213),
    1,
    sym_declarators,
    STATE(200),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6383] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(496),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6397] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(498),
    1,
    anon_sym_struct,
    ACTIONS(500),
    1,
    sym_final,
    ACTIONS(503),
    1,
    anon_sym_ATdata_representation,
    STATE(175),
    1,
    sym_data_representation,
    STATE(119),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(506),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6431] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(488),
    1,
    anon_sym_bitfield,
    ACTIONS(508),
    1,
    anon_sym_RBRACE,
    STATE(121),
    1,
    sym_comment,
    STATE(125),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(169),
    1,
    sym_bitfield_spec,
    STATE(244),
    1,
    sym_bitfield,
    [6453] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_COMMA,
    ACTIONS(510),
    1,
    anon_sym_SEMI,
    ACTIONS(512),
    1,
    anon_sym_raises,
    STATE(122),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(348),
    1,
    sym_raises_expr,
    [6475] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(123),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_declarator,
    STATE(202),
    1,
    sym_declarators,
    STATE(200),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(318),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6509] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(488),
    1,
    anon_sym_bitfield,
    ACTIONS(514),
    1,
    anon_sym_RBRACE,
    STATE(125),
    1,
    sym_comment,
    STATE(130),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(169),
    1,
    sym_bitfield_spec,
    STATE(244),
    1,
    sym_bitfield,
    [6531] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(516),
    1,
    anon_sym_struct,
    STATE(119),
    1,
    aux_sym_struct_def_repeat1,
    STATE(126),
    1,
    sym_comment,
    STATE(175),
    1,
    sym_data_representation,
    [6553] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(425),
    1,
    anon_sym_in,
    STATE(29),
    1,
    sym_param_attribute,
    STATE(127),
    1,
    sym_comment,
    STATE(245),
    1,
    sym_param_dcl,
    ACTIONS(427),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6573] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(208),
    1,
    sym_any_declarator,
    STATE(335),
    1,
    sym_any_declarators,
    STATE(261),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6593] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(488),
    1,
    anon_sym_bitfield,
    ACTIONS(518),
    1,
    anon_sym_RBRACE,
    STATE(114),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(129),
    1,
    sym_comment,
    STATE(169),
    1,
    sym_bitfield_spec,
    STATE(244),
    1,
    sym_bitfield,
    [6615] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(520),
    1,
    anon_sym_RBRACE,
    ACTIONS(522),
    1,
    anon_sym_bitfield,
    STATE(169),
    1,
    sym_bitfield_spec,
    STATE(244),
    1,
    sym_bitfield,
    STATE(130),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [6635] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    anon_sym_RPAREN,
    ACTIONS(527),
    1,
    anon_sym_COMMA,
    ACTIONS(529),
    1,
    sym_identifier,
    STATE(131),
    1,
    sym_comment,
    STATE(167),
    1,
    aux_sym_raises_expr_repeat1,
    [6654] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_LT,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(531),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6669] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_declarator,
    STATE(200),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6686] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    anon_sym_COMMA,
    ACTIONS(529),
    1,
    sym_identifier,
    ACTIONS(535),
    1,
    anon_sym_RPAREN,
    STATE(134),
    1,
    sym_comment,
    STATE(165),
    1,
    aux_sym_raises_expr_repeat1,
    [6705] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(537),
    1,
    anon_sym_RPAREN,
    ACTIONS(539),
    1,
    anon_sym_XCDR,
    ACTIONS(542),
    1,
    anon_sym_XCDR2,
    STATE(135),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6722] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(545),
    1,
    sym_identifier,
    STATE(136),
    1,
    sym_comment,
    STATE(140),
    1,
    aux_sym_enumerator_repeat1,
    STATE(257),
    1,
    sym_enum_modifier,
    [6741] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(547),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6754] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_comment,
    STATE(262),
    1,
    sym_any_declarator,
    STATE(261),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6771] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(549),
    1,
    anon_sym_RPAREN,
    ACTIONS(551),
    1,
    anon_sym_XCDR,
    ACTIONS(553),
    1,
    anon_sym_XCDR2,
    STATE(135),
    1,
    aux_sym_data_representation_repeat1,
    STATE(139),
    1,
    sym_comment,
    [6790] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(558),
    1,
    sym_identifier,
    STATE(257),
    1,
    sym_enum_modifier,
    STATE(140),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(562),
    1,
    anon_sym_COMMA,
    ACTIONS(560),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(141),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [6822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(565),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6835] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(419),
    1,
    anon_sym_setraises,
    ACTIONS(567),
    1,
    anon_sym_SEMI,
    STATE(143),
    1,
    sym_comment,
    STATE(148),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(252),
    1,
    sym_set_excep_expr,
    [6854] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_LBRACE,
    ACTIONS(573),
    1,
    anon_sym_COLON,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(569),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6871] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(145),
    1,
    sym_comment,
    STATE(178),
    1,
    sym_interface_name,
    STATE(179),
    1,
    sym_scoped_name,
    [6890] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(419),
    1,
    anon_sym_setraises,
    ACTIONS(575),
    1,
    anon_sym_SEMI,
    STATE(143),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(146),
    1,
    sym_comment,
    STATE(252),
    1,
    sym_set_excep_expr,
    [6909] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(577),
    1,
    anon_sym_RPAREN,
    STATE(131),
    1,
    sym_scoped_name,
    STATE(147),
    1,
    sym_comment,
    [6928] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(579),
    1,
    anon_sym_SEMI,
    ACTIONS(581),
    1,
    anon_sym_setraises,
    STATE(252),
    1,
    sym_set_excep_expr,
    STATE(148),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [6945] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(149),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_scoped_name,
    STATE(275),
    1,
    sym_interface_name,
    [6964] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(320),
    1,
    sym_identifier,
    ACTIONS(584),
    1,
    anon_sym_SEMI,
    ACTIONS(586),
    1,
    anon_sym_default,
    STATE(150),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_default,
    [6983] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(588),
    1,
    anon_sym_RPAREN,
    STATE(134),
    1,
    sym_scoped_name,
    STATE(151),
    1,
    sym_comment,
    [7002] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(592),
    1,
    anon_sym_COMMA,
    STATE(152),
    1,
    sym_comment,
    STATE(155),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(590),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7019] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(594),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7032] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(187),
    1,
    sym_declarator,
    STATE(200),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7049] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(592),
    1,
    anon_sym_COMMA,
    STATE(141),
    1,
    aux_sym_declarators_repeat1,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(596),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7066] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(598),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7079] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(600),
    1,
    anon_sym_SEMI,
    ACTIONS(602),
    1,
    anon_sym_LBRACE,
    ACTIONS(604),
    1,
    anon_sym_COLON,
    STATE(157),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_interface_inheritance_spec,
    [7098] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(608),
    1,
    anon_sym_XCDR,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(606),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [7112] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(602),
    1,
    anon_sym_LBRACE,
    ACTIONS(604),
    1,
    anon_sym_COLON,
    STATE(159),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_interface_inheritance_spec,
    [7128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(610),
    2,
    anon_sym_COMMA,
    anon_sym_GT,
    [7142] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(612),
    1,
    anon_sym_RPAREN,
    ACTIONS(614),
    1,
    anon_sym_COMMA,
    STATE(161),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [7156] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(617),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(612),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [7182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(619),
    1,
    anon_sym_RBRACE,
    ACTIONS(621),
    1,
    anon_sym_COMMA,
    STATE(164),
    1,
    sym_comment,
    STATE(209),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [7198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    anon_sym_COMMA,
    ACTIONS(623),
    1,
    anon_sym_RPAREN,
    STATE(161),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(165),
    1,
    sym_comment,
    [7214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(625),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7226] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    anon_sym_COMMA,
    ACTIONS(627),
    1,
    anon_sym_RPAREN,
    STATE(161),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(167),
    1,
    sym_comment,
    [7242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(629),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [7254] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(631),
    1,
    anon_sym_SEMI,
    ACTIONS(633),
    1,
    sym_identifier,
    STATE(169),
    1,
    sym_comment,
    STATE(224),
    1,
    aux_sym_bitfield_repeat1,
    [7270] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_scoped_name,
    STATE(170),
    1,
    sym_comment,
    [7286] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(635),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(637),
    1,
    anon_sym_RPAREN,
    ACTIONS(639),
    1,
    anon_sym_COMMA,
    STATE(172),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [7312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(642),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7324] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(644),
    1,
    anon_sym_RPAREN,
    ACTIONS(646),
    1,
    anon_sym_COMMA,
    STATE(172),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(174),
    1,
    sym_comment,
    [7340] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(648),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7352] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(512),
    1,
    anon_sym_raises,
    ACTIONS(650),
    1,
    anon_sym_SEMI,
    STATE(176),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_raises_expr,
    [7368] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(652),
    1,
    anon_sym_SEMI,
    ACTIONS(654),
    1,
    anon_sym_COMMA,
    STATE(177),
    1,
    sym_comment,
    STATE(217),
    1,
    aux_sym_any_declarators_repeat1,
    [7384] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    anon_sym_LBRACE,
    ACTIONS(658),
    1,
    anon_sym_COMMA,
    STATE(178),
    1,
    sym_comment,
    STATE(219),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [7400] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [7414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(662),
    1,
    anon_sym_SEMI,
    ACTIONS(664),
    1,
    anon_sym_COMMA,
    STATE(180),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [7428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_COMMA,
    ACTIONS(667),
    1,
    anon_sym_SEMI,
    STATE(180),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(181),
    1,
    sym_comment,
    [7444] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(669),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7456] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(671),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7468] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(673),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7480] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(675),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(677),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7504] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(560),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7516] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(449),
    1,
    anon_sym_RBRACE,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    STATE(188),
    1,
    sym_comment,
    STATE(212),
    1,
    aux_sym_enum_dcl_repeat1,
    [7532] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_simple_declarator,
    STATE(189),
    1,
    sym_comment,
    STATE(344),
    1,
    sym_attr_declarator,
    [7548] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(683),
    1,
    anon_sym_SEMI,
    ACTIONS(685),
    1,
    anon_sym_switch,
    ACTIONS(687),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_comment,
    [7564] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(689),
    1,
    anon_sym_RBRACE,
    ACTIONS(691),
    1,
    anon_sym_COMMA,
    STATE(191),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_interface_body_repeat1,
    [7580] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(646),
    1,
    anon_sym_COMMA,
    ACTIONS(693),
    1,
    anon_sym_RPAREN,
    STATE(174),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(192),
    1,
    sym_comment,
    [7596] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(512),
    1,
    anon_sym_raises,
    ACTIONS(695),
    1,
    anon_sym_SEMI,
    STATE(193),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_raises_expr,
    [7612] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_COMMA,
    ACTIONS(697),
    1,
    anon_sym_SEMI,
    STATE(180),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(194),
    1,
    sym_comment,
    [7628] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(270),
    1,
    sym_scoped_name,
    [7644] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(699),
    1,
    anon_sym_RBRACE,
    STATE(196),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_enum_dcl_repeat1,
    [7660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(701),
    1,
    anon_sym_LBRACE,
    ACTIONS(703),
    1,
    anon_sym_COMMA,
    STATE(197),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7674] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(610),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(706),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7698] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(708),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7710] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(710),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7722] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(712),
    1,
    anon_sym_SEMI,
    ACTIONS(714),
    1,
    anon_sym_default,
    STATE(202),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_default,
    [7738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(716),
    1,
    anon_sym_RBRACE,
    ACTIONS(718),
    1,
    anon_sym_COMMA,
    STATE(203),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [7752] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(721),
    1,
    anon_sym_SEMI,
    ACTIONS(723),
    1,
    sym_identifier,
    STATE(204),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [7766] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(691),
    1,
    anon_sym_COMMA,
    ACTIONS(726),
    1,
    anon_sym_RBRACE,
    STATE(191),
    1,
    aux_sym_interface_body_repeat1,
    STATE(205),
    1,
    sym_comment,
    [7782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(728),
    1,
    anon_sym_RBRACE,
    STATE(196),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(206),
    1,
    sym_comment,
    [7798] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(730),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7810] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(654),
    1,
    anon_sym_COMMA,
    ACTIONS(732),
    1,
    anon_sym_SEMI,
    STATE(177),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(208),
    1,
    sym_comment,
    [7826] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(621),
    1,
    anon_sym_COMMA,
    ACTIONS(734),
    1,
    anon_sym_RBRACE,
    STATE(203),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(209),
    1,
    sym_comment,
    [7842] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    sym_identifier,
    STATE(122),
    1,
    sym_simple_declarator,
    STATE(210),
    1,
    sym_comment,
    STATE(314),
    1,
    sym_readonly_attr_declarator,
    [7858] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(736),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7870] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(728),
    1,
    anon_sym_RBRACE,
    STATE(212),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_enum_dcl_repeat1,
    [7886] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(714),
    1,
    anon_sym_default,
    ACTIONS(738),
    1,
    anon_sym_SEMI,
    STATE(213),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_default,
    [7902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(740),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7914] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(215),
    1,
    sym_comment,
    STATE(235),
    1,
    sym_scoped_name,
    [7930] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(551),
    1,
    anon_sym_XCDR,
    ACTIONS(553),
    1,
    anon_sym_XCDR2,
    STATE(139),
    1,
    aux_sym_data_representation_repeat1,
    STATE(216),
    1,
    sym_comment,
    [7946] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(742),
    1,
    anon_sym_SEMI,
    ACTIONS(744),
    1,
    anon_sym_COMMA,
    STATE(217),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [7960] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_RBRACE,
    ACTIONS(749),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_bit_value,
    STATE(218),
    1,
    sym_comment,
    [7976] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(658),
    1,
    anon_sym_COMMA,
    ACTIONS(751),
    1,
    anon_sym_LBRACE,
    STATE(197),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(219),
    1,
    sym_comment,
    [7992] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(753),
    1,
    anon_sym_RBRACE,
    ACTIONS(755),
    1,
    anon_sym_COMMA,
    STATE(220),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [8006] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(758),
    1,
    anon_sym_RBRACE,
    ACTIONS(760),
    1,
    anon_sym_COMMA,
    STATE(221),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8020] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_scoped_name,
    [8036] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(763),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [8048] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    sym_identifier,
    ACTIONS(765),
    1,
    anon_sym_SEMI,
    STATE(204),
    1,
    aux_sym_bitfield_repeat1,
    STATE(224),
    1,
    sym_comment,
    [8064] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(767),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(769),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8086] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    sym_identifier,
    STATE(227),
    1,
    sym_comment,
    STATE(332),
    1,
    sym_simple_declarator,
    [8099] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    ACTIONS(771),
    1,
    anon_sym_LBRACE,
    STATE(228),
    1,
    sym_comment,
    [8112] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(773),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8123] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(775),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8134] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(777),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8145] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_LBRACE,
    ACTIONS(781),
    1,
    anon_sym_COLON,
    STATE(232),
    1,
    sym_comment,
    [8158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(783),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8169] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(785),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8180] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    ACTIONS(787),
    1,
    anon_sym_LBRACE,
    STATE(235),
    1,
    sym_comment,
    [8193] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(789),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8204] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(791),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(793),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    ACTIONS(795),
    1,
    anon_sym_RPAREN,
    STATE(239),
    1,
    sym_comment,
    [8239] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(797),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8250] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(799),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8261] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(801),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(803),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [8283] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(805),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8294] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(637),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [8305] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(749),
    1,
    sym_identifier,
    STATE(246),
    1,
    sym_comment,
    STATE(277),
    1,
    sym_bit_value,
    [8318] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(807),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8329] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(388),
    1,
    anon_sym_interface,
    STATE(248),
    1,
    sym_comment,
    STATE(302),
    1,
    sym_interface_header,
    [8342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(809),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8353] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(811),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8364] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_simple_declarator,
    STATE(251),
    1,
    sym_comment,
    [8377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(813),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8388] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(253),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8399] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8410] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(662),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8421] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(819),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8432] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(821),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8443] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(823),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8454] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(825),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(827),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8476] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8498] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(831),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8509] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(833),
    1,
    anon_sym_LBRACE,
    ACTIONS(835),
    1,
    anon_sym_COLON,
    STATE(264),
    1,
    sym_comment,
    [8522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(837),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8533] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(839),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(841),
    1,
    anon_sym_LPAREN,
    STATE(254),
    1,
    sym_exception_list,
    STATE(267),
    1,
    sym_comment,
    [8557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(753),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8568] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(843),
    1,
    anon_sym_COMMA,
    ACTIONS(845),
    1,
    anon_sym_GT,
    STATE(269),
    1,
    sym_comment,
    [8581] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    ACTIONS(847),
    1,
    anon_sym_LBRACE,
    STATE(270),
    1,
    sym_comment,
    [8594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(849),
    1,
    anon_sym_COMMA,
    ACTIONS(851),
    1,
    anon_sym_GT,
    STATE(271),
    1,
    sym_comment,
    [8607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(853),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8618] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(388),
    1,
    anon_sym_interface,
    STATE(273),
    1,
    sym_comment,
    STATE(403),
    1,
    sym_interface_header,
    [8631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(841),
    1,
    anon_sym_LPAREN,
    STATE(253),
    1,
    sym_exception_list,
    STATE(274),
    1,
    sym_comment,
    [8644] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(701),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [8655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8666] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(716),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8688] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_simple_declarator,
    STATE(279),
    1,
    sym_comment,
    [8701] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(758),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(859),
    1,
    anon_sym_RBRACE,
    STATE(281),
    1,
    sym_comment,
    [8722] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(861),
    1,
    anon_sym_SEMI,
    STATE(282),
    1,
    sym_comment,
    [8732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(863),
    1,
    anon_sym_LPAREN,
    STATE(283),
    1,
    sym_comment,
    [8742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(865),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(284),
    1,
    sym_comment,
    [8752] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_DQUOTE,
    STATE(285),
    1,
    sym_comment,
    [8762] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(869),
    1,
    sym_identifier,
    STATE(286),
    1,
    sym_comment,
    [8772] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(871),
    1,
    sym_identifier,
    STATE(287),
    1,
    sym_comment,
    [8782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(873),
    1,
    anon_sym_SEMI,
    STATE(288),
    1,
    sym_comment,
    [8792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_comment,
    [8802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_comment,
    [8812] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_SEMI,
    STATE(291),
    1,
    sym_comment,
    [8822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    anon_sym_LBRACE,
    STATE(292),
    1,
    sym_comment,
    [8832] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(881),
    1,
    aux_sym_char_literal_token1,
    STATE(293),
    1,
    sym_comment,
    [8842] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    anon_sym_SEMI,
    STATE(294),
    1,
    sym_comment,
    [8852] = 3,
    ACTIONS(885),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(887),
    1,
    aux_sym_comment_token1,
    STATE(295),
    1,
    sym_comment,
    [8862] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_SEMI,
    STATE(296),
    1,
    sym_comment,
    [8872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    sym_identifier,
    STATE(297),
    1,
    sym_comment,
    [8882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(893),
    1,
    anon_sym_SEMI,
    STATE(298),
    1,
    sym_comment,
    [8892] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(895),
    1,
    anon_sym_name,
    STATE(299),
    1,
    sym_comment,
    [8902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(897),
    1,
    anon_sym_name,
    STATE(300),
    1,
    sym_comment,
    [8912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_SQUOTE,
    STATE(301),
    1,
    sym_comment,
    [8922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(901),
    1,
    anon_sym_LBRACE,
    STATE(302),
    1,
    sym_comment,
    [8932] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(903),
    1,
    sym_identifier,
    STATE(303),
    1,
    sym_comment,
    [8942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(905),
    1,
    anon_sym_SEMI,
    STATE(304),
    1,
    sym_comment,
    [8952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(305),
    1,
    sym_comment,
    [8962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(610),
    1,
    sym_identifier,
    STATE(306),
    1,
    sym_comment,
    [8972] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    anon_sym_RPAREN,
    STATE(307),
    1,
    sym_comment,
    [8982] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(911),
    1,
    anon_sym_GT,
    STATE(308),
    1,
    sym_comment,
    [8992] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    anon_sym_LT,
    STATE(309),
    1,
    sym_comment,
    [9002] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(310),
    1,
    sym_comment,
    [9012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_LT,
    STATE(311),
    1,
    sym_comment,
    [9022] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(919),
    1,
    anon_sym_LT,
    STATE(312),
    1,
    sym_comment,
    [9032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    sym_identifier,
    STATE(313),
    1,
    sym_comment,
    [9042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_SEMI,
    STATE(314),
    1,
    sym_comment,
    [9052] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(529),
    1,
    sym_identifier,
    STATE(315),
    1,
    sym_comment,
    [9062] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(697),
    1,
    anon_sym_SEMI,
    STATE(316),
    1,
    sym_comment,
    [9072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    anon_sym_LBRACE,
    STATE(317),
    1,
    sym_comment,
    [9082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(575),
    1,
    anon_sym_SEMI,
    STATE(318),
    1,
    sym_comment,
    [9092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_SEMI,
    STATE(319),
    1,
    sym_comment,
    [9102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_SEMI,
    STATE(320),
    1,
    sym_comment,
    [9112] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(931),
    1,
    anon_sym_RPAREN,
    STATE(321),
    1,
    sym_comment,
    [9122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(933),
    1,
    anon_sym_RPAREN,
    STATE(322),
    1,
    sym_comment,
    [9132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    anon_sym_LPAREN,
    STATE(323),
    1,
    sym_comment,
    [9142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(937),
    1,
    anon_sym_RPAREN,
    STATE(324),
    1,
    sym_comment,
    [9152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_SEMI,
    STATE(325),
    1,
    sym_comment,
    [9162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(941),
    1,
    anon_sym_LBRACE,
    STATE(326),
    1,
    sym_comment,
    [9172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    [9182] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_LBRACE,
    STATE(328),
    1,
    sym_comment,
    [9192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(947),
    1,
    anon_sym_RBRACK,
    STATE(329),
    1,
    sym_comment,
    [9202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(949),
    1,
    anon_sym_LBRACE,
    STATE(330),
    1,
    sym_comment,
    [9212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(951),
    1,
    anon_sym_SEMI,
    STATE(331),
    1,
    sym_comment,
    [9222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_SEMI,
    STATE(332),
    1,
    sym_comment,
    [9232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(955),
    1,
    anon_sym_LBRACE,
    STATE(333),
    1,
    sym_comment,
    [9242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_SEMI,
    STATE(334),
    1,
    sym_comment,
    [9252] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(959),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [9262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_LBRACE,
    STATE(336),
    1,
    sym_comment,
    [9272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(312),
    1,
    sym_identifier,
    STATE(337),
    1,
    sym_comment,
    [9282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(963),
    1,
    anon_sym_LBRACE,
    STATE(338),
    1,
    sym_comment,
    [9292] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(965),
    1,
    anon_sym_EQ,
    STATE(339),
    1,
    sym_comment,
    [9302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [9312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(969),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    [9322] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(971),
    1,
    anon_sym_enum,
    STATE(342),
    1,
    sym_comment,
    [9332] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(973),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [9342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(975),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [9352] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(977),
    1,
    aux_sym_char_literal_token1,
    STATE(345),
    1,
    sym_comment,
    [9362] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_GT,
    STATE(346),
    1,
    sym_comment,
    [9372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(981),
    1,
    anon_sym_LPAREN,
    STATE(347),
    1,
    sym_comment,
    [9382] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [9392] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    aux_sym_char_literal_token1,
    STATE(349),
    1,
    sym_comment,
    [9402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(985),
    1,
    anon_sym_EQ,
    STATE(350),
    1,
    sym_comment,
    [9412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(987),
    1,
    ts_builtin_sym_end,
    STATE(351),
    1,
    sym_comment,
    [9422] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(989),
    1,
    anon_sym_EQ,
    STATE(352),
    1,
    sym_comment,
    [9432] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_LBRACE,
    STATE(353),
    1,
    sym_comment,
    [9442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(993),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [9452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(995),
    1,
    anon_sym_LPAREN,
    STATE(355),
    1,
    sym_comment,
    [9462] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(133),
    1,
    anon_sym_RBRACE,
    STATE(356),
    1,
    sym_comment,
    [9472] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(650),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [9482] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [9492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(999),
    1,
    sym_identifier,
    STATE(359),
    1,
    sym_comment,
    [9502] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1001),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [9512] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    [9522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1005),
    1,
    anon_sym_attribute,
    STATE(362),
    1,
    sym_comment,
    [9532] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1007),
    1,
    anon_sym_LPAREN,
    STATE(363),
    1,
    sym_comment,
    [9542] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    anon_sym_LPAREN,
    STATE(364),
    1,
    sym_comment,
    [9552] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1011),
    1,
    aux_sym_char_literal_token1,
    STATE(365),
    1,
    sym_comment,
    [9562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1013),
    1,
    anon_sym_COLON,
    STATE(366),
    1,
    sym_comment,
    [9572] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1015),
    1,
    anon_sym_SQUOTE,
    STATE(367),
    1,
    sym_comment,
    [9582] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1017),
    1,
    anon_sym_LT,
    STATE(368),
    1,
    sym_comment,
    [9592] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1019),
    1,
    sym_identifier,
    STATE(369),
    1,
    sym_comment,
    [9602] = 3,
    ACTIONS(885),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1021),
    1,
    aux_sym_predefine_token1,
    STATE(370),
    1,
    sym_comment,
    [9612] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1023),
    1,
    anon_sym_GT,
    STATE(371),
    1,
    sym_comment,
    [9622] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1025),
    1,
    anon_sym_GT,
    STATE(372),
    1,
    sym_comment,
    [9632] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1027),
    1,
    anon_sym_GT,
    STATE(373),
    1,
    sym_comment,
    [9642] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    sym_identifier,
    STATE(374),
    1,
    sym_comment,
    [9652] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1031),
    1,
    anon_sym_RPAREN,
    STATE(375),
    1,
    sym_comment,
    [9662] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1033),
    1,
    sym_identifier,
    STATE(376),
    1,
    sym_comment,
    [9672] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1035),
    1,
    sym_identifier,
    STATE(377),
    1,
    sym_comment,
    [9682] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1037),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [9692] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1039),
    1,
    anon_sym_GT,
    STATE(379),
    1,
    sym_comment,
    [9702] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1041),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [9712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(141),
    1,
    anon_sym_RBRACE,
    STATE(381),
    1,
    sym_comment,
    [9722] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1043),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [9732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1045),
    1,
    sym_identifier,
    STATE(383),
    1,
    sym_comment,
    [9742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_COLON,
    STATE(384),
    1,
    sym_comment,
    [9752] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_SEMI,
    STATE(385),
    1,
    sym_comment,
    [9762] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    anon_sym_enum,
    STATE(386),
    1,
    sym_comment,
    [9772] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_SEMI,
    STATE(387),
    1,
    sym_comment,
    [9782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1055),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [9792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(795),
    1,
    anon_sym_RPAREN,
    STATE(389),
    1,
    sym_comment,
    [9802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    STATE(390),
    1,
    sym_comment,
    [9812] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1059),
    1,
    anon_sym_SEMI,
    STATE(391),
    1,
    sym_comment,
    [9822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1061),
    1,
    sym_identifier,
    STATE(392),
    1,
    sym_comment,
    [9832] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1063),
    1,
    anon_sym_RPAREN,
    STATE(393),
    1,
    sym_comment,
    [9842] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1065),
    1,
    anon_sym_COMMA,
    STATE(394),
    1,
    sym_comment,
    [9852] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1067),
    1,
    anon_sym_GT,
    STATE(395),
    1,
    sym_comment,
    [9862] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1069),
    1,
    sym_identifier,
    STATE(396),
    1,
    sym_comment,
    [9872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1071),
    1,
    sym_identifier,
    STATE(397),
    1,
    sym_comment,
    [9882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1073),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [9892] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_SEMI,
    STATE(399),
    1,
    sym_comment,
    [9902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    anon_sym_SEMI,
    STATE(400),
    1,
    sym_comment,
    [9912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [9922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    anon_sym_SEMI,
    STATE(402),
    1,
    sym_comment,
    [9932] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1083),
    1,
    anon_sym_LBRACE,
    STATE(403),
    1,
    sym_comment,
    [9942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1085),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [9952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1087),
    1,
    anon_sym_SEMI,
    STATE(405),
    1,
    sym_comment,
    [9962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_SQUOTE,
    STATE(406),
    1,
    sym_comment,
    [9972] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1091),
    1,
    sym_identifier,
    STATE(407),
    1,
    sym_comment,
    [9982] = 1,
    ACTIONS(1093),
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
    [SMALL_STATE(8)] = 690,
    [SMALL_STATE(9)] = 805,
    [SMALL_STATE(10)] = 920,
    [SMALL_STATE(11)] = 1035,
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
    [SMALL_STATE(24)] = 2492,
    [SMALL_STATE(25)] = 2560,
    [SMALL_STATE(26)] = 2645,
    [SMALL_STATE(27)] = 2727,
    [SMALL_STATE(28)] = 2809,
    [SMALL_STATE(29)] = 2891,
    [SMALL_STATE(30)] = 2973,
    [SMALL_STATE(31)] = 3055,
    [SMALL_STATE(32)] = 3110,
    [SMALL_STATE(33)] = 3165,
    [SMALL_STATE(34)] = 3220,
    [SMALL_STATE(35)] = 3275,
    [SMALL_STATE(36)] = 3330,
    [SMALL_STATE(37)] = 3384,
    [SMALL_STATE(38)] = 3438,
    [SMALL_STATE(39)] = 3492,
    [SMALL_STATE(40)] = 3546,
    [SMALL_STATE(41)] = 3609,
    [SMALL_STATE(42)] = 3655,
    [SMALL_STATE(43)] = 3701,
    [SMALL_STATE(44)] = 3747,
    [SMALL_STATE(45)] = 3806,
    [SMALL_STATE(46)] = 3848,
    [SMALL_STATE(47)] = 3920,
    [SMALL_STATE(48)] = 3992,
    [SMALL_STATE(49)] = 4064,
    [SMALL_STATE(50)] = 4136,
    [SMALL_STATE(51)] = 4208,
    [SMALL_STATE(52)] = 4280,
    [SMALL_STATE(53)] = 4352,
    [SMALL_STATE(54)] = 4421,
    [SMALL_STATE(55)] = 4490,
    [SMALL_STATE(56)] = 4559,
    [SMALL_STATE(57)] = 4628,
    [SMALL_STATE(58)] = 4659,
    [SMALL_STATE(59)] = 4728,
    [SMALL_STATE(60)] = 4759,
    [SMALL_STATE(61)] = 4790,
    [SMALL_STATE(62)] = 4821,
    [SMALL_STATE(63)] = 4852,
    [SMALL_STATE(64)] = 4883,
    [SMALL_STATE(65)] = 4946,
    [SMALL_STATE(66)] = 5006,
    [SMALL_STATE(67)] = 5063,
    [SMALL_STATE(68)] = 5093,
    [SMALL_STATE(69)] = 5121,
    [SMALL_STATE(70)] = 5175,
    [SMALL_STATE(71)] = 5203,
    [SMALL_STATE(72)] = 5233,
    [SMALL_STATE(73)] = 5260,
    [SMALL_STATE(74)] = 5291,
    [SMALL_STATE(75)] = 5322,
    [SMALL_STATE(76)] = 5349,
    [SMALL_STATE(77)] = 5376,
    [SMALL_STATE(78)] = 5403,
    [SMALL_STATE(79)] = 5454,
    [SMALL_STATE(80)] = 5481,
    [SMALL_STATE(81)] = 5508,
    [SMALL_STATE(82)] = 5535,
    [SMALL_STATE(83)] = 5562,
    [SMALL_STATE(84)] = 5589,
    [SMALL_STATE(85)] = 5637,
    [SMALL_STATE(86)] = 5663,
    [SMALL_STATE(87)] = 5689,
    [SMALL_STATE(88)] = 5713,
    [SMALL_STATE(89)] = 5737,
    [SMALL_STATE(90)] = 5772,
    [SMALL_STATE(91)] = 5807,
    [SMALL_STATE(92)] = 5827,
    [SMALL_STATE(93)] = 5855,
    [SMALL_STATE(94)] = 5875,
    [SMALL_STATE(95)] = 5894,
    [SMALL_STATE(96)] = 5925,
    [SMALL_STATE(97)] = 5944,
    [SMALL_STATE(98)] = 5970,
    [SMALL_STATE(99)] = 5988,
    [SMALL_STATE(100)] = 6003,
    [SMALL_STATE(101)] = 6028,
    [SMALL_STATE(102)] = 6053,
    [SMALL_STATE(103)] = 6074,
    [SMALL_STATE(104)] = 6099,
    [SMALL_STATE(105)] = 6124,
    [SMALL_STATE(106)] = 6141,
    [SMALL_STATE(107)] = 6162,
    [SMALL_STATE(108)] = 6181,
    [SMALL_STATE(109)] = 6204,
    [SMALL_STATE(110)] = 6229,
    [SMALL_STATE(111)] = 6254,
    [SMALL_STATE(112)] = 6277,
    [SMALL_STATE(113)] = 6299,
    [SMALL_STATE(114)] = 6313,
    [SMALL_STATE(115)] = 6335,
    [SMALL_STATE(116)] = 6349,
    [SMALL_STATE(117)] = 6363,
    [SMALL_STATE(118)] = 6383,
    [SMALL_STATE(119)] = 6397,
    [SMALL_STATE(120)] = 6417,
    [SMALL_STATE(121)] = 6431,
    [SMALL_STATE(122)] = 6453,
    [SMALL_STATE(123)] = 6475,
    [SMALL_STATE(124)] = 6495,
    [SMALL_STATE(125)] = 6509,
    [SMALL_STATE(126)] = 6531,
    [SMALL_STATE(127)] = 6553,
    [SMALL_STATE(128)] = 6573,
    [SMALL_STATE(129)] = 6593,
    [SMALL_STATE(130)] = 6615,
    [SMALL_STATE(131)] = 6635,
    [SMALL_STATE(132)] = 6654,
    [SMALL_STATE(133)] = 6669,
    [SMALL_STATE(134)] = 6686,
    [SMALL_STATE(135)] = 6705,
    [SMALL_STATE(136)] = 6722,
    [SMALL_STATE(137)] = 6741,
    [SMALL_STATE(138)] = 6754,
    [SMALL_STATE(139)] = 6771,
    [SMALL_STATE(140)] = 6790,
    [SMALL_STATE(141)] = 6807,
    [SMALL_STATE(142)] = 6822,
    [SMALL_STATE(143)] = 6835,
    [SMALL_STATE(144)] = 6854,
    [SMALL_STATE(145)] = 6871,
    [SMALL_STATE(146)] = 6890,
    [SMALL_STATE(147)] = 6909,
    [SMALL_STATE(148)] = 6928,
    [SMALL_STATE(149)] = 6945,
    [SMALL_STATE(150)] = 6964,
    [SMALL_STATE(151)] = 6983,
    [SMALL_STATE(152)] = 7002,
    [SMALL_STATE(153)] = 7019,
    [SMALL_STATE(154)] = 7032,
    [SMALL_STATE(155)] = 7049,
    [SMALL_STATE(156)] = 7066,
    [SMALL_STATE(157)] = 7079,
    [SMALL_STATE(158)] = 7098,
    [SMALL_STATE(159)] = 7112,
    [SMALL_STATE(160)] = 7128,
    [SMALL_STATE(161)] = 7142,
    [SMALL_STATE(162)] = 7156,
    [SMALL_STATE(163)] = 7168,
    [SMALL_STATE(164)] = 7182,
    [SMALL_STATE(165)] = 7198,
    [SMALL_STATE(166)] = 7214,
    [SMALL_STATE(167)] = 7226,
    [SMALL_STATE(168)] = 7242,
    [SMALL_STATE(169)] = 7254,
    [SMALL_STATE(170)] = 7270,
    [SMALL_STATE(171)] = 7286,
    [SMALL_STATE(172)] = 7298,
    [SMALL_STATE(173)] = 7312,
    [SMALL_STATE(174)] = 7324,
    [SMALL_STATE(175)] = 7340,
    [SMALL_STATE(176)] = 7352,
    [SMALL_STATE(177)] = 7368,
    [SMALL_STATE(178)] = 7384,
    [SMALL_STATE(179)] = 7400,
    [SMALL_STATE(180)] = 7414,
    [SMALL_STATE(181)] = 7428,
    [SMALL_STATE(182)] = 7444,
    [SMALL_STATE(183)] = 7456,
    [SMALL_STATE(184)] = 7468,
    [SMALL_STATE(185)] = 7480,
    [SMALL_STATE(186)] = 7492,
    [SMALL_STATE(187)] = 7504,
    [SMALL_STATE(188)] = 7516,
    [SMALL_STATE(189)] = 7532,
    [SMALL_STATE(190)] = 7548,
    [SMALL_STATE(191)] = 7564,
    [SMALL_STATE(192)] = 7580,
    [SMALL_STATE(193)] = 7596,
    [SMALL_STATE(194)] = 7612,
    [SMALL_STATE(195)] = 7628,
    [SMALL_STATE(196)] = 7644,
    [SMALL_STATE(197)] = 7660,
    [SMALL_STATE(198)] = 7674,
    [SMALL_STATE(199)] = 7686,
    [SMALL_STATE(200)] = 7698,
    [SMALL_STATE(201)] = 7710,
    [SMALL_STATE(202)] = 7722,
    [SMALL_STATE(203)] = 7738,
    [SMALL_STATE(204)] = 7752,
    [SMALL_STATE(205)] = 7766,
    [SMALL_STATE(206)] = 7782,
    [SMALL_STATE(207)] = 7798,
    [SMALL_STATE(208)] = 7810,
    [SMALL_STATE(209)] = 7826,
    [SMALL_STATE(210)] = 7842,
    [SMALL_STATE(211)] = 7858,
    [SMALL_STATE(212)] = 7870,
    [SMALL_STATE(213)] = 7886,
    [SMALL_STATE(214)] = 7902,
    [SMALL_STATE(215)] = 7914,
    [SMALL_STATE(216)] = 7930,
    [SMALL_STATE(217)] = 7946,
    [SMALL_STATE(218)] = 7960,
    [SMALL_STATE(219)] = 7976,
    [SMALL_STATE(220)] = 7992,
    [SMALL_STATE(221)] = 8006,
    [SMALL_STATE(222)] = 8020,
    [SMALL_STATE(223)] = 8036,
    [SMALL_STATE(224)] = 8048,
    [SMALL_STATE(225)] = 8064,
    [SMALL_STATE(226)] = 8075,
    [SMALL_STATE(227)] = 8086,
    [SMALL_STATE(228)] = 8099,
    [SMALL_STATE(229)] = 8112,
    [SMALL_STATE(230)] = 8123,
    [SMALL_STATE(231)] = 8134,
    [SMALL_STATE(232)] = 8145,
    [SMALL_STATE(233)] = 8158,
    [SMALL_STATE(234)] = 8169,
    [SMALL_STATE(235)] = 8180,
    [SMALL_STATE(236)] = 8193,
    [SMALL_STATE(237)] = 8204,
    [SMALL_STATE(238)] = 8215,
    [SMALL_STATE(239)] = 8226,
    [SMALL_STATE(240)] = 8239,
    [SMALL_STATE(241)] = 8250,
    [SMALL_STATE(242)] = 8261,
    [SMALL_STATE(243)] = 8272,
    [SMALL_STATE(244)] = 8283,
    [SMALL_STATE(245)] = 8294,
    [SMALL_STATE(246)] = 8305,
    [SMALL_STATE(247)] = 8318,
    [SMALL_STATE(248)] = 8329,
    [SMALL_STATE(249)] = 8342,
    [SMALL_STATE(250)] = 8353,
    [SMALL_STATE(251)] = 8364,
    [SMALL_STATE(252)] = 8377,
    [SMALL_STATE(253)] = 8388,
    [SMALL_STATE(254)] = 8399,
    [SMALL_STATE(255)] = 8410,
    [SMALL_STATE(256)] = 8421,
    [SMALL_STATE(257)] = 8432,
    [SMALL_STATE(258)] = 8443,
    [SMALL_STATE(259)] = 8454,
    [SMALL_STATE(260)] = 8465,
    [SMALL_STATE(261)] = 8476,
    [SMALL_STATE(262)] = 8487,
    [SMALL_STATE(263)] = 8498,
    [SMALL_STATE(264)] = 8509,
    [SMALL_STATE(265)] = 8522,
    [SMALL_STATE(266)] = 8533,
    [SMALL_STATE(267)] = 8544,
    [SMALL_STATE(268)] = 8557,
    [SMALL_STATE(269)] = 8568,
    [SMALL_STATE(270)] = 8581,
    [SMALL_STATE(271)] = 8594,
    [SMALL_STATE(272)] = 8607,
    [SMALL_STATE(273)] = 8618,
    [SMALL_STATE(274)] = 8631,
    [SMALL_STATE(275)] = 8644,
    [SMALL_STATE(276)] = 8655,
    [SMALL_STATE(277)] = 8666,
    [SMALL_STATE(278)] = 8677,
    [SMALL_STATE(279)] = 8688,
    [SMALL_STATE(280)] = 8701,
    [SMALL_STATE(281)] = 8712,
    [SMALL_STATE(282)] = 8722,
    [SMALL_STATE(283)] = 8732,
    [SMALL_STATE(284)] = 8742,
    [SMALL_STATE(285)] = 8752,
    [SMALL_STATE(286)] = 8762,
    [SMALL_STATE(287)] = 8772,
    [SMALL_STATE(288)] = 8782,
    [SMALL_STATE(289)] = 8792,
    [SMALL_STATE(290)] = 8802,
    [SMALL_STATE(291)] = 8812,
    [SMALL_STATE(292)] = 8822,
    [SMALL_STATE(293)] = 8832,
    [SMALL_STATE(294)] = 8842,
    [SMALL_STATE(295)] = 8852,
    [SMALL_STATE(296)] = 8862,
    [SMALL_STATE(297)] = 8872,
    [SMALL_STATE(298)] = 8882,
    [SMALL_STATE(299)] = 8892,
    [SMALL_STATE(300)] = 8902,
    [SMALL_STATE(301)] = 8912,
    [SMALL_STATE(302)] = 8922,
    [SMALL_STATE(303)] = 8932,
    [SMALL_STATE(304)] = 8942,
    [SMALL_STATE(305)] = 8952,
    [SMALL_STATE(306)] = 8962,
    [SMALL_STATE(307)] = 8972,
    [SMALL_STATE(308)] = 8982,
    [SMALL_STATE(309)] = 8992,
    [SMALL_STATE(310)] = 9002,
    [SMALL_STATE(311)] = 9012,
    [SMALL_STATE(312)] = 9022,
    [SMALL_STATE(313)] = 9032,
    [SMALL_STATE(314)] = 9042,
    [SMALL_STATE(315)] = 9052,
    [SMALL_STATE(316)] = 9062,
    [SMALL_STATE(317)] = 9072,
    [SMALL_STATE(318)] = 9082,
    [SMALL_STATE(319)] = 9092,
    [SMALL_STATE(320)] = 9102,
    [SMALL_STATE(321)] = 9112,
    [SMALL_STATE(322)] = 9122,
    [SMALL_STATE(323)] = 9132,
    [SMALL_STATE(324)] = 9142,
    [SMALL_STATE(325)] = 9152,
    [SMALL_STATE(326)] = 9162,
    [SMALL_STATE(327)] = 9172,
    [SMALL_STATE(328)] = 9182,
    [SMALL_STATE(329)] = 9192,
    [SMALL_STATE(330)] = 9202,
    [SMALL_STATE(331)] = 9212,
    [SMALL_STATE(332)] = 9222,
    [SMALL_STATE(333)] = 9232,
    [SMALL_STATE(334)] = 9242,
    [SMALL_STATE(335)] = 9252,
    [SMALL_STATE(336)] = 9262,
    [SMALL_STATE(337)] = 9272,
    [SMALL_STATE(338)] = 9282,
    [SMALL_STATE(339)] = 9292,
    [SMALL_STATE(340)] = 9302,
    [SMALL_STATE(341)] = 9312,
    [SMALL_STATE(342)] = 9322,
    [SMALL_STATE(343)] = 9332,
    [SMALL_STATE(344)] = 9342,
    [SMALL_STATE(345)] = 9352,
    [SMALL_STATE(346)] = 9362,
    [SMALL_STATE(347)] = 9372,
    [SMALL_STATE(348)] = 9382,
    [SMALL_STATE(349)] = 9392,
    [SMALL_STATE(350)] = 9402,
    [SMALL_STATE(351)] = 9412,
    [SMALL_STATE(352)] = 9422,
    [SMALL_STATE(353)] = 9432,
    [SMALL_STATE(354)] = 9442,
    [SMALL_STATE(355)] = 9452,
    [SMALL_STATE(356)] = 9462,
    [SMALL_STATE(357)] = 9472,
    [SMALL_STATE(358)] = 9482,
    [SMALL_STATE(359)] = 9492,
    [SMALL_STATE(360)] = 9502,
    [SMALL_STATE(361)] = 9512,
    [SMALL_STATE(362)] = 9522,
    [SMALL_STATE(363)] = 9532,
    [SMALL_STATE(364)] = 9542,
    [SMALL_STATE(365)] = 9552,
    [SMALL_STATE(366)] = 9562,
    [SMALL_STATE(367)] = 9572,
    [SMALL_STATE(368)] = 9582,
    [SMALL_STATE(369)] = 9592,
    [SMALL_STATE(370)] = 9602,
    [SMALL_STATE(371)] = 9612,
    [SMALL_STATE(372)] = 9622,
    [SMALL_STATE(373)] = 9632,
    [SMALL_STATE(374)] = 9642,
    [SMALL_STATE(375)] = 9652,
    [SMALL_STATE(376)] = 9662,
    [SMALL_STATE(377)] = 9672,
    [SMALL_STATE(378)] = 9682,
    [SMALL_STATE(379)] = 9692,
    [SMALL_STATE(380)] = 9702,
    [SMALL_STATE(381)] = 9712,
    [SMALL_STATE(382)] = 9722,
    [SMALL_STATE(383)] = 9732,
    [SMALL_STATE(384)] = 9742,
    [SMALL_STATE(385)] = 9752,
    [SMALL_STATE(386)] = 9762,
    [SMALL_STATE(387)] = 9772,
    [SMALL_STATE(388)] = 9782,
    [SMALL_STATE(389)] = 9792,
    [SMALL_STATE(390)] = 9802,
    [SMALL_STATE(391)] = 9812,
    [SMALL_STATE(392)] = 9822,
    [SMALL_STATE(393)] = 9832,
    [SMALL_STATE(394)] = 9842,
    [SMALL_STATE(395)] = 9852,
    [SMALL_STATE(396)] = 9862,
    [SMALL_STATE(397)] = 9872,
    [SMALL_STATE(398)] = 9882,
    [SMALL_STATE(399)] = 9892,
    [SMALL_STATE(400)] = 9902,
    [SMALL_STATE(401)] = 9912,
    [SMALL_STATE(402)] = 9922,
    [SMALL_STATE(403)] = 9932,
    [SMALL_STATE(404)] = 9942,
    [SMALL_STATE(405)] = 9952,
    [SMALL_STATE(406)] = 9962,
    [SMALL_STATE(407)] = 9972,
    [SMALL_STATE(408)] = 9982,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(153),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(312),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(132),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(311),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(309),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [85] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [87] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [89] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(39),
    [92] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(284),
    [95] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(297),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(156),
    [101] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [104] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [107] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(315),
    [110] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(113),
    [113] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(312),
    [116] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(132),
    [119] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(311),
    [122] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(309),
    [125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(392),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(388),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(361),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(362),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [147] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(407),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(227),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(396),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(392),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(388),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(386),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(383),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(377),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(376),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(374),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(370),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(369),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(248),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(115),
    [192] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(364),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(363),
    [198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(40),
    [201] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(175),
    [204] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(355),
    [207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(39),
    [220] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(284),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(297),
    [226] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 7),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 7),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [252] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [256] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [266] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [270] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [274] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [280] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [282] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [288] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(406),
    [290] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [294] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [310] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [312] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [316] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [320] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [324] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [328] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [330] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [332] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [334] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [336] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [340] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [342] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [344] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [348] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [352] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [360] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [362] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 8),
    [364] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 8),
    [366] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [370] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [372] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [374] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [376] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [380] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [382] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [384] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [386] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [388] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [390] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [394] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [398] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(115),
    [401] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(364),
    [404] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(363),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [425] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [459] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [461] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [463] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(48),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(366),
    [471] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(58),
    [474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(315),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(113),
    [486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [488] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [490] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [498] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [500] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(175),
    [503] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(355),
    [506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [510] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [518] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [520] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [522] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(368),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [539] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(158),
    [542] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(158),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [547] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [551] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [555] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(265),
    [558] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [562] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(154),
    [565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [569] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [581] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(274),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [586] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(53),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [590] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [594] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [600] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [606] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [608] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [610] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [612] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [614] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(170),
    [617] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [625] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [635] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(127),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [646] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [648] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [664] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(279),
    [667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [673] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [679] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [685] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(283),
    [687] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [703] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(149),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [708] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [712] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [714] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [718] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(246),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [723] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(242),
    [726] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [728] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [730] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [738] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [744] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(138),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [755] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(18),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [760] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(112),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 9),
    [799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [805] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 9),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [847] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [863] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [885] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(295),
    [887] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(408),
    [889] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [893] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [895] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [897] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [909] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [911] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [915] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [919] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [929] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [945] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [959] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [967] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [973] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [987] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [989] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [999] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [1021] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1093] = { .entry = { .count = 1, .reusable = true } },
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
