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
#define STATE_COUNT 529
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 282
#define ALIAS_COUNT 3
#define TOKEN_COUNT 123
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
    anon_sym_module = 79,
    anon_sym_typename = 80,
    anon_sym_valuetype = 81,
    anon_sym_eventtype = 82,
    anon_sym_struct = 83,
    anon_sym_union = 84,
    anon_sym_enum = 85,
    anon_sym_const = 86,
    anon_sym_alias = 87,
    anon_sym_supports = 88,
    anon_sym_public = 89,
    anon_sym_private = 90,
    anon_sym_factory = 91,
    anon_sym_typedef = 92,
    anon_sym_LBRACK = 93,
    anon_sym_RBRACK = 94,
    anon_sym_ATdefault_literal = 95,
    anon_sym_ATignore_literal_names = 96,
    anon_sym_switch = 97,
    anon_sym_case = 98,
    anon_sym_native = 99,
    anon_sym_POUNDdefine = 100,
    aux_sym_predefine_token1 = 101,
    sym_dds_service = 102,
    anon_sym_ATDDSRequestTopic = 103,
    anon_sym_name = 104,
    anon_sym_ATDDSReplyTopic = 105,
    sym_optional = 106,
    sym_key = 107,
    sym_must_understand = 108,
    sym_non_serialized = 109,
    sym_id = 110,
    sym_external = 111,
    anon_sym_AThashid = 112,
    anon_sym_LPAREN_DQUOTE = 113,
    anon_sym_ATtry_construct = 114,
    sym_final = 115,
    anon_sym_ATdata_representation = 116,
    anon_sym_XCDR = 117,
    anon_sym_XCDR2 = 118,
    sym_identifier = 119,
    anon_sym_SLASH_SLASH = 120,
    aux_sym_comment_token1 = 121,
    sym__eof = 122,
    sym_specification = 123,
    sym_signed_short_int = 124,
    sym_signed_long_int = 125,
    sym_signed_longlong_int = 126,
    sym_unsigned_int = 127,
    sym_fixed_pt_const_type = 128,
    sym_integer_type = 129,
    sym_signed_int = 130,
    sym_unsigned_short_int = 131,
    sym_unsigned_long_int = 132,
    sym_unsigned_longlong_int = 133,
    sym_floating_pt_type = 134,
    sym_char_type = 135,
    sym_scoped_name = 136,
    sym_string_type = 137,
    sym_type_spec = 138,
    sym_simple_type_spec = 139,
    sym_base_type_spec = 140,
    sym_any_type = 141,
    sym_fixed_pt_type = 142,
    sym_template_type_spec = 143,
    sym_sequence_type = 144,
    sym_map_type = 145,
    sym_positive_int_const = 146,
    sym_const_expr = 147,
    sym_or_expr = 148,
    sym_xor_expr = 149,
    sym_and_expr = 150,
    sym_shift_expr = 151,
    sym_add_expr = 152,
    sym_mult_expr = 153,
    sym_unary_expr = 154,
    sym_unary_operator = 155,
    sym_literal = 156,
    sym_string_literal = 157,
    sym_char_literal = 158,
    sym_boolean_literal = 159,
    sym_preproc_call = 160,
    sym_except_dcl = 161,
    sym_interface_dcl = 162,
    sym_interface_forward_dcl = 163,
    sym_interface_def = 164,
    sym_interface_header = 165,
    sym_interface_inheritance_spec = 166,
    sym_interface_name = 167,
    sym_interface_body = 168,
    sym_export = 169,
    sym_op_dcl = 170,
    sym_op_type_spec = 171,
    sym_parameter_dcls = 172,
    sym_param_dcl = 173,
    sym_param_attribute = 174,
    sym_raises_expr = 175,
    sym_attr_dcl = 176,
    sym_readonly_attr_spec = 177,
    sym_readonly_attr_declarator = 178,
    sym_attr_spec = 179,
    sym_attr_declarator = 180,
    sym_attr_raises_expr = 181,
    sym_get_excep_expr = 182,
    sym_set_excep_expr = 183,
    sym_exception_list = 184,
    sym_interface_anno = 185,
    sym_bitset_dcl = 186,
    sym_bitfield = 187,
    sym_bitfield_spec = 188,
    sym_destination_type = 189,
    sym_bitmask_dcl = 190,
    sym_bit_value = 191,
    sym_annotation_dcl = 192,
    sym_annotation_body = 193,
    sym_annotation_member = 194,
    sym_annotation_member_type = 195,
    sym_any_const_type = 196,
    sym_template_module_dcl = 197,
    sym_formal_parameters = 198,
    sym_formal_parameter = 199,
    sym_formal_parameter_type = 200,
    sym_tpl_definition = 201,
    sym_template_module_inst = 202,
    sym_actual_parameters = 203,
    sym_actual_parameter = 204,
    sym_template_module_ref = 205,
    sym_formal_parameter_names = 206,
    sym_value_dcl = 207,
    sym_value_def = 208,
    sym_value_header = 209,
    sym_value_inheritance_spec = 210,
    sym_value_name = 211,
    sym_value_element = 212,
    sym_state_member = 213,
    sym_init_dcl = 214,
    sym_init_param_dcls = 215,
    sym_init_param_dcl = 216,
    sym_value_forward_dcl = 217,
    sym_typedef_dcl = 218,
    sym_type_declarator = 219,
    sym_any_declarators = 220,
    sym_any_declarator = 221,
    sym_simple_declarator = 222,
    sym_declarator = 223,
    sym_declarators = 224,
    sym_array_declarator = 225,
    sym_fixed_array_size = 226,
    sym_enum_dcl = 227,
    sym_enumerator = 228,
    sym_enum_modifier = 229,
    sym_enum_anno = 230,
    sym_union_forward_dcl = 231,
    sym_union_def = 232,
    sym_case = 233,
    sym_case_label = 234,
    sym_element_spec = 235,
    sym_switch_type_spec = 236,
    sym__definition = 237,
    sym_native_dcl = 238,
    sym_module_dcl = 239,
    sym_struct_forward_dcl = 240,
    sym_struct_def = 241,
    sym_member = 242,
    sym_default = 243,
    sym_predefine = 244,
    sym_dds_request_topic = 245,
    sym_dds_reply_topic = 246,
    sym_const_dcl = 247,
    sym_const_type = 248,
    sym_hashid = 249,
    sym_try_construct = 250,
    sym_data_representation = 251,
    sym_struct_modifier = 252,
    sym_comment = 253,
    aux_sym_specification_repeat1 = 254,
    aux_sym_specification_repeat2 = 255,
    aux_sym_except_dcl_repeat1 = 256,
    aux_sym_interface_def_repeat1 = 257,
    aux_sym_interface_inheritance_spec_repeat1 = 258,
    aux_sym_interface_body_repeat1 = 259,
    aux_sym_parameter_dcls_repeat1 = 260,
    aux_sym_raises_expr_repeat1 = 261,
    aux_sym_readonly_attr_declarator_repeat1 = 262,
    aux_sym_bitset_dcl_repeat1 = 263,
    aux_sym_bitfield_repeat1 = 264,
    aux_sym_bitmask_dcl_repeat1 = 265,
    aux_sym_annotation_dcl_repeat1 = 266,
    aux_sym_template_module_dcl_repeat1 = 267,
    aux_sym_formal_parameters_repeat1 = 268,
    aux_sym_actual_parameters_repeat1 = 269,
    aux_sym_formal_parameter_names_repeat1 = 270,
    aux_sym_value_def_repeat1 = 271,
    aux_sym_init_param_dcls_repeat1 = 272,
    aux_sym_any_declarators_repeat1 = 273,
    aux_sym_declarators_repeat1 = 274,
    aux_sym_array_declarator_repeat1 = 275,
    aux_sym_enum_dcl_repeat1 = 276,
    aux_sym_enumerator_repeat1 = 277,
    aux_sym_union_def_repeat1 = 278,
    aux_sym_struct_def_repeat1 = 279,
    aux_sym_member_repeat1 = 280,
    aux_sym_data_representation_repeat1 = 281,
    alias_sym_data_rep = 282,
    alias_sym_hashid_value = 283,
    alias_sym_try_construct_value = 284,
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
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_native] = "native",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
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
    [sym_positive_int_const] = "positive_int_const",
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
    [sym_template_module_dcl] = "template_module_dcl",
    [sym_formal_parameters] = "formal_parameters",
    [sym_formal_parameter] = "formal_parameter",
    [sym_formal_parameter_type] = "formal_parameter_type",
    [sym_tpl_definition] = "tpl_definition",
    [sym_template_module_inst] = "template_module_inst",
    [sym_actual_parameters] = "actual_parameters",
    [sym_actual_parameter] = "actual_parameter",
    [sym_template_module_ref] = "template_module_ref",
    [sym_formal_parameter_names] = "formal_parameter_names",
    [sym_value_dcl] = "value_dcl",
    [sym_value_def] = "value_def",
    [sym_value_header] = "value_header",
    [sym_value_inheritance_spec] = "value_inheritance_spec",
    [sym_value_name] = "value_name",
    [sym_value_element] = "value_element",
    [sym_state_member] = "state_member",
    [sym_init_dcl] = "init_dcl",
    [sym_init_param_dcls] = "init_param_dcls",
    [sym_init_param_dcl] = "init_param_dcl",
    [sym_value_forward_dcl] = "value_forward_dcl",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_fixed_array_size] = "fixed_array_size",
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
    [sym__definition] = "_definition",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
    [sym_predefine] = "predefine",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
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
    [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
    [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
    [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
    [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
    [aux_sym_value_def_repeat1] = "value_def_repeat1",
    [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_data_representation_repeat1] = "data_representation_repeat1",
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
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
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
    [sym_positive_int_const] = sym_positive_int_const,
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
    [sym_template_module_dcl] = sym_template_module_dcl,
    [sym_formal_parameters] = sym_formal_parameters,
    [sym_formal_parameter] = sym_formal_parameter,
    [sym_formal_parameter_type] = sym_formal_parameter_type,
    [sym_tpl_definition] = sym_tpl_definition,
    [sym_template_module_inst] = sym_template_module_inst,
    [sym_actual_parameters] = sym_actual_parameters,
    [sym_actual_parameter] = sym_actual_parameter,
    [sym_template_module_ref] = sym_template_module_ref,
    [sym_formal_parameter_names] = sym_formal_parameter_names,
    [sym_value_dcl] = sym_value_dcl,
    [sym_value_def] = sym_value_def,
    [sym_value_header] = sym_value_header,
    [sym_value_inheritance_spec] = sym_value_inheritance_spec,
    [sym_value_name] = sym_value_name,
    [sym_value_element] = sym_value_element,
    [sym_state_member] = sym_state_member,
    [sym_init_dcl] = sym_init_dcl,
    [sym_init_param_dcls] = sym_init_param_dcls,
    [sym_init_param_dcl] = sym_init_param_dcl,
    [sym_value_forward_dcl] = sym_value_forward_dcl,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_fixed_array_size] = sym_fixed_array_size,
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
    [sym__definition] = sym__definition,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
    [sym_predefine] = sym_predefine,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
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
    [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
    [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
    [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
    [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
    [aux_sym_value_def_repeat1] = aux_sym_value_def_repeat1,
    [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_data_representation_repeat1] = aux_sym_data_representation_repeat1,
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
    [anon_sym_ATdefault_literal] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATignore_literal_names] = {
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
    [anon_sym_native] = {
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
    [sym_positive_int_const] = {
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
    [sym_template_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_type] = {
        .visible = true,
        .named = true,
    },
    [sym_tpl_definition] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_inst] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_ref] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_names] = {
        .visible = true,
        .named = true,
    },
    [sym_value_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_def] = {
        .visible = true,
        .named = true,
    },
    [sym_value_header] = {
        .visible = true,
        .named = true,
    },
    [sym_value_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_value_name] = {
        .visible = true,
        .named = true,
    },
    [sym_value_element] = {
        .visible = true,
        .named = true,
    },
    [sym_state_member] = {
        .visible = true,
        .named = true,
    },
    [sym_init_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_typedef_dcl] = {
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
    [sym_fixed_array_size] = {
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
    [aux_sym_template_module_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_actual_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameter_names_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_value_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_init_param_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_any_declarators_repeat1] = {
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
    [aux_sym_struct_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_member_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_data_representation_repeat1] = {
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
    [5] = { field_value, 1 },
    [6] = { field_parent, 3 },
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
    [56] = 49,
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
    [157] = 107,
    [158] = 109,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 108,
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
    [285] = 252,
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
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 448,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
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
    [474] = 474,
    [475] = 475,
    [476] = 476,
    [477] = 477,
    [478] = 478,
    [479] = 479,
    [480] = 480,
    [481] = 481,
    [482] = 482,
    [483] = 483,
    [484] = 484,
    [485] = 485,
    [486] = 486,
    [487] = 487,
    [488] = 488,
    [489] = 489,
    [490] = 490,
    [491] = 491,
    [492] = 492,
    [493] = 493,
    [494] = 494,
    [495] = 495,
    [496] = 496,
    [497] = 497,
    [498] = 498,
    [499] = 499,
    [500] = 500,
    [501] = 501,
    [502] = 502,
    [503] = 503,
    [504] = 504,
    [505] = 505,
    [506] = 506,
    [507] = 507,
    [508] = 508,
    [509] = 509,
    [510] = 510,
    [511] = 511,
    [512] = 512,
    [513] = 513,
    [514] = 514,
    [515] = 515,
    [516] = 516,
    [517] = 517,
    [518] = 518,
    [519] = 519,
    [520] = 520,
    [521] = 521,
    [522] = 522,
    [523] = 523,
    [524] = 524,
    [525] = 466,
    [526] = 432,
    [527] = 414,
    [528] = 528,
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
                ADVANCE(520);
            if(lookahead == '"')
                ADVANCE(595);
            if(lookahead == '#')
                ADVANCE(152);
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == '%')
                ADVANCE(589);
            if(lookahead == '\'')
                ADVANCE(597);
            if(lookahead == '(')
                ADVANCE(590);
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == '*')
                ADVANCE(587);
            if(lookahead == '+')
                ADVANCE(583);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '-')
                ADVANCE(585);
            if(lookahead == '/')
                ADVANCE(588);
            if(lookahead == ':')
                ADVANCE(676);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '<')
                ADVANCE(568);
            if(lookahead == '=')
                ADVANCE(700);
            if(lookahead == '>')
                ADVANCE(570);
            if(lookahead == '@')
                ADVANCE(699);
            if(lookahead == 'F')
                ADVANCE(599);
            if(lookahead == 'L')
                ADVANCE(593);
            if(lookahead == 'T')
                ADVANCE(601);
            if(lookahead == 'X')
                ADVANCE(600);
            if(lookahead == '[')
                ADVANCE(726);
            if(lookahead == '\\')
                SKIP(513)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == '^')
                ADVANCE(579);
            if(lookahead == 'a')
                ADVANCE(615);
            if(lookahead == 'b')
                ADVANCE(613);
            if(lookahead == 'c')
                ADVANCE(602);
            if(lookahead == 'd')
                ADVANCE(610);
            if(lookahead == 'e')
                ADVANCE(617);
            if(lookahead == 'f')
                ADVANCE(606);
            if(lookahead == 'g')
                ADVANCE(612);
            if(lookahead == 'i')
                ADVANCE(616);
            if(lookahead == 'l')
                ADVANCE(618);
            if(lookahead == 'm')
                ADVANCE(603);
            if(lookahead == 'n')
                ADVANCE(604);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'r')
                ADVANCE(607);
            if(lookahead == 's')
                ADVANCE(611);
            if(lookahead == 't')
                ADVANCE(620);
            if(lookahead == 'u')
                ADVANCE(614);
            if(lookahead == 'v')
                ADVANCE(605);
            if(lookahead == 'w')
                ADVANCE(608);
            if(lookahead == '{')
                ADVANCE(670);
            if(lookahead == '|')
                ADVANCE(578);
            if(lookahead == '}')
                ADVANCE(671);
            if(lookahead == '~')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(58)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(59)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(59)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(60)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(60)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(61)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(62)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(62)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(27)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(29)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(63)
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(63)
            if(lookahead == '\r')
                SKIP(31)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                ADVANCE(655);
            if(lookahead == '\r')
                ADVANCE(36);
            if(lookahead == '/')
                ADVANCE(664);
            if(lookahead == '\\')
                ADVANCE(662);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(67)
            if(lookahead != 0)
                ADVANCE(665);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                ADVANCE(655);
            if(lookahead == '\r')
                ADVANCE(35);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(41)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(66)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                ADVANCE(655);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(41)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66)
            END_STATE();
        case 36:
            if(lookahead == '\n')
                ADVANCE(655);
            if(lookahead == '/')
                ADVANCE(664);
            if(lookahead == '\\')
                ADVANCE(662);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67)
            if(lookahead != 0)
                ADVANCE(665);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(64)
            END_STATE();
        case 38:
            if(lookahead == '\n')
                SKIP(64)
            if(lookahead == '\r')
                SKIP(37)
            END_STATE();
        case 39:
            if(lookahead == '\n')
                ADVANCE(979);
            if(lookahead == '\r')
                ADVANCE(978);
            if(lookahead == '\\')
                ADVANCE(982);
            if(lookahead != 0)
                ADVANCE(981);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                SKIP(66)
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(66)
            if(lookahead == '\r')
                SKIP(40)
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(65)
            END_STATE();
        case 43:
            if(lookahead == '\n')
                SKIP(65)
            if(lookahead == '\r')
                SKIP(42)
            END_STATE();
        case 44:
            if(lookahead == ' ')
                ADVANCE(298);
            END_STATE();
        case 45:
            if(lookahead == '"')
                ADVANCE(595);
            if(lookahead == '\'')
                ADVANCE(597);
            if(lookahead == '(')
                ADVANCE(590);
            if(lookahead == '+')
                ADVANCE(584);
            if(lookahead == '-')
                ADVANCE(586);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '0')
                ADVANCE(632);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == 'F')
                ADVANCE(770);
            if(lookahead == 'L')
                ADVANCE(594);
            if(lookahead == 'T')
                ADVANCE(774);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(847);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(812);
            if(lookahead == 'u')
                ADVANCE(863);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '~')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 46:
            if(lookahead == '"')
                ADVANCE(595);
            if(lookahead == '\'')
                ADVANCE(597);
            if(lookahead == '(')
                ADVANCE(590);
            if(lookahead == '+')
                ADVANCE(584);
            if(lookahead == '-')
                ADVANCE(586);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '0')
                ADVANCE(632);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == 'F')
                ADVANCE(770);
            if(lookahead == 'L')
                ADVANCE(594);
            if(lookahead == 'T')
                ADVANCE(774);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == '~')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 47:
            if(lookahead == '"')
                ADVANCE(753);
            END_STATE();
        case 48:
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == '%')
                ADVANCE(589);
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == '*')
                ADVANCE(587);
            if(lookahead == '+')
                ADVANCE(583);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '-')
                ADVANCE(585);
            if(lookahead == '/')
                ADVANCE(588);
            if(lookahead == ':')
                ADVANCE(676);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '<')
                ADVANCE(568);
            if(lookahead == '>')
                ADVANCE(570);
            if(lookahead == '@')
                ADVANCE(169);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == '^')
                ADVANCE(579);
            if(lookahead == '{')
                ADVANCE(670);
            if(lookahead == '|')
                ADVANCE(578);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 49:
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(675);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '>')
                ADVANCE(569);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == '^')
                ADVANCE(579);
            if(lookahead == 'i')
                ADVANCE(306);
            if(lookahead == 'o')
                ADVANCE(473);
            if(lookahead == '|')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            END_STATE();
        case 50:
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '>')
                ADVANCE(569);
            if(lookahead == '\\')
                SKIP(28)
            if(lookahead == 'i')
                ADVANCE(312);
            if(lookahead == 's')
                ADVANCE(472);
            if(lookahead == '{')
                ADVANCE(670);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            END_STATE();
        case 51:
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(675);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '<')
                ADVANCE(567);
            if(lookahead == '>')
                ADVANCE(569);
            if(lookahead == '\\')
                SKIP(30)
            if(lookahead == '{')
                ADVANCE(670);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 52:
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '<')
                ADVANCE(567);
            if(lookahead == '>')
                ADVANCE(569);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(852);
            if(lookahead == 'c')
                ADVANCE(846);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'e')
                ADVANCE(885);
            if(lookahead == 'f')
                ADVANCE(790);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'n')
                ADVANCE(782);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 'p')
                ADVANCE(917);
            if(lookahead == 'r')
                ADVANCE(827);
            if(lookahead == 's')
                ADVANCE(810);
            if(lookahead == 't')
                ADVANCE(969);
            if(lookahead == 'u')
                ADVANCE(862);
            if(lookahead == 'v')
                ADVANCE(900);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '{')
                ADVANCE(670);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 53:
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '>')
                ADVANCE(569);
            if(lookahead == '@')
                ADVANCE(189);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(847);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(812);
            if(lookahead == 'u')
                ADVANCE(863);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 54:
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(629);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(631);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(975);
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(852);
            if(lookahead == 'c')
                ADVANCE(846);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'e')
                ADVANCE(885);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'n')
                ADVANCE(782);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 'r')
                ADVANCE(827);
            if(lookahead == 's')
                ADVANCE(810);
            if(lookahead == 't')
                ADVANCE(969);
            if(lookahead == 'u')
                ADVANCE(862);
            if(lookahead == 'v')
                ADVANCE(900);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(852);
            if(lookahead == 'c')
                ADVANCE(783);
            if(lookahead == 'd')
                ADVANCE(824);
            if(lookahead == 'e')
                ADVANCE(886);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(810);
            if(lookahead == 'u')
                ADVANCE(862);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(852);
            if(lookahead == 'c')
                ADVANCE(847);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'e')
                ADVANCE(886);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(777);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(810);
            if(lookahead == 'u')
                ADVANCE(862);
            if(lookahead == 'w')
                ADVANCE(795);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 59:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '@')
                ADVANCE(265);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(846);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'e')
                ADVANCE(886);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(812);
            if(lookahead == 't')
                ADVANCE(969);
            if(lookahead == 'u')
                ADVANCE(863);
            if(lookahead == 'w')
                ADVANCE(795);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 60:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'a')
                ADVANCE(883);
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(846);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'e')
                ADVANCE(884);
            if(lookahead == 'f')
                ADVANCE(868);
            if(lookahead == 'i')
                ADVANCE(893);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(811);
            if(lookahead == 't')
                ADVANCE(970);
            if(lookahead == 'u')
                ADVANCE(862);
            if(lookahead == 'v')
                ADVANCE(786);
            if(lookahead == 'w')
                ADVANCE(796);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 61:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(847);
            if(lookahead == 'd')
                ADVANCE(898);
            if(lookahead == 'f')
                ADVANCE(850);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(800);
            if(lookahead == 's')
                ADVANCE(812);
            if(lookahead == 'u')
                ADVANCE(863);
            if(lookahead == 'w')
                ADVANCE(795);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 62:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ':')
                ADVANCE(76);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'b')
                ADVANCE(902);
            if(lookahead == 'c')
                ADVANCE(847);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'l')
                ADVANCE(909);
            if(lookahead == 's')
                ADVANCE(848);
            if(lookahead == 'u')
                ADVANCE(863);
            if(lookahead == 'w')
                ADVANCE(796);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 63:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '\\')
                SKIP(32)
            if(lookahead == 's')
                ADVANCE(964);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 64:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(38)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(598);
            END_STATE();
        case 65:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(43)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(596);
            END_STATE();
        case 66:
            if(lookahead == '/')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(41)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66)
            END_STATE();
        case 67:
            if(lookahead == '/')
                ADVANCE(664);
            if(lookahead == '\\')
                ADVANCE(662);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67)
            if(lookahead != 0)
                ADVANCE(665);
            END_STATE();
        case 68:
            if(lookahead == '1')
                ADVANCE(74);
            if(lookahead == '3')
                ADVANCE(70);
            if(lookahead == '6')
                ADVANCE(72);
            if(lookahead == '8')
                ADVANCE(534);
            END_STATE();
        case 69:
            if(lookahead == '1')
                ADVANCE(75);
            if(lookahead == '3')
                ADVANCE(71);
            if(lookahead == '6')
                ADVANCE(73);
            if(lookahead == '8')
                ADVANCE(542);
            if(lookahead == 'e')
                ADVANCE(399);
            END_STATE();
        case 70:
            if(lookahead == '2')
                ADVANCE(548);
            END_STATE();
        case 71:
            if(lookahead == '2')
                ADVANCE(529);
            END_STATE();
        case 72:
            if(lookahead == '4')
                ADVANCE(551);
            END_STATE();
        case 73:
            if(lookahead == '4')
                ADVANCE(532);
            END_STATE();
        case 74:
            if(lookahead == '6')
                ADVANCE(545);
            END_STATE();
        case 75:
            if(lookahead == '6')
                ADVANCE(523);
            END_STATE();
        case 76:
            if(lookahead == ':')
                ADVANCE(562);
            END_STATE();
        case 77:
            if(lookahead == '<')
                ADVANCE(582);
            END_STATE();
        case 78:
            if(lookahead == 'C')
                ADVANCE(79);
            END_STATE();
        case 79:
            if(lookahead == 'D')
                ADVANCE(85);
            END_STATE();
        case 80:
            if(lookahead == 'D')
                ADVANCE(81);
            if(lookahead == 'a')
                ADVANCE(326);
            if(lookahead == 'd')
                ADVANCE(121);
            if(lookahead == 'f')
                ADVANCE(260);
            if(lookahead == 'i')
                ADVANCE(237);
            END_STATE();
        case 81:
            if(lookahead == 'D')
                ADVANCE(87);
            END_STATE();
        case 82:
            if(lookahead == 'E')
                ADVANCE(621);
            END_STATE();
        case 83:
            if(lookahead == 'E')
                ADVANCE(623);
            END_STATE();
        case 84:
            if(lookahead == 'L')
                ADVANCE(88);
            END_STATE();
        case 85:
            if(lookahead == 'R')
                ADVANCE(757);
            END_STATE();
        case 86:
            if(lookahead == 'R')
                ADVANCE(184);
            if(lookahead == 'S')
                ADVANCE(207);
            END_STATE();
        case 87:
            if(lookahead == 'S')
                ADVANCE(86);
            END_STATE();
        case 88:
            if(lookahead == 'S')
                ADVANCE(83);
            END_STATE();
        case 89:
            if(lookahead == 'T')
                ADVANCE(348);
            END_STATE();
        case 90:
            if(lookahead == 'T')
                ADVANCE(359);
            END_STATE();
        case 91:
            if(lookahead == 'U')
                ADVANCE(82);
            END_STATE();
        case 92:
            if(lookahead == '_')
                ADVANCE(146);
            END_STATE();
        case 93:
            if(lookahead == '_')
                ADVANCE(476);
            END_STATE();
        case 94:
            if(lookahead == '_')
                ADVANCE(400);
            END_STATE();
        case 95:
            if(lookahead == '_')
                ADVANCE(336);
            END_STATE();
        case 96:
            if(lookahead == '_')
                ADVANCE(293);
            END_STATE();
        case 97:
            if(lookahead == '_')
                ADVANCE(421);
            END_STATE();
        case 98:
            if(lookahead == '_')
                ADVANCE(300);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(412);
            if(lookahead == 'o')
                ADVANCE(313);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(302);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(94);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(167);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(304);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(405);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(382);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(406);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(383);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(474);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(308);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(279);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(429);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(283);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(280);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(281);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(282);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(327);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(450);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(444);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(305);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(452);
            END_STATE();
        case 125:
            if(lookahead == 'a')
                ADVANCE(481);
            END_STATE();
        case 126:
            if(lookahead == 'a')
                ADVANCE(150);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(295);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(463);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(465);
            END_STATE();
        case 132:
            if(lookahead == 'b')
                ADVANCE(290);
            END_STATE();
        case 133:
            if(lookahead == 'b')
                ADVANCE(484);
            END_STATE();
        case 134:
            if(lookahead == 'b')
                ADVANCE(291);
            END_STATE();
        case 135:
            if(lookahead == 'b')
                ADVANCE(296);
            END_STATE();
        case 136:
            if(lookahead == 'c')
                ADVANCE(718);
            END_STATE();
        case 137:
            if(lookahead == 'c')
                ADVANCE(745);
            END_STATE();
        case 138:
            if(lookahead == 'c')
                ADVANCE(743);
            END_STATE();
        case 139:
            if(lookahead == 'c')
                ADVANCE(238);
            END_STATE();
        case 140:
            if(lookahead == 'c')
                ADVANCE(446);
            END_STATE();
        case 141:
            if(lookahead == 'c')
                ADVANCE(194);
            END_STATE();
        case 142:
            if(lookahead == 'c')
                ADVANCE(459);
            END_STATE();
        case 143:
            if(lookahead == 'c')
                ADVANCE(109);
            END_STATE();
        case 144:
            if(lookahead == 'c')
                ADVANCE(109);
            if(lookahead == 'n')
                ADVANCE(229);
            END_STATE();
        case 145:
            if(lookahead == 'c')
                ADVANCE(109);
            if(lookahead == 'n')
                ADVANCE(235);
            END_STATE();
        case 146:
            if(lookahead == 'c')
                ADVANCE(357);
            END_STATE();
        case 147:
            if(lookahead == 'c')
                ADVANCE(434);
            END_STATE();
        case 148:
            if(lookahead == 'c')
                ADVANCE(178);
            END_STATE();
        case 149:
            if(lookahead == 'c')
                ADVANCE(438);
            END_STATE();
        case 150:
            if(lookahead == 'c')
                ADVANCE(185);
            END_STATE();
        case 151:
            if(lookahead == 'c')
                ADVANCE(186);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(656);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 153:
            if(lookahead == 'd')
                ADVANCE(678);
            END_STATE();
        case 154:
            if(lookahead == 'd')
                ADVANCE(538);
            END_STATE();
        case 155:
            if(lookahead == 'd')
                ADVANCE(693);
            END_STATE();
        case 156:
            if(lookahead == 'd')
                ADVANCE(44);
            END_STATE();
        case 157:
            if(lookahead == 'd')
                ADVANCE(750);
            END_STATE();
        case 158:
            if(lookahead == 'd')
                ADVANCE(752);
            END_STATE();
        case 159:
            if(lookahead == 'd')
                ADVANCE(749);
            END_STATE();
        case 160:
            if(lookahead == 'd')
                ADVANCE(748);
            END_STATE();
        case 161:
            if(lookahead == 'd')
                ADVANCE(483);
            END_STATE();
        case 162:
            if(lookahead == 'd')
                ADVANCE(366);
            if(lookahead == 'l')
                ADVANCE(360);
            END_STATE();
        case 163:
            if(lookahead == 'd')
                ADVANCE(188);
            END_STATE();
        case 164:
            if(lookahead == 'd')
                ADVANCE(188);
            if(lookahead == 'n')
                ADVANCE(104);
            END_STATE();
        case 165:
            if(lookahead == 'd')
                ADVANCE(212);
            END_STATE();
        case 166:
            if(lookahead == 'd')
                ADVANCE(191);
            END_STATE();
        case 167:
            if(lookahead == 'd')
                ADVANCE(346);
            END_STATE();
        case 168:
            if(lookahead == 'd')
                ADVANCE(121);
            if(lookahead == 'f')
                ADVANCE(260);
            if(lookahead == 'i')
                ADVANCE(237);
            END_STATE();
        case 169:
            if(lookahead == 'd')
                ADVANCE(221);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(224);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(732);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(744);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(164);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(555);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(701);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(734);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(720);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(574);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(702);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(687);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(706);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(704);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(557);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(370);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(672);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(742);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(736);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(223);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(492);
            if(lookahead == 'h')
                ADVANCE(115);
            if(lookahead == 'i')
                ADVANCE(157);
            if(lookahead == 'k')
                ADVANCE(195);
            if(lookahead == 'm')
                ADVANCE(482);
            if(lookahead == 'n')
                ADVANCE(355);
            if(lookahead == 'o')
                ADVANCE(379);
            if(lookahead == 't')
                ADVANCE(386);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(96);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(227);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(154);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(407);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(372);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(497);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(333);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(156);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(286);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(409);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(163);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(410);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(411);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(399);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(112);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(159);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(431);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(433);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(401);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(398);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(402);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(443);
            END_STATE();
        case 214:
            if(lookahead == 'e')
                ADVANCE(418);
            END_STATE();
        case 215:
            if(lookahead == 'e')
                ADVANCE(323);
            END_STATE();
        case 216:
            if(lookahead == 'e')
                ADVANCE(392);
            END_STATE();
        case 217:
            if(lookahead == 'e')
                ADVANCE(395);
            END_STATE();
        case 218:
            if(lookahead == 'e')
                ADVANCE(340);
            END_STATE();
        case 219:
            if(lookahead == 'e')
                ADVANCE(423);
            END_STATE();
        case 220:
            if(lookahead == 'e')
                ADVANCE(462);
            END_STATE();
        case 221:
            if(lookahead == 'e')
                ADVANCE(228);
            END_STATE();
        case 222:
            if(lookahead == 'e')
                ADVANCE(470);
            if(lookahead == 'h')
                ADVANCE(347);
            if(lookahead == 't')
                ADVANCE(389);
            if(lookahead == 'u')
                ADVANCE(368);
            END_STATE();
        case 223:
            if(lookahead == 'f')
                ADVANCE(724);
            END_STATE();
        case 224:
            if(lookahead == 'f')
                ADVANCE(111);
            END_STATE();
        case 225:
            if(lookahead == 'f')
                ADVANCE(259);
            if(lookahead == 'm')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 226:
            if(lookahead == 'f')
                ADVANCE(126);
            END_STATE();
        case 227:
            if(lookahead == 'f')
                ADVANCE(262);
            END_STATE();
        case 228:
            if(lookahead == 'f')
                ADVANCE(125);
            END_STATE();
        case 229:
            if(lookahead == 'g')
                ADVANCE(525);
            END_STATE();
        case 230:
            if(lookahead == 'g')
                ADVANCE(563);
            END_STATE();
        case 231:
            if(lookahead == 'g')
                ADVANCE(565);
            END_STATE();
        case 232:
            if(lookahead == 'g')
                ADVANCE(531);
            END_STATE();
        case 233:
            if(lookahead == 'g')
                ADVANCE(547);
            END_STATE();
        case 234:
            if(lookahead == 'g')
                ADVANCE(550);
            END_STATE();
        case 235:
            if(lookahead == 'g')
                ADVANCE(527);
            END_STATE();
        case 236:
            if(lookahead == 'g')
                ADVANCE(334);
            END_STATE();
        case 237:
            if(lookahead == 'g')
                ADVANCE(338);
            END_STATE();
        case 238:
            if(lookahead == 'h')
                ADVANCE(730);
            END_STATE();
        case 239:
            if(lookahead == 'h')
                ADVANCE(258);
            END_STATE();
        case 240:
            if(lookahead == 'h')
                ADVANCE(110);
            END_STATE();
        case 241:
            if(lookahead == 'h')
                ADVANCE(361);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(488);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(502);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(425);
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(320);
            if(lookahead == 'n')
                ADVANCE(253);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(133);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(236);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(489);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(106);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(315);
            if(lookahead == 'u')
                ADVANCE(147);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(153);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(344);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(344);
            if(lookahead == 's')
                ADVANCE(247);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(136);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(137);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(442);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(138);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(158);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(199);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(328);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(332);
            END_STATE();
        case 263:
            if(lookahead == 'i')
                ADVANCE(439);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(415);
            END_STATE();
        case 265:
            if(lookahead == 'i')
                ADVANCE(237);
            END_STATE();
        case 266:
            if(lookahead == 'i')
                ADVANCE(316);
            END_STATE();
        case 267:
            if(lookahead == 'i')
                ADVANCE(416);
            END_STATE();
        case 268:
            if(lookahead == 'i')
                ADVANCE(351);
            END_STATE();
        case 269:
            if(lookahead == 'i')
                ADVANCE(417);
            END_STATE();
        case 270:
            if(lookahead == 'i')
                ADVANCE(151);
            END_STATE();
        case 271:
            if(lookahead == 'i')
                ADVANCE(455);
            END_STATE();
        case 272:
            if(lookahead == 'i')
                ADVANCE(353);
            END_STATE();
        case 273:
            if(lookahead == 'i')
                ADVANCE(354);
            END_STATE();
        case 274:
            if(lookahead == 'i')
                ADVANCE(362);
            END_STATE();
        case 275:
            if(lookahead == 'i')
                ADVANCE(464);
            END_STATE();
        case 276:
            if(lookahead == 'k')
                ADVANCE(694);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(249);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(674);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(755);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(751);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(746);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(728);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(95);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(495);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(496);
            END_STATE();
        case 286:
            if(lookahead == 'l')
                ADVANCE(155);
            END_STATE();
        case 287:
            if(lookahead == 'l')
                ADVANCE(360);
            END_STATE();
        case 288:
            if(lookahead == 'l')
                ADVANCE(485);
            END_STATE();
        case 289:
            if(lookahead == 'l')
                ADVANCE(205);
            END_STATE();
        case 290:
            if(lookahead == 'l')
                ADVANCE(254);
            END_STATE();
        case 291:
            if(lookahead == 'l')
                ADVANCE(174);
            END_STATE();
        case 292:
            if(lookahead == 'l')
                ADVANCE(175);
            END_STATE();
        case 293:
            if(lookahead == 'l')
                ADVANCE(271);
            END_STATE();
        case 294:
            if(lookahead == 'l')
                ADVANCE(435);
            END_STATE();
        case 295:
            if(lookahead == 'l')
                ADVANCE(243);
            END_STATE();
        case 296:
            if(lookahead == 'l')
                ADVANCE(183);
            END_STATE();
        case 297:
            if(lookahead == 'l')
                ADVANCE(469);
            END_STATE();
        case 298:
            if(lookahead == 'l')
                ADVANCE(363);
            if(lookahead == 's')
                ADVANCE(241);
            END_STATE();
        case 299:
            if(lookahead == 'l')
                ADVANCE(364);
            END_STATE();
        case 300:
            if(lookahead == 'l')
                ADVANCE(275);
            END_STATE();
        case 301:
            if(lookahead == 'm')
                ADVANCE(712);
            END_STATE();
        case 302:
            if(lookahead == 'm')
                ADVANCE(172);
            if(lookahead == 't')
                ADVANCE(248);
            END_STATE();
        case 303:
            if(lookahead == 'm')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 304:
            if(lookahead == 'm')
                ADVANCE(179);
            END_STATE();
        case 305:
            if(lookahead == 'm')
                ADVANCE(203);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(681);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(710);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(536);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(668);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(696);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(756);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(680);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(414);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(471);
            if(lookahead == 'x')
                ADVANCE(141);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(230);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(231);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(97);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(232);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(233);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(427);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(284);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(234);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(451);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(356);
            END_STATE();
        case 325:
            if(lookahead == 'n')
                ADVANCE(422);
            END_STATE();
        case 326:
            if(lookahead == 'n')
                ADVANCE(324);
            END_STATE();
        case 327:
            if(lookahead == 'n')
                ADVANCE(160);
            END_STATE();
        case 328:
            if(lookahead == 'n')
                ADVANCE(113);
            END_STATE();
        case 329:
            if(lookahead == 'n')
                ADVANCE(117);
            END_STATE();
        case 330:
            if(lookahead == 'n')
                ADVANCE(118);
            END_STATE();
        case 331:
            if(lookahead == 'n')
                ADVANCE(437);
            END_STATE();
        case 332:
            if(lookahead == 'n')
                ADVANCE(187);
            END_STATE();
        case 333:
            if(lookahead == 'n')
                ADVANCE(148);
            END_STATE();
        case 334:
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 335:
            if(lookahead == 'n')
                ADVANCE(165);
            END_STATE();
        case 336:
            if(lookahead == 'n')
                ADVANCE(123);
            END_STATE();
        case 337:
            if(lookahead == 'n')
                ADVANCE(252);
            END_STATE();
        case 338:
            if(lookahead == 'n')
                ADVANCE(352);
            END_STATE();
        case 339:
            if(lookahead == 'n')
                ADVANCE(457);
            END_STATE();
        case 340:
            if(lookahead == 'n')
                ADVANCE(468);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(313);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(289);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(114);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(321);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(391);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(371);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(384);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(143);
            END_STATE();
        case 351:
            if(lookahead == 'o')
                ADVANCE(309);
            END_STATE();
        case 352:
            if(lookahead == 'o')
                ADVANCE(396);
            END_STATE();
        case 353:
            if(lookahead == 'o')
                ADVANCE(310);
            END_STATE();
        case 354:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 355:
            if(lookahead == 'o')
                ADVANCE(317);
            END_STATE();
        case 356:
            if(lookahead == 'o')
                ADVANCE(460);
            END_STATE();
        case 357:
            if(lookahead == 'o')
                ADVANCE(325);
            END_STATE();
        case 358:
            if(lookahead == 'o')
                ADVANCE(393);
            END_STATE();
        case 359:
            if(lookahead == 'o')
                ADVANCE(373);
            END_STATE();
        case 360:
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 361:
            if(lookahead == 'o')
                ADVANCE(394);
            END_STATE();
        case 362:
            if(lookahead == 'o')
                ADVANCE(330);
            END_STATE();
        case 363:
            if(lookahead == 'o')
                ADVANCE(319);
            END_STATE();
        case 364:
            if(lookahead == 'o')
                ADVANCE(322);
            END_STATE();
        case 365:
            if(lookahead == 'o')
                ADVANCE(145);
            END_STATE();
        case 366:
            if(lookahead == 'o')
                ADVANCE(487);
            END_STATE();
        case 367:
            if(lookahead == 'p')
                ADVANCE(576);
            END_STATE();
        case 368:
            if(lookahead == 'p')
                ADVANCE(378);
            END_STATE();
        case 369:
            if(lookahead == 'p')
                ADVANCE(173);
            END_STATE();
        case 370:
            if(lookahead == 'p')
                ADVANCE(285);
            if(lookahead == 'q')
                ADVANCE(477);
            END_STATE();
        case 371:
            if(lookahead == 'p')
                ADVANCE(255);
            END_STATE();
        case 372:
            if(lookahead == 'p')
                ADVANCE(449);
            END_STATE();
        case 373:
            if(lookahead == 'p')
                ADVANCE(257);
            END_STATE();
        case 374:
            if(lookahead == 'p')
                ADVANCE(181);
            END_STATE();
        case 375:
            if(lookahead == 'p')
                ADVANCE(182);
            END_STATE();
        case 376:
            if(lookahead == 'p')
                ADVANCE(397);
            END_STATE();
        case 377:
            if(lookahead == 'p')
                ADVANCE(201);
            END_STATE();
        case 378:
            if(lookahead == 'p')
                ADVANCE(358);
            END_STATE();
        case 379:
            if(lookahead == 'p')
                ADVANCE(466);
            END_STATE();
        case 380:
            if(lookahead == 'q')
                ADVANCE(478);
            if(lookahead == 't')
                ADVANCE(404);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(250);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(558);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(560);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(494);
            END_STATE();
        case 385:
            if(lookahead == 'r')
                ADVANCE(490);
            END_STATE();
        case 386:
            if(lookahead == 'r')
                ADVANCE(498);
            END_STATE();
        case 387:
            if(lookahead == 'r')
                ADVANCE(246);
            END_STATE();
        case 388:
            if(lookahead == 'r')
                ADVANCE(128);
            END_STATE();
        case 389:
            if(lookahead == 'r')
                ADVANCE(480);
            END_STATE();
        case 390:
            if(lookahead == 'r')
                ADVANCE(266);
            END_STATE();
        case 391:
            if(lookahead == 'r')
                ADVANCE(432);
            END_STATE();
        case 392:
            if(lookahead == 'r')
                ADVANCE(116);
            END_STATE();
        case 393:
            if(lookahead == 'r')
                ADVANCE(445);
            END_STATE();
        case 394:
            if(lookahead == 'r')
                ADVANCE(436);
            END_STATE();
        case 395:
            if(lookahead == 'r')
                ADVANCE(119);
            END_STATE();
        case 396:
            if(lookahead == 'r')
                ADVANCE(190);
            END_STATE();
        case 397:
            if(lookahead == 'r')
                ADVANCE(219);
            END_STATE();
        case 398:
            if(lookahead == 'r')
                ADVANCE(261);
            END_STATE();
        case 399:
            if(lookahead == 'r')
                ADVANCE(226);
            END_STATE();
        case 400:
            if(lookahead == 'r')
                ADVANCE(197);
            END_STATE();
        case 401:
            if(lookahead == 'r')
                ADVANCE(329);
            END_STATE();
        case 402:
            if(lookahead == 'r')
                ADVANCE(420);
            END_STATE();
        case 403:
            if(lookahead == 'r')
                ADVANCE(486);
            END_STATE();
        case 404:
            if(lookahead == 'r')
                ADVANCE(130);
            END_STATE();
        case 405:
            if(lookahead == 's')
                ADVANCE(716);
            END_STATE();
        case 406:
            if(lookahead == 's')
                ADVANCE(276);
            END_STATE();
        case 407:
            if(lookahead == 's')
                ADVANCE(684);
            END_STATE();
        case 408:
            if(lookahead == 's')
                ADVANCE(717);
            END_STATE();
        case 409:
            if(lookahead == 's')
                ADVANCE(689);
            END_STATE();
        case 410:
            if(lookahead == 's')
                ADVANCE(690);
            END_STATE();
        case 411:
            if(lookahead == 's')
                ADVANCE(729);
            END_STATE();
        case 412:
            if(lookahead == 's')
                ADVANCE(171);
            END_STATE();
        case 413:
            if(lookahead == 's')
                ADVANCE(239);
            END_STATE();
        case 414:
            if(lookahead == 's')
                ADVANCE(428);
            END_STATE();
        case 415:
            if(lookahead == 's')
                ADVANCE(193);
            END_STATE();
        case 416:
            if(lookahead == 's')
                ADVANCE(200);
            END_STATE();
        case 417:
            if(lookahead == 's')
                ADVANCE(202);
            END_STATE();
        case 418:
            if(lookahead == 's')
                ADVANCE(461);
            END_STATE();
        case 419:
            if(lookahead == 's')
                ADVANCE(447);
            END_STATE();
        case 420:
            if(lookahead == 's')
                ADVANCE(454);
            END_STATE();
        case 421:
            if(lookahead == 's')
                ADVANCE(211);
            END_STATE();
        case 422:
            if(lookahead == 's')
                ADVANCE(467);
            END_STATE();
        case 423:
            if(lookahead == 's')
                ADVANCE(218);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(441);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(225);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(682);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(68);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(714);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(553);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(683);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(540);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(521);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(691);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(708);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(697);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(544);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(69);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(754);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(303);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(499);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(387);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(139);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(388);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(248);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(408);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(208);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(93);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(389);
            if(lookahead == 'u')
                ADVANCE(368);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(268);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(102);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(440);
            END_STATE();
        case 452:
            if(lookahead == 't')
                ADVANCE(177);
            END_STATE();
        case 453:
            if(lookahead == 't')
                ADVANCE(180);
            END_STATE();
        case 454:
            if(lookahead == 't')
                ADVANCE(120);
            END_STATE();
        case 455:
            if(lookahead == 't')
                ADVANCE(216);
            END_STATE();
        case 456:
            if(lookahead == 't')
                ADVANCE(210);
            END_STATE();
        case 457:
            if(lookahead == 't')
                ADVANCE(204);
            END_STATE();
        case 458:
            if(lookahead == 't')
                ADVANCE(390);
            END_STATE();
        case 459:
            if(lookahead == 't')
                ADVANCE(349);
            END_STATE();
        case 460:
            if(lookahead == 't')
                ADVANCE(129);
            END_STATE();
        case 461:
            if(lookahead == 't')
                ADVANCE(90);
            END_STATE();
        case 462:
            if(lookahead == 't')
                ADVANCE(500);
            END_STATE();
        case 463:
            if(lookahead == 't')
                ADVANCE(272);
            END_STATE();
        case 464:
            if(lookahead == 't')
                ADVANCE(217);
            END_STATE();
        case 465:
            if(lookahead == 't')
                ADVANCE(273);
            END_STATE();
        case 466:
            if(lookahead == 't')
                ADVANCE(274);
            END_STATE();
        case 467:
            if(lookahead == 't')
                ADVANCE(403);
            END_STATE();
        case 468:
            if(lookahead == 't')
                ADVANCE(131);
            END_STATE();
        case 469:
            if(lookahead == 't')
                ADVANCE(98);
            END_STATE();
        case 470:
            if(lookahead == 't')
                ADVANCE(404);
            END_STATE();
        case 471:
            if(lookahead == 'u')
                ADVANCE(301);
            END_STATE();
        case 472:
            if(lookahead == 'u')
                ADVANCE(368);
            END_STATE();
        case 473:
            if(lookahead == 'u')
                ADVANCE(426);
            END_STATE();
        case 474:
            if(lookahead == 'u')
                ADVANCE(294);
            END_STATE();
        case 475:
            if(lookahead == 'u')
                ADVANCE(430);
            END_STATE();
        case 476:
            if(lookahead == 'u')
                ADVANCE(335);
            END_STATE();
        case 477:
            if(lookahead == 'u')
                ADVANCE(214);
            END_STATE();
        case 478:
            if(lookahead == 'u')
                ADVANCE(196);
            END_STATE();
        case 479:
            if(lookahead == 'u')
                ADVANCE(134);
            END_STATE();
        case 480:
            if(lookahead == 'u')
                ADVANCE(147);
            END_STATE();
        case 481:
            if(lookahead == 'u')
                ADVANCE(297);
            END_STATE();
        case 482:
            if(lookahead == 'u')
                ADVANCE(419);
            END_STATE();
        case 483:
            if(lookahead == 'u')
                ADVANCE(292);
            END_STATE();
        case 484:
            if(lookahead == 'u')
                ADVANCE(453);
            END_STATE();
        case 485:
            if(lookahead == 'u')
                ADVANCE(220);
            END_STATE();
        case 486:
            if(lookahead == 'u')
                ADVANCE(149);
            END_STATE();
        case 487:
            if(lookahead == 'u')
                ADVANCE(135);
            END_STATE();
        case 488:
            if(lookahead == 'v')
                ADVANCE(124);
            END_STATE();
        case 489:
            if(lookahead == 'v')
                ADVANCE(176);
            END_STATE();
        case 490:
            if(lookahead == 'v')
                ADVANCE(270);
            END_STATE();
        case 491:
            if(lookahead == 'x')
                ADVANCE(192);
            END_STATE();
        case 492:
            if(lookahead == 'x')
                ADVANCE(456);
            END_STATE();
        case 493:
            if(lookahead == 'y')
                ADVANCE(571);
            END_STATE();
        case 494:
            if(lookahead == 'y')
                ADVANCE(722);
            END_STATE();
        case 495:
            if(lookahead == 'y')
                ADVANCE(685);
            END_STATE();
        case 496:
            if(lookahead == 'y')
                ADVANCE(89);
            END_STATE();
        case 497:
            if(lookahead == 'y')
                ADVANCE(747);
            END_STATE();
        case 498:
            if(lookahead == 'y')
                ADVANCE(92);
            END_STATE();
        case 499:
            if(lookahead == 'y')
                ADVANCE(374);
            END_STATE();
        case 500:
            if(lookahead == 'y')
                ADVANCE(375);
            END_STATE();
        case 501:
            if(lookahead == 'y')
                ADVANCE(377);
            END_STATE();
        case 502:
            if(lookahead == 'z')
                ADVANCE(206);
            END_STATE();
        case 503:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 504:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            END_STATE();
        case 505:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(625);
            END_STATE();
        case 506:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(631);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            END_STATE();
        case 507:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(639);
            END_STATE();
        case 508:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            END_STATE();
        case 509:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(627);
            END_STATE();
        case 510:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(981);
            if(lookahead == '\r')
                ADVANCE(983);
            if(lookahead == '\\')
                ADVANCE(982);
            END_STATE();
        case 511:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(665);
            END_STATE();
        case 512:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 513:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(512)
            END_STATE();
        case 514:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(518)
            END_STATE();
        case 515:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(518)
            if(lookahead == '\r')
                SKIP(514)
            END_STATE();
        case 516:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(519)
            END_STATE();
        case 517:
            if(eof)
                ADVANCE(520);
            if(lookahead == '\n')
                SKIP(519)
            if(lookahead == '\r')
                SKIP(516)
            END_STATE();
        case 518:
            if(eof)
                ADVANCE(520);
            if(lookahead == '#')
                ADVANCE(152);
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == '%')
                ADVANCE(589);
            if(lookahead == '(')
                ADVANCE(47);
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == '*')
                ADVANCE(587);
            if(lookahead == '+')
                ADVANCE(583);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '-')
                ADVANCE(585);
            if(lookahead == '/')
                ADVANCE(588);
            if(lookahead == ':')
                ADVANCE(676);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '<')
                ADVANCE(77);
            if(lookahead == '>')
                ADVANCE(570);
            if(lookahead == '@')
                ADVANCE(80);
            if(lookahead == 'X')
                ADVANCE(78);
            if(lookahead == '[')
                ADVANCE(726);
            if(lookahead == '\\')
                SKIP(515)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == '^')
                ADVANCE(579);
            if(lookahead == 'a')
                ADVANCE(424);
            if(lookahead == 'b')
                ADVANCE(244);
            if(lookahead == 'c')
                ADVANCE(99);
            if(lookahead == 'd')
                ADVANCE(170);
            if(lookahead == 'e')
                ADVANCE(314);
            if(lookahead == 'g')
                ADVANCE(213);
            if(lookahead == 'i')
                ADVANCE(331);
            if(lookahead == 'l')
                ADVANCE(365);
            if(lookahead == 'm')
                ADVANCE(342);
            if(lookahead == 'n')
                ADVANCE(100);
            if(lookahead == 'o')
                ADVANCE(140);
            if(lookahead == 'r')
                ADVANCE(105);
            if(lookahead == 's')
                ADVANCE(222);
            if(lookahead == 't')
                ADVANCE(501);
            if(lookahead == 'u')
                ADVANCE(245);
            if(lookahead == 'v')
                ADVANCE(101);
            if(lookahead == '{')
                ADVANCE(670);
            if(lookahead == '|')
                ADVANCE(578);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(518)
            END_STATE();
        case 519:
            if(eof)
                ADVANCE(520);
            if(lookahead == '#')
                ADVANCE(166);
            if(lookahead == '$')
                ADVANCE(580);
            if(lookahead == '%')
                ADVANCE(589);
            if(lookahead == ')')
                ADVANCE(591);
            if(lookahead == '*')
                ADVANCE(587);
            if(lookahead == '+')
                ADVANCE(583);
            if(lookahead == ',')
                ADVANCE(573);
            if(lookahead == '-')
                ADVANCE(585);
            if(lookahead == '/')
                ADVANCE(588);
            if(lookahead == ':')
                ADVANCE(675);
            if(lookahead == ';')
                ADVANCE(677);
            if(lookahead == '<')
                ADVANCE(77);
            if(lookahead == '>')
                ADVANCE(570);
            if(lookahead == '@')
                ADVANCE(80);
            if(lookahead == '\\')
                SKIP(517)
            if(lookahead == ']')
                ADVANCE(727);
            if(lookahead == '^')
                ADVANCE(579);
            if(lookahead == 'a')
                ADVANCE(277);
            if(lookahead == 'b')
                ADVANCE(263);
            if(lookahead == 'c')
                ADVANCE(341);
            if(lookahead == 'e')
                ADVANCE(314);
            if(lookahead == 'i')
                ADVANCE(339);
            if(lookahead == 'l')
                ADVANCE(350);
            if(lookahead == 'm')
                ADVANCE(342);
            if(lookahead == 'n')
                ADVANCE(122);
            if(lookahead == 's')
                ADVANCE(448);
            if(lookahead == 't')
                ADVANCE(501);
            if(lookahead == 'u')
                ADVANCE(337);
            if(lookahead == 'v')
                ADVANCE(101);
            if(lookahead == '{')
                ADVANCE(670);
            if(lookahead == '|')
                ADVANCE(578);
            if(lookahead == '}')
                ADVANCE(671);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(519)
            END_STATE();
        case 520:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(287);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(287);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(299);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(582);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(581);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(633);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(633);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(975);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(596);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(84);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(79);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(91);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(412);
            if(lookahead == 'h')
                ADVANCE(107);
            if(lookahead == 'o')
                ADVANCE(313);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(367);
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(302);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(288);
            if(lookahead == 'o')
                ADVANCE(251);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(142);
            if(lookahead == 'i')
                ADVANCE(491);
            if(lookahead == 'l')
                ADVANCE(345);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(264);
            if(lookahead == 'e')
                ADVANCE(103);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(240);
            if(lookahead == 's')
                ADVANCE(458);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(446);
            if(lookahead == 'u')
                ADVANCE(426);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(224);
            if(lookahead == 'o')
                ADVANCE(479);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(380);
            if(lookahead == 'h')
                ADVANCE(347);
            if(lookahead == 't')
                ADVANCE(381);
            if(lookahead == 'u')
                ADVANCE(368);
            if(lookahead == 'w')
                ADVANCE(256);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(443);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(425);
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(320);
            if(lookahead == 'n')
                ADVANCE(253);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(249);
            if(lookahead == 'n')
                ADVANCE(493);
            if(lookahead == 't')
                ADVANCE(441);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(681);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(471);
            if(lookahead == 'v')
                ADVANCE(215);
            if(lookahead == 'x')
                ADVANCE(141);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(144);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(242);
            if(lookahead == 'u')
                ADVANCE(132);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(369);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(505);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(625);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(654);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(509);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(626);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(626);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(509);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(627);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(627);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(506);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(642);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(640);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(648);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(973);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(643);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(630);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(506);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(644);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(641);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(508);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(645);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(631);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(506);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(640);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(648);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(643);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(630);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(506);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(641);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(645);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(631);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(646);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(760);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(648);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(647);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(54);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(649);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(651);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(973);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(648);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(652);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(508);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(649);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(653);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(654);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(507);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(509);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(638);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(639);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(639);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(507);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(638);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(639);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(639);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(509);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(640);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(648);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(643);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(509);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(641);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(645);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(640);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(648);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(643);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(630);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(640);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(648);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(643);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(641);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(645);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(631);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(508);
            if(lookahead == '.')
                ADVANCE(650);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(641);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(645);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(645);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(634);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(653);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(635);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(654);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(509);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(626);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(626);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(509);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(627);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(627);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(638);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(649);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(639);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(639);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(636);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(653);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(637);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(654);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(654);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(67)
            if(lookahead == '\r')
                ADVANCE(663);
            if(lookahead == '/')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(666);
            if(lookahead != 0)
                ADVANCE(665);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(67)
            if(lookahead == '/')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(666);
            if(lookahead != 0)
                ADVANCE(665);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(975);
            if(lookahead == '\\')
                ADVANCE(666);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(665);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(666);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(665);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(665);
            if(lookahead == '\r')
                ADVANCE(667);
            if(lookahead == '/')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(666);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(665);
            if(lookahead == '/')
                ADVANCE(511);
            if(lookahead == '\\')
                ADVANCE(666);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(562);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(475);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(661);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(741);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(741);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(740);
            if(lookahead == '\\')
                ADVANCE(738);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(739);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(741);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(977);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(741);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(741);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(758);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(298);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(505);
            if(lookahead == '0')
                ADVANCE(628);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(630);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(768);
            if(lookahead == '3')
                ADVANCE(764);
            if(lookahead == '6')
                ADVANCE(766);
            if(lookahead == '8')
                ADVANCE(543);
            if(lookahead == 'e')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(768);
            if(lookahead == '3')
                ADVANCE(764);
            if(lookahead == '6')
                ADVANCE(766);
            if(lookahead == '8')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(769);
            if(lookahead == '3')
                ADVANCE(765);
            if(lookahead == '6')
                ADVANCE(767);
            if(lookahead == '8')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(549);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(552);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(928);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(919);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(951);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(931);
            if(lookahead == 'h')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(957);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(920);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(935);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(880);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(948);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(801);
            if(lookahead == 'i')
                ADVANCE(965);
            if(lookahead == 'l')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(849);
            if(lookahead == 's')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(939);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(905);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(916);
            if(lookahead == 'h')
                ADVANCE(903);
            if(lookahead == 't')
                ADVANCE(918);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(916);
            if(lookahead == 'h')
                ADVANCE(903);
            if(lookahead == 't')
                ADVANCE(923);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(916);
            if(lookahead == 'h')
                ADVANCE(903);
            if(lookahead == 't')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(838);
            if(lookahead == 'o')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(936);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(938);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(526);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(528);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(781);
            if(lookahead == 'o')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(903);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(965);
            if(lookahead == 'l')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(932);
            if(lookahead == 'o')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(888);
            if(lookahead == 'u')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(891);
            if(lookahead == 'n')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(891);
            if(lookahead == 'n')
                ADVANCE(929);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(904);
            if(lookahead == 's')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(968);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(940);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(961);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(779);
            if(lookahead == 's')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(966);
            if(lookahead == 't')
                ADVANCE(942);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(966);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(955);
            if(lookahead == 'v')
                ADVANCE(835);
            if(lookahead == 'x')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(955);
            if(lookahead == 'x')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(955);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(941);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(950);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(926);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(921);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(577);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(947);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(956);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(851);
            if(lookahead == 'u')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(937);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(934);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(554);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(922);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(906);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(924);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(971);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(949);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(914);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(913);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(643);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(974);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(510);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(981);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(741);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(979);
            if(lookahead == '\\')
                ADVANCE(510);
            if(lookahead != 0)
                ADVANCE(981);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(980);
            if(lookahead == '\\')
                ADVANCE(39);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(979);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(981);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(976);
            if(lookahead == '\\')
                ADVANCE(510);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(981);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(510);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(981);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(981);
            if(lookahead == '\r')
                ADVANCE(983);
            if(lookahead == '\\')
                ADVANCE(982);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(981);
            if(lookahead == '\\')
                ADVANCE(510);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 518 },
    [2] = { .lex_state = 52 },
    [3] = { .lex_state = 52 },
    [4] = { .lex_state = 52 },
    [5] = { .lex_state = 56 },
    [6] = { .lex_state = 56 },
    [7] = { .lex_state = 56 },
    [8] = { .lex_state = 56 },
    [9] = { .lex_state = 56 },
    [10] = { .lex_state = 45 },
    [11] = { .lex_state = 45 },
    [12] = { .lex_state = 57 },
    [13] = { .lex_state = 58 },
    [14] = { .lex_state = 53 },
    [15] = { .lex_state = 53 },
    [16] = { .lex_state = 53 },
    [17] = { .lex_state = 53 },
    [18] = { .lex_state = 53 },
    [19] = { .lex_state = 53 },
    [20] = { .lex_state = 53 },
    [21] = { .lex_state = 53 },
    [22] = { .lex_state = 53 },
    [23] = { .lex_state = 53 },
    [24] = { .lex_state = 53 },
    [25] = { .lex_state = 53 },
    [26] = { .lex_state = 59 },
    [27] = { .lex_state = 519 },
    [28] = { .lex_state = 518 },
    [29] = { .lex_state = 59 },
    [30] = { .lex_state = 519 },
    [31] = { .lex_state = 59 },
    [32] = { .lex_state = 519 },
    [33] = { .lex_state = 519 },
    [34] = { .lex_state = 519 },
    [35] = { .lex_state = 519 },
    [36] = { .lex_state = 519 },
    [37] = { .lex_state = 519 },
    [38] = { .lex_state = 60 },
    [39] = { .lex_state = 60 },
    [40] = { .lex_state = 53 },
    [41] = { .lex_state = 53 },
    [42] = { .lex_state = 53 },
    [43] = { .lex_state = 53 },
    [44] = { .lex_state = 53 },
    [45] = { .lex_state = 53 },
    [46] = { .lex_state = 53 },
    [47] = { .lex_state = 53 },
    [48] = { .lex_state = 52 },
    [49] = { .lex_state = 52 },
    [50] = { .lex_state = 52 },
    [51] = { .lex_state = 52 },
    [52] = { .lex_state = 52 },
    [53] = { .lex_state = 52 },
    [54] = { .lex_state = 52 },
    [55] = { .lex_state = 56 },
    [56] = { .lex_state = 56 },
    [57] = { .lex_state = 61 },
    [58] = { .lex_state = 61 },
    [59] = { .lex_state = 53 },
    [60] = { .lex_state = 57 },
    [61] = { .lex_state = 57 },
    [62] = { .lex_state = 53 },
    [63] = { .lex_state = 53 },
    [64] = { .lex_state = 53 },
    [65] = { .lex_state = 53 },
    [66] = { .lex_state = 53 },
    [67] = { .lex_state = 53 },
    [68] = { .lex_state = 53 },
    [69] = { .lex_state = 53 },
    [70] = { .lex_state = 53 },
    [71] = { .lex_state = 59 },
    [72] = { .lex_state = 59 },
    [73] = { .lex_state = 59 },
    [74] = { .lex_state = 59 },
    [75] = { .lex_state = 59 },
    [76] = { .lex_state = 62 },
    [77] = { .lex_state = 53 },
    [78] = { .lex_state = 46 },
    [79] = { .lex_state = 46 },
    [80] = { .lex_state = 46 },
    [81] = { .lex_state = 46 },
    [82] = { .lex_state = 46 },
    [83] = { .lex_state = 46 },
    [84] = { .lex_state = 46 },
    [85] = { .lex_state = 46 },
    [86] = { .lex_state = 46 },
    [87] = { .lex_state = 46 },
    [88] = { .lex_state = 46 },
    [89] = { .lex_state = 46 },
    [90] = { .lex_state = 46 },
    [91] = { .lex_state = 518 },
    [92] = { .lex_state = 518 },
    [93] = { .lex_state = 519 },
    [94] = { .lex_state = 519 },
    [95] = { .lex_state = 519 },
    [96] = { .lex_state = 46 },
    [97] = { .lex_state = 519 },
    [98] = { .lex_state = 46 },
    [99] = { .lex_state = 518 },
    [100] = { .lex_state = 518 },
    [101] = { .lex_state = 519 },
    [102] = { .lex_state = 519 },
    [103] = { .lex_state = 518 },
    [104] = { .lex_state = 519 },
    [105] = { .lex_state = 46 },
    [106] = { .lex_state = 46 },
    [107] = { .lex_state = 48 },
    [108] = { .lex_state = 48 },
    [109] = { .lex_state = 48 },
    [110] = { .lex_state = 46 },
    [111] = { .lex_state = 46 },
    [112] = { .lex_state = 518 },
    [113] = { .lex_state = 518 },
    [114] = { .lex_state = 519 },
    [115] = { .lex_state = 519 },
    [116] = { .lex_state = 519 },
    [117] = { .lex_state = 519 },
    [118] = { .lex_state = 519 },
    [119] = { .lex_state = 519 },
    [120] = { .lex_state = 519 },
    [121] = { .lex_state = 519 },
    [122] = { .lex_state = 519 },
    [123] = { .lex_state = 519 },
    [124] = { .lex_state = 519 },
    [125] = { .lex_state = 519 },
    [126] = { .lex_state = 519 },
    [127] = { .lex_state = 519 },
    [128] = { .lex_state = 46 },
    [129] = { .lex_state = 518 },
    [130] = { .lex_state = 519 },
    [131] = { .lex_state = 519 },
    [132] = { .lex_state = 519 },
    [133] = { .lex_state = 519 },
    [134] = { .lex_state = 518 },
    [135] = { .lex_state = 46 },
    [136] = { .lex_state = 49 },
    [137] = { .lex_state = 49 },
    [138] = { .lex_state = 518 },
    [139] = { .lex_state = 49 },
    [140] = { .lex_state = 49 },
    [141] = { .lex_state = 518 },
    [142] = { .lex_state = 518 },
    [143] = { .lex_state = 49 },
    [144] = { .lex_state = 49 },
    [145] = { .lex_state = 518 },
    [146] = { .lex_state = 48 },
    [147] = { .lex_state = 48 },
    [148] = { .lex_state = 518 },
    [149] = { .lex_state = 518 },
    [150] = { .lex_state = 518 },
    [151] = { .lex_state = 518 },
    [152] = { .lex_state = 518 },
    [153] = { .lex_state = 48 },
    [154] = { .lex_state = 518 },
    [155] = { .lex_state = 48 },
    [156] = { .lex_state = 518 },
    [157] = { .lex_state = 50 },
    [158] = { .lex_state = 50 },
    [159] = { .lex_state = 519 },
    [160] = { .lex_state = 518 },
    [161] = { .lex_state = 49 },
    [162] = { .lex_state = 50 },
    [163] = { .lex_state = 518 },
    [164] = { .lex_state = 518 },
    [165] = { .lex_state = 48 },
    [166] = { .lex_state = 518 },
    [167] = { .lex_state = 518 },
    [168] = { .lex_state = 518 },
    [169] = { .lex_state = 518 },
    [170] = { .lex_state = 518 },
    [171] = { .lex_state = 518 },
    [172] = { .lex_state = 48 },
    [173] = { .lex_state = 518 },
    [174] = { .lex_state = 48 },
    [175] = { .lex_state = 51 },
    [176] = { .lex_state = 51 },
    [177] = { .lex_state = 51 },
    [178] = { .lex_state = 48 },
    [179] = { .lex_state = 519 },
    [180] = { .lex_state = 48 },
    [181] = { .lex_state = 48 },
    [182] = { .lex_state = 518 },
    [183] = { .lex_state = 48 },
    [184] = { .lex_state = 518 },
    [185] = { .lex_state = 48 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 518 },
    [188] = { .lex_state = 48 },
    [189] = { .lex_state = 48 },
    [190] = { .lex_state = 518 },
    [191] = { .lex_state = 51 },
    [192] = { .lex_state = 48 },
    [193] = { .lex_state = 50 },
    [194] = { .lex_state = 518 },
    [195] = { .lex_state = 51 },
    [196] = { .lex_state = 51 },
    [197] = { .lex_state = 51 },
    [198] = { .lex_state = 48 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 518 },
    [201] = { .lex_state = 51 },
    [202] = { .lex_state = 51 },
    [203] = { .lex_state = 51 },
    [204] = { .lex_state = 51 },
    [205] = { .lex_state = 518 },
    [206] = { .lex_state = 48 },
    [207] = { .lex_state = 51 },
    [208] = { .lex_state = 518 },
    [209] = { .lex_state = 48 },
    [210] = { .lex_state = 0 },
    [211] = { .lex_state = 518 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 63 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 518 },
    [217] = { .lex_state = 518 },
    [218] = { .lex_state = 0 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 51 },
    [221] = { .lex_state = 48 },
    [222] = { .lex_state = 52 },
    [223] = { .lex_state = 518 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 518 },
    [226] = { .lex_state = 51 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 518 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 52 },
    [233] = { .lex_state = 51 },
    [234] = { .lex_state = 518 },
    [235] = { .lex_state = 52 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 48 },
    [238] = { .lex_state = 48 },
    [239] = { .lex_state = 52 },
    [240] = { .lex_state = 48 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 48 },
    [245] = { .lex_state = 518 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 51 },
    [248] = { .lex_state = 48 },
    [249] = { .lex_state = 518 },
    [250] = { .lex_state = 52 },
    [251] = { .lex_state = 52 },
    [252] = { .lex_state = 52 },
    [253] = { .lex_state = 48 },
    [254] = { .lex_state = 51 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 48 },
    [257] = { .lex_state = 52 },
    [258] = { .lex_state = 518 },
    [259] = { .lex_state = 48 },
    [260] = { .lex_state = 51 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 518 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 518 },
    [265] = { .lex_state = 48 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 519 },
    [268] = { .lex_state = 48 },
    [269] = { .lex_state = 51 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 48 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 518 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 52 },
    [278] = { .lex_state = 52 },
    [279] = { .lex_state = 51 },
    [280] = { .lex_state = 52 },
    [281] = { .lex_state = 51 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 51 },
    [284] = { .lex_state = 51 },
    [285] = { .lex_state = 48 },
    [286] = { .lex_state = 48 },
    [287] = { .lex_state = 51 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 51 },
    [290] = { .lex_state = 518 },
    [291] = { .lex_state = 52 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 518 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 48 },
    [296] = { .lex_state = 518 },
    [297] = { .lex_state = 48 },
    [298] = { .lex_state = 518 },
    [299] = { .lex_state = 48 },
    [300] = { .lex_state = 33 },
    [301] = { .lex_state = 518 },
    [302] = { .lex_state = 52 },
    [303] = { .lex_state = 518 },
    [304] = { .lex_state = 48 },
    [305] = { .lex_state = 48 },
    [306] = { .lex_state = 518 },
    [307] = { .lex_state = 52 },
    [308] = { .lex_state = 48 },
    [309] = { .lex_state = 48 },
    [310] = { .lex_state = 48 },
    [311] = { .lex_state = 48 },
    [312] = { .lex_state = 48 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 48 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 519 },
    [321] = { .lex_state = 48 },
    [322] = { .lex_state = 52 },
    [323] = { .lex_state = 52 },
    [324] = { .lex_state = 48 },
    [325] = { .lex_state = 48 },
    [326] = { .lex_state = 50 },
    [327] = { .lex_state = 48 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 48 },
    [330] = { .lex_state = 48 },
    [331] = { .lex_state = 518 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 518 },
    [334] = { .lex_state = 48 },
    [335] = { .lex_state = 48 },
    [336] = { .lex_state = 48 },
    [337] = { .lex_state = 48 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 48 },
    [340] = { .lex_state = 48 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 519 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 48 },
    [345] = { .lex_state = 48 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 52 },
    [348] = { .lex_state = 48 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 48 },
    [351] = { .lex_state = 52 },
    [352] = { .lex_state = 518 },
    [353] = { .lex_state = 518 },
    [354] = { .lex_state = 48 },
    [355] = { .lex_state = 48 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 48 },
    [358] = { .lex_state = 52 },
    [359] = { .lex_state = 48 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 52 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 48 },
    [366] = { .lex_state = 48 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 48 },
    [369] = { .lex_state = 51 },
    [370] = { .lex_state = 52 },
    [371] = { .lex_state = 518 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 48 },
    [374] = { .lex_state = 52 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 52 },
    [380] = { .lex_state = 64 },
    [381] = { .lex_state = 65 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 48 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 52 },
    [387] = { .lex_state = 48 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 48 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 48 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 52 },
    [397] = { .lex_state = 52 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 48 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 518 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 48 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 48 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 518 },
    [416] = { .lex_state = 48 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 979 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 48 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 48 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 48 },
    [438] = { .lex_state = 518 },
    [439] = { .lex_state = 518 },
    [440] = { .lex_state = 0 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 65 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 52 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 52 },
    [451] = { .lex_state = 52 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 52 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 65 },
    [457] = { .lex_state = 48 },
    [458] = { .lex_state = 0 },
    [459] = { .lex_state = 48 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 52 },
    [465] = { .lex_state = 52 },
    [466] = { .lex_state = 48 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 519 },
    [473] = { .lex_state = 52 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 48 },
    [476] = { .lex_state = 0 },
    [477] = { .lex_state = 52 },
    [478] = { .lex_state = 34 },
    [479] = { .lex_state = 0 },
    [480] = { .lex_state = 0 },
    [481] = { .lex_state = 0 },
    [482] = { .lex_state = 518 },
    [483] = { .lex_state = 0 },
    [484] = { .lex_state = 0 },
    [485] = { .lex_state = 48 },
    [486] = { .lex_state = 0 },
    [487] = { .lex_state = 64 },
    [488] = { .lex_state = 0 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 65 },
    [492] = { .lex_state = 0 },
    [493] = { .lex_state = 519 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 0 },
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 0 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 739 },
    [504] = { .lex_state = 48 },
    [505] = { .lex_state = 52 },
    [506] = { .lex_state = 518 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 48 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 48 },
    [511] = { .lex_state = 48 },
    [512] = { .lex_state = 0 },
    [513] = { .lex_state = 48 },
    [514] = { .lex_state = 48 },
    [515] = { .lex_state = 48 },
    [516] = { .lex_state = 48 },
    [517] = { .lex_state = 0 },
    [518] = { .lex_state = 48 },
    [519] = { .lex_state = 48 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 48 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 48 },
    [524] = { .lex_state = 48 },
    [525] = { .lex_state = 48 },
    [526] = { .lex_state = 48 },
    [527] = { .lex_state = 0 },
    [528] = { (TSStateId)(-1) },
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
        [anon_sym_COLON_COLON] = ACTIONS(1),
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
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(498),
        [sym_preproc_call] = STATE(100),
        [sym_except_dcl] = STATE(497),
        [sym_interface_dcl] = STATE(497),
        [sym_interface_forward_dcl] = STATE(494),
        [sym_interface_def] = STATE(494),
        [sym_interface_header] = STATE(492),
        [sym_interface_anno] = STATE(154),
        [sym_bitset_dcl] = STATE(497),
        [sym_bitmask_dcl] = STATE(497),
        [sym_annotation_dcl] = STATE(497),
        [sym_template_module_dcl] = STATE(497),
        [sym_template_module_inst] = STATE(497),
        [sym_value_dcl] = STATE(497),
        [sym_value_def] = STATE(488),
        [sym_value_header] = STATE(484),
        [sym_value_forward_dcl] = STATE(488),
        [sym_typedef_dcl] = STATE(497),
        [sym_enum_dcl] = STATE(497),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(497),
        [sym_union_def] = STATE(497),
        [sym__definition] = STATE(97),
        [sym_native_dcl] = STATE(497),
        [sym_module_dcl] = STATE(497),
        [sym_struct_forward_dcl] = STATE(497),
        [sym_struct_def] = STATE(497),
        [sym_predefine] = STATE(94),
        [sym_dds_request_topic] = STATE(170),
        [sym_dds_reply_topic] = STATE(170),
        [sym_const_dcl] = STATE(497),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(28),
        [aux_sym_specification_repeat2] = STATE(36),
        [aux_sym_interface_def_repeat1] = STATE(134),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_module] = ACTIONS(21),
        [anon_sym_valuetype] = ACTIONS(23),
        [anon_sym_struct] = ACTIONS(25),
        [anon_sym_union] = ACTIONS(27),
        [anon_sym_enum] = ACTIONS(29),
        [anon_sym_const] = ACTIONS(31),
        [anon_sym_typedef] = ACTIONS(33),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(37),
        [anon_sym_POUNDdefine] = ACTIONS(39),
        [sym_dds_service] = ACTIONS(41),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(43),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(45),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [2] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(527),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(527),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(527),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(527),
        [sym_bitmask_dcl] = STATE(527),
        [sym_value_element] = STATE(52),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(527),
        [sym_enum_dcl] = STATE(527),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(527),
        [sym_union_def] = STATE(527),
        [sym_native_dcl] = STATE(527),
        [sym_struct_forward_dcl] = STATE(527),
        [sym_struct_def] = STATE(527),
        [sym_const_dcl] = STATE(527),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(2),
        [aux_sym_value_def_repeat1] = STATE(3),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(95),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_factory] = ACTIONS(117),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(527),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(527),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(527),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(527),
        [sym_bitmask_dcl] = STATE(527),
        [sym_value_element] = STATE(52),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(527),
        [sym_enum_dcl] = STATE(527),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(527),
        [sym_union_def] = STATE(527),
        [sym_native_dcl] = STATE(527),
        [sym_struct_forward_dcl] = STATE(527),
        [sym_struct_def] = STATE(527),
        [sym_const_dcl] = STATE(527),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(3),
        [aux_sym_value_def_repeat1] = STATE(3),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(125),
        [anon_sym_int16] = ACTIONS(125),
        [anon_sym_long] = ACTIONS(128),
        [anon_sym_int32] = ACTIONS(128),
        [anon_sym_longlong] = ACTIONS(131),
        [anon_sym_int64] = ACTIONS(134),
        [sym_unsigned_tiny_int] = ACTIONS(137),
        [sym_boolean_type] = ACTIONS(140),
        [anon_sym_fixed] = ACTIONS(143),
        [sym_octet_type] = ACTIONS(140),
        [sym_signed_tiny_int] = ACTIONS(146),
        [anon_sym_unsignedshort] = ACTIONS(149),
        [anon_sym_uint16] = ACTIONS(152),
        [anon_sym_unsignedlong] = ACTIONS(155),
        [anon_sym_uint32] = ACTIONS(155),
        [anon_sym_unsignedlonglong] = ACTIONS(158),
        [anon_sym_uint64] = ACTIONS(161),
        [anon_sym_float] = ACTIONS(164),
        [anon_sym_double] = ACTIONS(164),
        [anon_sym_longdouble] = ACTIONS(167),
        [anon_sym_char] = ACTIONS(170),
        [anon_sym_wchar] = ACTIONS(170),
        [anon_sym_COLON_COLON] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(176),
        [anon_sym_wstring] = ACTIONS(176),
        [anon_sym_any] = ACTIONS(179),
        [anon_sym_sequence] = ACTIONS(182),
        [anon_sym_map] = ACTIONS(185),
        [anon_sym_exception] = ACTIONS(188),
        [anon_sym_RBRACE] = ACTIONS(191),
        [anon_sym_void] = ACTIONS(193),
        [anon_sym_readonly] = ACTIONS(196),
        [anon_sym_attribute] = ACTIONS(199),
        [anon_sym_bitset] = ACTIONS(202),
        [anon_sym_bitmask] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(208),
        [anon_sym_union] = ACTIONS(211),
        [anon_sym_enum] = ACTIONS(214),
        [anon_sym_const] = ACTIONS(217),
        [anon_sym_public] = ACTIONS(220),
        [anon_sym_private] = ACTIONS(220),
        [anon_sym_factory] = ACTIONS(223),
        [anon_sym_typedef] = ACTIONS(226),
        [anon_sym_ATignore_literal_names] = ACTIONS(229),
        [anon_sym_native] = ACTIONS(232),
        [sym_final] = ACTIONS(235),
        [anon_sym_ATdata_representation] = ACTIONS(238),
        [sym_identifier] = ACTIONS(241),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(527),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(527),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(527),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(527),
        [sym_bitmask_dcl] = STATE(527),
        [sym_value_element] = STATE(52),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(527),
        [sym_enum_dcl] = STATE(527),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(527),
        [sym_union_def] = STATE(527),
        [sym_native_dcl] = STATE(527),
        [sym_struct_forward_dcl] = STATE(527),
        [sym_struct_def] = STATE(527),
        [sym_const_dcl] = STATE(527),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(4),
        [aux_sym_value_def_repeat1] = STATE(2),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(244),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_factory] = ACTIONS(117),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(414),
        [sym_interface_body] = STATE(372),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(414),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(414),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(414),
        [sym_bitmask_dcl] = STATE(414),
        [sym_typedef_dcl] = STATE(414),
        [sym_enum_dcl] = STATE(414),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(414),
        [sym_union_def] = STATE(414),
        [sym_native_dcl] = STATE(414),
        [sym_struct_forward_dcl] = STATE(414),
        [sym_struct_def] = STATE(414),
        [sym_const_dcl] = STATE(414),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(246),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(414),
        [sym_interface_body] = STATE(399),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(414),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(414),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(414),
        [sym_bitmask_dcl] = STATE(414),
        [sym_typedef_dcl] = STATE(414),
        [sym_enum_dcl] = STATE(414),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(414),
        [sym_union_def] = STATE(414),
        [sym_native_dcl] = STATE(414),
        [sym_struct_forward_dcl] = STATE(414),
        [sym_struct_def] = STATE(414),
        [sym_const_dcl] = STATE(414),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(248),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(414),
        [sym_interface_body] = STATE(375),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(414),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(414),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(414),
        [sym_bitmask_dcl] = STATE(414),
        [sym_typedef_dcl] = STATE(414),
        [sym_enum_dcl] = STATE(414),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(414),
        [sym_union_def] = STATE(414),
        [sym_native_dcl] = STATE(414),
        [sym_struct_forward_dcl] = STATE(414),
        [sym_struct_def] = STATE(414),
        [sym_const_dcl] = STATE(414),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(7),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(250),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(414),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(414),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(414),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(414),
        [sym_bitmask_dcl] = STATE(414),
        [sym_typedef_dcl] = STATE(414),
        [sym_enum_dcl] = STATE(414),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(414),
        [sym_union_def] = STATE(414),
        [sym_native_dcl] = STATE(414),
        [sym_struct_forward_dcl] = STATE(414),
        [sym_struct_def] = STATE(414),
        [sym_const_dcl] = STATE(414),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(8),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(252),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_const] = ACTIONS(113),
        [anon_sym_typedef] = ACTIONS(119),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_native] = ACTIONS(121),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(416),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_except_dcl] = STATE(414),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(414),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(414),
        [sym_readonly_attr_spec] = STATE(410),
        [sym_attr_spec] = STATE(410),
        [sym_bitset_dcl] = STATE(414),
        [sym_bitmask_dcl] = STATE(414),
        [sym_typedef_dcl] = STATE(414),
        [sym_enum_dcl] = STATE(414),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(414),
        [sym_union_def] = STATE(414),
        [sym_native_dcl] = STATE(414),
        [sym_struct_forward_dcl] = STATE(414),
        [sym_struct_def] = STATE(414),
        [sym_const_dcl] = STATE(414),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(9),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(254),
        [anon_sym_int16] = ACTIONS(254),
        [anon_sym_long] = ACTIONS(257),
        [anon_sym_int32] = ACTIONS(257),
        [anon_sym_longlong] = ACTIONS(260),
        [anon_sym_int64] = ACTIONS(263),
        [sym_unsigned_tiny_int] = ACTIONS(266),
        [sym_boolean_type] = ACTIONS(269),
        [anon_sym_fixed] = ACTIONS(272),
        [sym_octet_type] = ACTIONS(269),
        [sym_signed_tiny_int] = ACTIONS(275),
        [anon_sym_unsignedshort] = ACTIONS(278),
        [anon_sym_uint16] = ACTIONS(281),
        [anon_sym_unsignedlong] = ACTIONS(284),
        [anon_sym_uint32] = ACTIONS(284),
        [anon_sym_unsignedlonglong] = ACTIONS(287),
        [anon_sym_uint64] = ACTIONS(290),
        [anon_sym_float] = ACTIONS(293),
        [anon_sym_double] = ACTIONS(293),
        [anon_sym_longdouble] = ACTIONS(296),
        [anon_sym_char] = ACTIONS(299),
        [anon_sym_wchar] = ACTIONS(299),
        [anon_sym_COLON_COLON] = ACTIONS(302),
        [anon_sym_string] = ACTIONS(305),
        [anon_sym_wstring] = ACTIONS(305),
        [anon_sym_any] = ACTIONS(308),
        [anon_sym_sequence] = ACTIONS(311),
        [anon_sym_map] = ACTIONS(314),
        [anon_sym_exception] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(320),
        [anon_sym_void] = ACTIONS(322),
        [anon_sym_readonly] = ACTIONS(325),
        [anon_sym_attribute] = ACTIONS(328),
        [anon_sym_bitset] = ACTIONS(331),
        [anon_sym_bitmask] = ACTIONS(334),
        [anon_sym_struct] = ACTIONS(337),
        [anon_sym_union] = ACTIONS(340),
        [anon_sym_enum] = ACTIONS(343),
        [anon_sym_const] = ACTIONS(346),
        [anon_sym_typedef] = ACTIONS(349),
        [anon_sym_ATignore_literal_names] = ACTIONS(352),
        [anon_sym_native] = ACTIONS(355),
        [sym_final] = ACTIONS(358),
        [anon_sym_ATdata_representation] = ACTIONS(361),
        [sym_identifier] = ACTIONS(364),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(129),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(358),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_const_expr] = STATE(358),
        [sym_or_expr] = STATE(144),
        [sym_xor_expr] = STATE(139),
        [sym_and_expr] = STATE(137),
        [sym_shift_expr] = STATE(133),
        [sym_add_expr] = STATE(131),
        [sym_mult_expr] = STATE(117),
        [sym_unary_expr] = STATE(118),
        [sym_unary_operator] = STATE(128),
        [sym_literal] = STATE(120),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameters] = STATE(379),
        [sym_actual_parameter] = STATE(222),
        [sym_comment] = STATE(10),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_PLUS] = ACTIONS(367),
        [anon_sym_DASH] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_TILDE] = ACTIONS(371),
        [anon_sym_L] = ACTIONS(373),
        [anon_sym_DQUOTE] = ACTIONS(375),
        [anon_sym_SQUOTE] = ACTIONS(377),
        [anon_sym_TRUE] = ACTIONS(379),
        [anon_sym_FALSE] = ACTIONS(379),
        [sym_number_literal] = ACTIONS(381),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(129),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(358),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_const_expr] = STATE(358),
        [sym_or_expr] = STATE(144),
        [sym_xor_expr] = STATE(139),
        [sym_and_expr] = STATE(137),
        [sym_shift_expr] = STATE(133),
        [sym_add_expr] = STATE(131),
        [sym_mult_expr] = STATE(117),
        [sym_unary_expr] = STATE(118),
        [sym_unary_operator] = STATE(128),
        [sym_literal] = STATE(120),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameter] = STATE(347),
        [sym_comment] = STATE(11),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_PLUS] = ACTIONS(367),
        [anon_sym_DASH] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_TILDE] = ACTIONS(371),
        [anon_sym_L] = ACTIONS(373),
        [anon_sym_DQUOTE] = ACTIONS(375),
        [anon_sym_SQUOTE] = ACTIONS(377),
        [anon_sym_TRUE] = ACTIONS(379),
        [anon_sym_FALSE] = ACTIONS(379),
        [sym_number_literal] = ACTIONS(381),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(192),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_bitset_dcl] = STATE(192),
        [sym_bitmask_dcl] = STATE(192),
        [sym_enum_dcl] = STATE(192),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(192),
        [sym_union_def] = STATE(192),
        [sym_element_spec] = STATE(495),
        [sym_struct_forward_dcl] = STATE(192),
        [sym_struct_def] = STATE(192),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(12),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(383),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_default] = ACTIONS(385),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [anon_sym_case] = ACTIONS(385),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_simple_type_spec] = STATE(155),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(155),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_bitset_dcl] = STATE(155),
        [sym_bitmask_dcl] = STATE(155),
        [sym_type_declarator] = STATE(444),
        [sym_enum_dcl] = STATE(155),
        [sym_enum_anno] = STATE(482),
        [sym_union_forward_dcl] = STATE(155),
        [sym_union_def] = STATE(155),
        [sym_struct_forward_dcl] = STATE(155),
        [sym_struct_def] = STATE(155),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(13),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_union] = ACTIONS(109),
        [anon_sym_enum] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(35),
        [sym_final] = ACTIONS(47),
        [anon_sym_ATdata_representation] = ACTIONS(49),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [14] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(14),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(387),
        [anon_sym_int16] = ACTIONS(387),
        [anon_sym_long] = ACTIONS(390),
        [anon_sym_int32] = ACTIONS(390),
        [anon_sym_longlong] = ACTIONS(393),
        [anon_sym_int64] = ACTIONS(396),
        [sym_unsigned_tiny_int] = ACTIONS(399),
        [sym_boolean_type] = ACTIONS(402),
        [anon_sym_fixed] = ACTIONS(405),
        [sym_octet_type] = ACTIONS(402),
        [sym_signed_tiny_int] = ACTIONS(408),
        [anon_sym_unsignedshort] = ACTIONS(411),
        [anon_sym_uint16] = ACTIONS(414),
        [anon_sym_unsignedlong] = ACTIONS(417),
        [anon_sym_uint32] = ACTIONS(417),
        [anon_sym_unsignedlonglong] = ACTIONS(420),
        [anon_sym_uint64] = ACTIONS(423),
        [anon_sym_float] = ACTIONS(426),
        [anon_sym_double] = ACTIONS(426),
        [anon_sym_longdouble] = ACTIONS(429),
        [anon_sym_char] = ACTIONS(432),
        [anon_sym_wchar] = ACTIONS(432),
        [anon_sym_COLON_COLON] = ACTIONS(435),
        [anon_sym_string] = ACTIONS(438),
        [anon_sym_wstring] = ACTIONS(438),
        [anon_sym_any] = ACTIONS(441),
        [anon_sym_sequence] = ACTIONS(444),
        [anon_sym_map] = ACTIONS(447),
        [anon_sym_RBRACE] = ACTIONS(450),
        [sym_optional] = ACTIONS(452),
        [sym_key] = ACTIONS(452),
        [sym_must_understand] = ACTIONS(452),
        [sym_non_serialized] = ACTIONS(452),
        [sym_id] = ACTIONS(452),
        [sym_external] = ACTIONS(452),
        [anon_sym_AThashid] = ACTIONS(455),
        [anon_sym_ATtry_construct] = ACTIONS(458),
        [sym_identifier] = ACTIONS(461),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [15] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(15),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(464),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [16] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(16),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(472),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [17] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(17),
        [aux_sym_except_dcl_repeat1] = STATE(24),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(474),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [18] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(18),
        [aux_sym_except_dcl_repeat1] = STATE(22),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(476),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [19] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(19),
        [aux_sym_except_dcl_repeat1] = STATE(16),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(478),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [20] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(20),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(480),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [21] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(21),
        [aux_sym_except_dcl_repeat1] = STATE(23),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(482),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [22] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(22),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(484),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [23] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(23),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(486),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [24] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(177),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(177),
        [sym_unsigned_short_int] = STATE(204),
        [sym_unsigned_long_int] = STATE(204),
        [sym_unsigned_longlong_int] = STATE(204),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(285),
        [sym_string_type] = STATE(284),
        [sym_type_spec] = STATE(153),
        [sym_simple_type_spec] = STATE(220),
        [sym_base_type_spec] = STATE(283),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(284),
        [sym_template_type_spec] = STATE(220),
        [sym_sequence_type] = STATE(284),
        [sym_map_type] = STATE(284),
        [sym_member] = STATE(64),
        [sym_hashid] = STATE(70),
        [sym_try_construct] = STATE(70),
        [sym_struct_modifier] = STATE(69),
        [sym_comment] = STATE(24),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(25),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(476),
        [sym_optional] = ACTIONS(466),
        [sym_key] = ACTIONS(466),
        [sym_must_understand] = ACTIONS(466),
        [sym_non_serialized] = ACTIONS(466),
        [sym_id] = ACTIONS(466),
        [sym_external] = ACTIONS(466),
        [anon_sym_AThashid] = ACTIONS(468),
        [anon_sym_ATtry_construct] = ACTIONS(470),
        [sym_identifier] = ACTIONS(123),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(468),
    1,
    anon_sym_AThashid,
    ACTIONS(470),
    1,
    anon_sym_ATtry_construct,
    STATE(25),
    1,
    sym_comment,
    STATE(59),
    1,
    aux_sym_member_repeat1,
    STATE(69),
    1,
    sym_struct_modifier,
    STATE(174),
    1,
    sym_type_spec,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(70),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(466),
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
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(111),
    1,
    anon_sym_enum,
    ACTIONS(113),
    1,
    anon_sym_const,
    ACTIONS(119),
    1,
    anon_sym_typedef,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(490),
    1,
    anon_sym_fixed,
    ACTIONS(492),
    1,
    anon_sym_any,
    ACTIONS(494),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(29),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(71),
    1,
    sym_annotation_body,
    STATE(74),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(337),
    1,
    sym_scoped_name,
    STATE(482),
    1,
    sym_enum_anno,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(488),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(389),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(388),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(459),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [284] = 41,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(496),
    1,
    anon_sym_RBRACE,
    ACTIONS(498),
    1,
    anon_sym_alias,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    STATE(27),
    1,
    sym_comment,
    STATE(30),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(94),
    1,
    sym_predefine,
    STATE(101),
    1,
    sym_tpl_definition,
    STATE(102),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_template_module_ref,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [427] = 41,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(39),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(502),
    1,
    ts_builtin_sym_end,
    STATE(28),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_specification_repeat2,
    STATE(92),
    1,
    aux_sym_specification_repeat1,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(100),
    1,
    sym_preproc_call,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [570] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(510),
    1,
    anon_sym_longlong,
    ACTIONS(513),
    1,
    anon_sym_int64,
    ACTIONS(516),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(522),
    1,
    anon_sym_fixed,
    ACTIONS(525),
    1,
    sym_signed_tiny_int,
    ACTIONS(528),
    1,
    anon_sym_unsignedshort,
    ACTIONS(531),
    1,
    anon_sym_uint16,
    ACTIONS(537),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(540),
    1,
    anon_sym_uint64,
    ACTIONS(546),
    1,
    anon_sym_longdouble,
    ACTIONS(552),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(558),
    1,
    anon_sym_any,
    ACTIONS(561),
    1,
    anon_sym_sequence,
    ACTIONS(564),
    1,
    anon_sym_RBRACE,
    ACTIONS(566),
    1,
    anon_sym_enum,
    ACTIONS(569),
    1,
    anon_sym_const,
    ACTIONS(572),
    1,
    anon_sym_typedef,
    ACTIONS(575),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_annotation_body,
    STATE(74),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(337),
    1,
    sym_scoped_name,
    STATE(482),
    1,
    sym_enum_anno,
    ACTIONS(504),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(507),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(519),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(534),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(543),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(549),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(555),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(29),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(389),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(388),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(459),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [709] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(581),
    1,
    anon_sym_exception,
    ACTIONS(584),
    1,
    anon_sym_RBRACE,
    ACTIONS(586),
    1,
    anon_sym_interface,
    ACTIONS(589),
    1,
    anon_sym_local,
    ACTIONS(592),
    1,
    anon_sym_bitset,
    ACTIONS(595),
    1,
    anon_sym_bitmask,
    ACTIONS(598),
    1,
    anon_sym_ATannotation,
    ACTIONS(601),
    1,
    anon_sym_module,
    ACTIONS(604),
    1,
    anon_sym_valuetype,
    ACTIONS(607),
    1,
    anon_sym_struct,
    ACTIONS(610),
    1,
    anon_sym_union,
    ACTIONS(613),
    1,
    anon_sym_enum,
    ACTIONS(616),
    1,
    anon_sym_const,
    ACTIONS(619),
    1,
    anon_sym_alias,
    ACTIONS(622),
    1,
    anon_sym_typedef,
    ACTIONS(625),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(628),
    1,
    anon_sym_native,
    ACTIONS(631),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(634),
    1,
    sym_dds_service,
    ACTIONS(637),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(640),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(643),
    1,
    sym_final,
    ACTIONS(646),
    1,
    anon_sym_ATdata_representation,
    STATE(94),
    1,
    sym_predefine,
    STATE(101),
    1,
    sym_tpl_definition,
    STATE(102),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_template_module_ref,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(30),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [850] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(111),
    1,
    anon_sym_enum,
    ACTIONS(113),
    1,
    anon_sym_const,
    ACTIONS(119),
    1,
    anon_sym_typedef,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(490),
    1,
    anon_sym_fixed,
    ACTIONS(492),
    1,
    anon_sym_any,
    ACTIONS(649),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(31),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_annotation_body,
    STATE(74),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(337),
    1,
    sym_scoped_name,
    STATE(482),
    1,
    sym_enum_anno,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(488),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(389),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(388),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(459),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [991] = 41,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(498),
    1,
    anon_sym_alias,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(651),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(32),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_predefine,
    STATE(101),
    1,
    sym_tpl_definition,
    STATE(102),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(429),
    1,
    sym_template_module_ref,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1134] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(655),
    1,
    anon_sym_exception,
    ACTIONS(658),
    1,
    anon_sym_interface,
    ACTIONS(661),
    1,
    anon_sym_local,
    ACTIONS(664),
    1,
    anon_sym_bitset,
    ACTIONS(667),
    1,
    anon_sym_bitmask,
    ACTIONS(670),
    1,
    anon_sym_ATannotation,
    ACTIONS(673),
    1,
    anon_sym_module,
    ACTIONS(676),
    1,
    anon_sym_valuetype,
    ACTIONS(679),
    1,
    anon_sym_struct,
    ACTIONS(682),
    1,
    anon_sym_union,
    ACTIONS(685),
    1,
    anon_sym_enum,
    ACTIONS(688),
    1,
    anon_sym_const,
    ACTIONS(691),
    1,
    anon_sym_typedef,
    ACTIONS(694),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(697),
    1,
    anon_sym_native,
    ACTIONS(700),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(703),
    1,
    sym_dds_service,
    ACTIONS(706),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(709),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(712),
    1,
    sym_final,
    ACTIONS(715),
    1,
    anon_sym_ATdata_representation,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    ACTIONS(653),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(33),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1267] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(718),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1401] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(720),
    1,
    ts_builtin_sym_end,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(35),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1535] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(502),
    1,
    ts_builtin_sym_end,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(36),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1669] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_valuetype,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_union,
    ACTIONS(29),
    1,
    anon_sym_enum,
    ACTIONS(31),
    1,
    anon_sym_const,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(37),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(500),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(722),
    1,
    anon_sym_RBRACE,
    STATE(34),
    1,
    aux_sym_specification_repeat2,
    STATE(37),
    1,
    sym_comment,
    STATE(94),
    1,
    sym_predefine,
    STATE(97),
    1,
    sym__definition,
    STATE(134),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(482),
    1,
    sym_enum_anno,
    STATE(484),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(488),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(494),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1803] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(724),
    1,
    anon_sym_sequence,
    ACTIONS(728),
    1,
    anon_sym_const,
    STATE(38),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_formal_parameter,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(383),
    1,
    sym_formal_parameter_type,
    STATE(386),
    1,
    sym_formal_parameters,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(387),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(726),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [1925] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(724),
    1,
    anon_sym_sequence,
    ACTIONS(728),
    1,
    anon_sym_const,
    STATE(39),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(362),
    1,
    sym_formal_parameter,
    STATE(383),
    1,
    sym_formal_parameter_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(387),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(726),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2044] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(730),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(732),
    1,
    anon_sym_GT,
    ACTIONS(734),
    1,
    anon_sym_COMMA,
    ACTIONS(736),
    1,
    sym_identifier,
    STATE(40),
    1,
    sym_comment,
    STATE(252),
    1,
    sym_scoped_name,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(451),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2169] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(730),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(736),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(252),
    1,
    sym_scoped_name,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(370),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2288] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(329),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2407] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(436),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2526] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(44),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_type_spec,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2645] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(45),
    1,
    sym_comment,
    STATE(248),
    1,
    sym_type_spec,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2764] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(46),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(327),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2883] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(123),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(165),
    1,
    sym_type_spec,
    STATE(283),
    1,
    sym_base_type_spec,
    STATE(285),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(61),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(220),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(284),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3002] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(740),
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
    ACTIONS(738),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3061] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(744),
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
    ACTIONS(742),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3120] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(748),
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
    ACTIONS(746),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(752),
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
    ACTIONS(750),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3238] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(756),
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
    ACTIONS(754),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(760),
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
    ACTIONS(758),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3356] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(764),
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
    ACTIONS(762),
    39,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(768),
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
    ACTIONS(766),
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3471] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(744),
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
    ACTIONS(742),
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3527] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(490),
    1,
    anon_sym_fixed,
    STATE(57),
    1,
    sym_comment,
    STATE(330),
    1,
    sym_scoped_name,
    STATE(518),
    1,
    sym_const_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(488),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(459),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3629] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(490),
    1,
    anon_sym_fixed,
    STATE(58),
    1,
    sym_comment,
    STATE(330),
    1,
    sym_scoped_name,
    STATE(373),
    1,
    sym_const_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(488),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(459),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3731] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(777),
    1,
    anon_sym_AThashid,
    ACTIONS(780),
    1,
    anon_sym_ATtry_construct,
    STATE(69),
    1,
    sym_struct_modifier,
    STATE(59),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(70),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(772),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(774),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(770),
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
    [3793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(785),
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
    ACTIONS(783),
    31,
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
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_case,
    sym_identifier,
    [3844] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(789),
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
    ACTIONS(787),
    31,
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
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_case,
    sym_identifier,
    [3895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(793),
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
    ACTIONS(791),
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
    [3944] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(797),
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
    ACTIONS(795),
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
    [3993] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(801),
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
    ACTIONS(799),
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
    [4042] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(805),
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
    ACTIONS(803),
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
    [4091] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(809),
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
    ACTIONS(807),
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
    [4140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(813),
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
    ACTIONS(811),
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
    [4188] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(817),
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
    ACTIONS(815),
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
    [4236] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(821),
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
    ACTIONS(819),
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
    [4284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(825),
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
    ACTIONS(823),
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
    [4332] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(829),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(827),
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
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4376] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(833),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(831),
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
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4420] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(837),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(835),
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
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4464] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(841),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(839),
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
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4508] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(845),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(843),
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
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4552] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(847),
    1,
    sym_boolean_type,
    STATE(76),
    1,
    sym_comment,
    STATE(313),
    1,
    sym_scoped_name,
    STATE(489),
    1,
    sym_switch_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(490),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [4632] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(851),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(849),
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
    [4672] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(78),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(460),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4752] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(473),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4832] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(80),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(477),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4912] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(81),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(396),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4992] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(82),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(435),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5072] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(83),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(374),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5152] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(84),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(232),
    1,
    sym_const_expr,
    STATE(351),
    1,
    sym_positive_int_const,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5232] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(418),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5309] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(86),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(467),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5386] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(87),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(493),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5463] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(88),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(496),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5540] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(89),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(391),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5617] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(90),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(139),
    1,
    sym_xor_expr,
    STATE(144),
    1,
    sym_or_expr,
    STATE(425),
    1,
    sym_const_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5694] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_long,
    ACTIONS(71),
    1,
    anon_sym_unsignedlong,
    ACTIONS(855),
    1,
    anon_sym_int32,
    ACTIONS(857),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(861),
    1,
    sym_signed_tiny_int,
    ACTIONS(863),
    1,
    anon_sym_uint32,
    STATE(91),
    1,
    sym_comment,
    STATE(464),
    1,
    sym_integer_type,
    STATE(465),
    1,
    sym_destination_type,
    ACTIONS(55),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(67),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(73),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(853),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(859),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(177),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(204),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [5759] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    sym_preproc_directive,
    ACTIONS(870),
    1,
    anon_sym_POUNDdefine,
    STATE(100),
    1,
    sym_preproc_call,
    STATE(92),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(865),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5799] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(872),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5832] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(874),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5865] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(876),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5898] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(96),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(137),
    1,
    sym_and_expr,
    STATE(140),
    1,
    sym_xor_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5969] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(878),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6001] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(98),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(133),
    1,
    sym_shift_expr,
    STATE(136),
    1,
    sym_and_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6069] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(882),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(880),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6103] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(886),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(884),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(888),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6169] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(890),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6201] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(894),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(892),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(896),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [6267] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(105),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(131),
    1,
    sym_add_expr,
    STATE(132),
    1,
    sym_shift_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6332] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(106),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(117),
    1,
    sym_mult_expr,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_unary_operator,
    STATE(130),
    1,
    sym_add_expr,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6394] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(900),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(898),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6425] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(904),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(902),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(908),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(906),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6487] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(110),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(118),
    1,
    sym_unary_expr,
    STATE(120),
    1,
    sym_literal,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_unary_operator,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6546] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_LPAREN,
    ACTIONS(371),
    1,
    anon_sym_TILDE,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    STATE(111),
    1,
    sym_comment,
    STATE(113),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_unary_expr,
    STATE(128),
    1,
    sym_unary_operator,
    ACTIONS(367),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6602] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(912),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(914),
    13,
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
    anon_sym_RBRACK,
    [6632] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(916),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(918),
    13,
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
    anon_sym_RBRACK,
    [6662] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(922),
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
    [6689] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(924),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(926),
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
    [6716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(928),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(930),
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
    [6743] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(932),
    1,
    anon_sym_GT,
    ACTIONS(938),
    1,
    anon_sym_SLASH,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(936),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(934),
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
    [6774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(940),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(942),
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
    [6801] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(946),
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
    [6828] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(918),
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
    [6855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(948),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(950),
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
    [6882] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(938),
    1,
    anon_sym_SLASH,
    ACTIONS(952),
    1,
    anon_sym_GT,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(936),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(954),
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
    [6913] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(956),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(958),
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
    [6940] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(960),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(962),
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
    [6967] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(964),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(966),
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
    [6994] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(912),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(914),
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
    [7021] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(968),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(970),
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
    [7048] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    1,
    sym_identifier,
    ACTIONS(373),
    1,
    anon_sym_L,
    ACTIONS(375),
    1,
    anon_sym_DQUOTE,
    ACTIONS(377),
    1,
    anon_sym_SQUOTE,
    ACTIONS(381),
    1,
    sym_number_literal,
    ACTIONS(972),
    1,
    anon_sym_LPAREN,
    STATE(112),
    1,
    sym_scoped_name,
    STATE(126),
    1,
    sym_literal,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(379),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7091] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(916),
    1,
    anon_sym_SLASH,
    ACTIONS(974),
    1,
    anon_sym_GT,
    ACTIONS(976),
    1,
    anon_sym_COMMA,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(918),
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
    [7121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(978),
    1,
    anon_sym_GT,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(980),
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
    [7147] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_GT,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(986),
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
    [7173] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    anon_sym_GT,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(992),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(990),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7197] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(994),
    1,
    anon_sym_GT,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(992),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(996),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7221] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(41),
    1,
    sym_dds_service,
    ACTIONS(43),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(45),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(998),
    1,
    anon_sym_interface,
    ACTIONS(1000),
    1,
    anon_sym_local,
    STATE(134),
    1,
    sym_comment,
    STATE(138),
    1,
    aux_sym_interface_def_repeat1,
    STATE(154),
    1,
    sym_interface_anno,
    STATE(474),
    1,
    sym_interface_header,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(1002),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1004),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7276] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_DOLLAR,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(1006),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7296] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_DOLLAR,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(1010),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7316] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    sym_dds_service,
    ACTIONS(1017),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(1020),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(154),
    1,
    sym_interface_anno,
    ACTIONS(1012),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(138),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(170),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1025),
    1,
    anon_sym_CARET,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(1023),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7363] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1025),
    1,
    anon_sym_CARET,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1027),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7382] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_COMMA,
    ACTIONS(1031),
    1,
    anon_sym_SEMI,
    ACTIONS(1033),
    1,
    anon_sym_getraises,
    ACTIONS(1035),
    1,
    anon_sym_setraises,
    STATE(141),
    1,
    sym_comment,
    STATE(210),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(216),
    1,
    sym_get_excep_expr,
    STATE(401),
    1,
    sym_attr_raises_expr,
    STATE(403),
    1,
    sym_set_excep_expr,
    [7413] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(1037),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [7429] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1039),
    1,
    anon_sym_RPAREN,
    ACTIONS(1041),
    1,
    anon_sym_in,
    STATE(42),
    1,
    sym_param_attribute,
    STATE(143),
    1,
    sym_comment,
    STATE(212),
    1,
    sym_param_dcl,
    STATE(405),
    1,
    sym_parameter_dcls,
    ACTIONS(1043),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7455] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_PIPE,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(1045),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7473] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_LBRACK,
    STATE(145),
    1,
    sym_comment,
    STATE(149),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(190),
    1,
    sym_fixed_array_size,
    ACTIONS(1037),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7494] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    anon_sym_RBRACE,
    ACTIONS(1053),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1055),
    1,
    sym_identifier,
    STATE(146),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_enumerator_repeat1,
    STATE(230),
    1,
    sym_enumerator,
    STATE(340),
    1,
    sym_enum_modifier,
    [7519] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1055),
    1,
    sym_identifier,
    ACTIONS(1057),
    1,
    anon_sym_RBRACE,
    STATE(147),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_enumerator_repeat1,
    STATE(231),
    1,
    sym_enumerator,
    STATE(340),
    1,
    sym_enum_modifier,
    [7544] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1061),
    1,
    anon_sym_LBRACK,
    STATE(190),
    1,
    sym_fixed_array_size,
    STATE(148),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1059),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7563] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_LBRACK,
    STATE(148),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(149),
    1,
    sym_comment,
    STATE(190),
    1,
    sym_fixed_array_size,
    ACTIONS(1064),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7584] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_RBRACE,
    ACTIONS(1068),
    1,
    anon_sym_default,
    ACTIONS(1070),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(150),
    1,
    sym_comment,
    STATE(152),
    1,
    aux_sym_union_def_repeat1,
    STATE(293),
    1,
    sym_case,
    [7609] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_RBRACE,
    ACTIONS(1074),
    1,
    anon_sym_default,
    ACTIONS(1077),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(293),
    1,
    sym_case,
    STATE(151),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7632] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1068),
    1,
    anon_sym_default,
    ACTIONS(1070),
    1,
    anon_sym_case,
    ACTIONS(1080),
    1,
    anon_sym_RBRACE,
    STATE(12),
    1,
    sym_case_label,
    STATE(151),
    1,
    aux_sym_union_def_repeat1,
    STATE(152),
    1,
    sym_comment,
    STATE(293),
    1,
    sym_case,
    [7657] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_declarator,
    STATE(264),
    1,
    sym_declarators,
    STATE(262),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(1084),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7691] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(155),
    1,
    sym_comment,
    STATE(236),
    1,
    sym_any_declarator,
    STATE(427),
    1,
    sym_any_declarators,
    STATE(338),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7711] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    sym_final,
    ACTIONS(49),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(1086),
    1,
    anon_sym_struct,
    STATE(156),
    1,
    sym_comment,
    STATE(160),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    [7733] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(898),
    5,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [7747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(906),
    5,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [7761] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_LBRACE,
    ACTIONS(1090),
    1,
    anon_sym_COLON,
    ACTIONS(1092),
    1,
    anon_sym_SEMI,
    ACTIONS(1094),
    1,
    anon_sym_supports,
    STATE(159),
    1,
    sym_comment,
    STATE(431),
    1,
    sym_value_inheritance_spec,
    [7783] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    anon_sym_struct,
    ACTIONS(1098),
    1,
    sym_final,
    ACTIONS(1101),
    1,
    anon_sym_ATdata_representation,
    STATE(249),
    1,
    sym_data_representation,
    STATE(160),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7803] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1041),
    1,
    anon_sym_in,
    STATE(42),
    1,
    sym_param_attribute,
    STATE(161),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_param_dcl,
    ACTIONS(1043),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7823] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(902),
    5,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [7837] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_RBRACE,
    ACTIONS(1106),
    1,
    anon_sym_bitfield,
    STATE(163),
    1,
    sym_comment,
    STATE(166),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(265),
    1,
    sym_bitfield_spec,
    STATE(371),
    1,
    sym_bitfield,
    [7859] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_bitfield,
    ACTIONS(1108),
    1,
    anon_sym_RBRACE,
    STATE(163),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(164),
    1,
    sym_comment,
    STATE(265),
    1,
    sym_bitfield_spec,
    STATE(371),
    1,
    sym_bitfield,
    [7881] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(165),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_declarator,
    STATE(424),
    1,
    sym_declarators,
    STATE(262),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7901] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_RBRACE,
    ACTIONS(1112),
    1,
    anon_sym_bitfield,
    STATE(265),
    1,
    sym_bitfield_spec,
    STATE(371),
    1,
    sym_bitfield,
    STATE(166),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7921] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_COMMA,
    ACTIONS(1115),
    1,
    anon_sym_SEMI,
    ACTIONS(1117),
    1,
    anon_sym_raises,
    STATE(167),
    1,
    sym_comment,
    STATE(282),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(441),
    1,
    sym_raises_expr,
    [7943] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(1119),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(1121),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7971] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(1123),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7985] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_bitfield,
    ACTIONS(1125),
    1,
    anon_sym_RBRACE,
    STATE(171),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(265),
    1,
    sym_bitfield_spec,
    STATE(371),
    1,
    sym_bitfield,
    [8007] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1055),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(198),
    1,
    aux_sym_enumerator_repeat1,
    STATE(340),
    1,
    sym_enum_modifier,
    STATE(364),
    1,
    sym_enumerator,
    [8029] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_bitfield,
    ACTIONS(1127),
    1,
    anon_sym_RBRACE,
    STATE(166),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(173),
    1,
    sym_comment,
    STATE(265),
    1,
    sym_bitfield_spec,
    STATE(371),
    1,
    sym_bitfield,
    [8051] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(174),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_declarator,
    STATE(225),
    1,
    sym_declarators,
    STATE(262),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(1129),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8084] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(1131),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1133),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8110] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_comment,
    STATE(292),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_interface_name,
    [8129] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1137),
    1,
    anon_sym_LBRACE,
    ACTIONS(1139),
    1,
    anon_sym_COLON,
    ACTIONS(1141),
    1,
    anon_sym_SEMI,
    STATE(179),
    1,
    sym_comment,
    STATE(433),
    1,
    sym_interface_inheritance_spec,
    [8148] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_interface_name,
    STATE(292),
    1,
    sym_scoped_name,
    [8167] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(181),
    1,
    sym_comment,
    STATE(292),
    1,
    sym_scoped_name,
    STATE(349),
    1,
    sym_interface_name,
    [8186] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(1143),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8199] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1145),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1148),
    1,
    sym_identifier,
    STATE(340),
    1,
    sym_enum_modifier,
    STATE(183),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8216] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COMMA,
    STATE(184),
    1,
    sym_comment,
    STATE(205),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1152),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8233] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(730),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1154),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_comment,
    STATE(223),
    1,
    sym_scoped_name,
    STATE(353),
    1,
    sym_value_name,
    [8252] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1156),
    1,
    anon_sym_COMMA,
    ACTIONS(1158),
    1,
    anon_sym_RPAREN,
    STATE(186),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_raises_expr_repeat1,
    [8271] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    anon_sym_RPAREN,
    ACTIONS(1162),
    1,
    anon_sym_XCDR,
    ACTIONS(1165),
    1,
    anon_sym_XCDR2,
    STATE(187),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [8288] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_comment,
    STATE(292),
    1,
    sym_scoped_name,
    STATE(378),
    1,
    sym_interface_name,
    [8307] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(328),
    1,
    sym_any_declarator,
    STATE(338),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8324] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(1168),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8337] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(1170),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8350] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(192),
    1,
    sym_comment,
    STATE(507),
    1,
    sym_declarator,
    STATE(262),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8367] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    anon_sym_RPAREN,
    ACTIONS(1174),
    1,
    anon_sym_in,
    STATE(193),
    1,
    sym_comment,
    STATE(218),
    1,
    sym_init_param_dcl,
    STATE(411),
    1,
    sym_init_param_dcls,
    [8386] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_COMMA,
    ACTIONS(1179),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(194),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8401] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_LBRACE,
    ACTIONS(1183),
    1,
    anon_sym_COLON,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(1185),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8418] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1187),
    1,
    anon_sym_LT,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(1189),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8433] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(1191),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8446] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1193),
    1,
    sym_identifier,
    STATE(183),
    1,
    aux_sym_enumerator_repeat1,
    STATE(198),
    1,
    sym_comment,
    STATE(340),
    1,
    sym_enum_modifier,
    [8465] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1156),
    1,
    anon_sym_COMMA,
    ACTIONS(1195),
    1,
    anon_sym_RPAREN,
    STATE(199),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_raises_expr_repeat1,
    [8484] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1197),
    1,
    anon_sym_RPAREN,
    ACTIONS(1199),
    1,
    anon_sym_XCDR,
    ACTIONS(1201),
    1,
    anon_sym_XCDR2,
    STATE(187),
    1,
    aux_sym_data_representation_repeat1,
    STATE(200),
    1,
    sym_comment,
    [8503] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1203),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8516] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(1205),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8529] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(1207),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8542] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(1209),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8555] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COMMA,
    STATE(194),
    1,
    aux_sym_declarators_repeat1,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(1211),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8572] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_declarator,
    STATE(262),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8589] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(1213),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8602] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_raises,
    ACTIONS(1215),
    1,
    anon_sym_SEMI,
    STATE(208),
    1,
    sym_comment,
    STATE(486),
    1,
    sym_raises_expr,
    [8618] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(209),
    1,
    sym_comment,
    STATE(266),
    1,
    sym_scoped_name,
    [8634] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_COMMA,
    ACTIONS(1217),
    1,
    anon_sym_SEMI,
    STATE(210),
    1,
    sym_comment,
    STATE(288),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [8650] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_raises,
    ACTIONS(1219),
    1,
    anon_sym_SEMI,
    STATE(211),
    1,
    sym_comment,
    STATE(449),
    1,
    sym_raises_expr,
    [8666] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_COMMA,
    ACTIONS(1223),
    1,
    anon_sym_RPAREN,
    STATE(212),
    1,
    sym_comment,
    STATE(241),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8682] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1225),
    1,
    anon_sym_SEMI,
    ACTIONS(1227),
    1,
    anon_sym_switch,
    ACTIONS(1229),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_comment,
    [8698] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1231),
    1,
    anon_sym_COMMA,
    ACTIONS(1233),
    1,
    anon_sym_RPAREN,
    STATE(214),
    1,
    sym_comment,
    STATE(229),
    1,
    aux_sym_init_param_dcls_repeat1,
    [8714] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1235),
    1,
    anon_sym_COMMA,
    ACTIONS(1238),
    1,
    anon_sym_RBRACE,
    STATE(215),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8728] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1035),
    1,
    anon_sym_setraises,
    ACTIONS(1240),
    1,
    anon_sym_SEMI,
    STATE(216),
    1,
    sym_comment,
    STATE(447),
    1,
    sym_set_excep_expr,
    [8744] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_raises,
    ACTIONS(1242),
    1,
    anon_sym_SEMI,
    STATE(217),
    1,
    sym_comment,
    STATE(455),
    1,
    sym_raises_expr,
    [8760] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1231),
    1,
    anon_sym_COMMA,
    ACTIONS(1244),
    1,
    anon_sym_RPAREN,
    STATE(214),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(218),
    1,
    sym_comment,
    [8776] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    anon_sym_COMMA,
    ACTIONS(1248),
    1,
    anon_sym_RBRACE,
    STATE(219),
    1,
    sym_comment,
    STATE(263),
    1,
    aux_sym_enum_dcl_repeat1,
    [8792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(1250),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_SEMI,
    ACTIONS(1254),
    1,
    sym_identifier,
    STATE(221),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8818] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1257),
    1,
    anon_sym_GT,
    ACTIONS(1259),
    1,
    anon_sym_COMMA,
    STATE(222),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_actual_parameters_repeat1,
    [8834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1261),
    1,
    anon_sym_COLON_COLON,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(1263),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [8848] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_COMMA,
    ACTIONS(1268),
    1,
    anon_sym_LBRACE,
    STATE(224),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [8862] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1270),
    1,
    anon_sym_SEMI,
    ACTIONS(1272),
    1,
    anon_sym_default,
    STATE(225),
    1,
    sym_comment,
    STATE(421),
    1,
    sym_default,
    [8878] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(1274),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8890] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1276),
    1,
    anon_sym_COMMA,
    ACTIONS(1279),
    1,
    anon_sym_RPAREN,
    STATE(227),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8904] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(1179),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8916] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1281),
    1,
    anon_sym_COMMA,
    ACTIONS(1284),
    1,
    anon_sym_RPAREN,
    STATE(229),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [8930] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    anon_sym_RBRACE,
    ACTIONS(1246),
    1,
    anon_sym_COMMA,
    STATE(230),
    1,
    sym_comment,
    STATE(271),
    1,
    aux_sym_enum_dcl_repeat1,
    [8946] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    anon_sym_COMMA,
    ACTIONS(1286),
    1,
    anon_sym_RBRACE,
    STATE(219),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(231),
    1,
    sym_comment,
    [8962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(1288),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [8974] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(1290),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8986] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1294),
    1,
    anon_sym_XCDR,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(1292),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [9000] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1296),
    1,
    anon_sym_LT,
    ACTIONS(1298),
    1,
    anon_sym_LBRACE,
    STATE(235),
    1,
    sym_comment,
    [9016] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1300),
    1,
    anon_sym_COMMA,
    ACTIONS(1302),
    1,
    anon_sym_SEMI,
    STATE(236),
    1,
    sym_comment,
    STATE(242),
    1,
    aux_sym_any_declarators_repeat1,
    [9032] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(167),
    1,
    sym_simple_declarator,
    STATE(237),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_readonly_attr_declarator,
    [9048] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    STATE(322),
    1,
    sym_scoped_name,
    [9064] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1306),
    1,
    anon_sym_GT,
    ACTIONS(1308),
    1,
    anon_sym_COMMA,
    STATE(239),
    1,
    sym_comment,
    STATE(280),
    1,
    aux_sym_formal_parameters_repeat1,
    [9080] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(240),
    1,
    sym_comment,
    STATE(346),
    1,
    sym_scoped_name,
    [9096] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_COMMA,
    ACTIONS(1310),
    1,
    anon_sym_RPAREN,
    STATE(227),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(241),
    1,
    sym_comment,
    [9112] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1300),
    1,
    anon_sym_COMMA,
    ACTIONS(1312),
    1,
    anon_sym_SEMI,
    STATE(242),
    1,
    sym_comment,
    STATE(243),
    1,
    aux_sym_any_declarators_repeat1,
    [9128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1314),
    1,
    anon_sym_COMMA,
    ACTIONS(1317),
    1,
    anon_sym_SEMI,
    STATE(243),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9142] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_scoped_name,
    STATE(244),
    1,
    sym_comment,
    [9158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(1319),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9170] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1321),
    1,
    anon_sym_COMMA,
    ACTIONS(1323),
    1,
    anon_sym_RBRACE,
    STATE(246),
    1,
    sym_comment,
    STATE(276),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9186] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1325),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(141),
    1,
    sym_simple_declarator,
    STATE(248),
    1,
    sym_comment,
    STATE(443),
    1,
    sym_attr_declarator,
    [9214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1327),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1329),
    1,
    anon_sym_GT,
    ACTIONS(1331),
    1,
    anon_sym_COMMA,
    STATE(250),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [9240] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1334),
    1,
    anon_sym_GT,
    ACTIONS(1336),
    1,
    anon_sym_COMMA,
    STATE(251),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [9254] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1261),
    1,
    anon_sym_COLON_COLON,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(976),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9268] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1339),
    1,
    anon_sym_RBRACE,
    ACTIONS(1341),
    1,
    sym_identifier,
    STATE(246),
    1,
    sym_bit_value,
    STATE(253),
    1,
    sym_comment,
    [9284] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(1343),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9296] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_COMMA,
    ACTIONS(1345),
    1,
    anon_sym_RPAREN,
    STATE(255),
    1,
    sym_comment,
    STATE(272),
    1,
    aux_sym_raises_expr_repeat1,
    [9312] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(256),
    1,
    sym_comment,
    STATE(367),
    1,
    sym_scoped_name,
    [9328] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1347),
    1,
    anon_sym_GT,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    STATE(257),
    1,
    sym_comment,
    STATE(277),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [9344] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1351),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9356] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    STATE(341),
    1,
    sym_scoped_name,
    [9372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1353),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9384] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    anon_sym_COMMA,
    ACTIONS(1355),
    1,
    anon_sym_RPAREN,
    STATE(261),
    1,
    sym_comment,
    STATE(272),
    1,
    aux_sym_raises_expr_repeat1,
    [9400] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(1357),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1359),
    1,
    anon_sym_COMMA,
    ACTIONS(1362),
    1,
    anon_sym_RBRACE,
    STATE(263),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [9426] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1272),
    1,
    anon_sym_default,
    ACTIONS(1364),
    1,
    anon_sym_SEMI,
    STATE(264),
    1,
    sym_comment,
    STATE(377),
    1,
    sym_default,
    [9442] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1366),
    1,
    anon_sym_SEMI,
    ACTIONS(1368),
    1,
    sym_identifier,
    STATE(265),
    1,
    sym_comment,
    STATE(273),
    1,
    aux_sym_bitfield_repeat1,
    [9458] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(1370),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9472] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1137),
    1,
    anon_sym_LBRACE,
    ACTIONS(1139),
    1,
    anon_sym_COLON,
    STATE(267),
    1,
    sym_comment,
    STATE(433),
    1,
    sym_interface_inheritance_spec,
    [9488] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1372),
    1,
    sym_identifier,
    STATE(268),
    1,
    sym_comment,
    STATE(323),
    1,
    sym_scoped_name,
    [9504] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1374),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9516] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1376),
    1,
    anon_sym_COMMA,
    ACTIONS(1378),
    1,
    anon_sym_LBRACE,
    STATE(224),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(270),
    1,
    sym_comment,
    [9532] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    anon_sym_COMMA,
    ACTIONS(1286),
    1,
    anon_sym_RBRACE,
    STATE(263),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(271),
    1,
    sym_comment,
    [9548] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1370),
    1,
    anon_sym_RPAREN,
    ACTIONS(1380),
    1,
    anon_sym_COMMA,
    STATE(272),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9562] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1368),
    1,
    sym_identifier,
    ACTIONS(1383),
    1,
    anon_sym_SEMI,
    STATE(221),
    1,
    aux_sym_bitfield_repeat1,
    STATE(273),
    1,
    sym_comment,
    [9578] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1376),
    1,
    anon_sym_COMMA,
    ACTIONS(1385),
    1,
    anon_sym_LBRACE,
    STATE(270),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(274),
    1,
    sym_comment,
    [9594] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1199),
    1,
    anon_sym_XCDR,
    ACTIONS(1201),
    1,
    anon_sym_XCDR2,
    STATE(200),
    1,
    aux_sym_data_representation_repeat1,
    STATE(275),
    1,
    sym_comment,
    [9610] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1321),
    1,
    anon_sym_COMMA,
    ACTIONS(1387),
    1,
    anon_sym_RBRACE,
    STATE(215),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(276),
    1,
    sym_comment,
    [9626] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1389),
    1,
    anon_sym_GT,
    STATE(277),
    1,
    sym_comment,
    STATE(278),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [9642] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_GT,
    ACTIONS(1393),
    1,
    anon_sym_COMMA,
    STATE(278),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [9656] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1396),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9668] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1308),
    1,
    anon_sym_COMMA,
    ACTIONS(1398),
    1,
    anon_sym_GT,
    STATE(251),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(280),
    1,
    sym_comment,
    [9684] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(1400),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9696] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_COMMA,
    ACTIONS(1402),
    1,
    anon_sym_SEMI,
    STATE(282),
    1,
    sym_comment,
    STATE(288),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(976),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9724] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1404),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9736] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(976),
    2,
    anon_sym_COMMA,
    sym_identifier,
    [9750] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1135),
    1,
    sym_identifier,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(286),
    1,
    sym_comment,
    [9766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1406),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9778] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1408),
    1,
    anon_sym_COMMA,
    ACTIONS(1411),
    1,
    anon_sym_SEMI,
    STATE(288),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [9792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1413),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_raises,
    ACTIONS(1415),
    1,
    anon_sym_SEMI,
    STATE(290),
    1,
    sym_comment,
    STATE(480),
    1,
    sym_raises_expr,
    [9820] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1259),
    1,
    anon_sym_COMMA,
    ACTIONS(1417),
    1,
    anon_sym_GT,
    STATE(250),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(291),
    1,
    sym_comment,
    [9836] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1419),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9850] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(1421),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9862] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1423),
    1,
    anon_sym_LPAREN,
    STATE(294),
    1,
    sym_comment,
    STATE(446),
    1,
    sym_exception_list,
    [9875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(295),
    1,
    sym_comment,
    STATE(296),
    1,
    sym_simple_declarator,
    [9888] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1425),
    1,
    anon_sym_SEMI,
    ACTIONS(1427),
    1,
    anon_sym_default,
    STATE(296),
    1,
    sym_comment,
    [9901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1429),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1431),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9923] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1341),
    1,
    sym_identifier,
    STATE(299),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_bit_value,
    [9936] = 4,
    ACTIONS(1433),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1435),
    1,
    sym_preproc_arg,
    ACTIONS(1437),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    [9949] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_interface,
    STATE(301),
    1,
    sym_comment,
    STATE(474),
    1,
    sym_interface_header,
    [9962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1391),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(1439),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_comment,
    STATE(442),
    1,
    sym_simple_declarator,
    [9997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1441),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10008] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1443),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10019] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(1445),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10030] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1447),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10041] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1449),
    1,
    sym_identifier,
    STATE(309),
    1,
    sym_comment,
    STATE(505),
    1,
    sym_formal_parameter_names,
    [10054] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1451),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(1453),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10076] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(1455),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10087] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1457),
    1,
    anon_sym_RPAREN,
    STATE(313),
    1,
    sym_comment,
    [10100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(1284),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(1459),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(1461),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1463),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1465),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(1279),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10166] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1467),
    1,
    anon_sym_LBRACE,
    ACTIONS(1469),
    1,
    anon_sym_COLON,
    STATE(320),
    1,
    sym_comment,
    [10179] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1471),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10190] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1473),
    1,
    anon_sym_LT,
    STATE(322),
    1,
    sym_comment,
    [10203] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1475),
    1,
    anon_sym_LT,
    STATE(323),
    1,
    sym_comment,
    [10216] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(324),
    1,
    sym_comment,
    ACTIONS(1477),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(325),
    1,
    sym_comment,
    ACTIONS(1479),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10238] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    anon_sym_in,
    STATE(314),
    1,
    sym_init_param_dcl,
    STATE(326),
    1,
    sym_comment,
    [10251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(315),
    1,
    sym_simple_declarator,
    STATE(327),
    1,
    sym_comment,
    [10264] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1317),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(317),
    1,
    sym_simple_declarator,
    STATE(329),
    1,
    sym_comment,
    [10288] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1481),
    1,
    sym_identifier,
    STATE(330),
    1,
    sym_comment,
    [10301] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(1483),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1411),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10323] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_interface,
    STATE(333),
    1,
    sym_comment,
    STATE(406),
    1,
    sym_interface_header,
    [10336] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1485),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(335),
    1,
    sym_comment,
    ACTIONS(1487),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10358] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(1489),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10369] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1481),
    1,
    sym_identifier,
    STATE(337),
    1,
    sym_comment,
    [10382] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1491),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10393] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(339),
    1,
    sym_comment,
    ACTIONS(1493),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10404] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(340),
    1,
    sym_comment,
    ACTIONS(1495),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1497),
    1,
    anon_sym_LBRACE,
    STATE(341),
    1,
    sym_comment,
    [10428] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1499),
    1,
    anon_sym_LBRACE,
    ACTIONS(1501),
    1,
    anon_sym_COLON,
    STATE(342),
    1,
    sym_comment,
    [10441] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(343),
    1,
    sym_comment,
    ACTIONS(1503),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(344),
    1,
    sym_comment,
    ACTIONS(1505),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10463] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(345),
    1,
    sym_comment,
    ACTIONS(1507),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10474] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1509),
    1,
    anon_sym_LBRACE,
    STATE(346),
    1,
    sym_comment,
    [10487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(347),
    1,
    sym_comment,
    ACTIONS(1329),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10498] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(348),
    1,
    sym_comment,
    ACTIONS(1511),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10509] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(349),
    1,
    sym_comment,
    ACTIONS(1268),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10520] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(1513),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10531] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1515),
    1,
    anon_sym_GT,
    ACTIONS(1517),
    1,
    anon_sym_COMMA,
    STATE(351),
    1,
    sym_comment,
    [10544] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(1519),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10555] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1521),
    1,
    anon_sym_LBRACE,
    ACTIONS(1523),
    1,
    anon_sym_supports,
    STATE(353),
    1,
    sym_comment,
    [10568] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(354),
    1,
    sym_comment,
    ACTIONS(1525),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10579] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_simple_declarator,
    STATE(355),
    1,
    sym_comment,
    [10592] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(1238),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(357),
    1,
    sym_comment,
    ACTIONS(1527),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10614] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(358),
    1,
    sym_comment,
    ACTIONS(1529),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(359),
    1,
    sym_comment,
    ACTIONS(1531),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10636] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(360),
    1,
    sym_comment,
    ACTIONS(1533),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1535),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1537),
    1,
    anon_sym_SQUOTE,
    STATE(361),
    1,
    sym_comment,
    [10660] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(362),
    1,
    sym_comment,
    ACTIONS(1334),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10671] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1423),
    1,
    anon_sym_LPAREN,
    STATE(331),
    1,
    sym_exception_list,
    STATE(363),
    1,
    sym_comment,
    [10684] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(1362),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1539),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10706] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(366),
    1,
    sym_comment,
    ACTIONS(1541),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10717] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1543),
    1,
    anon_sym_LBRACE,
    STATE(367),
    1,
    sym_comment,
    [10730] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(368),
    1,
    sym_comment,
    ACTIONS(1545),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10741] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1547),
    1,
    anon_sym_LT,
    ACTIONS(1549),
    1,
    sym_identifier,
    STATE(369),
    1,
    sym_comment,
    [10754] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1551),
    1,
    anon_sym_GT,
    ACTIONS(1553),
    1,
    anon_sym_COMMA,
    STATE(370),
    1,
    sym_comment,
    [10767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(371),
    1,
    sym_comment,
    ACTIONS(1555),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10778] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(248),
    1,
    anon_sym_RBRACE,
    STATE(372),
    1,
    sym_comment,
    [10788] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1557),
    1,
    sym_identifier,
    STATE(373),
    1,
    sym_comment,
    [10798] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_GT,
    STATE(374),
    1,
    sym_comment,
    [10808] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1561),
    1,
    anon_sym_RBRACE,
    STATE(375),
    1,
    sym_comment,
    [10818] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1563),
    1,
    anon_sym_DQUOTE,
    STATE(376),
    1,
    sym_comment,
    [10828] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1565),
    1,
    anon_sym_SEMI,
    STATE(377),
    1,
    sym_comment,
    [10838] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1521),
    1,
    anon_sym_LBRACE,
    STATE(378),
    1,
    sym_comment,
    [10848] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1567),
    1,
    anon_sym_GT,
    STATE(379),
    1,
    sym_comment,
    [10858] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1569),
    1,
    aux_sym_char_literal_token1,
    STATE(380),
    1,
    sym_comment,
    [10868] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1571),
    1,
    aux_sym_string_literal_token1,
    STATE(381),
    1,
    sym_comment,
    [10878] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1573),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [10888] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1575),
    1,
    sym_identifier,
    STATE(383),
    1,
    sym_comment,
    [10898] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1577),
    1,
    anon_sym_DQUOTE,
    STATE(384),
    1,
    sym_comment,
    [10908] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1579),
    1,
    anon_sym_SQUOTE,
    STATE(385),
    1,
    sym_comment,
    [10918] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1581),
    1,
    anon_sym_GT,
    STATE(386),
    1,
    sym_comment,
    [10928] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1549),
    1,
    sym_identifier,
    STATE(387),
    1,
    sym_comment,
    [10938] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1583),
    1,
    anon_sym_SEMI,
    STATE(388),
    1,
    sym_comment,
    [10948] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1585),
    1,
    sym_identifier,
    STATE(389),
    1,
    sym_comment,
    [10958] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1587),
    1,
    anon_sym_SEMI,
    STATE(390),
    1,
    sym_comment,
    [10968] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1589),
    1,
    anon_sym_RPAREN,
    STATE(391),
    1,
    sym_comment,
    [10978] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1591),
    1,
    anon_sym_SEMI,
    STATE(392),
    1,
    sym_comment,
    [10988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1593),
    1,
    sym_identifier,
    STATE(393),
    1,
    sym_comment,
    [10998] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1595),
    1,
    anon_sym_LBRACE,
    STATE(394),
    1,
    sym_comment,
    [11008] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1597),
    1,
    anon_sym_LBRACE,
    STATE(395),
    1,
    sym_comment,
    [11018] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1599),
    1,
    anon_sym_GT,
    STATE(396),
    1,
    sym_comment,
    [11028] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1601),
    1,
    anon_sym_LT,
    STATE(397),
    1,
    sym_comment,
    [11038] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1603),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [11048] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(250),
    1,
    anon_sym_RBRACE,
    STATE(399),
    1,
    sym_comment,
    [11058] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1605),
    1,
    anon_sym_SEMI,
    STATE(400),
    1,
    sym_comment,
    [11068] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1217),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [11078] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(402),
    1,
    sym_comment,
    [11088] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    anon_sym_SEMI,
    STATE(403),
    1,
    sym_comment,
    [11098] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1609),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(404),
    1,
    sym_comment,
    [11108] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1611),
    1,
    anon_sym_RPAREN,
    STATE(405),
    1,
    sym_comment,
    [11118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1613),
    1,
    anon_sym_LBRACE,
    STATE(406),
    1,
    sym_comment,
    [11128] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1615),
    1,
    anon_sym_LBRACE,
    STATE(407),
    1,
    sym_comment,
    [11138] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1617),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [11148] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1619),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [11158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1621),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [11168] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1623),
    1,
    anon_sym_RPAREN,
    STATE(411),
    1,
    sym_comment,
    [11178] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1625),
    1,
    sym_identifier,
    STATE(412),
    1,
    sym_comment,
    [11188] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1627),
    1,
    anon_sym_SEMI,
    STATE(413),
    1,
    sym_comment,
    [11198] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1629),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [11208] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1631),
    1,
    anon_sym_attribute,
    STATE(415),
    1,
    sym_comment,
    [11218] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1633),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    [11228] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1635),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [11238] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1637),
    1,
    anon_sym_SEMI,
    STATE(418),
    1,
    sym_comment,
    [11248] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1639),
    1,
    anon_sym_EQ,
    STATE(419),
    1,
    sym_comment,
    [11258] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1641),
    1,
    anon_sym_EQ,
    STATE(420),
    1,
    sym_comment,
    [11268] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1643),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [11278] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1645),
    1,
    anon_sym_DQUOTE,
    STATE(422),
    1,
    sym_comment,
    [11288] = 3,
    ACTIONS(1437),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1647),
    1,
    aux_sym_comment_token1,
    STATE(423),
    1,
    sym_comment,
    [11298] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1649),
    1,
    anon_sym_SEMI,
    STATE(424),
    1,
    sym_comment,
    [11308] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1651),
    1,
    anon_sym_SEMI,
    STATE(425),
    1,
    sym_comment,
    [11318] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1653),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [11328] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1655),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [11338] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1657),
    1,
    anon_sym_EQ,
    STATE(428),
    1,
    sym_comment,
    [11348] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1659),
    1,
    anon_sym_SEMI,
    STATE(429),
    1,
    sym_comment,
    [11358] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1661),
    1,
    anon_sym_LPAREN,
    STATE(430),
    1,
    sym_comment,
    [11368] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1663),
    1,
    anon_sym_LBRACE,
    STATE(431),
    1,
    sym_comment,
    [11378] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1665),
    1,
    sym_identifier,
    STATE(432),
    1,
    sym_comment,
    [11388] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1667),
    1,
    anon_sym_LBRACE,
    STATE(433),
    1,
    sym_comment,
    [11398] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1669),
    1,
    sym_identifier,
    STATE(434),
    1,
    sym_comment,
    [11408] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1671),
    1,
    anon_sym_COMMA,
    STATE(435),
    1,
    sym_comment,
    [11418] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1673),
    1,
    anon_sym_COMMA,
    STATE(436),
    1,
    sym_comment,
    [11428] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1675),
    1,
    sym_identifier,
    STATE(437),
    1,
    sym_comment,
    [11438] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1677),
    1,
    anon_sym_name,
    STATE(438),
    1,
    sym_comment,
    [11448] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1679),
    1,
    anon_sym_name,
    STATE(439),
    1,
    sym_comment,
    [11458] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1681),
    1,
    anon_sym_LPAREN,
    STATE(440),
    1,
    sym_comment,
    [11468] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1402),
    1,
    anon_sym_SEMI,
    STATE(441),
    1,
    sym_comment,
    [11478] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1683),
    1,
    anon_sym_SEMI,
    STATE(442),
    1,
    sym_comment,
    [11488] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1685),
    1,
    anon_sym_SEMI,
    STATE(443),
    1,
    sym_comment,
    [11498] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1687),
    1,
    anon_sym_SEMI,
    STATE(444),
    1,
    sym_comment,
    [11508] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1689),
    1,
    aux_sym_string_literal_token1,
    STATE(445),
    1,
    sym_comment,
    [11518] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1691),
    1,
    anon_sym_SEMI,
    STATE(446),
    1,
    sym_comment,
    [11528] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1693),
    1,
    anon_sym_SEMI,
    STATE(447),
    1,
    sym_comment,
    [11538] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1695),
    1,
    anon_sym_LT,
    STATE(448),
    1,
    sym_comment,
    [11548] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1415),
    1,
    anon_sym_SEMI,
    STATE(449),
    1,
    sym_comment,
    [11558] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1697),
    1,
    anon_sym_LT,
    STATE(450),
    1,
    sym_comment,
    [11568] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1699),
    1,
    anon_sym_GT,
    STATE(451),
    1,
    sym_comment,
    [11578] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1701),
    1,
    anon_sym_RPAREN,
    STATE(452),
    1,
    sym_comment,
    [11588] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1703),
    1,
    anon_sym_RPAREN,
    STATE(453),
    1,
    sym_comment,
    [11598] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1547),
    1,
    anon_sym_LT,
    STATE(454),
    1,
    sym_comment,
    [11608] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1215),
    1,
    anon_sym_SEMI,
    STATE(455),
    1,
    sym_comment,
    [11618] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1705),
    1,
    aux_sym_string_literal_token1,
    STATE(456),
    1,
    sym_comment,
    [11628] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1707),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11638] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1709),
    1,
    anon_sym_LPAREN,
    STATE(458),
    1,
    sym_comment,
    [11648] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1481),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    [11658] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1711),
    1,
    anon_sym_RBRACK,
    STATE(460),
    1,
    sym_comment,
    [11668] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1713),
    1,
    anon_sym_LPAREN,
    STATE(461),
    1,
    sym_comment,
    [11678] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1715),
    1,
    anon_sym_LBRACE,
    STATE(462),
    1,
    sym_comment,
    [11688] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1717),
    1,
    anon_sym_SEMI,
    STATE(463),
    1,
    sym_comment,
    [11698] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1719),
    1,
    anon_sym_GT,
    STATE(464),
    1,
    sym_comment,
    [11708] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1721),
    1,
    anon_sym_GT,
    STATE(465),
    1,
    sym_comment,
    [11718] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1723),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [11728] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1725),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_comment,
    [11738] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1727),
    1,
    anon_sym_LBRACE,
    STATE(468),
    1,
    sym_comment,
    [11748] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1729),
    1,
    anon_sym_SEMI,
    STATE(469),
    1,
    sym_comment,
    [11758] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1731),
    1,
    anon_sym_LBRACE,
    STATE(470),
    1,
    sym_comment,
    [11768] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1733),
    1,
    anon_sym_SEMI,
    STATE(471),
    1,
    sym_comment,
    [11778] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1735),
    1,
    anon_sym_COLON,
    STATE(472),
    1,
    sym_comment,
    [11788] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1737),
    1,
    anon_sym_GT,
    STATE(473),
    1,
    sym_comment,
    [11798] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1739),
    1,
    anon_sym_LBRACE,
    STATE(474),
    1,
    sym_comment,
    [11808] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1741),
    1,
    sym_identifier,
    STATE(475),
    1,
    sym_comment,
    [11818] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1743),
    1,
    anon_sym_LBRACE,
    STATE(476),
    1,
    sym_comment,
    [11828] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1745),
    1,
    anon_sym_GT,
    STATE(477),
    1,
    sym_comment,
    [11838] = 3,
    ACTIONS(1437),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1747),
    1,
    aux_sym_preproc_call_token1,
    STATE(478),
    1,
    sym_comment,
    [11848] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1749),
    1,
    anon_sym_SQUOTE,
    STATE(479),
    1,
    sym_comment,
    [11858] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1751),
    1,
    anon_sym_SEMI,
    STATE(480),
    1,
    sym_comment,
    [11868] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1753),
    1,
    anon_sym_SEMI,
    STATE(481),
    1,
    sym_comment,
    [11878] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1755),
    1,
    anon_sym_enum,
    STATE(482),
    1,
    sym_comment,
    [11888] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1757),
    1,
    anon_sym_SEMI,
    STATE(483),
    1,
    sym_comment,
    [11898] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1759),
    1,
    anon_sym_LBRACE,
    STATE(484),
    1,
    sym_comment,
    [11908] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1761),
    1,
    sym_identifier,
    STATE(485),
    1,
    sym_comment,
    [11918] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1763),
    1,
    anon_sym_SEMI,
    STATE(486),
    1,
    sym_comment,
    [11928] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1765),
    1,
    aux_sym_char_literal_token1,
    STATE(487),
    1,
    sym_comment,
    [11938] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1767),
    1,
    anon_sym_SEMI,
    STATE(488),
    1,
    sym_comment,
    [11948] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1769),
    1,
    anon_sym_RPAREN,
    STATE(489),
    1,
    sym_comment,
    [11958] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1457),
    1,
    anon_sym_RPAREN,
    STATE(490),
    1,
    sym_comment,
    [11968] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1771),
    1,
    aux_sym_string_literal_token1,
    STATE(491),
    1,
    sym_comment,
    [11978] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1773),
    1,
    anon_sym_LBRACE,
    STATE(492),
    1,
    sym_comment,
    [11988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1775),
    1,
    anon_sym_COLON,
    STATE(493),
    1,
    sym_comment,
    [11998] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1777),
    1,
    anon_sym_SEMI,
    STATE(494),
    1,
    sym_comment,
    [12008] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1779),
    1,
    anon_sym_SEMI,
    STATE(495),
    1,
    sym_comment,
    [12018] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1781),
    1,
    anon_sym_RPAREN,
    STATE(496),
    1,
    sym_comment,
    [12028] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1783),
    1,
    anon_sym_SEMI,
    STATE(497),
    1,
    sym_comment,
    [12038] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1785),
    1,
    ts_builtin_sym_end,
    STATE(498),
    1,
    sym_comment,
    [12048] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1787),
    1,
    anon_sym_LPAREN,
    STATE(499),
    1,
    sym_comment,
    [12058] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1789),
    1,
    anon_sym_LPAREN,
    STATE(500),
    1,
    sym_comment,
    [12068] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1791),
    1,
    anon_sym_SEMI,
    STATE(501),
    1,
    sym_comment,
    [12078] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1793),
    1,
    anon_sym_LPAREN,
    STATE(502),
    1,
    sym_comment,
    [12088] = 3,
    ACTIONS(1437),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1795),
    1,
    aux_sym_predefine_token1,
    STATE(503),
    1,
    sym_comment,
    [12098] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1797),
    1,
    sym_identifier,
    STATE(504),
    1,
    sym_comment,
    [12108] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1799),
    1,
    anon_sym_GT,
    STATE(505),
    1,
    sym_comment,
    [12118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1801),
    1,
    anon_sym_enum,
    STATE(506),
    1,
    sym_comment,
    [12128] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1803),
    1,
    anon_sym_SEMI,
    STATE(507),
    1,
    sym_comment,
    [12138] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1805),
    1,
    sym_identifier,
    STATE(508),
    1,
    sym_comment,
    [12148] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1807),
    1,
    anon_sym_SEMI,
    STATE(509),
    1,
    sym_comment,
    [12158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1809),
    1,
    sym_identifier,
    STATE(510),
    1,
    sym_comment,
    [12168] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1811),
    1,
    sym_identifier,
    STATE(511),
    1,
    sym_comment,
    [12178] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1813),
    1,
    anon_sym_LBRACE,
    STATE(512),
    1,
    sym_comment,
    [12188] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1815),
    1,
    sym_identifier,
    STATE(513),
    1,
    sym_comment,
    [12198] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1817),
    1,
    sym_identifier,
    STATE(514),
    1,
    sym_comment,
    [12208] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1819),
    1,
    sym_identifier,
    STATE(515),
    1,
    sym_comment,
    [12218] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1821),
    1,
    sym_identifier,
    STATE(516),
    1,
    sym_comment,
    [12228] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1823),
    1,
    anon_sym_SEMI,
    STATE(517),
    1,
    sym_comment,
    [12238] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1825),
    1,
    sym_identifier,
    STATE(518),
    1,
    sym_comment,
    [12248] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1827),
    1,
    sym_identifier,
    STATE(519),
    1,
    sym_comment,
    [12258] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1829),
    1,
    anon_sym_SEMI,
    STATE(520),
    1,
    sym_comment,
    [12268] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1831),
    1,
    sym_identifier,
    STATE(521),
    1,
    sym_comment,
    [12278] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1833),
    1,
    anon_sym_SEMI,
    STATE(522),
    1,
    sym_comment,
    [12288] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1835),
    1,
    sym_identifier,
    STATE(523),
    1,
    sym_comment,
    [12298] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1837),
    1,
    sym_identifier,
    STATE(524),
    1,
    sym_comment,
    [12308] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1839),
    1,
    sym_identifier,
    STATE(525),
    1,
    sym_comment,
    [12318] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1841),
    1,
    sym_identifier,
    STATE(526),
    1,
    sym_comment,
    [12328] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1843),
    1,
    anon_sym_SEMI,
    STATE(527),
    1,
    sym_comment,
    [12338] = 1,
    ACTIONS(1845),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(25)] = 0,
    [SMALL_STATE(26)] = 143,
    [SMALL_STATE(27)] = 284,
    [SMALL_STATE(28)] = 427,
    [SMALL_STATE(29)] = 570,
    [SMALL_STATE(30)] = 709,
    [SMALL_STATE(31)] = 850,
    [SMALL_STATE(32)] = 991,
    [SMALL_STATE(33)] = 1134,
    [SMALL_STATE(34)] = 1267,
    [SMALL_STATE(35)] = 1401,
    [SMALL_STATE(36)] = 1535,
    [SMALL_STATE(37)] = 1669,
    [SMALL_STATE(38)] = 1803,
    [SMALL_STATE(39)] = 1925,
    [SMALL_STATE(40)] = 2044,
    [SMALL_STATE(41)] = 2169,
    [SMALL_STATE(42)] = 2288,
    [SMALL_STATE(43)] = 2407,
    [SMALL_STATE(44)] = 2526,
    [SMALL_STATE(45)] = 2645,
    [SMALL_STATE(46)] = 2764,
    [SMALL_STATE(47)] = 2883,
    [SMALL_STATE(48)] = 3002,
    [SMALL_STATE(49)] = 3061,
    [SMALL_STATE(50)] = 3120,
    [SMALL_STATE(51)] = 3179,
    [SMALL_STATE(52)] = 3238,
    [SMALL_STATE(53)] = 3297,
    [SMALL_STATE(54)] = 3356,
    [SMALL_STATE(55)] = 3415,
    [SMALL_STATE(56)] = 3471,
    [SMALL_STATE(57)] = 3527,
    [SMALL_STATE(58)] = 3629,
    [SMALL_STATE(59)] = 3731,
    [SMALL_STATE(60)] = 3793,
    [SMALL_STATE(61)] = 3844,
    [SMALL_STATE(62)] = 3895,
    [SMALL_STATE(63)] = 3944,
    [SMALL_STATE(64)] = 3993,
    [SMALL_STATE(65)] = 4042,
    [SMALL_STATE(66)] = 4091,
    [SMALL_STATE(67)] = 4140,
    [SMALL_STATE(68)] = 4188,
    [SMALL_STATE(69)] = 4236,
    [SMALL_STATE(70)] = 4284,
    [SMALL_STATE(71)] = 4332,
    [SMALL_STATE(72)] = 4376,
    [SMALL_STATE(73)] = 4420,
    [SMALL_STATE(74)] = 4464,
    [SMALL_STATE(75)] = 4508,
    [SMALL_STATE(76)] = 4552,
    [SMALL_STATE(77)] = 4632,
    [SMALL_STATE(78)] = 4672,
    [SMALL_STATE(79)] = 4752,
    [SMALL_STATE(80)] = 4832,
    [SMALL_STATE(81)] = 4912,
    [SMALL_STATE(82)] = 4992,
    [SMALL_STATE(83)] = 5072,
    [SMALL_STATE(84)] = 5152,
    [SMALL_STATE(85)] = 5232,
    [SMALL_STATE(86)] = 5309,
    [SMALL_STATE(87)] = 5386,
    [SMALL_STATE(88)] = 5463,
    [SMALL_STATE(89)] = 5540,
    [SMALL_STATE(90)] = 5617,
    [SMALL_STATE(91)] = 5694,
    [SMALL_STATE(92)] = 5759,
    [SMALL_STATE(93)] = 5799,
    [SMALL_STATE(94)] = 5832,
    [SMALL_STATE(95)] = 5865,
    [SMALL_STATE(96)] = 5898,
    [SMALL_STATE(97)] = 5969,
    [SMALL_STATE(98)] = 6001,
    [SMALL_STATE(99)] = 6069,
    [SMALL_STATE(100)] = 6103,
    [SMALL_STATE(101)] = 6137,
    [SMALL_STATE(102)] = 6169,
    [SMALL_STATE(103)] = 6201,
    [SMALL_STATE(104)] = 6235,
    [SMALL_STATE(105)] = 6267,
    [SMALL_STATE(106)] = 6332,
    [SMALL_STATE(107)] = 6394,
    [SMALL_STATE(108)] = 6425,
    [SMALL_STATE(109)] = 6456,
    [SMALL_STATE(110)] = 6487,
    [SMALL_STATE(111)] = 6546,
    [SMALL_STATE(112)] = 6602,
    [SMALL_STATE(113)] = 6632,
    [SMALL_STATE(114)] = 6662,
    [SMALL_STATE(115)] = 6689,
    [SMALL_STATE(116)] = 6716,
    [SMALL_STATE(117)] = 6743,
    [SMALL_STATE(118)] = 6774,
    [SMALL_STATE(119)] = 6801,
    [SMALL_STATE(120)] = 6828,
    [SMALL_STATE(121)] = 6855,
    [SMALL_STATE(122)] = 6882,
    [SMALL_STATE(123)] = 6913,
    [SMALL_STATE(124)] = 6940,
    [SMALL_STATE(125)] = 6967,
    [SMALL_STATE(126)] = 6994,
    [SMALL_STATE(127)] = 7021,
    [SMALL_STATE(128)] = 7048,
    [SMALL_STATE(129)] = 7091,
    [SMALL_STATE(130)] = 7121,
    [SMALL_STATE(131)] = 7147,
    [SMALL_STATE(132)] = 7173,
    [SMALL_STATE(133)] = 7197,
    [SMALL_STATE(134)] = 7221,
    [SMALL_STATE(135)] = 7256,
    [SMALL_STATE(136)] = 7276,
    [SMALL_STATE(137)] = 7296,
    [SMALL_STATE(138)] = 7316,
    [SMALL_STATE(139)] = 7344,
    [SMALL_STATE(140)] = 7363,
    [SMALL_STATE(141)] = 7382,
    [SMALL_STATE(142)] = 7413,
    [SMALL_STATE(143)] = 7429,
    [SMALL_STATE(144)] = 7455,
    [SMALL_STATE(145)] = 7473,
    [SMALL_STATE(146)] = 7494,
    [SMALL_STATE(147)] = 7519,
    [SMALL_STATE(148)] = 7544,
    [SMALL_STATE(149)] = 7563,
    [SMALL_STATE(150)] = 7584,
    [SMALL_STATE(151)] = 7609,
    [SMALL_STATE(152)] = 7632,
    [SMALL_STATE(153)] = 7657,
    [SMALL_STATE(154)] = 7677,
    [SMALL_STATE(155)] = 7691,
    [SMALL_STATE(156)] = 7711,
    [SMALL_STATE(157)] = 7733,
    [SMALL_STATE(158)] = 7747,
    [SMALL_STATE(159)] = 7761,
    [SMALL_STATE(160)] = 7783,
    [SMALL_STATE(161)] = 7803,
    [SMALL_STATE(162)] = 7823,
    [SMALL_STATE(163)] = 7837,
    [SMALL_STATE(164)] = 7859,
    [SMALL_STATE(165)] = 7881,
    [SMALL_STATE(166)] = 7901,
    [SMALL_STATE(167)] = 7921,
    [SMALL_STATE(168)] = 7943,
    [SMALL_STATE(169)] = 7957,
    [SMALL_STATE(170)] = 7971,
    [SMALL_STATE(171)] = 7985,
    [SMALL_STATE(172)] = 8007,
    [SMALL_STATE(173)] = 8029,
    [SMALL_STATE(174)] = 8051,
    [SMALL_STATE(175)] = 8071,
    [SMALL_STATE(176)] = 8084,
    [SMALL_STATE(177)] = 8097,
    [SMALL_STATE(178)] = 8110,
    [SMALL_STATE(179)] = 8129,
    [SMALL_STATE(180)] = 8148,
    [SMALL_STATE(181)] = 8167,
    [SMALL_STATE(182)] = 8186,
    [SMALL_STATE(183)] = 8199,
    [SMALL_STATE(184)] = 8216,
    [SMALL_STATE(185)] = 8233,
    [SMALL_STATE(186)] = 8252,
    [SMALL_STATE(187)] = 8271,
    [SMALL_STATE(188)] = 8288,
    [SMALL_STATE(189)] = 8307,
    [SMALL_STATE(190)] = 8324,
    [SMALL_STATE(191)] = 8337,
    [SMALL_STATE(192)] = 8350,
    [SMALL_STATE(193)] = 8367,
    [SMALL_STATE(194)] = 8386,
    [SMALL_STATE(195)] = 8401,
    [SMALL_STATE(196)] = 8418,
    [SMALL_STATE(197)] = 8433,
    [SMALL_STATE(198)] = 8446,
    [SMALL_STATE(199)] = 8465,
    [SMALL_STATE(200)] = 8484,
    [SMALL_STATE(201)] = 8503,
    [SMALL_STATE(202)] = 8516,
    [SMALL_STATE(203)] = 8529,
    [SMALL_STATE(204)] = 8542,
    [SMALL_STATE(205)] = 8555,
    [SMALL_STATE(206)] = 8572,
    [SMALL_STATE(207)] = 8589,
    [SMALL_STATE(208)] = 8602,
    [SMALL_STATE(209)] = 8618,
    [SMALL_STATE(210)] = 8634,
    [SMALL_STATE(211)] = 8650,
    [SMALL_STATE(212)] = 8666,
    [SMALL_STATE(213)] = 8682,
    [SMALL_STATE(214)] = 8698,
    [SMALL_STATE(215)] = 8714,
    [SMALL_STATE(216)] = 8728,
    [SMALL_STATE(217)] = 8744,
    [SMALL_STATE(218)] = 8760,
    [SMALL_STATE(219)] = 8776,
    [SMALL_STATE(220)] = 8792,
    [SMALL_STATE(221)] = 8804,
    [SMALL_STATE(222)] = 8818,
    [SMALL_STATE(223)] = 8834,
    [SMALL_STATE(224)] = 8848,
    [SMALL_STATE(225)] = 8862,
    [SMALL_STATE(226)] = 8878,
    [SMALL_STATE(227)] = 8890,
    [SMALL_STATE(228)] = 8904,
    [SMALL_STATE(229)] = 8916,
    [SMALL_STATE(230)] = 8930,
    [SMALL_STATE(231)] = 8946,
    [SMALL_STATE(232)] = 8962,
    [SMALL_STATE(233)] = 8974,
    [SMALL_STATE(234)] = 8986,
    [SMALL_STATE(235)] = 9000,
    [SMALL_STATE(236)] = 9016,
    [SMALL_STATE(237)] = 9032,
    [SMALL_STATE(238)] = 9048,
    [SMALL_STATE(239)] = 9064,
    [SMALL_STATE(240)] = 9080,
    [SMALL_STATE(241)] = 9096,
    [SMALL_STATE(242)] = 9112,
    [SMALL_STATE(243)] = 9128,
    [SMALL_STATE(244)] = 9142,
    [SMALL_STATE(245)] = 9158,
    [SMALL_STATE(246)] = 9170,
    [SMALL_STATE(247)] = 9186,
    [SMALL_STATE(248)] = 9198,
    [SMALL_STATE(249)] = 9214,
    [SMALL_STATE(250)] = 9226,
    [SMALL_STATE(251)] = 9240,
    [SMALL_STATE(252)] = 9254,
    [SMALL_STATE(253)] = 9268,
    [SMALL_STATE(254)] = 9284,
    [SMALL_STATE(255)] = 9296,
    [SMALL_STATE(256)] = 9312,
    [SMALL_STATE(257)] = 9328,
    [SMALL_STATE(258)] = 9344,
    [SMALL_STATE(259)] = 9356,
    [SMALL_STATE(260)] = 9372,
    [SMALL_STATE(261)] = 9384,
    [SMALL_STATE(262)] = 9400,
    [SMALL_STATE(263)] = 9412,
    [SMALL_STATE(264)] = 9426,
    [SMALL_STATE(265)] = 9442,
    [SMALL_STATE(266)] = 9458,
    [SMALL_STATE(267)] = 9472,
    [SMALL_STATE(268)] = 9488,
    [SMALL_STATE(269)] = 9504,
    [SMALL_STATE(270)] = 9516,
    [SMALL_STATE(271)] = 9532,
    [SMALL_STATE(272)] = 9548,
    [SMALL_STATE(273)] = 9562,
    [SMALL_STATE(274)] = 9578,
    [SMALL_STATE(275)] = 9594,
    [SMALL_STATE(276)] = 9610,
    [SMALL_STATE(277)] = 9626,
    [SMALL_STATE(278)] = 9642,
    [SMALL_STATE(279)] = 9656,
    [SMALL_STATE(280)] = 9668,
    [SMALL_STATE(281)] = 9684,
    [SMALL_STATE(282)] = 9696,
    [SMALL_STATE(283)] = 9712,
    [SMALL_STATE(284)] = 9724,
    [SMALL_STATE(285)] = 9736,
    [SMALL_STATE(286)] = 9750,
    [SMALL_STATE(287)] = 9766,
    [SMALL_STATE(288)] = 9778,
    [SMALL_STATE(289)] = 9792,
    [SMALL_STATE(290)] = 9804,
    [SMALL_STATE(291)] = 9820,
    [SMALL_STATE(292)] = 9836,
    [SMALL_STATE(293)] = 9850,
    [SMALL_STATE(294)] = 9862,
    [SMALL_STATE(295)] = 9875,
    [SMALL_STATE(296)] = 9888,
    [SMALL_STATE(297)] = 9901,
    [SMALL_STATE(298)] = 9912,
    [SMALL_STATE(299)] = 9923,
    [SMALL_STATE(300)] = 9936,
    [SMALL_STATE(301)] = 9949,
    [SMALL_STATE(302)] = 9962,
    [SMALL_STATE(303)] = 9973,
    [SMALL_STATE(304)] = 9984,
    [SMALL_STATE(305)] = 9997,
    [SMALL_STATE(306)] = 10008,
    [SMALL_STATE(307)] = 10019,
    [SMALL_STATE(308)] = 10030,
    [SMALL_STATE(309)] = 10041,
    [SMALL_STATE(310)] = 10054,
    [SMALL_STATE(311)] = 10065,
    [SMALL_STATE(312)] = 10076,
    [SMALL_STATE(313)] = 10087,
    [SMALL_STATE(314)] = 10100,
    [SMALL_STATE(315)] = 10111,
    [SMALL_STATE(316)] = 10122,
    [SMALL_STATE(317)] = 10133,
    [SMALL_STATE(318)] = 10144,
    [SMALL_STATE(319)] = 10155,
    [SMALL_STATE(320)] = 10166,
    [SMALL_STATE(321)] = 10179,
    [SMALL_STATE(322)] = 10190,
    [SMALL_STATE(323)] = 10203,
    [SMALL_STATE(324)] = 10216,
    [SMALL_STATE(325)] = 10227,
    [SMALL_STATE(326)] = 10238,
    [SMALL_STATE(327)] = 10251,
    [SMALL_STATE(328)] = 10264,
    [SMALL_STATE(329)] = 10275,
    [SMALL_STATE(330)] = 10288,
    [SMALL_STATE(331)] = 10301,
    [SMALL_STATE(332)] = 10312,
    [SMALL_STATE(333)] = 10323,
    [SMALL_STATE(334)] = 10336,
    [SMALL_STATE(335)] = 10347,
    [SMALL_STATE(336)] = 10358,
    [SMALL_STATE(337)] = 10369,
    [SMALL_STATE(338)] = 10382,
    [SMALL_STATE(339)] = 10393,
    [SMALL_STATE(340)] = 10404,
    [SMALL_STATE(341)] = 10415,
    [SMALL_STATE(342)] = 10428,
    [SMALL_STATE(343)] = 10441,
    [SMALL_STATE(344)] = 10452,
    [SMALL_STATE(345)] = 10463,
    [SMALL_STATE(346)] = 10474,
    [SMALL_STATE(347)] = 10487,
    [SMALL_STATE(348)] = 10498,
    [SMALL_STATE(349)] = 10509,
    [SMALL_STATE(350)] = 10520,
    [SMALL_STATE(351)] = 10531,
    [SMALL_STATE(352)] = 10544,
    [SMALL_STATE(353)] = 10555,
    [SMALL_STATE(354)] = 10568,
    [SMALL_STATE(355)] = 10579,
    [SMALL_STATE(356)] = 10592,
    [SMALL_STATE(357)] = 10603,
    [SMALL_STATE(358)] = 10614,
    [SMALL_STATE(359)] = 10625,
    [SMALL_STATE(360)] = 10636,
    [SMALL_STATE(361)] = 10647,
    [SMALL_STATE(362)] = 10660,
    [SMALL_STATE(363)] = 10671,
    [SMALL_STATE(364)] = 10684,
    [SMALL_STATE(365)] = 10695,
    [SMALL_STATE(366)] = 10706,
    [SMALL_STATE(367)] = 10717,
    [SMALL_STATE(368)] = 10730,
    [SMALL_STATE(369)] = 10741,
    [SMALL_STATE(370)] = 10754,
    [SMALL_STATE(371)] = 10767,
    [SMALL_STATE(372)] = 10778,
    [SMALL_STATE(373)] = 10788,
    [SMALL_STATE(374)] = 10798,
    [SMALL_STATE(375)] = 10808,
    [SMALL_STATE(376)] = 10818,
    [SMALL_STATE(377)] = 10828,
    [SMALL_STATE(378)] = 10838,
    [SMALL_STATE(379)] = 10848,
    [SMALL_STATE(380)] = 10858,
    [SMALL_STATE(381)] = 10868,
    [SMALL_STATE(382)] = 10878,
    [SMALL_STATE(383)] = 10888,
    [SMALL_STATE(384)] = 10898,
    [SMALL_STATE(385)] = 10908,
    [SMALL_STATE(386)] = 10918,
    [SMALL_STATE(387)] = 10928,
    [SMALL_STATE(388)] = 10938,
    [SMALL_STATE(389)] = 10948,
    [SMALL_STATE(390)] = 10958,
    [SMALL_STATE(391)] = 10968,
    [SMALL_STATE(392)] = 10978,
    [SMALL_STATE(393)] = 10988,
    [SMALL_STATE(394)] = 10998,
    [SMALL_STATE(395)] = 11008,
    [SMALL_STATE(396)] = 11018,
    [SMALL_STATE(397)] = 11028,
    [SMALL_STATE(398)] = 11038,
    [SMALL_STATE(399)] = 11048,
    [SMALL_STATE(400)] = 11058,
    [SMALL_STATE(401)] = 11068,
    [SMALL_STATE(402)] = 11078,
    [SMALL_STATE(403)] = 11088,
    [SMALL_STATE(404)] = 11098,
    [SMALL_STATE(405)] = 11108,
    [SMALL_STATE(406)] = 11118,
    [SMALL_STATE(407)] = 11128,
    [SMALL_STATE(408)] = 11138,
    [SMALL_STATE(409)] = 11148,
    [SMALL_STATE(410)] = 11158,
    [SMALL_STATE(411)] = 11168,
    [SMALL_STATE(412)] = 11178,
    [SMALL_STATE(413)] = 11188,
    [SMALL_STATE(414)] = 11198,
    [SMALL_STATE(415)] = 11208,
    [SMALL_STATE(416)] = 11218,
    [SMALL_STATE(417)] = 11228,
    [SMALL_STATE(418)] = 11238,
    [SMALL_STATE(419)] = 11248,
    [SMALL_STATE(420)] = 11258,
    [SMALL_STATE(421)] = 11268,
    [SMALL_STATE(422)] = 11278,
    [SMALL_STATE(423)] = 11288,
    [SMALL_STATE(424)] = 11298,
    [SMALL_STATE(425)] = 11308,
    [SMALL_STATE(426)] = 11318,
    [SMALL_STATE(427)] = 11328,
    [SMALL_STATE(428)] = 11338,
    [SMALL_STATE(429)] = 11348,
    [SMALL_STATE(430)] = 11358,
    [SMALL_STATE(431)] = 11368,
    [SMALL_STATE(432)] = 11378,
    [SMALL_STATE(433)] = 11388,
    [SMALL_STATE(434)] = 11398,
    [SMALL_STATE(435)] = 11408,
    [SMALL_STATE(436)] = 11418,
    [SMALL_STATE(437)] = 11428,
    [SMALL_STATE(438)] = 11438,
    [SMALL_STATE(439)] = 11448,
    [SMALL_STATE(440)] = 11458,
    [SMALL_STATE(441)] = 11468,
    [SMALL_STATE(442)] = 11478,
    [SMALL_STATE(443)] = 11488,
    [SMALL_STATE(444)] = 11498,
    [SMALL_STATE(445)] = 11508,
    [SMALL_STATE(446)] = 11518,
    [SMALL_STATE(447)] = 11528,
    [SMALL_STATE(448)] = 11538,
    [SMALL_STATE(449)] = 11548,
    [SMALL_STATE(450)] = 11558,
    [SMALL_STATE(451)] = 11568,
    [SMALL_STATE(452)] = 11578,
    [SMALL_STATE(453)] = 11588,
    [SMALL_STATE(454)] = 11598,
    [SMALL_STATE(455)] = 11608,
    [SMALL_STATE(456)] = 11618,
    [SMALL_STATE(457)] = 11628,
    [SMALL_STATE(458)] = 11638,
    [SMALL_STATE(459)] = 11648,
    [SMALL_STATE(460)] = 11658,
    [SMALL_STATE(461)] = 11668,
    [SMALL_STATE(462)] = 11678,
    [SMALL_STATE(463)] = 11688,
    [SMALL_STATE(464)] = 11698,
    [SMALL_STATE(465)] = 11708,
    [SMALL_STATE(466)] = 11718,
    [SMALL_STATE(467)] = 11728,
    [SMALL_STATE(468)] = 11738,
    [SMALL_STATE(469)] = 11748,
    [SMALL_STATE(470)] = 11758,
    [SMALL_STATE(471)] = 11768,
    [SMALL_STATE(472)] = 11778,
    [SMALL_STATE(473)] = 11788,
    [SMALL_STATE(474)] = 11798,
    [SMALL_STATE(475)] = 11808,
    [SMALL_STATE(476)] = 11818,
    [SMALL_STATE(477)] = 11828,
    [SMALL_STATE(478)] = 11838,
    [SMALL_STATE(479)] = 11848,
    [SMALL_STATE(480)] = 11858,
    [SMALL_STATE(481)] = 11868,
    [SMALL_STATE(482)] = 11878,
    [SMALL_STATE(483)] = 11888,
    [SMALL_STATE(484)] = 11898,
    [SMALL_STATE(485)] = 11908,
    [SMALL_STATE(486)] = 11918,
    [SMALL_STATE(487)] = 11928,
    [SMALL_STATE(488)] = 11938,
    [SMALL_STATE(489)] = 11948,
    [SMALL_STATE(490)] = 11958,
    [SMALL_STATE(491)] = 11968,
    [SMALL_STATE(492)] = 11978,
    [SMALL_STATE(493)] = 11988,
    [SMALL_STATE(494)] = 11998,
    [SMALL_STATE(495)] = 12008,
    [SMALL_STATE(496)] = 12018,
    [SMALL_STATE(497)] = 12028,
    [SMALL_STATE(498)] = 12038,
    [SMALL_STATE(499)] = 12048,
    [SMALL_STATE(500)] = 12058,
    [SMALL_STATE(501)] = 12068,
    [SMALL_STATE(502)] = 12078,
    [SMALL_STATE(503)] = 12088,
    [SMALL_STATE(504)] = 12098,
    [SMALL_STATE(505)] = 12108,
    [SMALL_STATE(506)] = 12118,
    [SMALL_STATE(507)] = 12128,
    [SMALL_STATE(508)] = 12138,
    [SMALL_STATE(509)] = 12148,
    [SMALL_STATE(510)] = 12158,
    [SMALL_STATE(511)] = 12168,
    [SMALL_STATE(512)] = 12178,
    [SMALL_STATE(513)] = 12188,
    [SMALL_STATE(514)] = 12198,
    [SMALL_STATE(515)] = 12208,
    [SMALL_STATE(516)] = 12218,
    [SMALL_STATE(517)] = 12228,
    [SMALL_STATE(518)] = 12238,
    [SMALL_STATE(519)] = 12248,
    [SMALL_STATE(520)] = 12258,
    [SMALL_STATE(521)] = 12268,
    [SMALL_STATE(522)] = 12278,
    [SMALL_STATE(523)] = 12288,
    [SMALL_STATE(524)] = 12298,
    [SMALL_STATE(525)] = 12308,
    [SMALL_STATE(526)] = 12318,
    [SMALL_STATE(527)] = 12328,
    [SMALL_STATE(528)] = 12338,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(300),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(524),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(523),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(521),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(519),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(515),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(513),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(508),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(506),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(503),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(500),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(499),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(201),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(204),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(289),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(450),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(176),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(226),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(287),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(454),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(448),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(524),
    [95] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(416),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(415),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(521),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(519),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(511),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(510),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(508),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(408),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(304),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(109),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(201),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(202),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(203),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(203),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(204),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(289),
    [143] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(450),
    [146] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(207),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(176),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(176),
    [155] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(175),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(197),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(197),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(226),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(226),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(191),
    [173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(466),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(196),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(287),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(454),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(448),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(524),
    [191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    [193] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(416),
    [196] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(415),
    [199] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(45),
    [202] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(521),
    [205] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(519),
    [208] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(511),
    [211] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(510),
    [214] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(508),
    [217] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(58),
    [220] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(47),
    [223] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(408),
    [226] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(13),
    [229] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(506),
    [232] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(304),
    [235] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(249),
    [238] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(499),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(109),
    [244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [254] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(201),
    [257] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(202),
    [260] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(203),
    [263] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(203),
    [266] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(204),
    [269] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(289),
    [272] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(450),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(207),
    [278] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(176),
    [281] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(176),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [287] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(197),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(197),
    [293] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(226),
    [296] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(226),
    [299] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(191),
    [302] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(466),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(196),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(287),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(454),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(448),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(524),
    [320] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [322] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(416),
    [325] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(415),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(45),
    [331] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(521),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(519),
    [337] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(511),
    [340] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(510),
    [343] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(508),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(58),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(13),
    [352] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(506),
    [355] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(304),
    [358] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(249),
    [361] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(499),
    [364] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(109),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(361),
    [375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(121),
    [381] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [385] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(201),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(289),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(450),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(207),
    [411] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [420] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [423] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [426] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(226),
    [429] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(226),
    [432] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(191),
    [435] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(466),
    [438] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [441] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(287),
    [444] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(454),
    [447] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(448),
    [450] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [452] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(70),
    [455] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(404),
    [458] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(402),
    [461] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(109),
    [464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [478] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [480] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [482] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [488] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [490] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(457),
    [492] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(393),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [496] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [498] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [500] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(503),
    [502] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [504] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(201),
    [507] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [510] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [513] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [516] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [519] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(459),
    [522] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(457),
    [525] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(207),
    [528] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [531] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [534] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [540] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [543] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(226),
    [546] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(226),
    [549] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(191),
    [552] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(466),
    [555] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [558] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(393),
    [561] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(454),
    [564] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    [566] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(508),
    [569] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(58),
    [572] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(13),
    [575] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(506),
    [578] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(109),
    [581] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(524),
    [584] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    [586] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(523),
    [589] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(301),
    [592] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(521),
    [595] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(519),
    [598] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(515),
    [601] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(268),
    [604] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(513),
    [607] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(511),
    [610] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(510),
    [613] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(508),
    [616] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(58),
    [619] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(238),
    [622] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(13),
    [625] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(506),
    [628] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(304),
    [631] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(503),
    [634] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(170),
    [637] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(502),
    [640] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(500),
    [643] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(249),
    [646] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(499),
    [649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(426),
    [653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [655] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(524),
    [658] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(523),
    [661] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(301),
    [664] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(521),
    [667] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(519),
    [670] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(515),
    [673] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(268),
    [676] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(513),
    [679] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(511),
    [682] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(510),
    [685] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(508),
    [688] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(58),
    [691] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(13),
    [694] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(506),
    [697] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(304),
    [700] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(503),
    [703] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(170),
    [706] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(502),
    [709] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(500),
    [712] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(249),
    [715] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(499),
    [718] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(501),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [722] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [724] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(369),
    [726] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(387),
    [728] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [730] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [732] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [736] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [738] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6),
    [742] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [746] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7),
    [750] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5),
    [754] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1),
    [758] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1),
    [760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1),
    [762] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4),
    [764] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4),
    [766] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [770] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [774] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(70),
    [777] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(404),
    [780] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(402),
    [783] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [787] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [791] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [795] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [799] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [803] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [805] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [807] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [811] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [815] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [819] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [823] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [827] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [831] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [839] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1),
    [841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [843] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2),
    [847] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(490),
    [849] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [851] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [863] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [867] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(300),
    [870] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [876] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [878] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [880] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [882] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [884] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [886] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [894] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3),
    [900] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [904] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [908] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [912] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [916] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [920] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [924] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [928] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [930] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [932] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [938] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(111),
    [940] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [942] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [944] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [948] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [952] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [956] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [960] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [964] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [968] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [972] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [974] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1),
    [976] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [978] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [984] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [988] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [994] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [1004] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [1014] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(170),
    [1017] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(502),
    [1020] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(500),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [1041] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [1061] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(78),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [1074] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(472),
    [1077] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(87),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [1098] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(249),
    [1101] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(499),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [1112] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(397),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [1145] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(344),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [1162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(234),
    [1165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(234),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1176] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(206),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(234),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [1227] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(430),
    [1229] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2),
    [1235] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(299),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1254] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(297),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1),
    [1265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(181),
    [1268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1276] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(161),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1281] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2),
    SHIFT_REPEAT(326),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [1290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1294] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [1314] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(189),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    [1331] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    SHIFT_REPEAT(11),
    [1334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    [1336] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    SHIFT_REPEAT(39),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(514),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(517),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1359] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(172),
    [1362] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1364] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [1370] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [1372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [1374] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1376] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1378] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1380] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(209),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    [1393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    SHIFT_REPEAT(514),
    [1396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1398] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2),
    [1400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1402] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1404] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1408] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(355),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(478),
    [1437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(423),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 7),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 7),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(491),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(487),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(485),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [1625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1639] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [1641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [1643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1647] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(528),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7),
    [1655] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [1673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [1677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1679] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [1683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1695] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1697] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1735] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [1743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [1747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [1757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1761] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [1763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1785] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [1789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [1791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1795] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [1797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [1801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [1811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [1819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(520),
    [1823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2),
    [1827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6),
    [1831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [1841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [1843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1845] = { .entry = { .count = 1, .reusable = true } },
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
