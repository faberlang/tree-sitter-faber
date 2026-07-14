#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 265
#define ALIAS_COUNT 0
#define TOKEN_COUNT 241
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_frontmatter = 1,
  sym_at_sign = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_eq_sign = 5,
  anon_sym_COMMA = 6,
  anon_sym_cli = 7,
  anon_sym_cursor = 8,
  anon_sym_futura = 9,
  anon_sym_imperia = 10,
  anon_sym_imperium = 11,
  anon_sym_json = 12,
  anon_sym_operandus = 13,
  anon_sym_optio = 14,
  anon_sym_privata = 15,
  anon_sym_protecta = 16,
  anon_sym_publica = 17,
  anon_sym_versio = 18,
  anon_sym_vertex = 19,
  anon_sym_brevis = 20,
  anon_sym_descriptio = 21,
  anon_sym_longum = 22,
  anon_sym_nomen = 23,
  anon_sym_ubique = 24,
  anon_sym_ascii = 25,
  anon_sym_bivalens = 26,
  anon_sym_copia = 27,
  anon_sym_f16 = 28,
  anon_sym_f32 = 29,
  anon_sym_f64 = 30,
  anon_sym_fractus = 31,
  anon_sym_i16 = 32,
  anon_sym_i32 = 33,
  anon_sym_i64 = 34,
  anon_sym_i8 = 35,
  anon_sym_ignotum = 36,
  anon_sym_instans = 37,
  anon_sym_intervallum = 38,
  anon_sym_lf16 = 39,
  anon_sym_lf32 = 40,
  anon_sym_lf64 = 41,
  anon_sym_li16 = 42,
  anon_sym_li32 = 43,
  anon_sym_li64 = 44,
  anon_sym_li8 = 45,
  anon_sym_lista = 46,
  anon_sym_lu16 = 47,
  anon_sym_lu32 = 48,
  anon_sym_lu64 = 49,
  anon_sym_lu8 = 50,
  anon_sym_matrix = 51,
  anon_sym_mf16 = 52,
  anon_sym_mf32 = 53,
  anon_sym_mf64 = 54,
  anon_sym_mi16 = 55,
  anon_sym_mi32 = 56,
  anon_sym_mi64 = 57,
  anon_sym_mi8 = 58,
  anon_sym_mu16 = 59,
  anon_sym_mu32 = 60,
  anon_sym_mu64 = 61,
  anon_sym_mu8 = 62,
  anon_sym_numerus = 63,
  anon_sym_numquam = 64,
  anon_sym_octet = 65,
  anon_sym_octeti = 66,
  anon_sym_promissum = 67,
  anon_sym_regex = 68,
  anon_sym_series = 69,
  anon_sym_sf16 = 70,
  anon_sym_sf32 = 71,
  anon_sym_sf64 = 72,
  anon_sym_si16 = 73,
  anon_sym_si32 = 74,
  anon_sym_si64 = 75,
  anon_sym_si8 = 76,
  anon_sym_sparsa = 77,
  anon_sym_su16 = 78,
  anon_sym_su32 = 79,
  anon_sym_su64 = 80,
  anon_sym_su8 = 81,
  anon_sym_tabula = 82,
  anon_sym_tensor = 83,
  anon_sym_textus = 84,
  anon_sym_tf16 = 85,
  anon_sym_tf32 = 86,
  anon_sym_tf64 = 87,
  anon_sym_ti16 = 88,
  anon_sym_ti32 = 89,
  anon_sym_ti64 = 90,
  anon_sym_ti8 = 91,
  anon_sym_tu16 = 92,
  anon_sym_tu32 = 93,
  anon_sym_tu64 = 94,
  anon_sym_tu8 = 95,
  anon_sym_u16 = 96,
  anon_sym_u32 = 97,
  anon_sym_u64 = 98,
  anon_sym_u8 = 99,
  anon_sym_unio = 100,
  anon_sym_vacua = 101,
  anon_sym_vacuum = 102,
  anon_sym_valor = 103,
  anon_sym_vector = 104,
  anon_sym_vf16 = 105,
  anon_sym_vf32 = 106,
  anon_sym_vf64 = 107,
  anon_sym_vi16 = 108,
  anon_sym_vi32 = 109,
  anon_sym_vi64 = 110,
  anon_sym_vi8 = 111,
  anon_sym_vu16 = 112,
  anon_sym_vu32 = 113,
  anon_sym_vu64 = 114,
  anon_sym_vu8 = 115,
  anon_sym_ad = 116,
  anon_sym_adfirma = 117,
  anon_sym_argumenta = 118,
  anon_sym_cape = 119,
  anon_sym_casu = 120,
  anon_sym_ceterum = 121,
  anon_sym_cura = 122,
  anon_sym_custodi = 123,
  anon_sym_demum = 124,
  anon_sym_discerne = 125,
  anon_sym_dum = 126,
  anon_sym_elige = 127,
  anon_sym_emitte = 128,
  anon_sym_ergo = 129,
  anon_sym_fac = 130,
  anon_sym_iace = 131,
  anon_sym_incipiet = 132,
  anon_sym_incipit = 133,
  anon_sym_itera = 134,
  anon_sym_mori = 135,
  anon_sym_perge = 136,
  anon_sym_redde = 137,
  anon_sym_rumpe = 138,
  anon_sym_secus = 139,
  anon_sym_si = 140,
  anon_sym_sic = 141,
  anon_sym_sin = 142,
  anon_sym_tacet = 143,
  anon_sym_tempta = 144,
  anon_sym_abstractus = 145,
  anon_sym_ceteri = 146,
  anon_sym_curata = 147,
  anon_sym_discretio = 148,
  anon_sym_errata = 149,
  anon_sym_exitus = 150,
  anon_sym_fixum = 151,
  anon_sym_functio = 152,
  anon_sym_generis = 153,
  anon_sym_genus = 154,
  anon_sym_iacit = 155,
  anon_sym_immutata = 156,
  anon_sym_implendum = 157,
  anon_sym_importa = 158,
  anon_sym_magnitudo = 159,
  anon_sym_nexum = 160,
  anon_sym_optiones = 161,
  anon_sym_ordo = 162,
  anon_sym_prae = 163,
  anon_sym_sit = 164,
  anon_sym_sponte = 165,
  anon_sym_typus = 166,
  anon_sym_varia = 167,
  anon_sym_ante = 168,
  anon_sym_aut = 169,
  anon_sym_cede = 170,
  anon_sym_clausura = 171,
  anon_sym_de = 172,
  anon_sym_ego = 173,
  anon_sym_est = 174,
  anon_sym_et = 175,
  anon_sym_ex = 176,
  anon_sym_finge = 177,
  anon_sym_fragilis = 178,
  anon_sym_futurum = 179,
  anon_sym_implet = 180,
  anon_sym_in = 181,
  anon_sym_inter = 182,
  anon_sym_intra = 183,
  anon_sym_lege = 184,
  anon_sym_lineam = 185,
  anon_sym_metior = 186,
  anon_sym_modulus = 187,
  anon_sym_mone = 188,
  anon_sym_negativum = 189,
  anon_sym_nihil = 190,
  anon_sym_non = 191,
  anon_sym_nonnihil = 192,
  anon_sym_nonnulla = 193,
  anon_sym_nota = 194,
  anon_sym_nulla = 195,
  anon_sym_omitte = 196,
  anon_sym_omnia = 197,
  anon_sym_per = 198,
  anon_sym_positivum = 199,
  anon_sym_postpara = 200,
  anon_sym_postparabit = 201,
  anon_sym_praefixum = 202,
  anon_sym_praepara = 203,
  anon_sym_praeparabit = 204,
  anon_sym_pro = 205,
  anon_sym_proba = 206,
  anon_sym_probandum = 207,
  anon_sym_repete = 208,
  anon_sym_requirit = 209,
  anon_sym_scribe = 210,
  anon_sym_scriptum = 211,
  anon_sym_solum = 212,
  anon_sym_solum_in = 213,
  anon_sym_sparge = 214,
  anon_sym_sub = 215,
  anon_sym_tag = 216,
  anon_sym_temporis = 217,
  anon_sym_usque = 218,
  anon_sym_ut = 219,
  anon_sym_vel = 220,
  anon_sym_vide = 221,
  anon_sym_falsum = 222,
  anon_sym_verum = 223,
  sym_guillemet_string = 224,
  sym_octeti_string = 225,
  sym_backtick_string = 226,
  sym_ascii_string = 227,
  sym_string = 228,
  sym_number = 229,
  sym_identifier = 230,
  sym_operator = 231,
  anon_sym_LPAREN = 232,
  anon_sym_RPAREN = 233,
  anon_sym_LBRACK = 234,
  anon_sym_RBRACK = 235,
  anon_sym_COLON = 236,
  anon_sym_SEMI = 237,
  sym_hash = 238,
  sym_line_comment = 239,
  sym_faber_newline = 240,
  sym_program = 241,
  sym_lbrace = 242,
  sym_rbrace = 243,
  sym_comma_sign = 244,
  sym_annotation = 245,
  sym_known_annotation_name = 246,
  sym_annotation_name = 247,
  sym_annotation_modifier = 248,
  sym_annotation_value_type = 249,
  sym_braced_annotation = 250,
  sym_annotation_field = 251,
  sym_annotation_arguments = 252,
  sym__annotation_argument = 253,
  sym__token = 254,
  sym_keyword_control = 255,
  sym_keyword_declaration = 256,
  sym_keyword_other = 257,
  sym_builtin_type = 258,
  sym_boolean = 259,
  sym_punctuation = 260,
  aux_sym_program_repeat1 = 261,
  aux_sym_braced_annotation_repeat1 = 262,
  aux_sym_braced_annotation_repeat2 = 263,
  aux_sym_annotation_arguments_repeat1 = 264,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_frontmatter] = "frontmatter",
  [sym_at_sign] = "at_sign",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_eq_sign] = "eq_sign",
  [anon_sym_COMMA] = ",",
  [anon_sym_cli] = "cli",
  [anon_sym_cursor] = "cursor",
  [anon_sym_futura] = "futura",
  [anon_sym_imperia] = "imperia",
  [anon_sym_imperium] = "imperium",
  [anon_sym_json] = "json",
  [anon_sym_operandus] = "operandus",
  [anon_sym_optio] = "optio",
  [anon_sym_privata] = "privata",
  [anon_sym_protecta] = "protecta",
  [anon_sym_publica] = "publica",
  [anon_sym_versio] = "versio",
  [anon_sym_vertex] = "vertex",
  [anon_sym_brevis] = "brevis",
  [anon_sym_descriptio] = "descriptio",
  [anon_sym_longum] = "longum",
  [anon_sym_nomen] = "nomen",
  [anon_sym_ubique] = "ubique",
  [anon_sym_ascii] = "ascii",
  [anon_sym_bivalens] = "bivalens",
  [anon_sym_copia] = "copia",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_fractus] = "fractus",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i8] = "i8",
  [anon_sym_ignotum] = "ignotum",
  [anon_sym_instans] = "instans",
  [anon_sym_intervallum] = "intervallum",
  [anon_sym_lf16] = "lf16",
  [anon_sym_lf32] = "lf32",
  [anon_sym_lf64] = "lf64",
  [anon_sym_li16] = "li16",
  [anon_sym_li32] = "li32",
  [anon_sym_li64] = "li64",
  [anon_sym_li8] = "li8",
  [anon_sym_lista] = "lista",
  [anon_sym_lu16] = "lu16",
  [anon_sym_lu32] = "lu32",
  [anon_sym_lu64] = "lu64",
  [anon_sym_lu8] = "lu8",
  [anon_sym_matrix] = "matrix",
  [anon_sym_mf16] = "mf16",
  [anon_sym_mf32] = "mf32",
  [anon_sym_mf64] = "mf64",
  [anon_sym_mi16] = "mi16",
  [anon_sym_mi32] = "mi32",
  [anon_sym_mi64] = "mi64",
  [anon_sym_mi8] = "mi8",
  [anon_sym_mu16] = "mu16",
  [anon_sym_mu32] = "mu32",
  [anon_sym_mu64] = "mu64",
  [anon_sym_mu8] = "mu8",
  [anon_sym_numerus] = "numerus",
  [anon_sym_numquam] = "numquam",
  [anon_sym_octet] = "octet",
  [anon_sym_octeti] = "octeti",
  [anon_sym_promissum] = "promissum",
  [anon_sym_regex] = "regex",
  [anon_sym_series] = "series",
  [anon_sym_sf16] = "sf16",
  [anon_sym_sf32] = "sf32",
  [anon_sym_sf64] = "sf64",
  [anon_sym_si16] = "si16",
  [anon_sym_si32] = "si32",
  [anon_sym_si64] = "si64",
  [anon_sym_si8] = "si8",
  [anon_sym_sparsa] = "sparsa",
  [anon_sym_su16] = "su16",
  [anon_sym_su32] = "su32",
  [anon_sym_su64] = "su64",
  [anon_sym_su8] = "su8",
  [anon_sym_tabula] = "tabula",
  [anon_sym_tensor] = "tensor",
  [anon_sym_textus] = "textus",
  [anon_sym_tf16] = "tf16",
  [anon_sym_tf32] = "tf32",
  [anon_sym_tf64] = "tf64",
  [anon_sym_ti16] = "ti16",
  [anon_sym_ti32] = "ti32",
  [anon_sym_ti64] = "ti64",
  [anon_sym_ti8] = "ti8",
  [anon_sym_tu16] = "tu16",
  [anon_sym_tu32] = "tu32",
  [anon_sym_tu64] = "tu64",
  [anon_sym_tu8] = "tu8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u8] = "u8",
  [anon_sym_unio] = "unio",
  [anon_sym_vacua] = "vacua",
  [anon_sym_vacuum] = "vacuum",
  [anon_sym_valor] = "valor",
  [anon_sym_vector] = "vector",
  [anon_sym_vf16] = "vf16",
  [anon_sym_vf32] = "vf32",
  [anon_sym_vf64] = "vf64",
  [anon_sym_vi16] = "vi16",
  [anon_sym_vi32] = "vi32",
  [anon_sym_vi64] = "vi64",
  [anon_sym_vi8] = "vi8",
  [anon_sym_vu16] = "vu16",
  [anon_sym_vu32] = "vu32",
  [anon_sym_vu64] = "vu64",
  [anon_sym_vu8] = "vu8",
  [anon_sym_ad] = "ad",
  [anon_sym_adfirma] = "adfirma",
  [anon_sym_argumenta] = "argumenta",
  [anon_sym_cape] = "cape",
  [anon_sym_casu] = "casu",
  [anon_sym_ceterum] = "ceterum",
  [anon_sym_cura] = "cura",
  [anon_sym_custodi] = "custodi",
  [anon_sym_demum] = "demum",
  [anon_sym_discerne] = "discerne",
  [anon_sym_dum] = "dum",
  [anon_sym_elige] = "elige",
  [anon_sym_emitte] = "emitte",
  [anon_sym_ergo] = "ergo",
  [anon_sym_fac] = "fac",
  [anon_sym_iace] = "iace",
  [anon_sym_incipiet] = "incipiet",
  [anon_sym_incipit] = "incipit",
  [anon_sym_itera] = "itera",
  [anon_sym_mori] = "mori",
  [anon_sym_perge] = "perge",
  [anon_sym_redde] = "redde",
  [anon_sym_rumpe] = "rumpe",
  [anon_sym_secus] = "secus",
  [anon_sym_si] = "si",
  [anon_sym_sic] = "sic",
  [anon_sym_sin] = "sin",
  [anon_sym_tacet] = "tacet",
  [anon_sym_tempta] = "tempta",
  [anon_sym_abstractus] = "abstractus",
  [anon_sym_ceteri] = "ceteri",
  [anon_sym_curata] = "curata",
  [anon_sym_discretio] = "discretio",
  [anon_sym_errata] = "errata",
  [anon_sym_exitus] = "exitus",
  [anon_sym_fixum] = "fixum",
  [anon_sym_functio] = "functio",
  [anon_sym_generis] = "generis",
  [anon_sym_genus] = "genus",
  [anon_sym_iacit] = "iacit",
  [anon_sym_immutata] = "immutata",
  [anon_sym_implendum] = "implendum",
  [anon_sym_importa] = "importa",
  [anon_sym_magnitudo] = "magnitudo",
  [anon_sym_nexum] = "nexum",
  [anon_sym_optiones] = "optiones",
  [anon_sym_ordo] = "ordo",
  [anon_sym_prae] = "prae",
  [anon_sym_sit] = "sit",
  [anon_sym_sponte] = "sponte",
  [anon_sym_typus] = "typus",
  [anon_sym_varia] = "varia",
  [anon_sym_ante] = "ante",
  [anon_sym_aut] = "aut",
  [anon_sym_cede] = "cede",
  [anon_sym_clausura] = "clausura",
  [anon_sym_de] = "de",
  [anon_sym_ego] = "ego",
  [anon_sym_est] = "est",
  [anon_sym_et] = "et",
  [anon_sym_ex] = "ex",
  [anon_sym_finge] = "finge",
  [anon_sym_fragilis] = "fragilis",
  [anon_sym_futurum] = "futurum",
  [anon_sym_implet] = "implet",
  [anon_sym_in] = "in",
  [anon_sym_inter] = "inter",
  [anon_sym_intra] = "intra",
  [anon_sym_lege] = "lege",
  [anon_sym_lineam] = "lineam",
  [anon_sym_metior] = "metior",
  [anon_sym_modulus] = "modulus",
  [anon_sym_mone] = "mone",
  [anon_sym_negativum] = "negativum",
  [anon_sym_nihil] = "nihil",
  [anon_sym_non] = "non",
  [anon_sym_nonnihil] = "nonnihil",
  [anon_sym_nonnulla] = "nonnulla",
  [anon_sym_nota] = "nota",
  [anon_sym_nulla] = "nulla",
  [anon_sym_omitte] = "omitte",
  [anon_sym_omnia] = "omnia",
  [anon_sym_per] = "per",
  [anon_sym_positivum] = "positivum",
  [anon_sym_postpara] = "postpara",
  [anon_sym_postparabit] = "postparabit",
  [anon_sym_praefixum] = "praefixum",
  [anon_sym_praepara] = "praepara",
  [anon_sym_praeparabit] = "praeparabit",
  [anon_sym_pro] = "pro",
  [anon_sym_proba] = "proba",
  [anon_sym_probandum] = "probandum",
  [anon_sym_repete] = "repete",
  [anon_sym_requirit] = "requirit",
  [anon_sym_scribe] = "scribe",
  [anon_sym_scriptum] = "scriptum",
  [anon_sym_solum] = "solum",
  [anon_sym_solum_in] = "solum_in",
  [anon_sym_sparge] = "sparge",
  [anon_sym_sub] = "sub",
  [anon_sym_tag] = "tag",
  [anon_sym_temporis] = "temporis",
  [anon_sym_usque] = "usque",
  [anon_sym_ut] = "ut",
  [anon_sym_vel] = "vel",
  [anon_sym_vide] = "vide",
  [anon_sym_falsum] = "falsum",
  [anon_sym_verum] = "verum",
  [sym_guillemet_string] = "guillemet_string",
  [sym_octeti_string] = "octeti_string",
  [sym_backtick_string] = "backtick_string",
  [sym_ascii_string] = "ascii_string",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_operator] = "operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_hash] = "hash",
  [sym_line_comment] = "line_comment",
  [sym_faber_newline] = "faber_newline",
  [sym_program] = "program",
  [sym_lbrace] = "lbrace",
  [sym_rbrace] = "rbrace",
  [sym_comma_sign] = "comma_sign",
  [sym_annotation] = "annotation",
  [sym_known_annotation_name] = "known_annotation_name",
  [sym_annotation_name] = "annotation_name",
  [sym_annotation_modifier] = "annotation_modifier",
  [sym_annotation_value_type] = "annotation_value_type",
  [sym_braced_annotation] = "braced_annotation",
  [sym_annotation_field] = "annotation_field",
  [sym_annotation_arguments] = "annotation_arguments",
  [sym__annotation_argument] = "_annotation_argument",
  [sym__token] = "_token",
  [sym_keyword_control] = "keyword_control",
  [sym_keyword_declaration] = "keyword_declaration",
  [sym_keyword_other] = "keyword_other",
  [sym_builtin_type] = "builtin_type",
  [sym_boolean] = "boolean",
  [sym_punctuation] = "punctuation",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_braced_annotation_repeat1] = "braced_annotation_repeat1",
  [aux_sym_braced_annotation_repeat2] = "braced_annotation_repeat2",
  [aux_sym_annotation_arguments_repeat1] = "annotation_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_frontmatter] = sym_frontmatter,
  [sym_at_sign] = sym_at_sign,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_eq_sign] = sym_eq_sign,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_cli] = anon_sym_cli,
  [anon_sym_cursor] = anon_sym_cursor,
  [anon_sym_futura] = anon_sym_futura,
  [anon_sym_imperia] = anon_sym_imperia,
  [anon_sym_imperium] = anon_sym_imperium,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_operandus] = anon_sym_operandus,
  [anon_sym_optio] = anon_sym_optio,
  [anon_sym_privata] = anon_sym_privata,
  [anon_sym_protecta] = anon_sym_protecta,
  [anon_sym_publica] = anon_sym_publica,
  [anon_sym_versio] = anon_sym_versio,
  [anon_sym_vertex] = anon_sym_vertex,
  [anon_sym_brevis] = anon_sym_brevis,
  [anon_sym_descriptio] = anon_sym_descriptio,
  [anon_sym_longum] = anon_sym_longum,
  [anon_sym_nomen] = anon_sym_nomen,
  [anon_sym_ubique] = anon_sym_ubique,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_bivalens] = anon_sym_bivalens,
  [anon_sym_copia] = anon_sym_copia,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_fractus] = anon_sym_fractus,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_ignotum] = anon_sym_ignotum,
  [anon_sym_instans] = anon_sym_instans,
  [anon_sym_intervallum] = anon_sym_intervallum,
  [anon_sym_lf16] = anon_sym_lf16,
  [anon_sym_lf32] = anon_sym_lf32,
  [anon_sym_lf64] = anon_sym_lf64,
  [anon_sym_li16] = anon_sym_li16,
  [anon_sym_li32] = anon_sym_li32,
  [anon_sym_li64] = anon_sym_li64,
  [anon_sym_li8] = anon_sym_li8,
  [anon_sym_lista] = anon_sym_lista,
  [anon_sym_lu16] = anon_sym_lu16,
  [anon_sym_lu32] = anon_sym_lu32,
  [anon_sym_lu64] = anon_sym_lu64,
  [anon_sym_lu8] = anon_sym_lu8,
  [anon_sym_matrix] = anon_sym_matrix,
  [anon_sym_mf16] = anon_sym_mf16,
  [anon_sym_mf32] = anon_sym_mf32,
  [anon_sym_mf64] = anon_sym_mf64,
  [anon_sym_mi16] = anon_sym_mi16,
  [anon_sym_mi32] = anon_sym_mi32,
  [anon_sym_mi64] = anon_sym_mi64,
  [anon_sym_mi8] = anon_sym_mi8,
  [anon_sym_mu16] = anon_sym_mu16,
  [anon_sym_mu32] = anon_sym_mu32,
  [anon_sym_mu64] = anon_sym_mu64,
  [anon_sym_mu8] = anon_sym_mu8,
  [anon_sym_numerus] = anon_sym_numerus,
  [anon_sym_numquam] = anon_sym_numquam,
  [anon_sym_octet] = anon_sym_octet,
  [anon_sym_octeti] = anon_sym_octeti,
  [anon_sym_promissum] = anon_sym_promissum,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_series] = anon_sym_series,
  [anon_sym_sf16] = anon_sym_sf16,
  [anon_sym_sf32] = anon_sym_sf32,
  [anon_sym_sf64] = anon_sym_sf64,
  [anon_sym_si16] = anon_sym_si16,
  [anon_sym_si32] = anon_sym_si32,
  [anon_sym_si64] = anon_sym_si64,
  [anon_sym_si8] = anon_sym_si8,
  [anon_sym_sparsa] = anon_sym_sparsa,
  [anon_sym_su16] = anon_sym_su16,
  [anon_sym_su32] = anon_sym_su32,
  [anon_sym_su64] = anon_sym_su64,
  [anon_sym_su8] = anon_sym_su8,
  [anon_sym_tabula] = anon_sym_tabula,
  [anon_sym_tensor] = anon_sym_tensor,
  [anon_sym_textus] = anon_sym_textus,
  [anon_sym_tf16] = anon_sym_tf16,
  [anon_sym_tf32] = anon_sym_tf32,
  [anon_sym_tf64] = anon_sym_tf64,
  [anon_sym_ti16] = anon_sym_ti16,
  [anon_sym_ti32] = anon_sym_ti32,
  [anon_sym_ti64] = anon_sym_ti64,
  [anon_sym_ti8] = anon_sym_ti8,
  [anon_sym_tu16] = anon_sym_tu16,
  [anon_sym_tu32] = anon_sym_tu32,
  [anon_sym_tu64] = anon_sym_tu64,
  [anon_sym_tu8] = anon_sym_tu8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_unio] = anon_sym_unio,
  [anon_sym_vacua] = anon_sym_vacua,
  [anon_sym_vacuum] = anon_sym_vacuum,
  [anon_sym_valor] = anon_sym_valor,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_vf16] = anon_sym_vf16,
  [anon_sym_vf32] = anon_sym_vf32,
  [anon_sym_vf64] = anon_sym_vf64,
  [anon_sym_vi16] = anon_sym_vi16,
  [anon_sym_vi32] = anon_sym_vi32,
  [anon_sym_vi64] = anon_sym_vi64,
  [anon_sym_vi8] = anon_sym_vi8,
  [anon_sym_vu16] = anon_sym_vu16,
  [anon_sym_vu32] = anon_sym_vu32,
  [anon_sym_vu64] = anon_sym_vu64,
  [anon_sym_vu8] = anon_sym_vu8,
  [anon_sym_ad] = anon_sym_ad,
  [anon_sym_adfirma] = anon_sym_adfirma,
  [anon_sym_argumenta] = anon_sym_argumenta,
  [anon_sym_cape] = anon_sym_cape,
  [anon_sym_casu] = anon_sym_casu,
  [anon_sym_ceterum] = anon_sym_ceterum,
  [anon_sym_cura] = anon_sym_cura,
  [anon_sym_custodi] = anon_sym_custodi,
  [anon_sym_demum] = anon_sym_demum,
  [anon_sym_discerne] = anon_sym_discerne,
  [anon_sym_dum] = anon_sym_dum,
  [anon_sym_elige] = anon_sym_elige,
  [anon_sym_emitte] = anon_sym_emitte,
  [anon_sym_ergo] = anon_sym_ergo,
  [anon_sym_fac] = anon_sym_fac,
  [anon_sym_iace] = anon_sym_iace,
  [anon_sym_incipiet] = anon_sym_incipiet,
  [anon_sym_incipit] = anon_sym_incipit,
  [anon_sym_itera] = anon_sym_itera,
  [anon_sym_mori] = anon_sym_mori,
  [anon_sym_perge] = anon_sym_perge,
  [anon_sym_redde] = anon_sym_redde,
  [anon_sym_rumpe] = anon_sym_rumpe,
  [anon_sym_secus] = anon_sym_secus,
  [anon_sym_si] = anon_sym_si,
  [anon_sym_sic] = anon_sym_sic,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_tacet] = anon_sym_tacet,
  [anon_sym_tempta] = anon_sym_tempta,
  [anon_sym_abstractus] = anon_sym_abstractus,
  [anon_sym_ceteri] = anon_sym_ceteri,
  [anon_sym_curata] = anon_sym_curata,
  [anon_sym_discretio] = anon_sym_discretio,
  [anon_sym_errata] = anon_sym_errata,
  [anon_sym_exitus] = anon_sym_exitus,
  [anon_sym_fixum] = anon_sym_fixum,
  [anon_sym_functio] = anon_sym_functio,
  [anon_sym_generis] = anon_sym_generis,
  [anon_sym_genus] = anon_sym_genus,
  [anon_sym_iacit] = anon_sym_iacit,
  [anon_sym_immutata] = anon_sym_immutata,
  [anon_sym_implendum] = anon_sym_implendum,
  [anon_sym_importa] = anon_sym_importa,
  [anon_sym_magnitudo] = anon_sym_magnitudo,
  [anon_sym_nexum] = anon_sym_nexum,
  [anon_sym_optiones] = anon_sym_optiones,
  [anon_sym_ordo] = anon_sym_ordo,
  [anon_sym_prae] = anon_sym_prae,
  [anon_sym_sit] = anon_sym_sit,
  [anon_sym_sponte] = anon_sym_sponte,
  [anon_sym_typus] = anon_sym_typus,
  [anon_sym_varia] = anon_sym_varia,
  [anon_sym_ante] = anon_sym_ante,
  [anon_sym_aut] = anon_sym_aut,
  [anon_sym_cede] = anon_sym_cede,
  [anon_sym_clausura] = anon_sym_clausura,
  [anon_sym_de] = anon_sym_de,
  [anon_sym_ego] = anon_sym_ego,
  [anon_sym_est] = anon_sym_est,
  [anon_sym_et] = anon_sym_et,
  [anon_sym_ex] = anon_sym_ex,
  [anon_sym_finge] = anon_sym_finge,
  [anon_sym_fragilis] = anon_sym_fragilis,
  [anon_sym_futurum] = anon_sym_futurum,
  [anon_sym_implet] = anon_sym_implet,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_inter] = anon_sym_inter,
  [anon_sym_intra] = anon_sym_intra,
  [anon_sym_lege] = anon_sym_lege,
  [anon_sym_lineam] = anon_sym_lineam,
  [anon_sym_metior] = anon_sym_metior,
  [anon_sym_modulus] = anon_sym_modulus,
  [anon_sym_mone] = anon_sym_mone,
  [anon_sym_negativum] = anon_sym_negativum,
  [anon_sym_nihil] = anon_sym_nihil,
  [anon_sym_non] = anon_sym_non,
  [anon_sym_nonnihil] = anon_sym_nonnihil,
  [anon_sym_nonnulla] = anon_sym_nonnulla,
  [anon_sym_nota] = anon_sym_nota,
  [anon_sym_nulla] = anon_sym_nulla,
  [anon_sym_omitte] = anon_sym_omitte,
  [anon_sym_omnia] = anon_sym_omnia,
  [anon_sym_per] = anon_sym_per,
  [anon_sym_positivum] = anon_sym_positivum,
  [anon_sym_postpara] = anon_sym_postpara,
  [anon_sym_postparabit] = anon_sym_postparabit,
  [anon_sym_praefixum] = anon_sym_praefixum,
  [anon_sym_praepara] = anon_sym_praepara,
  [anon_sym_praeparabit] = anon_sym_praeparabit,
  [anon_sym_pro] = anon_sym_pro,
  [anon_sym_proba] = anon_sym_proba,
  [anon_sym_probandum] = anon_sym_probandum,
  [anon_sym_repete] = anon_sym_repete,
  [anon_sym_requirit] = anon_sym_requirit,
  [anon_sym_scribe] = anon_sym_scribe,
  [anon_sym_scriptum] = anon_sym_scriptum,
  [anon_sym_solum] = anon_sym_solum,
  [anon_sym_solum_in] = anon_sym_solum_in,
  [anon_sym_sparge] = anon_sym_sparge,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_temporis] = anon_sym_temporis,
  [anon_sym_usque] = anon_sym_usque,
  [anon_sym_ut] = anon_sym_ut,
  [anon_sym_vel] = anon_sym_vel,
  [anon_sym_vide] = anon_sym_vide,
  [anon_sym_falsum] = anon_sym_falsum,
  [anon_sym_verum] = anon_sym_verum,
  [sym_guillemet_string] = sym_guillemet_string,
  [sym_octeti_string] = sym_octeti_string,
  [sym_backtick_string] = sym_backtick_string,
  [sym_ascii_string] = sym_ascii_string,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_operator] = sym_operator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_hash] = sym_hash,
  [sym_line_comment] = sym_line_comment,
  [sym_faber_newline] = sym_faber_newline,
  [sym_program] = sym_program,
  [sym_lbrace] = sym_lbrace,
  [sym_rbrace] = sym_rbrace,
  [sym_comma_sign] = sym_comma_sign,
  [sym_annotation] = sym_annotation,
  [sym_known_annotation_name] = sym_known_annotation_name,
  [sym_annotation_name] = sym_annotation_name,
  [sym_annotation_modifier] = sym_annotation_modifier,
  [sym_annotation_value_type] = sym_annotation_value_type,
  [sym_braced_annotation] = sym_braced_annotation,
  [sym_annotation_field] = sym_annotation_field,
  [sym_annotation_arguments] = sym_annotation_arguments,
  [sym__annotation_argument] = sym__annotation_argument,
  [sym__token] = sym__token,
  [sym_keyword_control] = sym_keyword_control,
  [sym_keyword_declaration] = sym_keyword_declaration,
  [sym_keyword_other] = sym_keyword_other,
  [sym_builtin_type] = sym_builtin_type,
  [sym_boolean] = sym_boolean,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_braced_annotation_repeat1] = aux_sym_braced_annotation_repeat1,
  [aux_sym_braced_annotation_repeat2] = aux_sym_braced_annotation_repeat2,
  [aux_sym_annotation_arguments_repeat1] = aux_sym_annotation_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_at_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_eq_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_futura] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imperia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imperium] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operandus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_privata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protecta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_publica] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_versio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brevis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descriptio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bivalens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fractus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignotum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intervallum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lista] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numerus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numquam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octeti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promissum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_series] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sparsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tabula] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tensor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vacua] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vacuum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adfirma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argumenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_casu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceterum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cura] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custodi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_demum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discerne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elige] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emitte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ergo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incipiet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incipit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itera] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mori] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_perge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rumpe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tacet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstractus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceteri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_curata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discretio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exitus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_genus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iacit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implendum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_importa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magnitudo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nexum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optiones] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ordo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sponte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ante] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cede] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clausura] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_de] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ego] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_est] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_et] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragilis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_futurum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lege] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lineam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negativum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nihil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonnihil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonnulla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nota] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nulla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omitte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omnia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_per] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positivum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpara] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postparabit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praefixum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praepara] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praeparabit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_probandum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requirit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scribe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scriptum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solum_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sparge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_temporis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usque] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_falsum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verum] = {
    .visible = true,
    .named = false,
  },
  [sym_guillemet_string] = {
    .visible = true,
    .named = true,
  },
  [sym_octeti_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_faber_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_lbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_rbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_known_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_field] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation_argument] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_control] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_other] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braced_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braced_annotation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 13,
  [27] = 27,
  [28] = 14,
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
  [47] = 9,
  [48] = 15,
  [49] = 49,
  [50] = 50,
  [51] = 10,
};

static TSCharacterRange sym_operator_character_set_1[] = {
  {'!', '!'}, {'%', '%'}, {'*', '+'}, {'-', '/'}, {'<', '@'}, {0xac, 0xac}, {0x2025, 0x2026}, {0x2190, 0x2190},
  {0x2192, 0x2192}, {0x21a6, 0x21a6}, {0x21d0, 0x21d0}, {0x21d2, 0x21d2}, {0x21e5, 0x21e5}, {0x2227, 0x2228}, {0x222a, 0x222a}, {0x2234, 0x2234},
  {0x2237, 0x2237}, {0x2248, 0x2249}, {0x2260, 0x2261}, {0x2264, 0x2265}, {0x2295, 0x2296}, {0x229c, 0x229c}, {0x22bb, 0x22bb},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 849,
        '"', 3,
        '#', 856,
        '\'', 4,
        '(', 850,
        ')', 851,
        '+', 848,
        ',', 32,
        '0', 256,
        ':', 854,
        ';', 855,
        '=', 31,
        '?', 849,
        '@', 28,
        '[', 852,
        ']', 853,
        '`', 10,
        'a', 403,
        'b', 515,
        'c', 344,
        'd', 440,
        'e', 502,
        'f', 263,
        'g', 441,
        'i', 266,
        'j', 732,
        'l', 470,
        'm', 346,
        'n', 442,
        'o', 417,
        'p', 444,
        'r', 445,
        's', 411,
        't', 347,
        'u', 269,
        'v', 348,
        '{', 29,
        '|', 12,
        '}', 30,
        0xab, 13,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '0', 256,
        '=', 31,
        '`', 10,
        'a', 712,
        'b', 516,
        'c', 638,
        'f', 265,
        'i', 268,
        'l', 501,
        'm', 394,
        'n', 827,
        'o', 419,
        'p', 694,
        'r', 494,
        's', 499,
        't', 382,
        'u', 271,
        'v', 381,
        '|', 12,
        0xab, 13,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 'f') ADVANCE(818);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == 'j') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead == 'p') ADVANCE(683);
      if (lookahead == 'v') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 12:
      if (lookahead == '|') ADVANCE(252);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 0xbb) ADVANCE(251);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(260);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 849,
        '"', 3,
        '#', 856,
        '\'', 4,
        '(', 850,
        ')', 851,
        '+', 848,
        ',', 32,
        '0', 256,
        ':', 854,
        ';', 855,
        '?', 849,
        '@', 28,
        '[', 852,
        ']', 853,
        '`', 10,
        'a', 403,
        'b', 516,
        'c', 345,
        'd', 469,
        'e', 502,
        'f', 264,
        'g', 441,
        'i', 267,
        'j', 732,
        'l', 471,
        'm', 346,
        'n', 443,
        'o', 418,
        'p', 444,
        'r', 445,
        's', 411,
        't', 347,
        'u', 270,
        'v', 349,
        '{', 29,
        '|', 12,
        '}', 30,
        0xab, 13,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 849,
        '"', 3,
        '#', 856,
        '\'', 4,
        '(', 850,
        ')', 851,
        ',', 32,
        '0', 256,
        ':', 854,
        ';', 855,
        '?', 849,
        '@', 28,
        '[', 852,
        ']', 853,
        '`', 10,
        'a', 403,
        'b', 515,
        'c', 345,
        'd', 440,
        'e', 502,
        'f', 264,
        'g', 441,
        'i', 267,
        'j', 732,
        'l', 470,
        'm', 346,
        'n', 442,
        'o', 418,
        'p', 444,
        'r', 445,
        's', 411,
        't', 347,
        'u', 269,
        'v', 349,
        '{', 29,
        '|', 12,
        '}', 30,
        0xab, 13,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 849,
        '"', 3,
        '#', 856,
        '\'', 4,
        '(', 850,
        ')', 851,
        ',', 32,
        '0', 256,
        ':', 854,
        ';', 855,
        '?', 849,
        '@', 28,
        '[', 852,
        ']', 853,
        '`', 10,
        'a', 403,
        'b', 516,
        'c', 345,
        'd', 469,
        'e', 502,
        'f', 264,
        'g', 441,
        'i', 267,
        'j', 732,
        'l', 471,
        'm', 346,
        'n', 443,
        'o', 418,
        'p', 444,
        'r', 445,
        's', 411,
        't', 347,
        'u', 270,
        'v', 349,
        '{', 29,
        '|', 12,
        '}', 30,
        0xab, 13,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_frontmatter);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_frontmatter);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_at_sign);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_eq_sign);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_cli);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_futura);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_imperia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_imperium);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_operandus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_optio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_privata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_protecta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_publica);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_versio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_vertex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_brevis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_descriptio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_longum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_nomen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ubique);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ascii);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bivalens);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_copia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_fractus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ignotum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_instans);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_intervallum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_lf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_lf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_lf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_li16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_li32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_li64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_li8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_lista);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_lu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_lu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_lu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_lu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_matrix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_mf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_mf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_mf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_mi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_mi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_mi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_mi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_mu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_mu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_mu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_mu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_numerus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_numquam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_octet);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_octeti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_promissum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_series);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_sf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_sf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_sf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_si16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_si32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_si64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_si8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_sparsa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_su16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_su32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_su64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_su8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_tabula);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_tensor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_textus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_tf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_tf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_tf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ti16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ti32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ti64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ti8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_tu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_tu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_tu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_tu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_unio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_vacua);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_vacuum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_valor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_vf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_vf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_vf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_vi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_vi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_vi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_vi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_vu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_vu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_vu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_vu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ad);
      if (lookahead == 'f') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_adfirma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_argumenta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_cape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_casu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ceterum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_cura);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_custodi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_demum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_discerne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_dum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_elige);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_emitte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ergo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_fac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_iace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_incipiet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_incipit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_itera);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_mori);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_perge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_redde);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_rumpe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_secus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_si);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(318);
      if (lookahead == '8') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_sic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_tacet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_tempta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_abstractus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ceteri);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_curata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_discretio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_errata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_exitus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_fixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_functio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_generis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_genus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_iacit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_immutata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_implendum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_importa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_magnitudo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_nexum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_optiones);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ordo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_prae);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_sit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_sponte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_typus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_varia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ante);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_aut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_cede);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_clausura);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'm') ADVANCE(795);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'm') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ego);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_est);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_et);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ex);
      if (lookahead == 'i') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_finge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_fragilis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_futurum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_implet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_inter);
      if (lookahead == 'v') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_intra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_lege);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lineam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_metior);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_modulus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_mone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_negativum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_nihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_non);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nonnihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_nonnulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_nota);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_nulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_omitte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_omnia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_per);
      if (lookahead == 'g') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_positivum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_postpara);
      if (lookahead == 'b') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_postparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_praefixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_praepara);
      if (lookahead == 'b') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_praeparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_pro);
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(540);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_proba);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_probandum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_repete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_requirit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_scribe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_scriptum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_solum);
      if (lookahead == '_') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_solum_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sparge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_temporis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_usque);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_vel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_vide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_falsum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_verum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_guillemet_string);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_octeti_string);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_backtick_string);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 17,
        'B', 15,
        'b', 15,
        'E', 14,
        'e', 14,
        'O', 16,
        'o', 16,
        'X', 19,
        'x', 19,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(326);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 327,
        '3', 291,
        '6', 309,
        '8', 61,
        'a', 410,
        'g', 623,
        'm', 610,
        'n', 208,
        't', 474,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 327,
        '3', 291,
        '6', 309,
        '8', 61,
        'a', 410,
        'g', 623,
        'm', 611,
        'n', 208,
        't', 474,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(327);
      if (lookahead == '3') ADVANCE(291);
      if (lookahead == '6') ADVANCE(309);
      if (lookahead == '8') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 328,
        '3', 292,
        '6', 310,
        '8', 125,
        'b', 563,
        'n', 532,
        's', 672,
        't', 246,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead == '3') ADVANCE(292);
      if (lookahead == '6') ADVANCE(310);
      if (lookahead == '8') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead == '3') ADVANCE(292);
      if (lookahead == '6') ADVANCE(310);
      if (lookahead == '8') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(329);
      if (lookahead == '3') ADVANCE(293);
      if (lookahead == '6') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(330);
      if (lookahead == '3') ADVANCE(294);
      if (lookahead == '6') ADVANCE(312);
      if (lookahead == '8') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == 's') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(330);
      if (lookahead == '3') ADVANCE(294);
      if (lookahead == '6') ADVANCE(312);
      if (lookahead == '8') ADVANCE(71);
      if (lookahead == 's') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead == '3') ADVANCE(295);
      if (lookahead == '6') ADVANCE(313);
      if (lookahead == '8') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(332);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '6') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(333);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '6') ADVANCE(315);
      if (lookahead == '8') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(334);
      if (lookahead == '3') ADVANCE(298);
      if (lookahead == '6') ADVANCE(316);
      if (lookahead == '8') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead == '6') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(318);
      if (lookahead == '8') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(319);
      if (lookahead == '8') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(319);
      if (lookahead == '8') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(338);
      if (lookahead == '3') ADVANCE(302);
      if (lookahead == '6') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(339);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead == '6') ADVANCE(321);
      if (lookahead == '8') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(340);
      if (lookahead == '3') ADVANCE(304);
      if (lookahead == '6') ADVANCE(322);
      if (lookahead == '8') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(341);
      if (lookahead == '3') ADVANCE(305);
      if (lookahead == '6') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(342);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '6') ADVANCE(324);
      if (lookahead == '8') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(342);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '6') ADVANCE(324);
      if (lookahead == '8') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '3') ADVANCE(307);
      if (lookahead == '6') ADVANCE(325);
      if (lookahead == '8') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == 'y') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 's') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(735);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(755);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(831);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'g') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == 'p') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(793);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead == 'r') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(793);
      if (lookahead == 'l') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead == 'p') ADVANCE(772);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(801);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(783);
      if (lookahead == 'g') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead == 'q') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 'r') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == 'u') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 'u') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead == 'q') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == 't') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(633);
      if (lookahead == 't') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(395);
      if (lookahead == 'x') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 't') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(663);
      if (lookahead == 'n') ADVANCE(742);
      if (lookahead == 'x') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(742);
      if (lookahead == 'x') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'x') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(447);
      if (lookahead == 's') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+') ADVANCE(5);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '(' ||
          lookahead == '.' ||
          lookahead == '[') ADVANCE(847);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_hash);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 1},
  [2] = {.lex_state = 23, .external_lex_state = 1},
  [3] = {.lex_state = 23, .external_lex_state = 1},
  [4] = {.lex_state = 23, .external_lex_state = 1},
  [5] = {.lex_state = 24, .external_lex_state = 1},
  [6] = {.lex_state = 24, .external_lex_state = 1},
  [7] = {.lex_state = 24, .external_lex_state = 1},
  [8] = {.lex_state = 24, .external_lex_state = 1},
  [9] = {.lex_state = 23, .external_lex_state = 1},
  [10] = {.lex_state = 23, .external_lex_state = 1},
  [11] = {.lex_state = 23, .external_lex_state = 1},
  [12] = {.lex_state = 23, .external_lex_state = 1},
  [13] = {.lex_state = 23, .external_lex_state = 1},
  [14] = {.lex_state = 23, .external_lex_state = 1},
  [15] = {.lex_state = 23, .external_lex_state = 1},
  [16] = {.lex_state = 24, .external_lex_state = 1},
  [17] = {.lex_state = 24, .external_lex_state = 1},
  [18] = {.lex_state = 24, .external_lex_state = 1},
  [19] = {.lex_state = 24, .external_lex_state = 1},
  [20] = {.lex_state = 24, .external_lex_state = 1},
  [21] = {.lex_state = 24, .external_lex_state = 1},
  [22] = {.lex_state = 24, .external_lex_state = 1},
  [23] = {.lex_state = 24, .external_lex_state = 1},
  [24] = {.lex_state = 24, .external_lex_state = 1},
  [25] = {.lex_state = 24, .external_lex_state = 1},
  [26] = {.lex_state = 24, .external_lex_state = 1},
  [27] = {.lex_state = 24, .external_lex_state = 1},
  [28] = {.lex_state = 24, .external_lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 9, .external_lex_state = 2},
  [33] = {.lex_state = 9, .external_lex_state = 2},
  [34] = {.lex_state = 9, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 9, .external_lex_state = 2},
  [37] = {.lex_state = 9, .external_lex_state = 2},
  [38] = {.lex_state = 9, .external_lex_state = 2},
  [39] = {.lex_state = 9, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_frontmatter] = ACTIONS(1),
    [sym_at_sign] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_eq_sign] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_cli] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
    [anon_sym_futura] = ACTIONS(1),
    [anon_sym_imperia] = ACTIONS(1),
    [anon_sym_imperium] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_operandus] = ACTIONS(1),
    [anon_sym_optio] = ACTIONS(1),
    [anon_sym_privata] = ACTIONS(1),
    [anon_sym_protecta] = ACTIONS(1),
    [anon_sym_publica] = ACTIONS(1),
    [anon_sym_versio] = ACTIONS(1),
    [anon_sym_vertex] = ACTIONS(1),
    [anon_sym_brevis] = ACTIONS(1),
    [anon_sym_descriptio] = ACTIONS(1),
    [anon_sym_longum] = ACTIONS(1),
    [anon_sym_nomen] = ACTIONS(1),
    [anon_sym_ubique] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_bivalens] = ACTIONS(1),
    [anon_sym_copia] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_fractus] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_ignotum] = ACTIONS(1),
    [anon_sym_instans] = ACTIONS(1),
    [anon_sym_intervallum] = ACTIONS(1),
    [anon_sym_lf16] = ACTIONS(1),
    [anon_sym_lf32] = ACTIONS(1),
    [anon_sym_lf64] = ACTIONS(1),
    [anon_sym_li16] = ACTIONS(1),
    [anon_sym_li32] = ACTIONS(1),
    [anon_sym_li64] = ACTIONS(1),
    [anon_sym_li8] = ACTIONS(1),
    [anon_sym_lista] = ACTIONS(1),
    [anon_sym_lu16] = ACTIONS(1),
    [anon_sym_lu32] = ACTIONS(1),
    [anon_sym_lu64] = ACTIONS(1),
    [anon_sym_lu8] = ACTIONS(1),
    [anon_sym_matrix] = ACTIONS(1),
    [anon_sym_mf16] = ACTIONS(1),
    [anon_sym_mf32] = ACTIONS(1),
    [anon_sym_mf64] = ACTIONS(1),
    [anon_sym_mi16] = ACTIONS(1),
    [anon_sym_mi32] = ACTIONS(1),
    [anon_sym_mi64] = ACTIONS(1),
    [anon_sym_mi8] = ACTIONS(1),
    [anon_sym_mu16] = ACTIONS(1),
    [anon_sym_mu32] = ACTIONS(1),
    [anon_sym_mu64] = ACTIONS(1),
    [anon_sym_mu8] = ACTIONS(1),
    [anon_sym_numerus] = ACTIONS(1),
    [anon_sym_numquam] = ACTIONS(1),
    [anon_sym_octet] = ACTIONS(1),
    [anon_sym_octeti] = ACTIONS(1),
    [anon_sym_promissum] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_series] = ACTIONS(1),
    [anon_sym_sf16] = ACTIONS(1),
    [anon_sym_sf32] = ACTIONS(1),
    [anon_sym_sf64] = ACTIONS(1),
    [anon_sym_si16] = ACTIONS(1),
    [anon_sym_si32] = ACTIONS(1),
    [anon_sym_si64] = ACTIONS(1),
    [anon_sym_si8] = ACTIONS(1),
    [anon_sym_sparsa] = ACTIONS(1),
    [anon_sym_su16] = ACTIONS(1),
    [anon_sym_su32] = ACTIONS(1),
    [anon_sym_su64] = ACTIONS(1),
    [anon_sym_su8] = ACTIONS(1),
    [anon_sym_tabula] = ACTIONS(1),
    [anon_sym_tensor] = ACTIONS(1),
    [anon_sym_textus] = ACTIONS(1),
    [anon_sym_tf16] = ACTIONS(1),
    [anon_sym_tf32] = ACTIONS(1),
    [anon_sym_tf64] = ACTIONS(1),
    [anon_sym_ti16] = ACTIONS(1),
    [anon_sym_ti32] = ACTIONS(1),
    [anon_sym_ti64] = ACTIONS(1),
    [anon_sym_ti8] = ACTIONS(1),
    [anon_sym_tu16] = ACTIONS(1),
    [anon_sym_tu32] = ACTIONS(1),
    [anon_sym_tu64] = ACTIONS(1),
    [anon_sym_tu8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_unio] = ACTIONS(1),
    [anon_sym_vacua] = ACTIONS(1),
    [anon_sym_vacuum] = ACTIONS(1),
    [anon_sym_valor] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_vf16] = ACTIONS(1),
    [anon_sym_vf32] = ACTIONS(1),
    [anon_sym_vf64] = ACTIONS(1),
    [anon_sym_vi16] = ACTIONS(1),
    [anon_sym_vi32] = ACTIONS(1),
    [anon_sym_vi64] = ACTIONS(1),
    [anon_sym_vi8] = ACTIONS(1),
    [anon_sym_vu16] = ACTIONS(1),
    [anon_sym_vu32] = ACTIONS(1),
    [anon_sym_vu64] = ACTIONS(1),
    [anon_sym_vu8] = ACTIONS(1),
    [anon_sym_ad] = ACTIONS(1),
    [anon_sym_adfirma] = ACTIONS(1),
    [anon_sym_argumenta] = ACTIONS(1),
    [anon_sym_cape] = ACTIONS(1),
    [anon_sym_casu] = ACTIONS(1),
    [anon_sym_ceterum] = ACTIONS(1),
    [anon_sym_cura] = ACTIONS(1),
    [anon_sym_custodi] = ACTIONS(1),
    [anon_sym_demum] = ACTIONS(1),
    [anon_sym_discerne] = ACTIONS(1),
    [anon_sym_dum] = ACTIONS(1),
    [anon_sym_elige] = ACTIONS(1),
    [anon_sym_emitte] = ACTIONS(1),
    [anon_sym_ergo] = ACTIONS(1),
    [anon_sym_fac] = ACTIONS(1),
    [anon_sym_iace] = ACTIONS(1),
    [anon_sym_incipiet] = ACTIONS(1),
    [anon_sym_incipit] = ACTIONS(1),
    [anon_sym_itera] = ACTIONS(1),
    [anon_sym_mori] = ACTIONS(1),
    [anon_sym_perge] = ACTIONS(1),
    [anon_sym_redde] = ACTIONS(1),
    [anon_sym_rumpe] = ACTIONS(1),
    [anon_sym_secus] = ACTIONS(1),
    [anon_sym_si] = ACTIONS(1),
    [anon_sym_sic] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_tacet] = ACTIONS(1),
    [anon_sym_tempta] = ACTIONS(1),
    [anon_sym_abstractus] = ACTIONS(1),
    [anon_sym_ceteri] = ACTIONS(1),
    [anon_sym_curata] = ACTIONS(1),
    [anon_sym_discretio] = ACTIONS(1),
    [anon_sym_errata] = ACTIONS(1),
    [anon_sym_exitus] = ACTIONS(1),
    [anon_sym_fixum] = ACTIONS(1),
    [anon_sym_functio] = ACTIONS(1),
    [anon_sym_generis] = ACTIONS(1),
    [anon_sym_genus] = ACTIONS(1),
    [anon_sym_iacit] = ACTIONS(1),
    [anon_sym_immutata] = ACTIONS(1),
    [anon_sym_implendum] = ACTIONS(1),
    [anon_sym_importa] = ACTIONS(1),
    [anon_sym_magnitudo] = ACTIONS(1),
    [anon_sym_nexum] = ACTIONS(1),
    [anon_sym_ordo] = ACTIONS(1),
    [anon_sym_prae] = ACTIONS(1),
    [anon_sym_sit] = ACTIONS(1),
    [anon_sym_sponte] = ACTIONS(1),
    [anon_sym_typus] = ACTIONS(1),
    [anon_sym_varia] = ACTIONS(1),
    [anon_sym_ante] = ACTIONS(1),
    [anon_sym_aut] = ACTIONS(1),
    [anon_sym_cede] = ACTIONS(1),
    [anon_sym_clausura] = ACTIONS(1),
    [anon_sym_de] = ACTIONS(1),
    [anon_sym_ego] = ACTIONS(1),
    [anon_sym_est] = ACTIONS(1),
    [anon_sym_et] = ACTIONS(1),
    [anon_sym_ex] = ACTIONS(1),
    [anon_sym_finge] = ACTIONS(1),
    [anon_sym_fragilis] = ACTIONS(1),
    [anon_sym_futurum] = ACTIONS(1),
    [anon_sym_implet] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_inter] = ACTIONS(1),
    [anon_sym_intra] = ACTIONS(1),
    [anon_sym_lege] = ACTIONS(1),
    [anon_sym_lineam] = ACTIONS(1),
    [anon_sym_metior] = ACTIONS(1),
    [anon_sym_modulus] = ACTIONS(1),
    [anon_sym_mone] = ACTIONS(1),
    [anon_sym_negativum] = ACTIONS(1),
    [anon_sym_nihil] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [anon_sym_nonnihil] = ACTIONS(1),
    [anon_sym_nonnulla] = ACTIONS(1),
    [anon_sym_nota] = ACTIONS(1),
    [anon_sym_nulla] = ACTIONS(1),
    [anon_sym_omitte] = ACTIONS(1),
    [anon_sym_omnia] = ACTIONS(1),
    [anon_sym_per] = ACTIONS(1),
    [anon_sym_positivum] = ACTIONS(1),
    [anon_sym_postpara] = ACTIONS(1),
    [anon_sym_postparabit] = ACTIONS(1),
    [anon_sym_praefixum] = ACTIONS(1),
    [anon_sym_praepara] = ACTIONS(1),
    [anon_sym_praeparabit] = ACTIONS(1),
    [anon_sym_pro] = ACTIONS(1),
    [anon_sym_proba] = ACTIONS(1),
    [anon_sym_probandum] = ACTIONS(1),
    [anon_sym_repete] = ACTIONS(1),
    [anon_sym_requirit] = ACTIONS(1),
    [anon_sym_scribe] = ACTIONS(1),
    [anon_sym_scriptum] = ACTIONS(1),
    [anon_sym_solum] = ACTIONS(1),
    [anon_sym_solum_in] = ACTIONS(1),
    [anon_sym_sparge] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_temporis] = ACTIONS(1),
    [anon_sym_usque] = ACTIONS(1),
    [anon_sym_ut] = ACTIONS(1),
    [anon_sym_vel] = ACTIONS(1),
    [anon_sym_vide] = ACTIONS(1),
    [anon_sym_falsum] = ACTIONS(1),
    [anon_sym_verum] = ACTIONS(1),
    [sym_guillemet_string] = ACTIONS(1),
    [sym_octeti_string] = ACTIONS(1),
    [sym_backtick_string] = ACTIONS(1),
    [sym_ascii_string] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_faber_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(50),
    [sym_annotation] = STATE(7),
    [sym__token] = STATE(7),
    [sym_keyword_control] = STATE(7),
    [sym_keyword_declaration] = STATE(7),
    [sym_keyword_other] = STATE(7),
    [sym_builtin_type] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_punctuation] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_frontmatter] = ACTIONS(5),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cursor] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(13),
    [anon_sym_protecta] = ACTIONS(13),
    [anon_sym_publica] = ACTIONS(13),
    [anon_sym_ascii] = ACTIONS(11),
    [anon_sym_bivalens] = ACTIONS(11),
    [anon_sym_copia] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_fractus] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_ignotum] = ACTIONS(11),
    [anon_sym_instans] = ACTIONS(11),
    [anon_sym_intervallum] = ACTIONS(11),
    [anon_sym_lf16] = ACTIONS(11),
    [anon_sym_lf32] = ACTIONS(11),
    [anon_sym_lf64] = ACTIONS(11),
    [anon_sym_li16] = ACTIONS(11),
    [anon_sym_li32] = ACTIONS(11),
    [anon_sym_li64] = ACTIONS(11),
    [anon_sym_li8] = ACTIONS(11),
    [anon_sym_lista] = ACTIONS(11),
    [anon_sym_lu16] = ACTIONS(11),
    [anon_sym_lu32] = ACTIONS(11),
    [anon_sym_lu64] = ACTIONS(11),
    [anon_sym_lu8] = ACTIONS(11),
    [anon_sym_matrix] = ACTIONS(11),
    [anon_sym_mf16] = ACTIONS(11),
    [anon_sym_mf32] = ACTIONS(11),
    [anon_sym_mf64] = ACTIONS(11),
    [anon_sym_mi16] = ACTIONS(11),
    [anon_sym_mi32] = ACTIONS(11),
    [anon_sym_mi64] = ACTIONS(11),
    [anon_sym_mi8] = ACTIONS(11),
    [anon_sym_mu16] = ACTIONS(11),
    [anon_sym_mu32] = ACTIONS(11),
    [anon_sym_mu64] = ACTIONS(11),
    [anon_sym_mu8] = ACTIONS(11),
    [anon_sym_numerus] = ACTIONS(11),
    [anon_sym_numquam] = ACTIONS(11),
    [anon_sym_octet] = ACTIONS(11),
    [anon_sym_octeti] = ACTIONS(11),
    [anon_sym_promissum] = ACTIONS(11),
    [anon_sym_regex] = ACTIONS(11),
    [anon_sym_series] = ACTIONS(11),
    [anon_sym_sf16] = ACTIONS(11),
    [anon_sym_sf32] = ACTIONS(11),
    [anon_sym_sf64] = ACTIONS(11),
    [anon_sym_si16] = ACTIONS(11),
    [anon_sym_si32] = ACTIONS(11),
    [anon_sym_si64] = ACTIONS(11),
    [anon_sym_si8] = ACTIONS(11),
    [anon_sym_sparsa] = ACTIONS(11),
    [anon_sym_su16] = ACTIONS(11),
    [anon_sym_su32] = ACTIONS(11),
    [anon_sym_su64] = ACTIONS(11),
    [anon_sym_su8] = ACTIONS(11),
    [anon_sym_tabula] = ACTIONS(11),
    [anon_sym_tensor] = ACTIONS(11),
    [anon_sym_textus] = ACTIONS(11),
    [anon_sym_tf16] = ACTIONS(11),
    [anon_sym_tf32] = ACTIONS(11),
    [anon_sym_tf64] = ACTIONS(11),
    [anon_sym_ti16] = ACTIONS(11),
    [anon_sym_ti32] = ACTIONS(11),
    [anon_sym_ti64] = ACTIONS(11),
    [anon_sym_ti8] = ACTIONS(11),
    [anon_sym_tu16] = ACTIONS(11),
    [anon_sym_tu32] = ACTIONS(11),
    [anon_sym_tu64] = ACTIONS(11),
    [anon_sym_tu8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_unio] = ACTIONS(11),
    [anon_sym_vacua] = ACTIONS(11),
    [anon_sym_vacuum] = ACTIONS(11),
    [anon_sym_valor] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_vf16] = ACTIONS(11),
    [anon_sym_vf32] = ACTIONS(11),
    [anon_sym_vf64] = ACTIONS(11),
    [anon_sym_vi16] = ACTIONS(11),
    [anon_sym_vi32] = ACTIONS(11),
    [anon_sym_vi64] = ACTIONS(11),
    [anon_sym_vi8] = ACTIONS(11),
    [anon_sym_vu16] = ACTIONS(11),
    [anon_sym_vu32] = ACTIONS(11),
    [anon_sym_vu64] = ACTIONS(11),
    [anon_sym_vu8] = ACTIONS(11),
    [anon_sym_ad] = ACTIONS(15),
    [anon_sym_adfirma] = ACTIONS(15),
    [anon_sym_argumenta] = ACTIONS(15),
    [anon_sym_cape] = ACTIONS(15),
    [anon_sym_casu] = ACTIONS(15),
    [anon_sym_ceterum] = ACTIONS(15),
    [anon_sym_cura] = ACTIONS(15),
    [anon_sym_custodi] = ACTIONS(15),
    [anon_sym_demum] = ACTIONS(15),
    [anon_sym_discerne] = ACTIONS(15),
    [anon_sym_dum] = ACTIONS(15),
    [anon_sym_elige] = ACTIONS(15),
    [anon_sym_emitte] = ACTIONS(15),
    [anon_sym_ergo] = ACTIONS(15),
    [anon_sym_fac] = ACTIONS(15),
    [anon_sym_iace] = ACTIONS(15),
    [anon_sym_incipiet] = ACTIONS(15),
    [anon_sym_incipit] = ACTIONS(15),
    [anon_sym_itera] = ACTIONS(15),
    [anon_sym_mori] = ACTIONS(15),
    [anon_sym_perge] = ACTIONS(15),
    [anon_sym_redde] = ACTIONS(15),
    [anon_sym_rumpe] = ACTIONS(15),
    [anon_sym_secus] = ACTIONS(15),
    [anon_sym_si] = ACTIONS(15),
    [anon_sym_sic] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_tacet] = ACTIONS(15),
    [anon_sym_tempta] = ACTIONS(15),
    [anon_sym_abstractus] = ACTIONS(13),
    [anon_sym_ceteri] = ACTIONS(13),
    [anon_sym_curata] = ACTIONS(13),
    [anon_sym_discretio] = ACTIONS(13),
    [anon_sym_errata] = ACTIONS(13),
    [anon_sym_exitus] = ACTIONS(13),
    [anon_sym_fixum] = ACTIONS(13),
    [anon_sym_functio] = ACTIONS(13),
    [anon_sym_generis] = ACTIONS(13),
    [anon_sym_genus] = ACTIONS(13),
    [anon_sym_iacit] = ACTIONS(13),
    [anon_sym_immutata] = ACTIONS(13),
    [anon_sym_implendum] = ACTIONS(13),
    [anon_sym_importa] = ACTIONS(13),
    [anon_sym_magnitudo] = ACTIONS(13),
    [anon_sym_nexum] = ACTIONS(13),
    [anon_sym_optiones] = ACTIONS(13),
    [anon_sym_ordo] = ACTIONS(13),
    [anon_sym_prae] = ACTIONS(13),
    [anon_sym_sit] = ACTIONS(13),
    [anon_sym_sponte] = ACTIONS(13),
    [anon_sym_typus] = ACTIONS(13),
    [anon_sym_varia] = ACTIONS(13),
    [anon_sym_ante] = ACTIONS(17),
    [anon_sym_aut] = ACTIONS(17),
    [anon_sym_cede] = ACTIONS(17),
    [anon_sym_clausura] = ACTIONS(17),
    [anon_sym_de] = ACTIONS(17),
    [anon_sym_ego] = ACTIONS(17),
    [anon_sym_est] = ACTIONS(17),
    [anon_sym_et] = ACTIONS(17),
    [anon_sym_ex] = ACTIONS(17),
    [anon_sym_finge] = ACTIONS(17),
    [anon_sym_fragilis] = ACTIONS(17),
    [anon_sym_futurum] = ACTIONS(17),
    [anon_sym_implet] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_inter] = ACTIONS(17),
    [anon_sym_intra] = ACTIONS(17),
    [anon_sym_lege] = ACTIONS(17),
    [anon_sym_lineam] = ACTIONS(17),
    [anon_sym_metior] = ACTIONS(17),
    [anon_sym_modulus] = ACTIONS(17),
    [anon_sym_mone] = ACTIONS(17),
    [anon_sym_negativum] = ACTIONS(17),
    [anon_sym_nihil] = ACTIONS(17),
    [anon_sym_non] = ACTIONS(17),
    [anon_sym_nonnihil] = ACTIONS(17),
    [anon_sym_nonnulla] = ACTIONS(17),
    [anon_sym_nota] = ACTIONS(17),
    [anon_sym_nulla] = ACTIONS(17),
    [anon_sym_omitte] = ACTIONS(17),
    [anon_sym_omnia] = ACTIONS(17),
    [anon_sym_per] = ACTIONS(17),
    [anon_sym_positivum] = ACTIONS(17),
    [anon_sym_postpara] = ACTIONS(17),
    [anon_sym_postparabit] = ACTIONS(17),
    [anon_sym_praefixum] = ACTIONS(17),
    [anon_sym_praepara] = ACTIONS(17),
    [anon_sym_praeparabit] = ACTIONS(17),
    [anon_sym_pro] = ACTIONS(17),
    [anon_sym_proba] = ACTIONS(17),
    [anon_sym_probandum] = ACTIONS(17),
    [anon_sym_repete] = ACTIONS(17),
    [anon_sym_requirit] = ACTIONS(17),
    [anon_sym_scribe] = ACTIONS(17),
    [anon_sym_scriptum] = ACTIONS(17),
    [anon_sym_solum] = ACTIONS(17),
    [anon_sym_solum_in] = ACTIONS(17),
    [anon_sym_sparge] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_tag] = ACTIONS(17),
    [anon_sym_temporis] = ACTIONS(17),
    [anon_sym_usque] = ACTIONS(17),
    [anon_sym_ut] = ACTIONS(17),
    [anon_sym_vel] = ACTIONS(17),
    [anon_sym_vide] = ACTIONS(17),
    [anon_sym_falsum] = ACTIONS(19),
    [anon_sym_verum] = ACTIONS(19),
    [sym_guillemet_string] = ACTIONS(21),
    [sym_octeti_string] = ACTIONS(21),
    [sym_backtick_string] = ACTIONS(21),
    [sym_ascii_string] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_operator] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(21),
    [sym_faber_newline] = ACTIONS(21),
  },
  [2] = {
    [sym_lbrace] = STATE(32),
    [sym_annotation_modifier] = STATE(4),
    [sym_annotation_value_type] = STATE(4),
    [sym_braced_annotation] = STATE(19),
    [sym_annotation_arguments] = STATE(19),
    [sym__annotation_argument] = STATE(4),
    [sym_keyword_declaration] = STATE(4),
    [sym_keyword_other] = STATE(4),
    [sym_boolean] = STATE(4),
    [aux_sym_annotation_arguments_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_at_sign] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_cursor] = ACTIONS(30),
    [anon_sym_json] = ACTIONS(30),
    [anon_sym_privata] = ACTIONS(32),
    [anon_sym_protecta] = ACTIONS(32),
    [anon_sym_publica] = ACTIONS(32),
    [anon_sym_brevis] = ACTIONS(35),
    [anon_sym_descriptio] = ACTIONS(35),
    [anon_sym_longum] = ACTIONS(35),
    [anon_sym_nomen] = ACTIONS(35),
    [anon_sym_ubique] = ACTIONS(35),
    [anon_sym_ascii] = ACTIONS(37),
    [anon_sym_bivalens] = ACTIONS(37),
    [anon_sym_copia] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(37),
    [anon_sym_fractus] = ACTIONS(37),
    [anon_sym_i16] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_i64] = ACTIONS(37),
    [anon_sym_i8] = ACTIONS(37),
    [anon_sym_ignotum] = ACTIONS(37),
    [anon_sym_instans] = ACTIONS(37),
    [anon_sym_intervallum] = ACTIONS(37),
    [anon_sym_lf16] = ACTIONS(37),
    [anon_sym_lf32] = ACTIONS(37),
    [anon_sym_lf64] = ACTIONS(37),
    [anon_sym_li16] = ACTIONS(37),
    [anon_sym_li32] = ACTIONS(37),
    [anon_sym_li64] = ACTIONS(37),
    [anon_sym_li8] = ACTIONS(37),
    [anon_sym_lista] = ACTIONS(37),
    [anon_sym_lu16] = ACTIONS(37),
    [anon_sym_lu32] = ACTIONS(37),
    [anon_sym_lu64] = ACTIONS(37),
    [anon_sym_lu8] = ACTIONS(37),
    [anon_sym_matrix] = ACTIONS(37),
    [anon_sym_mf16] = ACTIONS(37),
    [anon_sym_mf32] = ACTIONS(37),
    [anon_sym_mf64] = ACTIONS(37),
    [anon_sym_mi16] = ACTIONS(37),
    [anon_sym_mi32] = ACTIONS(37),
    [anon_sym_mi64] = ACTIONS(37),
    [anon_sym_mi8] = ACTIONS(37),
    [anon_sym_mu16] = ACTIONS(37),
    [anon_sym_mu32] = ACTIONS(37),
    [anon_sym_mu64] = ACTIONS(37),
    [anon_sym_mu8] = ACTIONS(37),
    [anon_sym_numerus] = ACTIONS(37),
    [anon_sym_numquam] = ACTIONS(37),
    [anon_sym_octet] = ACTIONS(37),
    [anon_sym_octeti] = ACTIONS(37),
    [anon_sym_promissum] = ACTIONS(37),
    [anon_sym_regex] = ACTIONS(37),
    [anon_sym_series] = ACTIONS(37),
    [anon_sym_sf16] = ACTIONS(37),
    [anon_sym_sf32] = ACTIONS(37),
    [anon_sym_sf64] = ACTIONS(37),
    [anon_sym_si16] = ACTIONS(37),
    [anon_sym_si32] = ACTIONS(37),
    [anon_sym_si64] = ACTIONS(37),
    [anon_sym_si8] = ACTIONS(37),
    [anon_sym_sparsa] = ACTIONS(37),
    [anon_sym_su16] = ACTIONS(37),
    [anon_sym_su32] = ACTIONS(37),
    [anon_sym_su64] = ACTIONS(37),
    [anon_sym_su8] = ACTIONS(37),
    [anon_sym_tabula] = ACTIONS(37),
    [anon_sym_tensor] = ACTIONS(37),
    [anon_sym_textus] = ACTIONS(37),
    [anon_sym_tf16] = ACTIONS(37),
    [anon_sym_tf32] = ACTIONS(37),
    [anon_sym_tf64] = ACTIONS(37),
    [anon_sym_ti16] = ACTIONS(37),
    [anon_sym_ti32] = ACTIONS(37),
    [anon_sym_ti64] = ACTIONS(37),
    [anon_sym_ti8] = ACTIONS(37),
    [anon_sym_tu16] = ACTIONS(37),
    [anon_sym_tu32] = ACTIONS(37),
    [anon_sym_tu64] = ACTIONS(37),
    [anon_sym_tu8] = ACTIONS(37),
    [anon_sym_u16] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_u64] = ACTIONS(37),
    [anon_sym_u8] = ACTIONS(37),
    [anon_sym_unio] = ACTIONS(37),
    [anon_sym_vacua] = ACTIONS(37),
    [anon_sym_vacuum] = ACTIONS(37),
    [anon_sym_valor] = ACTIONS(37),
    [anon_sym_vector] = ACTIONS(37),
    [anon_sym_vf16] = ACTIONS(37),
    [anon_sym_vf32] = ACTIONS(37),
    [anon_sym_vf64] = ACTIONS(37),
    [anon_sym_vi16] = ACTIONS(37),
    [anon_sym_vi32] = ACTIONS(37),
    [anon_sym_vi64] = ACTIONS(37),
    [anon_sym_vi8] = ACTIONS(37),
    [anon_sym_vu16] = ACTIONS(37),
    [anon_sym_vu32] = ACTIONS(37),
    [anon_sym_vu64] = ACTIONS(37),
    [anon_sym_vu8] = ACTIONS(37),
    [anon_sym_ad] = ACTIONS(30),
    [anon_sym_adfirma] = ACTIONS(30),
    [anon_sym_argumenta] = ACTIONS(30),
    [anon_sym_cape] = ACTIONS(30),
    [anon_sym_casu] = ACTIONS(30),
    [anon_sym_ceterum] = ACTIONS(30),
    [anon_sym_cura] = ACTIONS(30),
    [anon_sym_custodi] = ACTIONS(30),
    [anon_sym_demum] = ACTIONS(30),
    [anon_sym_discerne] = ACTIONS(30),
    [anon_sym_dum] = ACTIONS(30),
    [anon_sym_elige] = ACTIONS(30),
    [anon_sym_emitte] = ACTIONS(30),
    [anon_sym_ergo] = ACTIONS(30),
    [anon_sym_fac] = ACTIONS(30),
    [anon_sym_iace] = ACTIONS(30),
    [anon_sym_incipiet] = ACTIONS(30),
    [anon_sym_incipit] = ACTIONS(30),
    [anon_sym_itera] = ACTIONS(30),
    [anon_sym_mori] = ACTIONS(30),
    [anon_sym_perge] = ACTIONS(30),
    [anon_sym_redde] = ACTIONS(30),
    [anon_sym_rumpe] = ACTIONS(30),
    [anon_sym_secus] = ACTIONS(30),
    [anon_sym_si] = ACTIONS(30),
    [anon_sym_sic] = ACTIONS(30),
    [anon_sym_sin] = ACTIONS(30),
    [anon_sym_tacet] = ACTIONS(30),
    [anon_sym_tempta] = ACTIONS(30),
    [anon_sym_abstractus] = ACTIONS(32),
    [anon_sym_ceteri] = ACTIONS(32),
    [anon_sym_curata] = ACTIONS(32),
    [anon_sym_discretio] = ACTIONS(32),
    [anon_sym_errata] = ACTIONS(32),
    [anon_sym_exitus] = ACTIONS(32),
    [anon_sym_fixum] = ACTIONS(32),
    [anon_sym_functio] = ACTIONS(32),
    [anon_sym_generis] = ACTIONS(32),
    [anon_sym_genus] = ACTIONS(32),
    [anon_sym_iacit] = ACTIONS(32),
    [anon_sym_immutata] = ACTIONS(32),
    [anon_sym_implendum] = ACTIONS(32),
    [anon_sym_importa] = ACTIONS(32),
    [anon_sym_magnitudo] = ACTIONS(32),
    [anon_sym_nexum] = ACTIONS(32),
    [anon_sym_optiones] = ACTIONS(32),
    [anon_sym_ordo] = ACTIONS(32),
    [anon_sym_prae] = ACTIONS(32),
    [anon_sym_sit] = ACTIONS(32),
    [anon_sym_sponte] = ACTIONS(32),
    [anon_sym_typus] = ACTIONS(32),
    [anon_sym_varia] = ACTIONS(32),
    [anon_sym_ante] = ACTIONS(40),
    [anon_sym_aut] = ACTIONS(40),
    [anon_sym_cede] = ACTIONS(40),
    [anon_sym_clausura] = ACTIONS(40),
    [anon_sym_de] = ACTIONS(40),
    [anon_sym_ego] = ACTIONS(40),
    [anon_sym_est] = ACTIONS(40),
    [anon_sym_et] = ACTIONS(40),
    [anon_sym_ex] = ACTIONS(40),
    [anon_sym_finge] = ACTIONS(40),
    [anon_sym_fragilis] = ACTIONS(40),
    [anon_sym_futurum] = ACTIONS(40),
    [anon_sym_implet] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_inter] = ACTIONS(40),
    [anon_sym_intra] = ACTIONS(40),
    [anon_sym_lege] = ACTIONS(40),
    [anon_sym_lineam] = ACTIONS(40),
    [anon_sym_metior] = ACTIONS(40),
    [anon_sym_modulus] = ACTIONS(40),
    [anon_sym_mone] = ACTIONS(40),
    [anon_sym_negativum] = ACTIONS(40),
    [anon_sym_nihil] = ACTIONS(40),
    [anon_sym_non] = ACTIONS(40),
    [anon_sym_nonnihil] = ACTIONS(40),
    [anon_sym_nonnulla] = ACTIONS(40),
    [anon_sym_nota] = ACTIONS(40),
    [anon_sym_nulla] = ACTIONS(40),
    [anon_sym_omitte] = ACTIONS(40),
    [anon_sym_omnia] = ACTIONS(40),
    [anon_sym_per] = ACTIONS(40),
    [anon_sym_positivum] = ACTIONS(40),
    [anon_sym_postpara] = ACTIONS(40),
    [anon_sym_postparabit] = ACTIONS(40),
    [anon_sym_praefixum] = ACTIONS(40),
    [anon_sym_praepara] = ACTIONS(40),
    [anon_sym_praeparabit] = ACTIONS(40),
    [anon_sym_pro] = ACTIONS(40),
    [anon_sym_proba] = ACTIONS(40),
    [anon_sym_probandum] = ACTIONS(40),
    [anon_sym_repete] = ACTIONS(40),
    [anon_sym_requirit] = ACTIONS(40),
    [anon_sym_scribe] = ACTIONS(40),
    [anon_sym_scriptum] = ACTIONS(40),
    [anon_sym_solum] = ACTIONS(40),
    [anon_sym_solum_in] = ACTIONS(40),
    [anon_sym_sparge] = ACTIONS(40),
    [anon_sym_sub] = ACTIONS(40),
    [anon_sym_tag] = ACTIONS(40),
    [anon_sym_temporis] = ACTIONS(40),
    [anon_sym_usque] = ACTIONS(40),
    [anon_sym_ut] = ACTIONS(40),
    [anon_sym_vel] = ACTIONS(40),
    [anon_sym_vide] = ACTIONS(40),
    [anon_sym_falsum] = ACTIONS(43),
    [anon_sym_verum] = ACTIONS(43),
    [sym_guillemet_string] = ACTIONS(46),
    [sym_octeti_string] = ACTIONS(46),
    [sym_backtick_string] = ACTIONS(46),
    [sym_ascii_string] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_number] = ACTIONS(46),
    [sym_identifier] = ACTIONS(49),
    [sym_operator] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_hash] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(25),
    [sym_faber_newline] = ACTIONS(25),
  },
  [3] = {
    [sym_annotation_modifier] = STATE(3),
    [sym_annotation_value_type] = STATE(3),
    [sym__annotation_argument] = STATE(3),
    [sym_keyword_declaration] = STATE(3),
    [sym_keyword_other] = STATE(3),
    [sym_boolean] = STATE(3),
    [aux_sym_annotation_arguments_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_at_sign] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_cursor] = ACTIONS(54),
    [anon_sym_json] = ACTIONS(54),
    [anon_sym_privata] = ACTIONS(56),
    [anon_sym_protecta] = ACTIONS(56),
    [anon_sym_publica] = ACTIONS(56),
    [anon_sym_brevis] = ACTIONS(59),
    [anon_sym_descriptio] = ACTIONS(59),
    [anon_sym_longum] = ACTIONS(59),
    [anon_sym_nomen] = ACTIONS(59),
    [anon_sym_ubique] = ACTIONS(59),
    [anon_sym_ascii] = ACTIONS(62),
    [anon_sym_bivalens] = ACTIONS(62),
    [anon_sym_copia] = ACTIONS(62),
    [anon_sym_f16] = ACTIONS(62),
    [anon_sym_f32] = ACTIONS(62),
    [anon_sym_f64] = ACTIONS(62),
    [anon_sym_fractus] = ACTIONS(62),
    [anon_sym_i16] = ACTIONS(62),
    [anon_sym_i32] = ACTIONS(62),
    [anon_sym_i64] = ACTIONS(62),
    [anon_sym_i8] = ACTIONS(62),
    [anon_sym_ignotum] = ACTIONS(62),
    [anon_sym_instans] = ACTIONS(62),
    [anon_sym_intervallum] = ACTIONS(62),
    [anon_sym_lf16] = ACTIONS(62),
    [anon_sym_lf32] = ACTIONS(62),
    [anon_sym_lf64] = ACTIONS(62),
    [anon_sym_li16] = ACTIONS(62),
    [anon_sym_li32] = ACTIONS(62),
    [anon_sym_li64] = ACTIONS(62),
    [anon_sym_li8] = ACTIONS(62),
    [anon_sym_lista] = ACTIONS(62),
    [anon_sym_lu16] = ACTIONS(62),
    [anon_sym_lu32] = ACTIONS(62),
    [anon_sym_lu64] = ACTIONS(62),
    [anon_sym_lu8] = ACTIONS(62),
    [anon_sym_matrix] = ACTIONS(62),
    [anon_sym_mf16] = ACTIONS(62),
    [anon_sym_mf32] = ACTIONS(62),
    [anon_sym_mf64] = ACTIONS(62),
    [anon_sym_mi16] = ACTIONS(62),
    [anon_sym_mi32] = ACTIONS(62),
    [anon_sym_mi64] = ACTIONS(62),
    [anon_sym_mi8] = ACTIONS(62),
    [anon_sym_mu16] = ACTIONS(62),
    [anon_sym_mu32] = ACTIONS(62),
    [anon_sym_mu64] = ACTIONS(62),
    [anon_sym_mu8] = ACTIONS(62),
    [anon_sym_numerus] = ACTIONS(62),
    [anon_sym_numquam] = ACTIONS(62),
    [anon_sym_octet] = ACTIONS(62),
    [anon_sym_octeti] = ACTIONS(62),
    [anon_sym_promissum] = ACTIONS(62),
    [anon_sym_regex] = ACTIONS(62),
    [anon_sym_series] = ACTIONS(62),
    [anon_sym_sf16] = ACTIONS(62),
    [anon_sym_sf32] = ACTIONS(62),
    [anon_sym_sf64] = ACTIONS(62),
    [anon_sym_si16] = ACTIONS(62),
    [anon_sym_si32] = ACTIONS(62),
    [anon_sym_si64] = ACTIONS(62),
    [anon_sym_si8] = ACTIONS(62),
    [anon_sym_sparsa] = ACTIONS(62),
    [anon_sym_su16] = ACTIONS(62),
    [anon_sym_su32] = ACTIONS(62),
    [anon_sym_su64] = ACTIONS(62),
    [anon_sym_su8] = ACTIONS(62),
    [anon_sym_tabula] = ACTIONS(62),
    [anon_sym_tensor] = ACTIONS(62),
    [anon_sym_textus] = ACTIONS(62),
    [anon_sym_tf16] = ACTIONS(62),
    [anon_sym_tf32] = ACTIONS(62),
    [anon_sym_tf64] = ACTIONS(62),
    [anon_sym_ti16] = ACTIONS(62),
    [anon_sym_ti32] = ACTIONS(62),
    [anon_sym_ti64] = ACTIONS(62),
    [anon_sym_ti8] = ACTIONS(62),
    [anon_sym_tu16] = ACTIONS(62),
    [anon_sym_tu32] = ACTIONS(62),
    [anon_sym_tu64] = ACTIONS(62),
    [anon_sym_tu8] = ACTIONS(62),
    [anon_sym_u16] = ACTIONS(62),
    [anon_sym_u32] = ACTIONS(62),
    [anon_sym_u64] = ACTIONS(62),
    [anon_sym_u8] = ACTIONS(62),
    [anon_sym_unio] = ACTIONS(62),
    [anon_sym_vacua] = ACTIONS(62),
    [anon_sym_vacuum] = ACTIONS(62),
    [anon_sym_valor] = ACTIONS(62),
    [anon_sym_vector] = ACTIONS(62),
    [anon_sym_vf16] = ACTIONS(62),
    [anon_sym_vf32] = ACTIONS(62),
    [anon_sym_vf64] = ACTIONS(62),
    [anon_sym_vi16] = ACTIONS(62),
    [anon_sym_vi32] = ACTIONS(62),
    [anon_sym_vi64] = ACTIONS(62),
    [anon_sym_vi8] = ACTIONS(62),
    [anon_sym_vu16] = ACTIONS(62),
    [anon_sym_vu32] = ACTIONS(62),
    [anon_sym_vu64] = ACTIONS(62),
    [anon_sym_vu8] = ACTIONS(62),
    [anon_sym_ad] = ACTIONS(54),
    [anon_sym_adfirma] = ACTIONS(54),
    [anon_sym_argumenta] = ACTIONS(54),
    [anon_sym_cape] = ACTIONS(54),
    [anon_sym_casu] = ACTIONS(54),
    [anon_sym_ceterum] = ACTIONS(54),
    [anon_sym_cura] = ACTIONS(54),
    [anon_sym_custodi] = ACTIONS(54),
    [anon_sym_demum] = ACTIONS(54),
    [anon_sym_discerne] = ACTIONS(54),
    [anon_sym_dum] = ACTIONS(54),
    [anon_sym_elige] = ACTIONS(54),
    [anon_sym_emitte] = ACTIONS(54),
    [anon_sym_ergo] = ACTIONS(54),
    [anon_sym_fac] = ACTIONS(54),
    [anon_sym_iace] = ACTIONS(54),
    [anon_sym_incipiet] = ACTIONS(54),
    [anon_sym_incipit] = ACTIONS(54),
    [anon_sym_itera] = ACTIONS(54),
    [anon_sym_mori] = ACTIONS(54),
    [anon_sym_perge] = ACTIONS(54),
    [anon_sym_redde] = ACTIONS(54),
    [anon_sym_rumpe] = ACTIONS(54),
    [anon_sym_secus] = ACTIONS(54),
    [anon_sym_si] = ACTIONS(54),
    [anon_sym_sic] = ACTIONS(54),
    [anon_sym_sin] = ACTIONS(54),
    [anon_sym_tacet] = ACTIONS(54),
    [anon_sym_tempta] = ACTIONS(54),
    [anon_sym_abstractus] = ACTIONS(56),
    [anon_sym_ceteri] = ACTIONS(56),
    [anon_sym_curata] = ACTIONS(56),
    [anon_sym_discretio] = ACTIONS(56),
    [anon_sym_errata] = ACTIONS(56),
    [anon_sym_exitus] = ACTIONS(56),
    [anon_sym_fixum] = ACTIONS(56),
    [anon_sym_functio] = ACTIONS(56),
    [anon_sym_generis] = ACTIONS(56),
    [anon_sym_genus] = ACTIONS(56),
    [anon_sym_iacit] = ACTIONS(56),
    [anon_sym_immutata] = ACTIONS(56),
    [anon_sym_implendum] = ACTIONS(56),
    [anon_sym_importa] = ACTIONS(56),
    [anon_sym_magnitudo] = ACTIONS(56),
    [anon_sym_nexum] = ACTIONS(56),
    [anon_sym_optiones] = ACTIONS(56),
    [anon_sym_ordo] = ACTIONS(56),
    [anon_sym_prae] = ACTIONS(56),
    [anon_sym_sit] = ACTIONS(56),
    [anon_sym_sponte] = ACTIONS(56),
    [anon_sym_typus] = ACTIONS(56),
    [anon_sym_varia] = ACTIONS(56),
    [anon_sym_ante] = ACTIONS(65),
    [anon_sym_aut] = ACTIONS(65),
    [anon_sym_cede] = ACTIONS(65),
    [anon_sym_clausura] = ACTIONS(65),
    [anon_sym_de] = ACTIONS(65),
    [anon_sym_ego] = ACTIONS(65),
    [anon_sym_est] = ACTIONS(65),
    [anon_sym_et] = ACTIONS(65),
    [anon_sym_ex] = ACTIONS(65),
    [anon_sym_finge] = ACTIONS(65),
    [anon_sym_fragilis] = ACTIONS(65),
    [anon_sym_futurum] = ACTIONS(65),
    [anon_sym_implet] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_inter] = ACTIONS(65),
    [anon_sym_intra] = ACTIONS(65),
    [anon_sym_lege] = ACTIONS(65),
    [anon_sym_lineam] = ACTIONS(65),
    [anon_sym_metior] = ACTIONS(65),
    [anon_sym_modulus] = ACTIONS(65),
    [anon_sym_mone] = ACTIONS(65),
    [anon_sym_negativum] = ACTIONS(65),
    [anon_sym_nihil] = ACTIONS(65),
    [anon_sym_non] = ACTIONS(65),
    [anon_sym_nonnihil] = ACTIONS(65),
    [anon_sym_nonnulla] = ACTIONS(65),
    [anon_sym_nota] = ACTIONS(65),
    [anon_sym_nulla] = ACTIONS(65),
    [anon_sym_omitte] = ACTIONS(65),
    [anon_sym_omnia] = ACTIONS(65),
    [anon_sym_per] = ACTIONS(65),
    [anon_sym_positivum] = ACTIONS(65),
    [anon_sym_postpara] = ACTIONS(65),
    [anon_sym_postparabit] = ACTIONS(65),
    [anon_sym_praefixum] = ACTIONS(65),
    [anon_sym_praepara] = ACTIONS(65),
    [anon_sym_praeparabit] = ACTIONS(65),
    [anon_sym_pro] = ACTIONS(65),
    [anon_sym_proba] = ACTIONS(65),
    [anon_sym_probandum] = ACTIONS(65),
    [anon_sym_repete] = ACTIONS(65),
    [anon_sym_requirit] = ACTIONS(65),
    [anon_sym_scribe] = ACTIONS(65),
    [anon_sym_scriptum] = ACTIONS(65),
    [anon_sym_solum] = ACTIONS(65),
    [anon_sym_solum_in] = ACTIONS(65),
    [anon_sym_sparge] = ACTIONS(65),
    [anon_sym_sub] = ACTIONS(65),
    [anon_sym_tag] = ACTIONS(65),
    [anon_sym_temporis] = ACTIONS(65),
    [anon_sym_usque] = ACTIONS(65),
    [anon_sym_ut] = ACTIONS(65),
    [anon_sym_vel] = ACTIONS(65),
    [anon_sym_vide] = ACTIONS(65),
    [anon_sym_falsum] = ACTIONS(68),
    [anon_sym_verum] = ACTIONS(68),
    [sym_guillemet_string] = ACTIONS(71),
    [sym_octeti_string] = ACTIONS(71),
    [sym_backtick_string] = ACTIONS(71),
    [sym_ascii_string] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [sym_identifier] = ACTIONS(74),
    [sym_operator] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_SEMI] = ACTIONS(52),
    [sym_hash] = ACTIONS(52),
    [sym_line_comment] = ACTIONS(52),
    [sym_faber_newline] = ACTIONS(52),
  },
  [4] = {
    [sym_annotation_modifier] = STATE(3),
    [sym_annotation_value_type] = STATE(3),
    [sym__annotation_argument] = STATE(3),
    [sym_keyword_declaration] = STATE(3),
    [sym_keyword_other] = STATE(3),
    [sym_boolean] = STATE(3),
    [aux_sym_annotation_arguments_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_at_sign] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_cursor] = ACTIONS(79),
    [anon_sym_json] = ACTIONS(79),
    [anon_sym_privata] = ACTIONS(81),
    [anon_sym_protecta] = ACTIONS(81),
    [anon_sym_publica] = ACTIONS(81),
    [anon_sym_brevis] = ACTIONS(35),
    [anon_sym_descriptio] = ACTIONS(35),
    [anon_sym_longum] = ACTIONS(35),
    [anon_sym_nomen] = ACTIONS(35),
    [anon_sym_ubique] = ACTIONS(35),
    [anon_sym_ascii] = ACTIONS(84),
    [anon_sym_bivalens] = ACTIONS(84),
    [anon_sym_copia] = ACTIONS(84),
    [anon_sym_f16] = ACTIONS(84),
    [anon_sym_f32] = ACTIONS(84),
    [anon_sym_f64] = ACTIONS(84),
    [anon_sym_fractus] = ACTIONS(84),
    [anon_sym_i16] = ACTIONS(84),
    [anon_sym_i32] = ACTIONS(84),
    [anon_sym_i64] = ACTIONS(84),
    [anon_sym_i8] = ACTIONS(84),
    [anon_sym_ignotum] = ACTIONS(84),
    [anon_sym_instans] = ACTIONS(84),
    [anon_sym_intervallum] = ACTIONS(84),
    [anon_sym_lf16] = ACTIONS(84),
    [anon_sym_lf32] = ACTIONS(84),
    [anon_sym_lf64] = ACTIONS(84),
    [anon_sym_li16] = ACTIONS(84),
    [anon_sym_li32] = ACTIONS(84),
    [anon_sym_li64] = ACTIONS(84),
    [anon_sym_li8] = ACTIONS(84),
    [anon_sym_lista] = ACTIONS(84),
    [anon_sym_lu16] = ACTIONS(84),
    [anon_sym_lu32] = ACTIONS(84),
    [anon_sym_lu64] = ACTIONS(84),
    [anon_sym_lu8] = ACTIONS(84),
    [anon_sym_matrix] = ACTIONS(84),
    [anon_sym_mf16] = ACTIONS(84),
    [anon_sym_mf32] = ACTIONS(84),
    [anon_sym_mf64] = ACTIONS(84),
    [anon_sym_mi16] = ACTIONS(84),
    [anon_sym_mi32] = ACTIONS(84),
    [anon_sym_mi64] = ACTIONS(84),
    [anon_sym_mi8] = ACTIONS(84),
    [anon_sym_mu16] = ACTIONS(84),
    [anon_sym_mu32] = ACTIONS(84),
    [anon_sym_mu64] = ACTIONS(84),
    [anon_sym_mu8] = ACTIONS(84),
    [anon_sym_numerus] = ACTIONS(84),
    [anon_sym_numquam] = ACTIONS(84),
    [anon_sym_octet] = ACTIONS(84),
    [anon_sym_octeti] = ACTIONS(84),
    [anon_sym_promissum] = ACTIONS(84),
    [anon_sym_regex] = ACTIONS(84),
    [anon_sym_series] = ACTIONS(84),
    [anon_sym_sf16] = ACTIONS(84),
    [anon_sym_sf32] = ACTIONS(84),
    [anon_sym_sf64] = ACTIONS(84),
    [anon_sym_si16] = ACTIONS(84),
    [anon_sym_si32] = ACTIONS(84),
    [anon_sym_si64] = ACTIONS(84),
    [anon_sym_si8] = ACTIONS(84),
    [anon_sym_sparsa] = ACTIONS(84),
    [anon_sym_su16] = ACTIONS(84),
    [anon_sym_su32] = ACTIONS(84),
    [anon_sym_su64] = ACTIONS(84),
    [anon_sym_su8] = ACTIONS(84),
    [anon_sym_tabula] = ACTIONS(84),
    [anon_sym_tensor] = ACTIONS(84),
    [anon_sym_textus] = ACTIONS(84),
    [anon_sym_tf16] = ACTIONS(84),
    [anon_sym_tf32] = ACTIONS(84),
    [anon_sym_tf64] = ACTIONS(84),
    [anon_sym_ti16] = ACTIONS(84),
    [anon_sym_ti32] = ACTIONS(84),
    [anon_sym_ti64] = ACTIONS(84),
    [anon_sym_ti8] = ACTIONS(84),
    [anon_sym_tu16] = ACTIONS(84),
    [anon_sym_tu32] = ACTIONS(84),
    [anon_sym_tu64] = ACTIONS(84),
    [anon_sym_tu8] = ACTIONS(84),
    [anon_sym_u16] = ACTIONS(84),
    [anon_sym_u32] = ACTIONS(84),
    [anon_sym_u64] = ACTIONS(84),
    [anon_sym_u8] = ACTIONS(84),
    [anon_sym_unio] = ACTIONS(84),
    [anon_sym_vacua] = ACTIONS(84),
    [anon_sym_vacuum] = ACTIONS(84),
    [anon_sym_valor] = ACTIONS(84),
    [anon_sym_vector] = ACTIONS(84),
    [anon_sym_vf16] = ACTIONS(84),
    [anon_sym_vf32] = ACTIONS(84),
    [anon_sym_vf64] = ACTIONS(84),
    [anon_sym_vi16] = ACTIONS(84),
    [anon_sym_vi32] = ACTIONS(84),
    [anon_sym_vi64] = ACTIONS(84),
    [anon_sym_vi8] = ACTIONS(84),
    [anon_sym_vu16] = ACTIONS(84),
    [anon_sym_vu32] = ACTIONS(84),
    [anon_sym_vu64] = ACTIONS(84),
    [anon_sym_vu8] = ACTIONS(84),
    [anon_sym_ad] = ACTIONS(79),
    [anon_sym_adfirma] = ACTIONS(79),
    [anon_sym_argumenta] = ACTIONS(79),
    [anon_sym_cape] = ACTIONS(79),
    [anon_sym_casu] = ACTIONS(79),
    [anon_sym_ceterum] = ACTIONS(79),
    [anon_sym_cura] = ACTIONS(79),
    [anon_sym_custodi] = ACTIONS(79),
    [anon_sym_demum] = ACTIONS(79),
    [anon_sym_discerne] = ACTIONS(79),
    [anon_sym_dum] = ACTIONS(79),
    [anon_sym_elige] = ACTIONS(79),
    [anon_sym_emitte] = ACTIONS(79),
    [anon_sym_ergo] = ACTIONS(79),
    [anon_sym_fac] = ACTIONS(79),
    [anon_sym_iace] = ACTIONS(79),
    [anon_sym_incipiet] = ACTIONS(79),
    [anon_sym_incipit] = ACTIONS(79),
    [anon_sym_itera] = ACTIONS(79),
    [anon_sym_mori] = ACTIONS(79),
    [anon_sym_perge] = ACTIONS(79),
    [anon_sym_redde] = ACTIONS(79),
    [anon_sym_rumpe] = ACTIONS(79),
    [anon_sym_secus] = ACTIONS(79),
    [anon_sym_si] = ACTIONS(79),
    [anon_sym_sic] = ACTIONS(79),
    [anon_sym_sin] = ACTIONS(79),
    [anon_sym_tacet] = ACTIONS(79),
    [anon_sym_tempta] = ACTIONS(79),
    [anon_sym_abstractus] = ACTIONS(81),
    [anon_sym_ceteri] = ACTIONS(81),
    [anon_sym_curata] = ACTIONS(81),
    [anon_sym_discretio] = ACTIONS(81),
    [anon_sym_errata] = ACTIONS(81),
    [anon_sym_exitus] = ACTIONS(81),
    [anon_sym_fixum] = ACTIONS(81),
    [anon_sym_functio] = ACTIONS(81),
    [anon_sym_generis] = ACTIONS(81),
    [anon_sym_genus] = ACTIONS(81),
    [anon_sym_iacit] = ACTIONS(81),
    [anon_sym_immutata] = ACTIONS(81),
    [anon_sym_implendum] = ACTIONS(81),
    [anon_sym_importa] = ACTIONS(81),
    [anon_sym_magnitudo] = ACTIONS(81),
    [anon_sym_nexum] = ACTIONS(81),
    [anon_sym_optiones] = ACTIONS(81),
    [anon_sym_ordo] = ACTIONS(81),
    [anon_sym_prae] = ACTIONS(81),
    [anon_sym_sit] = ACTIONS(81),
    [anon_sym_sponte] = ACTIONS(81),
    [anon_sym_typus] = ACTIONS(81),
    [anon_sym_varia] = ACTIONS(81),
    [anon_sym_ante] = ACTIONS(87),
    [anon_sym_aut] = ACTIONS(87),
    [anon_sym_cede] = ACTIONS(87),
    [anon_sym_clausura] = ACTIONS(87),
    [anon_sym_de] = ACTIONS(87),
    [anon_sym_ego] = ACTIONS(87),
    [anon_sym_est] = ACTIONS(87),
    [anon_sym_et] = ACTIONS(87),
    [anon_sym_ex] = ACTIONS(87),
    [anon_sym_finge] = ACTIONS(87),
    [anon_sym_fragilis] = ACTIONS(87),
    [anon_sym_futurum] = ACTIONS(87),
    [anon_sym_implet] = ACTIONS(87),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_inter] = ACTIONS(87),
    [anon_sym_intra] = ACTIONS(87),
    [anon_sym_lege] = ACTIONS(87),
    [anon_sym_lineam] = ACTIONS(87),
    [anon_sym_metior] = ACTIONS(87),
    [anon_sym_modulus] = ACTIONS(87),
    [anon_sym_mone] = ACTIONS(87),
    [anon_sym_negativum] = ACTIONS(87),
    [anon_sym_nihil] = ACTIONS(87),
    [anon_sym_non] = ACTIONS(87),
    [anon_sym_nonnihil] = ACTIONS(87),
    [anon_sym_nonnulla] = ACTIONS(87),
    [anon_sym_nota] = ACTIONS(87),
    [anon_sym_nulla] = ACTIONS(87),
    [anon_sym_omitte] = ACTIONS(87),
    [anon_sym_omnia] = ACTIONS(87),
    [anon_sym_per] = ACTIONS(87),
    [anon_sym_positivum] = ACTIONS(87),
    [anon_sym_postpara] = ACTIONS(87),
    [anon_sym_postparabit] = ACTIONS(87),
    [anon_sym_praefixum] = ACTIONS(87),
    [anon_sym_praepara] = ACTIONS(87),
    [anon_sym_praeparabit] = ACTIONS(87),
    [anon_sym_pro] = ACTIONS(87),
    [anon_sym_proba] = ACTIONS(87),
    [anon_sym_probandum] = ACTIONS(87),
    [anon_sym_repete] = ACTIONS(87),
    [anon_sym_requirit] = ACTIONS(87),
    [anon_sym_scribe] = ACTIONS(87),
    [anon_sym_scriptum] = ACTIONS(87),
    [anon_sym_solum] = ACTIONS(87),
    [anon_sym_solum_in] = ACTIONS(87),
    [anon_sym_sparge] = ACTIONS(87),
    [anon_sym_sub] = ACTIONS(87),
    [anon_sym_tag] = ACTIONS(87),
    [anon_sym_temporis] = ACTIONS(87),
    [anon_sym_usque] = ACTIONS(87),
    [anon_sym_ut] = ACTIONS(87),
    [anon_sym_vel] = ACTIONS(87),
    [anon_sym_vide] = ACTIONS(87),
    [anon_sym_falsum] = ACTIONS(90),
    [anon_sym_verum] = ACTIONS(90),
    [sym_guillemet_string] = ACTIONS(93),
    [sym_octeti_string] = ACTIONS(93),
    [sym_backtick_string] = ACTIONS(93),
    [sym_ascii_string] = ACTIONS(93),
    [sym_string] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [sym_identifier] = ACTIONS(96),
    [sym_operator] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_hash] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(77),
    [sym_faber_newline] = ACTIONS(77),
  },
  [5] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cursor] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(13),
    [anon_sym_protecta] = ACTIONS(13),
    [anon_sym_publica] = ACTIONS(13),
    [anon_sym_ascii] = ACTIONS(11),
    [anon_sym_bivalens] = ACTIONS(11),
    [anon_sym_copia] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_fractus] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_ignotum] = ACTIONS(11),
    [anon_sym_instans] = ACTIONS(11),
    [anon_sym_intervallum] = ACTIONS(11),
    [anon_sym_lf16] = ACTIONS(11),
    [anon_sym_lf32] = ACTIONS(11),
    [anon_sym_lf64] = ACTIONS(11),
    [anon_sym_li16] = ACTIONS(11),
    [anon_sym_li32] = ACTIONS(11),
    [anon_sym_li64] = ACTIONS(11),
    [anon_sym_li8] = ACTIONS(11),
    [anon_sym_lista] = ACTIONS(11),
    [anon_sym_lu16] = ACTIONS(11),
    [anon_sym_lu32] = ACTIONS(11),
    [anon_sym_lu64] = ACTIONS(11),
    [anon_sym_lu8] = ACTIONS(11),
    [anon_sym_matrix] = ACTIONS(11),
    [anon_sym_mf16] = ACTIONS(11),
    [anon_sym_mf32] = ACTIONS(11),
    [anon_sym_mf64] = ACTIONS(11),
    [anon_sym_mi16] = ACTIONS(11),
    [anon_sym_mi32] = ACTIONS(11),
    [anon_sym_mi64] = ACTIONS(11),
    [anon_sym_mi8] = ACTIONS(11),
    [anon_sym_mu16] = ACTIONS(11),
    [anon_sym_mu32] = ACTIONS(11),
    [anon_sym_mu64] = ACTIONS(11),
    [anon_sym_mu8] = ACTIONS(11),
    [anon_sym_numerus] = ACTIONS(11),
    [anon_sym_numquam] = ACTIONS(11),
    [anon_sym_octet] = ACTIONS(11),
    [anon_sym_octeti] = ACTIONS(11),
    [anon_sym_promissum] = ACTIONS(11),
    [anon_sym_regex] = ACTIONS(11),
    [anon_sym_series] = ACTIONS(11),
    [anon_sym_sf16] = ACTIONS(11),
    [anon_sym_sf32] = ACTIONS(11),
    [anon_sym_sf64] = ACTIONS(11),
    [anon_sym_si16] = ACTIONS(11),
    [anon_sym_si32] = ACTIONS(11),
    [anon_sym_si64] = ACTIONS(11),
    [anon_sym_si8] = ACTIONS(11),
    [anon_sym_sparsa] = ACTIONS(11),
    [anon_sym_su16] = ACTIONS(11),
    [anon_sym_su32] = ACTIONS(11),
    [anon_sym_su64] = ACTIONS(11),
    [anon_sym_su8] = ACTIONS(11),
    [anon_sym_tabula] = ACTIONS(11),
    [anon_sym_tensor] = ACTIONS(11),
    [anon_sym_textus] = ACTIONS(11),
    [anon_sym_tf16] = ACTIONS(11),
    [anon_sym_tf32] = ACTIONS(11),
    [anon_sym_tf64] = ACTIONS(11),
    [anon_sym_ti16] = ACTIONS(11),
    [anon_sym_ti32] = ACTIONS(11),
    [anon_sym_ti64] = ACTIONS(11),
    [anon_sym_ti8] = ACTIONS(11),
    [anon_sym_tu16] = ACTIONS(11),
    [anon_sym_tu32] = ACTIONS(11),
    [anon_sym_tu64] = ACTIONS(11),
    [anon_sym_tu8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_unio] = ACTIONS(11),
    [anon_sym_vacua] = ACTIONS(11),
    [anon_sym_vacuum] = ACTIONS(11),
    [anon_sym_valor] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_vf16] = ACTIONS(11),
    [anon_sym_vf32] = ACTIONS(11),
    [anon_sym_vf64] = ACTIONS(11),
    [anon_sym_vi16] = ACTIONS(11),
    [anon_sym_vi32] = ACTIONS(11),
    [anon_sym_vi64] = ACTIONS(11),
    [anon_sym_vi8] = ACTIONS(11),
    [anon_sym_vu16] = ACTIONS(11),
    [anon_sym_vu32] = ACTIONS(11),
    [anon_sym_vu64] = ACTIONS(11),
    [anon_sym_vu8] = ACTIONS(11),
    [anon_sym_ad] = ACTIONS(15),
    [anon_sym_adfirma] = ACTIONS(15),
    [anon_sym_argumenta] = ACTIONS(15),
    [anon_sym_cape] = ACTIONS(15),
    [anon_sym_casu] = ACTIONS(15),
    [anon_sym_ceterum] = ACTIONS(15),
    [anon_sym_cura] = ACTIONS(15),
    [anon_sym_custodi] = ACTIONS(15),
    [anon_sym_demum] = ACTIONS(15),
    [anon_sym_discerne] = ACTIONS(15),
    [anon_sym_dum] = ACTIONS(15),
    [anon_sym_elige] = ACTIONS(15),
    [anon_sym_emitte] = ACTIONS(15),
    [anon_sym_ergo] = ACTIONS(15),
    [anon_sym_fac] = ACTIONS(15),
    [anon_sym_iace] = ACTIONS(15),
    [anon_sym_incipiet] = ACTIONS(15),
    [anon_sym_incipit] = ACTIONS(15),
    [anon_sym_itera] = ACTIONS(15),
    [anon_sym_mori] = ACTIONS(15),
    [anon_sym_perge] = ACTIONS(15),
    [anon_sym_redde] = ACTIONS(15),
    [anon_sym_rumpe] = ACTIONS(15),
    [anon_sym_secus] = ACTIONS(15),
    [anon_sym_si] = ACTIONS(15),
    [anon_sym_sic] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_tacet] = ACTIONS(15),
    [anon_sym_tempta] = ACTIONS(15),
    [anon_sym_abstractus] = ACTIONS(13),
    [anon_sym_ceteri] = ACTIONS(13),
    [anon_sym_curata] = ACTIONS(13),
    [anon_sym_discretio] = ACTIONS(13),
    [anon_sym_errata] = ACTIONS(13),
    [anon_sym_exitus] = ACTIONS(13),
    [anon_sym_fixum] = ACTIONS(13),
    [anon_sym_functio] = ACTIONS(13),
    [anon_sym_generis] = ACTIONS(13),
    [anon_sym_genus] = ACTIONS(13),
    [anon_sym_iacit] = ACTIONS(13),
    [anon_sym_immutata] = ACTIONS(13),
    [anon_sym_implendum] = ACTIONS(13),
    [anon_sym_importa] = ACTIONS(13),
    [anon_sym_magnitudo] = ACTIONS(13),
    [anon_sym_nexum] = ACTIONS(13),
    [anon_sym_optiones] = ACTIONS(13),
    [anon_sym_ordo] = ACTIONS(13),
    [anon_sym_prae] = ACTIONS(13),
    [anon_sym_sit] = ACTIONS(13),
    [anon_sym_sponte] = ACTIONS(13),
    [anon_sym_typus] = ACTIONS(13),
    [anon_sym_varia] = ACTIONS(13),
    [anon_sym_ante] = ACTIONS(17),
    [anon_sym_aut] = ACTIONS(17),
    [anon_sym_cede] = ACTIONS(17),
    [anon_sym_clausura] = ACTIONS(17),
    [anon_sym_de] = ACTIONS(17),
    [anon_sym_ego] = ACTIONS(17),
    [anon_sym_est] = ACTIONS(17),
    [anon_sym_et] = ACTIONS(17),
    [anon_sym_ex] = ACTIONS(17),
    [anon_sym_finge] = ACTIONS(17),
    [anon_sym_fragilis] = ACTIONS(17),
    [anon_sym_futurum] = ACTIONS(17),
    [anon_sym_implet] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_inter] = ACTIONS(17),
    [anon_sym_intra] = ACTIONS(17),
    [anon_sym_lege] = ACTIONS(17),
    [anon_sym_lineam] = ACTIONS(17),
    [anon_sym_metior] = ACTIONS(17),
    [anon_sym_modulus] = ACTIONS(17),
    [anon_sym_mone] = ACTIONS(17),
    [anon_sym_negativum] = ACTIONS(17),
    [anon_sym_nihil] = ACTIONS(17),
    [anon_sym_non] = ACTIONS(17),
    [anon_sym_nonnihil] = ACTIONS(17),
    [anon_sym_nonnulla] = ACTIONS(17),
    [anon_sym_nota] = ACTIONS(17),
    [anon_sym_nulla] = ACTIONS(17),
    [anon_sym_omitte] = ACTIONS(17),
    [anon_sym_omnia] = ACTIONS(17),
    [anon_sym_per] = ACTIONS(17),
    [anon_sym_positivum] = ACTIONS(17),
    [anon_sym_postpara] = ACTIONS(17),
    [anon_sym_postparabit] = ACTIONS(17),
    [anon_sym_praefixum] = ACTIONS(17),
    [anon_sym_praepara] = ACTIONS(17),
    [anon_sym_praeparabit] = ACTIONS(17),
    [anon_sym_pro] = ACTIONS(17),
    [anon_sym_proba] = ACTIONS(17),
    [anon_sym_probandum] = ACTIONS(17),
    [anon_sym_repete] = ACTIONS(17),
    [anon_sym_requirit] = ACTIONS(17),
    [anon_sym_scribe] = ACTIONS(17),
    [anon_sym_scriptum] = ACTIONS(17),
    [anon_sym_solum] = ACTIONS(17),
    [anon_sym_solum_in] = ACTIONS(17),
    [anon_sym_sparge] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_tag] = ACTIONS(17),
    [anon_sym_temporis] = ACTIONS(17),
    [anon_sym_usque] = ACTIONS(17),
    [anon_sym_ut] = ACTIONS(17),
    [anon_sym_vel] = ACTIONS(17),
    [anon_sym_vide] = ACTIONS(17),
    [anon_sym_falsum] = ACTIONS(19),
    [anon_sym_verum] = ACTIONS(19),
    [sym_guillemet_string] = ACTIONS(101),
    [sym_octeti_string] = ACTIONS(101),
    [sym_backtick_string] = ACTIONS(101),
    [sym_ascii_string] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_operator] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(101),
    [sym_faber_newline] = ACTIONS(101),
  },
  [6] = {
    [sym_annotation] = STATE(5),
    [sym__token] = STATE(5),
    [sym_keyword_control] = STATE(5),
    [sym_keyword_declaration] = STATE(5),
    [sym_keyword_other] = STATE(5),
    [sym_builtin_type] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cursor] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(13),
    [anon_sym_protecta] = ACTIONS(13),
    [anon_sym_publica] = ACTIONS(13),
    [anon_sym_ascii] = ACTIONS(11),
    [anon_sym_bivalens] = ACTIONS(11),
    [anon_sym_copia] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_fractus] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_ignotum] = ACTIONS(11),
    [anon_sym_instans] = ACTIONS(11),
    [anon_sym_intervallum] = ACTIONS(11),
    [anon_sym_lf16] = ACTIONS(11),
    [anon_sym_lf32] = ACTIONS(11),
    [anon_sym_lf64] = ACTIONS(11),
    [anon_sym_li16] = ACTIONS(11),
    [anon_sym_li32] = ACTIONS(11),
    [anon_sym_li64] = ACTIONS(11),
    [anon_sym_li8] = ACTIONS(11),
    [anon_sym_lista] = ACTIONS(11),
    [anon_sym_lu16] = ACTIONS(11),
    [anon_sym_lu32] = ACTIONS(11),
    [anon_sym_lu64] = ACTIONS(11),
    [anon_sym_lu8] = ACTIONS(11),
    [anon_sym_matrix] = ACTIONS(11),
    [anon_sym_mf16] = ACTIONS(11),
    [anon_sym_mf32] = ACTIONS(11),
    [anon_sym_mf64] = ACTIONS(11),
    [anon_sym_mi16] = ACTIONS(11),
    [anon_sym_mi32] = ACTIONS(11),
    [anon_sym_mi64] = ACTIONS(11),
    [anon_sym_mi8] = ACTIONS(11),
    [anon_sym_mu16] = ACTIONS(11),
    [anon_sym_mu32] = ACTIONS(11),
    [anon_sym_mu64] = ACTIONS(11),
    [anon_sym_mu8] = ACTIONS(11),
    [anon_sym_numerus] = ACTIONS(11),
    [anon_sym_numquam] = ACTIONS(11),
    [anon_sym_octet] = ACTIONS(11),
    [anon_sym_octeti] = ACTIONS(11),
    [anon_sym_promissum] = ACTIONS(11),
    [anon_sym_regex] = ACTIONS(11),
    [anon_sym_series] = ACTIONS(11),
    [anon_sym_sf16] = ACTIONS(11),
    [anon_sym_sf32] = ACTIONS(11),
    [anon_sym_sf64] = ACTIONS(11),
    [anon_sym_si16] = ACTIONS(11),
    [anon_sym_si32] = ACTIONS(11),
    [anon_sym_si64] = ACTIONS(11),
    [anon_sym_si8] = ACTIONS(11),
    [anon_sym_sparsa] = ACTIONS(11),
    [anon_sym_su16] = ACTIONS(11),
    [anon_sym_su32] = ACTIONS(11),
    [anon_sym_su64] = ACTIONS(11),
    [anon_sym_su8] = ACTIONS(11),
    [anon_sym_tabula] = ACTIONS(11),
    [anon_sym_tensor] = ACTIONS(11),
    [anon_sym_textus] = ACTIONS(11),
    [anon_sym_tf16] = ACTIONS(11),
    [anon_sym_tf32] = ACTIONS(11),
    [anon_sym_tf64] = ACTIONS(11),
    [anon_sym_ti16] = ACTIONS(11),
    [anon_sym_ti32] = ACTIONS(11),
    [anon_sym_ti64] = ACTIONS(11),
    [anon_sym_ti8] = ACTIONS(11),
    [anon_sym_tu16] = ACTIONS(11),
    [anon_sym_tu32] = ACTIONS(11),
    [anon_sym_tu64] = ACTIONS(11),
    [anon_sym_tu8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_unio] = ACTIONS(11),
    [anon_sym_vacua] = ACTIONS(11),
    [anon_sym_vacuum] = ACTIONS(11),
    [anon_sym_valor] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_vf16] = ACTIONS(11),
    [anon_sym_vf32] = ACTIONS(11),
    [anon_sym_vf64] = ACTIONS(11),
    [anon_sym_vi16] = ACTIONS(11),
    [anon_sym_vi32] = ACTIONS(11),
    [anon_sym_vi64] = ACTIONS(11),
    [anon_sym_vi8] = ACTIONS(11),
    [anon_sym_vu16] = ACTIONS(11),
    [anon_sym_vu32] = ACTIONS(11),
    [anon_sym_vu64] = ACTIONS(11),
    [anon_sym_vu8] = ACTIONS(11),
    [anon_sym_ad] = ACTIONS(15),
    [anon_sym_adfirma] = ACTIONS(15),
    [anon_sym_argumenta] = ACTIONS(15),
    [anon_sym_cape] = ACTIONS(15),
    [anon_sym_casu] = ACTIONS(15),
    [anon_sym_ceterum] = ACTIONS(15),
    [anon_sym_cura] = ACTIONS(15),
    [anon_sym_custodi] = ACTIONS(15),
    [anon_sym_demum] = ACTIONS(15),
    [anon_sym_discerne] = ACTIONS(15),
    [anon_sym_dum] = ACTIONS(15),
    [anon_sym_elige] = ACTIONS(15),
    [anon_sym_emitte] = ACTIONS(15),
    [anon_sym_ergo] = ACTIONS(15),
    [anon_sym_fac] = ACTIONS(15),
    [anon_sym_iace] = ACTIONS(15),
    [anon_sym_incipiet] = ACTIONS(15),
    [anon_sym_incipit] = ACTIONS(15),
    [anon_sym_itera] = ACTIONS(15),
    [anon_sym_mori] = ACTIONS(15),
    [anon_sym_perge] = ACTIONS(15),
    [anon_sym_redde] = ACTIONS(15),
    [anon_sym_rumpe] = ACTIONS(15),
    [anon_sym_secus] = ACTIONS(15),
    [anon_sym_si] = ACTIONS(15),
    [anon_sym_sic] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_tacet] = ACTIONS(15),
    [anon_sym_tempta] = ACTIONS(15),
    [anon_sym_abstractus] = ACTIONS(13),
    [anon_sym_ceteri] = ACTIONS(13),
    [anon_sym_curata] = ACTIONS(13),
    [anon_sym_discretio] = ACTIONS(13),
    [anon_sym_errata] = ACTIONS(13),
    [anon_sym_exitus] = ACTIONS(13),
    [anon_sym_fixum] = ACTIONS(13),
    [anon_sym_functio] = ACTIONS(13),
    [anon_sym_generis] = ACTIONS(13),
    [anon_sym_genus] = ACTIONS(13),
    [anon_sym_iacit] = ACTIONS(13),
    [anon_sym_immutata] = ACTIONS(13),
    [anon_sym_implendum] = ACTIONS(13),
    [anon_sym_importa] = ACTIONS(13),
    [anon_sym_magnitudo] = ACTIONS(13),
    [anon_sym_nexum] = ACTIONS(13),
    [anon_sym_optiones] = ACTIONS(13),
    [anon_sym_ordo] = ACTIONS(13),
    [anon_sym_prae] = ACTIONS(13),
    [anon_sym_sit] = ACTIONS(13),
    [anon_sym_sponte] = ACTIONS(13),
    [anon_sym_typus] = ACTIONS(13),
    [anon_sym_varia] = ACTIONS(13),
    [anon_sym_ante] = ACTIONS(17),
    [anon_sym_aut] = ACTIONS(17),
    [anon_sym_cede] = ACTIONS(17),
    [anon_sym_clausura] = ACTIONS(17),
    [anon_sym_de] = ACTIONS(17),
    [anon_sym_ego] = ACTIONS(17),
    [anon_sym_est] = ACTIONS(17),
    [anon_sym_et] = ACTIONS(17),
    [anon_sym_ex] = ACTIONS(17),
    [anon_sym_finge] = ACTIONS(17),
    [anon_sym_fragilis] = ACTIONS(17),
    [anon_sym_futurum] = ACTIONS(17),
    [anon_sym_implet] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_inter] = ACTIONS(17),
    [anon_sym_intra] = ACTIONS(17),
    [anon_sym_lege] = ACTIONS(17),
    [anon_sym_lineam] = ACTIONS(17),
    [anon_sym_metior] = ACTIONS(17),
    [anon_sym_modulus] = ACTIONS(17),
    [anon_sym_mone] = ACTIONS(17),
    [anon_sym_negativum] = ACTIONS(17),
    [anon_sym_nihil] = ACTIONS(17),
    [anon_sym_non] = ACTIONS(17),
    [anon_sym_nonnihil] = ACTIONS(17),
    [anon_sym_nonnulla] = ACTIONS(17),
    [anon_sym_nota] = ACTIONS(17),
    [anon_sym_nulla] = ACTIONS(17),
    [anon_sym_omitte] = ACTIONS(17),
    [anon_sym_omnia] = ACTIONS(17),
    [anon_sym_per] = ACTIONS(17),
    [anon_sym_positivum] = ACTIONS(17),
    [anon_sym_postpara] = ACTIONS(17),
    [anon_sym_postparabit] = ACTIONS(17),
    [anon_sym_praefixum] = ACTIONS(17),
    [anon_sym_praepara] = ACTIONS(17),
    [anon_sym_praeparabit] = ACTIONS(17),
    [anon_sym_pro] = ACTIONS(17),
    [anon_sym_proba] = ACTIONS(17),
    [anon_sym_probandum] = ACTIONS(17),
    [anon_sym_repete] = ACTIONS(17),
    [anon_sym_requirit] = ACTIONS(17),
    [anon_sym_scribe] = ACTIONS(17),
    [anon_sym_scriptum] = ACTIONS(17),
    [anon_sym_solum] = ACTIONS(17),
    [anon_sym_solum_in] = ACTIONS(17),
    [anon_sym_sparge] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_tag] = ACTIONS(17),
    [anon_sym_temporis] = ACTIONS(17),
    [anon_sym_usque] = ACTIONS(17),
    [anon_sym_ut] = ACTIONS(17),
    [anon_sym_vel] = ACTIONS(17),
    [anon_sym_vide] = ACTIONS(17),
    [anon_sym_falsum] = ACTIONS(19),
    [anon_sym_verum] = ACTIONS(19),
    [sym_guillemet_string] = ACTIONS(107),
    [sym_octeti_string] = ACTIONS(107),
    [sym_backtick_string] = ACTIONS(107),
    [sym_ascii_string] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_operator] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(107),
    [sym_faber_newline] = ACTIONS(107),
  },
  [7] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cursor] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(13),
    [anon_sym_protecta] = ACTIONS(13),
    [anon_sym_publica] = ACTIONS(13),
    [anon_sym_ascii] = ACTIONS(11),
    [anon_sym_bivalens] = ACTIONS(11),
    [anon_sym_copia] = ACTIONS(11),
    [anon_sym_f16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_fractus] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_ignotum] = ACTIONS(11),
    [anon_sym_instans] = ACTIONS(11),
    [anon_sym_intervallum] = ACTIONS(11),
    [anon_sym_lf16] = ACTIONS(11),
    [anon_sym_lf32] = ACTIONS(11),
    [anon_sym_lf64] = ACTIONS(11),
    [anon_sym_li16] = ACTIONS(11),
    [anon_sym_li32] = ACTIONS(11),
    [anon_sym_li64] = ACTIONS(11),
    [anon_sym_li8] = ACTIONS(11),
    [anon_sym_lista] = ACTIONS(11),
    [anon_sym_lu16] = ACTIONS(11),
    [anon_sym_lu32] = ACTIONS(11),
    [anon_sym_lu64] = ACTIONS(11),
    [anon_sym_lu8] = ACTIONS(11),
    [anon_sym_matrix] = ACTIONS(11),
    [anon_sym_mf16] = ACTIONS(11),
    [anon_sym_mf32] = ACTIONS(11),
    [anon_sym_mf64] = ACTIONS(11),
    [anon_sym_mi16] = ACTIONS(11),
    [anon_sym_mi32] = ACTIONS(11),
    [anon_sym_mi64] = ACTIONS(11),
    [anon_sym_mi8] = ACTIONS(11),
    [anon_sym_mu16] = ACTIONS(11),
    [anon_sym_mu32] = ACTIONS(11),
    [anon_sym_mu64] = ACTIONS(11),
    [anon_sym_mu8] = ACTIONS(11),
    [anon_sym_numerus] = ACTIONS(11),
    [anon_sym_numquam] = ACTIONS(11),
    [anon_sym_octet] = ACTIONS(11),
    [anon_sym_octeti] = ACTIONS(11),
    [anon_sym_promissum] = ACTIONS(11),
    [anon_sym_regex] = ACTIONS(11),
    [anon_sym_series] = ACTIONS(11),
    [anon_sym_sf16] = ACTIONS(11),
    [anon_sym_sf32] = ACTIONS(11),
    [anon_sym_sf64] = ACTIONS(11),
    [anon_sym_si16] = ACTIONS(11),
    [anon_sym_si32] = ACTIONS(11),
    [anon_sym_si64] = ACTIONS(11),
    [anon_sym_si8] = ACTIONS(11),
    [anon_sym_sparsa] = ACTIONS(11),
    [anon_sym_su16] = ACTIONS(11),
    [anon_sym_su32] = ACTIONS(11),
    [anon_sym_su64] = ACTIONS(11),
    [anon_sym_su8] = ACTIONS(11),
    [anon_sym_tabula] = ACTIONS(11),
    [anon_sym_tensor] = ACTIONS(11),
    [anon_sym_textus] = ACTIONS(11),
    [anon_sym_tf16] = ACTIONS(11),
    [anon_sym_tf32] = ACTIONS(11),
    [anon_sym_tf64] = ACTIONS(11),
    [anon_sym_ti16] = ACTIONS(11),
    [anon_sym_ti32] = ACTIONS(11),
    [anon_sym_ti64] = ACTIONS(11),
    [anon_sym_ti8] = ACTIONS(11),
    [anon_sym_tu16] = ACTIONS(11),
    [anon_sym_tu32] = ACTIONS(11),
    [anon_sym_tu64] = ACTIONS(11),
    [anon_sym_tu8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_unio] = ACTIONS(11),
    [anon_sym_vacua] = ACTIONS(11),
    [anon_sym_vacuum] = ACTIONS(11),
    [anon_sym_valor] = ACTIONS(11),
    [anon_sym_vector] = ACTIONS(11),
    [anon_sym_vf16] = ACTIONS(11),
    [anon_sym_vf32] = ACTIONS(11),
    [anon_sym_vf64] = ACTIONS(11),
    [anon_sym_vi16] = ACTIONS(11),
    [anon_sym_vi32] = ACTIONS(11),
    [anon_sym_vi64] = ACTIONS(11),
    [anon_sym_vi8] = ACTIONS(11),
    [anon_sym_vu16] = ACTIONS(11),
    [anon_sym_vu32] = ACTIONS(11),
    [anon_sym_vu64] = ACTIONS(11),
    [anon_sym_vu8] = ACTIONS(11),
    [anon_sym_ad] = ACTIONS(15),
    [anon_sym_adfirma] = ACTIONS(15),
    [anon_sym_argumenta] = ACTIONS(15),
    [anon_sym_cape] = ACTIONS(15),
    [anon_sym_casu] = ACTIONS(15),
    [anon_sym_ceterum] = ACTIONS(15),
    [anon_sym_cura] = ACTIONS(15),
    [anon_sym_custodi] = ACTIONS(15),
    [anon_sym_demum] = ACTIONS(15),
    [anon_sym_discerne] = ACTIONS(15),
    [anon_sym_dum] = ACTIONS(15),
    [anon_sym_elige] = ACTIONS(15),
    [anon_sym_emitte] = ACTIONS(15),
    [anon_sym_ergo] = ACTIONS(15),
    [anon_sym_fac] = ACTIONS(15),
    [anon_sym_iace] = ACTIONS(15),
    [anon_sym_incipiet] = ACTIONS(15),
    [anon_sym_incipit] = ACTIONS(15),
    [anon_sym_itera] = ACTIONS(15),
    [anon_sym_mori] = ACTIONS(15),
    [anon_sym_perge] = ACTIONS(15),
    [anon_sym_redde] = ACTIONS(15),
    [anon_sym_rumpe] = ACTIONS(15),
    [anon_sym_secus] = ACTIONS(15),
    [anon_sym_si] = ACTIONS(15),
    [anon_sym_sic] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_tacet] = ACTIONS(15),
    [anon_sym_tempta] = ACTIONS(15),
    [anon_sym_abstractus] = ACTIONS(13),
    [anon_sym_ceteri] = ACTIONS(13),
    [anon_sym_curata] = ACTIONS(13),
    [anon_sym_discretio] = ACTIONS(13),
    [anon_sym_errata] = ACTIONS(13),
    [anon_sym_exitus] = ACTIONS(13),
    [anon_sym_fixum] = ACTIONS(13),
    [anon_sym_functio] = ACTIONS(13),
    [anon_sym_generis] = ACTIONS(13),
    [anon_sym_genus] = ACTIONS(13),
    [anon_sym_iacit] = ACTIONS(13),
    [anon_sym_immutata] = ACTIONS(13),
    [anon_sym_implendum] = ACTIONS(13),
    [anon_sym_importa] = ACTIONS(13),
    [anon_sym_magnitudo] = ACTIONS(13),
    [anon_sym_nexum] = ACTIONS(13),
    [anon_sym_optiones] = ACTIONS(13),
    [anon_sym_ordo] = ACTIONS(13),
    [anon_sym_prae] = ACTIONS(13),
    [anon_sym_sit] = ACTIONS(13),
    [anon_sym_sponte] = ACTIONS(13),
    [anon_sym_typus] = ACTIONS(13),
    [anon_sym_varia] = ACTIONS(13),
    [anon_sym_ante] = ACTIONS(17),
    [anon_sym_aut] = ACTIONS(17),
    [anon_sym_cede] = ACTIONS(17),
    [anon_sym_clausura] = ACTIONS(17),
    [anon_sym_de] = ACTIONS(17),
    [anon_sym_ego] = ACTIONS(17),
    [anon_sym_est] = ACTIONS(17),
    [anon_sym_et] = ACTIONS(17),
    [anon_sym_ex] = ACTIONS(17),
    [anon_sym_finge] = ACTIONS(17),
    [anon_sym_fragilis] = ACTIONS(17),
    [anon_sym_futurum] = ACTIONS(17),
    [anon_sym_implet] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_inter] = ACTIONS(17),
    [anon_sym_intra] = ACTIONS(17),
    [anon_sym_lege] = ACTIONS(17),
    [anon_sym_lineam] = ACTIONS(17),
    [anon_sym_metior] = ACTIONS(17),
    [anon_sym_modulus] = ACTIONS(17),
    [anon_sym_mone] = ACTIONS(17),
    [anon_sym_negativum] = ACTIONS(17),
    [anon_sym_nihil] = ACTIONS(17),
    [anon_sym_non] = ACTIONS(17),
    [anon_sym_nonnihil] = ACTIONS(17),
    [anon_sym_nonnulla] = ACTIONS(17),
    [anon_sym_nota] = ACTIONS(17),
    [anon_sym_nulla] = ACTIONS(17),
    [anon_sym_omitte] = ACTIONS(17),
    [anon_sym_omnia] = ACTIONS(17),
    [anon_sym_per] = ACTIONS(17),
    [anon_sym_positivum] = ACTIONS(17),
    [anon_sym_postpara] = ACTIONS(17),
    [anon_sym_postparabit] = ACTIONS(17),
    [anon_sym_praefixum] = ACTIONS(17),
    [anon_sym_praepara] = ACTIONS(17),
    [anon_sym_praeparabit] = ACTIONS(17),
    [anon_sym_pro] = ACTIONS(17),
    [anon_sym_proba] = ACTIONS(17),
    [anon_sym_probandum] = ACTIONS(17),
    [anon_sym_repete] = ACTIONS(17),
    [anon_sym_requirit] = ACTIONS(17),
    [anon_sym_scribe] = ACTIONS(17),
    [anon_sym_scriptum] = ACTIONS(17),
    [anon_sym_solum] = ACTIONS(17),
    [anon_sym_solum_in] = ACTIONS(17),
    [anon_sym_sparge] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_tag] = ACTIONS(17),
    [anon_sym_temporis] = ACTIONS(17),
    [anon_sym_usque] = ACTIONS(17),
    [anon_sym_ut] = ACTIONS(17),
    [anon_sym_vel] = ACTIONS(17),
    [anon_sym_vide] = ACTIONS(17),
    [anon_sym_falsum] = ACTIONS(19),
    [anon_sym_verum] = ACTIONS(19),
    [sym_guillemet_string] = ACTIONS(101),
    [sym_octeti_string] = ACTIONS(101),
    [sym_backtick_string] = ACTIONS(101),
    [sym_ascii_string] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_operator] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(101),
    [sym_faber_newline] = ACTIONS(101),
  },
  [8] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_at_sign] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_cursor] = ACTIONS(119),
    [anon_sym_json] = ACTIONS(119),
    [anon_sym_privata] = ACTIONS(122),
    [anon_sym_protecta] = ACTIONS(122),
    [anon_sym_publica] = ACTIONS(122),
    [anon_sym_ascii] = ACTIONS(119),
    [anon_sym_bivalens] = ACTIONS(119),
    [anon_sym_copia] = ACTIONS(119),
    [anon_sym_f16] = ACTIONS(119),
    [anon_sym_f32] = ACTIONS(119),
    [anon_sym_f64] = ACTIONS(119),
    [anon_sym_fractus] = ACTIONS(119),
    [anon_sym_i16] = ACTIONS(119),
    [anon_sym_i32] = ACTIONS(119),
    [anon_sym_i64] = ACTIONS(119),
    [anon_sym_i8] = ACTIONS(119),
    [anon_sym_ignotum] = ACTIONS(119),
    [anon_sym_instans] = ACTIONS(119),
    [anon_sym_intervallum] = ACTIONS(119),
    [anon_sym_lf16] = ACTIONS(119),
    [anon_sym_lf32] = ACTIONS(119),
    [anon_sym_lf64] = ACTIONS(119),
    [anon_sym_li16] = ACTIONS(119),
    [anon_sym_li32] = ACTIONS(119),
    [anon_sym_li64] = ACTIONS(119),
    [anon_sym_li8] = ACTIONS(119),
    [anon_sym_lista] = ACTIONS(119),
    [anon_sym_lu16] = ACTIONS(119),
    [anon_sym_lu32] = ACTIONS(119),
    [anon_sym_lu64] = ACTIONS(119),
    [anon_sym_lu8] = ACTIONS(119),
    [anon_sym_matrix] = ACTIONS(119),
    [anon_sym_mf16] = ACTIONS(119),
    [anon_sym_mf32] = ACTIONS(119),
    [anon_sym_mf64] = ACTIONS(119),
    [anon_sym_mi16] = ACTIONS(119),
    [anon_sym_mi32] = ACTIONS(119),
    [anon_sym_mi64] = ACTIONS(119),
    [anon_sym_mi8] = ACTIONS(119),
    [anon_sym_mu16] = ACTIONS(119),
    [anon_sym_mu32] = ACTIONS(119),
    [anon_sym_mu64] = ACTIONS(119),
    [anon_sym_mu8] = ACTIONS(119),
    [anon_sym_numerus] = ACTIONS(119),
    [anon_sym_numquam] = ACTIONS(119),
    [anon_sym_octet] = ACTIONS(119),
    [anon_sym_octeti] = ACTIONS(119),
    [anon_sym_promissum] = ACTIONS(119),
    [anon_sym_regex] = ACTIONS(119),
    [anon_sym_series] = ACTIONS(119),
    [anon_sym_sf16] = ACTIONS(119),
    [anon_sym_sf32] = ACTIONS(119),
    [anon_sym_sf64] = ACTIONS(119),
    [anon_sym_si16] = ACTIONS(119),
    [anon_sym_si32] = ACTIONS(119),
    [anon_sym_si64] = ACTIONS(119),
    [anon_sym_si8] = ACTIONS(119),
    [anon_sym_sparsa] = ACTIONS(119),
    [anon_sym_su16] = ACTIONS(119),
    [anon_sym_su32] = ACTIONS(119),
    [anon_sym_su64] = ACTIONS(119),
    [anon_sym_su8] = ACTIONS(119),
    [anon_sym_tabula] = ACTIONS(119),
    [anon_sym_tensor] = ACTIONS(119),
    [anon_sym_textus] = ACTIONS(119),
    [anon_sym_tf16] = ACTIONS(119),
    [anon_sym_tf32] = ACTIONS(119),
    [anon_sym_tf64] = ACTIONS(119),
    [anon_sym_ti16] = ACTIONS(119),
    [anon_sym_ti32] = ACTIONS(119),
    [anon_sym_ti64] = ACTIONS(119),
    [anon_sym_ti8] = ACTIONS(119),
    [anon_sym_tu16] = ACTIONS(119),
    [anon_sym_tu32] = ACTIONS(119),
    [anon_sym_tu64] = ACTIONS(119),
    [anon_sym_tu8] = ACTIONS(119),
    [anon_sym_u16] = ACTIONS(119),
    [anon_sym_u32] = ACTIONS(119),
    [anon_sym_u64] = ACTIONS(119),
    [anon_sym_u8] = ACTIONS(119),
    [anon_sym_unio] = ACTIONS(119),
    [anon_sym_vacua] = ACTIONS(119),
    [anon_sym_vacuum] = ACTIONS(119),
    [anon_sym_valor] = ACTIONS(119),
    [anon_sym_vector] = ACTIONS(119),
    [anon_sym_vf16] = ACTIONS(119),
    [anon_sym_vf32] = ACTIONS(119),
    [anon_sym_vf64] = ACTIONS(119),
    [anon_sym_vi16] = ACTIONS(119),
    [anon_sym_vi32] = ACTIONS(119),
    [anon_sym_vi64] = ACTIONS(119),
    [anon_sym_vi8] = ACTIONS(119),
    [anon_sym_vu16] = ACTIONS(119),
    [anon_sym_vu32] = ACTIONS(119),
    [anon_sym_vu64] = ACTIONS(119),
    [anon_sym_vu8] = ACTIONS(119),
    [anon_sym_ad] = ACTIONS(125),
    [anon_sym_adfirma] = ACTIONS(125),
    [anon_sym_argumenta] = ACTIONS(125),
    [anon_sym_cape] = ACTIONS(125),
    [anon_sym_casu] = ACTIONS(125),
    [anon_sym_ceterum] = ACTIONS(125),
    [anon_sym_cura] = ACTIONS(125),
    [anon_sym_custodi] = ACTIONS(125),
    [anon_sym_demum] = ACTIONS(125),
    [anon_sym_discerne] = ACTIONS(125),
    [anon_sym_dum] = ACTIONS(125),
    [anon_sym_elige] = ACTIONS(125),
    [anon_sym_emitte] = ACTIONS(125),
    [anon_sym_ergo] = ACTIONS(125),
    [anon_sym_fac] = ACTIONS(125),
    [anon_sym_iace] = ACTIONS(125),
    [anon_sym_incipiet] = ACTIONS(125),
    [anon_sym_incipit] = ACTIONS(125),
    [anon_sym_itera] = ACTIONS(125),
    [anon_sym_mori] = ACTIONS(125),
    [anon_sym_perge] = ACTIONS(125),
    [anon_sym_redde] = ACTIONS(125),
    [anon_sym_rumpe] = ACTIONS(125),
    [anon_sym_secus] = ACTIONS(125),
    [anon_sym_si] = ACTIONS(125),
    [anon_sym_sic] = ACTIONS(125),
    [anon_sym_sin] = ACTIONS(125),
    [anon_sym_tacet] = ACTIONS(125),
    [anon_sym_tempta] = ACTIONS(125),
    [anon_sym_abstractus] = ACTIONS(122),
    [anon_sym_ceteri] = ACTIONS(122),
    [anon_sym_curata] = ACTIONS(122),
    [anon_sym_discretio] = ACTIONS(122),
    [anon_sym_errata] = ACTIONS(122),
    [anon_sym_exitus] = ACTIONS(122),
    [anon_sym_fixum] = ACTIONS(122),
    [anon_sym_functio] = ACTIONS(122),
    [anon_sym_generis] = ACTIONS(122),
    [anon_sym_genus] = ACTIONS(122),
    [anon_sym_iacit] = ACTIONS(122),
    [anon_sym_immutata] = ACTIONS(122),
    [anon_sym_implendum] = ACTIONS(122),
    [anon_sym_importa] = ACTIONS(122),
    [anon_sym_magnitudo] = ACTIONS(122),
    [anon_sym_nexum] = ACTIONS(122),
    [anon_sym_optiones] = ACTIONS(122),
    [anon_sym_ordo] = ACTIONS(122),
    [anon_sym_prae] = ACTIONS(122),
    [anon_sym_sit] = ACTIONS(122),
    [anon_sym_sponte] = ACTIONS(122),
    [anon_sym_typus] = ACTIONS(122),
    [anon_sym_varia] = ACTIONS(122),
    [anon_sym_ante] = ACTIONS(128),
    [anon_sym_aut] = ACTIONS(128),
    [anon_sym_cede] = ACTIONS(128),
    [anon_sym_clausura] = ACTIONS(128),
    [anon_sym_de] = ACTIONS(128),
    [anon_sym_ego] = ACTIONS(128),
    [anon_sym_est] = ACTIONS(128),
    [anon_sym_et] = ACTIONS(128),
    [anon_sym_ex] = ACTIONS(128),
    [anon_sym_finge] = ACTIONS(128),
    [anon_sym_fragilis] = ACTIONS(128),
    [anon_sym_futurum] = ACTIONS(128),
    [anon_sym_implet] = ACTIONS(128),
    [anon_sym_in] = ACTIONS(128),
    [anon_sym_inter] = ACTIONS(128),
    [anon_sym_intra] = ACTIONS(128),
    [anon_sym_lege] = ACTIONS(128),
    [anon_sym_lineam] = ACTIONS(128),
    [anon_sym_metior] = ACTIONS(128),
    [anon_sym_modulus] = ACTIONS(128),
    [anon_sym_mone] = ACTIONS(128),
    [anon_sym_negativum] = ACTIONS(128),
    [anon_sym_nihil] = ACTIONS(128),
    [anon_sym_non] = ACTIONS(128),
    [anon_sym_nonnihil] = ACTIONS(128),
    [anon_sym_nonnulla] = ACTIONS(128),
    [anon_sym_nota] = ACTIONS(128),
    [anon_sym_nulla] = ACTIONS(128),
    [anon_sym_omitte] = ACTIONS(128),
    [anon_sym_omnia] = ACTIONS(128),
    [anon_sym_per] = ACTIONS(128),
    [anon_sym_positivum] = ACTIONS(128),
    [anon_sym_postpara] = ACTIONS(128),
    [anon_sym_postparabit] = ACTIONS(128),
    [anon_sym_praefixum] = ACTIONS(128),
    [anon_sym_praepara] = ACTIONS(128),
    [anon_sym_praeparabit] = ACTIONS(128),
    [anon_sym_pro] = ACTIONS(128),
    [anon_sym_proba] = ACTIONS(128),
    [anon_sym_probandum] = ACTIONS(128),
    [anon_sym_repete] = ACTIONS(128),
    [anon_sym_requirit] = ACTIONS(128),
    [anon_sym_scribe] = ACTIONS(128),
    [anon_sym_scriptum] = ACTIONS(128),
    [anon_sym_solum] = ACTIONS(128),
    [anon_sym_solum_in] = ACTIONS(128),
    [anon_sym_sparge] = ACTIONS(128),
    [anon_sym_sub] = ACTIONS(128),
    [anon_sym_tag] = ACTIONS(128),
    [anon_sym_temporis] = ACTIONS(128),
    [anon_sym_usque] = ACTIONS(128),
    [anon_sym_ut] = ACTIONS(128),
    [anon_sym_vel] = ACTIONS(128),
    [anon_sym_vide] = ACTIONS(128),
    [anon_sym_falsum] = ACTIONS(131),
    [anon_sym_verum] = ACTIONS(131),
    [sym_guillemet_string] = ACTIONS(134),
    [sym_octeti_string] = ACTIONS(134),
    [sym_backtick_string] = ACTIONS(134),
    [sym_ascii_string] = ACTIONS(134),
    [sym_string] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [sym_identifier] = ACTIONS(137),
    [sym_operator] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_hash] = ACTIONS(134),
    [sym_line_comment] = ACTIONS(134),
    [sym_faber_newline] = ACTIONS(134),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_at_sign] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_cursor] = ACTIONS(142),
    [anon_sym_json] = ACTIONS(142),
    [anon_sym_privata] = ACTIONS(142),
    [anon_sym_protecta] = ACTIONS(142),
    [anon_sym_publica] = ACTIONS(142),
    [anon_sym_brevis] = ACTIONS(142),
    [anon_sym_descriptio] = ACTIONS(142),
    [anon_sym_longum] = ACTIONS(142),
    [anon_sym_nomen] = ACTIONS(142),
    [anon_sym_ubique] = ACTIONS(142),
    [anon_sym_ascii] = ACTIONS(142),
    [anon_sym_bivalens] = ACTIONS(142),
    [anon_sym_copia] = ACTIONS(142),
    [anon_sym_f16] = ACTIONS(142),
    [anon_sym_f32] = ACTIONS(142),
    [anon_sym_f64] = ACTIONS(142),
    [anon_sym_fractus] = ACTIONS(142),
    [anon_sym_i16] = ACTIONS(142),
    [anon_sym_i32] = ACTIONS(142),
    [anon_sym_i64] = ACTIONS(142),
    [anon_sym_i8] = ACTIONS(142),
    [anon_sym_ignotum] = ACTIONS(142),
    [anon_sym_instans] = ACTIONS(142),
    [anon_sym_intervallum] = ACTIONS(142),
    [anon_sym_lf16] = ACTIONS(142),
    [anon_sym_lf32] = ACTIONS(142),
    [anon_sym_lf64] = ACTIONS(142),
    [anon_sym_li16] = ACTIONS(142),
    [anon_sym_li32] = ACTIONS(142),
    [anon_sym_li64] = ACTIONS(142),
    [anon_sym_li8] = ACTIONS(142),
    [anon_sym_lista] = ACTIONS(142),
    [anon_sym_lu16] = ACTIONS(142),
    [anon_sym_lu32] = ACTIONS(142),
    [anon_sym_lu64] = ACTIONS(142),
    [anon_sym_lu8] = ACTIONS(142),
    [anon_sym_matrix] = ACTIONS(142),
    [anon_sym_mf16] = ACTIONS(142),
    [anon_sym_mf32] = ACTIONS(142),
    [anon_sym_mf64] = ACTIONS(142),
    [anon_sym_mi16] = ACTIONS(142),
    [anon_sym_mi32] = ACTIONS(142),
    [anon_sym_mi64] = ACTIONS(142),
    [anon_sym_mi8] = ACTIONS(142),
    [anon_sym_mu16] = ACTIONS(142),
    [anon_sym_mu32] = ACTIONS(142),
    [anon_sym_mu64] = ACTIONS(142),
    [anon_sym_mu8] = ACTIONS(142),
    [anon_sym_numerus] = ACTIONS(142),
    [anon_sym_numquam] = ACTIONS(142),
    [anon_sym_octet] = ACTIONS(142),
    [anon_sym_octeti] = ACTIONS(142),
    [anon_sym_promissum] = ACTIONS(142),
    [anon_sym_regex] = ACTIONS(142),
    [anon_sym_series] = ACTIONS(142),
    [anon_sym_sf16] = ACTIONS(142),
    [anon_sym_sf32] = ACTIONS(142),
    [anon_sym_sf64] = ACTIONS(142),
    [anon_sym_si16] = ACTIONS(142),
    [anon_sym_si32] = ACTIONS(142),
    [anon_sym_si64] = ACTIONS(142),
    [anon_sym_si8] = ACTIONS(142),
    [anon_sym_sparsa] = ACTIONS(142),
    [anon_sym_su16] = ACTIONS(142),
    [anon_sym_su32] = ACTIONS(142),
    [anon_sym_su64] = ACTIONS(142),
    [anon_sym_su8] = ACTIONS(142),
    [anon_sym_tabula] = ACTIONS(142),
    [anon_sym_tensor] = ACTIONS(142),
    [anon_sym_textus] = ACTIONS(142),
    [anon_sym_tf16] = ACTIONS(142),
    [anon_sym_tf32] = ACTIONS(142),
    [anon_sym_tf64] = ACTIONS(142),
    [anon_sym_ti16] = ACTIONS(142),
    [anon_sym_ti32] = ACTIONS(142),
    [anon_sym_ti64] = ACTIONS(142),
    [anon_sym_ti8] = ACTIONS(142),
    [anon_sym_tu16] = ACTIONS(142),
    [anon_sym_tu32] = ACTIONS(142),
    [anon_sym_tu64] = ACTIONS(142),
    [anon_sym_tu8] = ACTIONS(142),
    [anon_sym_u16] = ACTIONS(142),
    [anon_sym_u32] = ACTIONS(142),
    [anon_sym_u64] = ACTIONS(142),
    [anon_sym_u8] = ACTIONS(142),
    [anon_sym_unio] = ACTIONS(142),
    [anon_sym_vacua] = ACTIONS(142),
    [anon_sym_vacuum] = ACTIONS(142),
    [anon_sym_valor] = ACTIONS(142),
    [anon_sym_vector] = ACTIONS(142),
    [anon_sym_vf16] = ACTIONS(142),
    [anon_sym_vf32] = ACTIONS(142),
    [anon_sym_vf64] = ACTIONS(142),
    [anon_sym_vi16] = ACTIONS(142),
    [anon_sym_vi32] = ACTIONS(142),
    [anon_sym_vi64] = ACTIONS(142),
    [anon_sym_vi8] = ACTIONS(142),
    [anon_sym_vu16] = ACTIONS(142),
    [anon_sym_vu32] = ACTIONS(142),
    [anon_sym_vu64] = ACTIONS(142),
    [anon_sym_vu8] = ACTIONS(142),
    [anon_sym_ad] = ACTIONS(142),
    [anon_sym_adfirma] = ACTIONS(142),
    [anon_sym_argumenta] = ACTIONS(142),
    [anon_sym_cape] = ACTIONS(142),
    [anon_sym_casu] = ACTIONS(142),
    [anon_sym_ceterum] = ACTIONS(142),
    [anon_sym_cura] = ACTIONS(142),
    [anon_sym_custodi] = ACTIONS(142),
    [anon_sym_demum] = ACTIONS(142),
    [anon_sym_discerne] = ACTIONS(142),
    [anon_sym_dum] = ACTIONS(142),
    [anon_sym_elige] = ACTIONS(142),
    [anon_sym_emitte] = ACTIONS(142),
    [anon_sym_ergo] = ACTIONS(142),
    [anon_sym_fac] = ACTIONS(142),
    [anon_sym_iace] = ACTIONS(142),
    [anon_sym_incipiet] = ACTIONS(142),
    [anon_sym_incipit] = ACTIONS(142),
    [anon_sym_itera] = ACTIONS(142),
    [anon_sym_mori] = ACTIONS(142),
    [anon_sym_perge] = ACTIONS(142),
    [anon_sym_redde] = ACTIONS(142),
    [anon_sym_rumpe] = ACTIONS(142),
    [anon_sym_secus] = ACTIONS(142),
    [anon_sym_si] = ACTIONS(142),
    [anon_sym_sic] = ACTIONS(142),
    [anon_sym_sin] = ACTIONS(142),
    [anon_sym_tacet] = ACTIONS(142),
    [anon_sym_tempta] = ACTIONS(142),
    [anon_sym_abstractus] = ACTIONS(142),
    [anon_sym_ceteri] = ACTIONS(142),
    [anon_sym_curata] = ACTIONS(142),
    [anon_sym_discretio] = ACTIONS(142),
    [anon_sym_errata] = ACTIONS(142),
    [anon_sym_exitus] = ACTIONS(142),
    [anon_sym_fixum] = ACTIONS(142),
    [anon_sym_functio] = ACTIONS(142),
    [anon_sym_generis] = ACTIONS(142),
    [anon_sym_genus] = ACTIONS(142),
    [anon_sym_iacit] = ACTIONS(142),
    [anon_sym_immutata] = ACTIONS(142),
    [anon_sym_implendum] = ACTIONS(142),
    [anon_sym_importa] = ACTIONS(142),
    [anon_sym_magnitudo] = ACTIONS(142),
    [anon_sym_nexum] = ACTIONS(142),
    [anon_sym_optiones] = ACTIONS(142),
    [anon_sym_ordo] = ACTIONS(142),
    [anon_sym_prae] = ACTIONS(142),
    [anon_sym_sit] = ACTIONS(142),
    [anon_sym_sponte] = ACTIONS(142),
    [anon_sym_typus] = ACTIONS(142),
    [anon_sym_varia] = ACTIONS(142),
    [anon_sym_ante] = ACTIONS(142),
    [anon_sym_aut] = ACTIONS(142),
    [anon_sym_cede] = ACTIONS(142),
    [anon_sym_clausura] = ACTIONS(142),
    [anon_sym_de] = ACTIONS(142),
    [anon_sym_ego] = ACTIONS(142),
    [anon_sym_est] = ACTIONS(142),
    [anon_sym_et] = ACTIONS(142),
    [anon_sym_ex] = ACTIONS(142),
    [anon_sym_finge] = ACTIONS(142),
    [anon_sym_fragilis] = ACTIONS(142),
    [anon_sym_futurum] = ACTIONS(142),
    [anon_sym_implet] = ACTIONS(142),
    [anon_sym_in] = ACTIONS(142),
    [anon_sym_inter] = ACTIONS(142),
    [anon_sym_intra] = ACTIONS(142),
    [anon_sym_lege] = ACTIONS(142),
    [anon_sym_lineam] = ACTIONS(142),
    [anon_sym_metior] = ACTIONS(142),
    [anon_sym_modulus] = ACTIONS(142),
    [anon_sym_mone] = ACTIONS(142),
    [anon_sym_negativum] = ACTIONS(142),
    [anon_sym_nihil] = ACTIONS(142),
    [anon_sym_non] = ACTIONS(142),
    [anon_sym_nonnihil] = ACTIONS(142),
    [anon_sym_nonnulla] = ACTIONS(142),
    [anon_sym_nota] = ACTIONS(142),
    [anon_sym_nulla] = ACTIONS(142),
    [anon_sym_omitte] = ACTIONS(142),
    [anon_sym_omnia] = ACTIONS(142),
    [anon_sym_per] = ACTIONS(142),
    [anon_sym_positivum] = ACTIONS(142),
    [anon_sym_postpara] = ACTIONS(142),
    [anon_sym_postparabit] = ACTIONS(142),
    [anon_sym_praefixum] = ACTIONS(142),
    [anon_sym_praepara] = ACTIONS(142),
    [anon_sym_praeparabit] = ACTIONS(142),
    [anon_sym_pro] = ACTIONS(142),
    [anon_sym_proba] = ACTIONS(142),
    [anon_sym_probandum] = ACTIONS(142),
    [anon_sym_repete] = ACTIONS(142),
    [anon_sym_requirit] = ACTIONS(142),
    [anon_sym_scribe] = ACTIONS(142),
    [anon_sym_scriptum] = ACTIONS(142),
    [anon_sym_solum] = ACTIONS(142),
    [anon_sym_solum_in] = ACTIONS(142),
    [anon_sym_sparge] = ACTIONS(142),
    [anon_sym_sub] = ACTIONS(142),
    [anon_sym_tag] = ACTIONS(142),
    [anon_sym_temporis] = ACTIONS(142),
    [anon_sym_usque] = ACTIONS(142),
    [anon_sym_ut] = ACTIONS(142),
    [anon_sym_vel] = ACTIONS(142),
    [anon_sym_vide] = ACTIONS(142),
    [anon_sym_falsum] = ACTIONS(142),
    [anon_sym_verum] = ACTIONS(142),
    [sym_guillemet_string] = ACTIONS(140),
    [sym_octeti_string] = ACTIONS(140),
    [sym_backtick_string] = ACTIONS(140),
    [sym_ascii_string] = ACTIONS(140),
    [sym_string] = ACTIONS(140),
    [sym_number] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [sym_operator] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_hash] = ACTIONS(140),
    [sym_line_comment] = ACTIONS(140),
    [sym_faber_newline] = ACTIONS(140),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_at_sign] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_cursor] = ACTIONS(146),
    [anon_sym_json] = ACTIONS(146),
    [anon_sym_privata] = ACTIONS(146),
    [anon_sym_protecta] = ACTIONS(146),
    [anon_sym_publica] = ACTIONS(146),
    [anon_sym_brevis] = ACTIONS(146),
    [anon_sym_descriptio] = ACTIONS(146),
    [anon_sym_longum] = ACTIONS(146),
    [anon_sym_nomen] = ACTIONS(146),
    [anon_sym_ubique] = ACTIONS(146),
    [anon_sym_ascii] = ACTIONS(146),
    [anon_sym_bivalens] = ACTIONS(146),
    [anon_sym_copia] = ACTIONS(146),
    [anon_sym_f16] = ACTIONS(146),
    [anon_sym_f32] = ACTIONS(146),
    [anon_sym_f64] = ACTIONS(146),
    [anon_sym_fractus] = ACTIONS(146),
    [anon_sym_i16] = ACTIONS(146),
    [anon_sym_i32] = ACTIONS(146),
    [anon_sym_i64] = ACTIONS(146),
    [anon_sym_i8] = ACTIONS(146),
    [anon_sym_ignotum] = ACTIONS(146),
    [anon_sym_instans] = ACTIONS(146),
    [anon_sym_intervallum] = ACTIONS(146),
    [anon_sym_lf16] = ACTIONS(146),
    [anon_sym_lf32] = ACTIONS(146),
    [anon_sym_lf64] = ACTIONS(146),
    [anon_sym_li16] = ACTIONS(146),
    [anon_sym_li32] = ACTIONS(146),
    [anon_sym_li64] = ACTIONS(146),
    [anon_sym_li8] = ACTIONS(146),
    [anon_sym_lista] = ACTIONS(146),
    [anon_sym_lu16] = ACTIONS(146),
    [anon_sym_lu32] = ACTIONS(146),
    [anon_sym_lu64] = ACTIONS(146),
    [anon_sym_lu8] = ACTIONS(146),
    [anon_sym_matrix] = ACTIONS(146),
    [anon_sym_mf16] = ACTIONS(146),
    [anon_sym_mf32] = ACTIONS(146),
    [anon_sym_mf64] = ACTIONS(146),
    [anon_sym_mi16] = ACTIONS(146),
    [anon_sym_mi32] = ACTIONS(146),
    [anon_sym_mi64] = ACTIONS(146),
    [anon_sym_mi8] = ACTIONS(146),
    [anon_sym_mu16] = ACTIONS(146),
    [anon_sym_mu32] = ACTIONS(146),
    [anon_sym_mu64] = ACTIONS(146),
    [anon_sym_mu8] = ACTIONS(146),
    [anon_sym_numerus] = ACTIONS(146),
    [anon_sym_numquam] = ACTIONS(146),
    [anon_sym_octet] = ACTIONS(146),
    [anon_sym_octeti] = ACTIONS(146),
    [anon_sym_promissum] = ACTIONS(146),
    [anon_sym_regex] = ACTIONS(146),
    [anon_sym_series] = ACTIONS(146),
    [anon_sym_sf16] = ACTIONS(146),
    [anon_sym_sf32] = ACTIONS(146),
    [anon_sym_sf64] = ACTIONS(146),
    [anon_sym_si16] = ACTIONS(146),
    [anon_sym_si32] = ACTIONS(146),
    [anon_sym_si64] = ACTIONS(146),
    [anon_sym_si8] = ACTIONS(146),
    [anon_sym_sparsa] = ACTIONS(146),
    [anon_sym_su16] = ACTIONS(146),
    [anon_sym_su32] = ACTIONS(146),
    [anon_sym_su64] = ACTIONS(146),
    [anon_sym_su8] = ACTIONS(146),
    [anon_sym_tabula] = ACTIONS(146),
    [anon_sym_tensor] = ACTIONS(146),
    [anon_sym_textus] = ACTIONS(146),
    [anon_sym_tf16] = ACTIONS(146),
    [anon_sym_tf32] = ACTIONS(146),
    [anon_sym_tf64] = ACTIONS(146),
    [anon_sym_ti16] = ACTIONS(146),
    [anon_sym_ti32] = ACTIONS(146),
    [anon_sym_ti64] = ACTIONS(146),
    [anon_sym_ti8] = ACTIONS(146),
    [anon_sym_tu16] = ACTIONS(146),
    [anon_sym_tu32] = ACTIONS(146),
    [anon_sym_tu64] = ACTIONS(146),
    [anon_sym_tu8] = ACTIONS(146),
    [anon_sym_u16] = ACTIONS(146),
    [anon_sym_u32] = ACTIONS(146),
    [anon_sym_u64] = ACTIONS(146),
    [anon_sym_u8] = ACTIONS(146),
    [anon_sym_unio] = ACTIONS(146),
    [anon_sym_vacua] = ACTIONS(146),
    [anon_sym_vacuum] = ACTIONS(146),
    [anon_sym_valor] = ACTIONS(146),
    [anon_sym_vector] = ACTIONS(146),
    [anon_sym_vf16] = ACTIONS(146),
    [anon_sym_vf32] = ACTIONS(146),
    [anon_sym_vf64] = ACTIONS(146),
    [anon_sym_vi16] = ACTIONS(146),
    [anon_sym_vi32] = ACTIONS(146),
    [anon_sym_vi64] = ACTIONS(146),
    [anon_sym_vi8] = ACTIONS(146),
    [anon_sym_vu16] = ACTIONS(146),
    [anon_sym_vu32] = ACTIONS(146),
    [anon_sym_vu64] = ACTIONS(146),
    [anon_sym_vu8] = ACTIONS(146),
    [anon_sym_ad] = ACTIONS(146),
    [anon_sym_adfirma] = ACTIONS(146),
    [anon_sym_argumenta] = ACTIONS(146),
    [anon_sym_cape] = ACTIONS(146),
    [anon_sym_casu] = ACTIONS(146),
    [anon_sym_ceterum] = ACTIONS(146),
    [anon_sym_cura] = ACTIONS(146),
    [anon_sym_custodi] = ACTIONS(146),
    [anon_sym_demum] = ACTIONS(146),
    [anon_sym_discerne] = ACTIONS(146),
    [anon_sym_dum] = ACTIONS(146),
    [anon_sym_elige] = ACTIONS(146),
    [anon_sym_emitte] = ACTIONS(146),
    [anon_sym_ergo] = ACTIONS(146),
    [anon_sym_fac] = ACTIONS(146),
    [anon_sym_iace] = ACTIONS(146),
    [anon_sym_incipiet] = ACTIONS(146),
    [anon_sym_incipit] = ACTIONS(146),
    [anon_sym_itera] = ACTIONS(146),
    [anon_sym_mori] = ACTIONS(146),
    [anon_sym_perge] = ACTIONS(146),
    [anon_sym_redde] = ACTIONS(146),
    [anon_sym_rumpe] = ACTIONS(146),
    [anon_sym_secus] = ACTIONS(146),
    [anon_sym_si] = ACTIONS(146),
    [anon_sym_sic] = ACTIONS(146),
    [anon_sym_sin] = ACTIONS(146),
    [anon_sym_tacet] = ACTIONS(146),
    [anon_sym_tempta] = ACTIONS(146),
    [anon_sym_abstractus] = ACTIONS(146),
    [anon_sym_ceteri] = ACTIONS(146),
    [anon_sym_curata] = ACTIONS(146),
    [anon_sym_discretio] = ACTIONS(146),
    [anon_sym_errata] = ACTIONS(146),
    [anon_sym_exitus] = ACTIONS(146),
    [anon_sym_fixum] = ACTIONS(146),
    [anon_sym_functio] = ACTIONS(146),
    [anon_sym_generis] = ACTIONS(146),
    [anon_sym_genus] = ACTIONS(146),
    [anon_sym_iacit] = ACTIONS(146),
    [anon_sym_immutata] = ACTIONS(146),
    [anon_sym_implendum] = ACTIONS(146),
    [anon_sym_importa] = ACTIONS(146),
    [anon_sym_magnitudo] = ACTIONS(146),
    [anon_sym_nexum] = ACTIONS(146),
    [anon_sym_optiones] = ACTIONS(146),
    [anon_sym_ordo] = ACTIONS(146),
    [anon_sym_prae] = ACTIONS(146),
    [anon_sym_sit] = ACTIONS(146),
    [anon_sym_sponte] = ACTIONS(146),
    [anon_sym_typus] = ACTIONS(146),
    [anon_sym_varia] = ACTIONS(146),
    [anon_sym_ante] = ACTIONS(146),
    [anon_sym_aut] = ACTIONS(146),
    [anon_sym_cede] = ACTIONS(146),
    [anon_sym_clausura] = ACTIONS(146),
    [anon_sym_de] = ACTIONS(146),
    [anon_sym_ego] = ACTIONS(146),
    [anon_sym_est] = ACTIONS(146),
    [anon_sym_et] = ACTIONS(146),
    [anon_sym_ex] = ACTIONS(146),
    [anon_sym_finge] = ACTIONS(146),
    [anon_sym_fragilis] = ACTIONS(146),
    [anon_sym_futurum] = ACTIONS(146),
    [anon_sym_implet] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_inter] = ACTIONS(146),
    [anon_sym_intra] = ACTIONS(146),
    [anon_sym_lege] = ACTIONS(146),
    [anon_sym_lineam] = ACTIONS(146),
    [anon_sym_metior] = ACTIONS(146),
    [anon_sym_modulus] = ACTIONS(146),
    [anon_sym_mone] = ACTIONS(146),
    [anon_sym_negativum] = ACTIONS(146),
    [anon_sym_nihil] = ACTIONS(146),
    [anon_sym_non] = ACTIONS(146),
    [anon_sym_nonnihil] = ACTIONS(146),
    [anon_sym_nonnulla] = ACTIONS(146),
    [anon_sym_nota] = ACTIONS(146),
    [anon_sym_nulla] = ACTIONS(146),
    [anon_sym_omitte] = ACTIONS(146),
    [anon_sym_omnia] = ACTIONS(146),
    [anon_sym_per] = ACTIONS(146),
    [anon_sym_positivum] = ACTIONS(146),
    [anon_sym_postpara] = ACTIONS(146),
    [anon_sym_postparabit] = ACTIONS(146),
    [anon_sym_praefixum] = ACTIONS(146),
    [anon_sym_praepara] = ACTIONS(146),
    [anon_sym_praeparabit] = ACTIONS(146),
    [anon_sym_pro] = ACTIONS(146),
    [anon_sym_proba] = ACTIONS(146),
    [anon_sym_probandum] = ACTIONS(146),
    [anon_sym_repete] = ACTIONS(146),
    [anon_sym_requirit] = ACTIONS(146),
    [anon_sym_scribe] = ACTIONS(146),
    [anon_sym_scriptum] = ACTIONS(146),
    [anon_sym_solum] = ACTIONS(146),
    [anon_sym_solum_in] = ACTIONS(146),
    [anon_sym_sparge] = ACTIONS(146),
    [anon_sym_sub] = ACTIONS(146),
    [anon_sym_tag] = ACTIONS(146),
    [anon_sym_temporis] = ACTIONS(146),
    [anon_sym_usque] = ACTIONS(146),
    [anon_sym_ut] = ACTIONS(146),
    [anon_sym_vel] = ACTIONS(146),
    [anon_sym_vide] = ACTIONS(146),
    [anon_sym_falsum] = ACTIONS(146),
    [anon_sym_verum] = ACTIONS(146),
    [sym_guillemet_string] = ACTIONS(144),
    [sym_octeti_string] = ACTIONS(144),
    [sym_backtick_string] = ACTIONS(144),
    [sym_ascii_string] = ACTIONS(144),
    [sym_string] = ACTIONS(144),
    [sym_number] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [sym_operator] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_hash] = ACTIONS(144),
    [sym_line_comment] = ACTIONS(144),
    [sym_faber_newline] = ACTIONS(144),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_at_sign] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_cursor] = ACTIONS(150),
    [anon_sym_json] = ACTIONS(150),
    [anon_sym_privata] = ACTIONS(150),
    [anon_sym_protecta] = ACTIONS(150),
    [anon_sym_publica] = ACTIONS(150),
    [anon_sym_brevis] = ACTIONS(150),
    [anon_sym_descriptio] = ACTIONS(150),
    [anon_sym_longum] = ACTIONS(150),
    [anon_sym_nomen] = ACTIONS(150),
    [anon_sym_ubique] = ACTIONS(150),
    [anon_sym_ascii] = ACTIONS(150),
    [anon_sym_bivalens] = ACTIONS(150),
    [anon_sym_copia] = ACTIONS(150),
    [anon_sym_f16] = ACTIONS(150),
    [anon_sym_f32] = ACTIONS(150),
    [anon_sym_f64] = ACTIONS(150),
    [anon_sym_fractus] = ACTIONS(150),
    [anon_sym_i16] = ACTIONS(150),
    [anon_sym_i32] = ACTIONS(150),
    [anon_sym_i64] = ACTIONS(150),
    [anon_sym_i8] = ACTIONS(150),
    [anon_sym_ignotum] = ACTIONS(150),
    [anon_sym_instans] = ACTIONS(150),
    [anon_sym_intervallum] = ACTIONS(150),
    [anon_sym_lf16] = ACTIONS(150),
    [anon_sym_lf32] = ACTIONS(150),
    [anon_sym_lf64] = ACTIONS(150),
    [anon_sym_li16] = ACTIONS(150),
    [anon_sym_li32] = ACTIONS(150),
    [anon_sym_li64] = ACTIONS(150),
    [anon_sym_li8] = ACTIONS(150),
    [anon_sym_lista] = ACTIONS(150),
    [anon_sym_lu16] = ACTIONS(150),
    [anon_sym_lu32] = ACTIONS(150),
    [anon_sym_lu64] = ACTIONS(150),
    [anon_sym_lu8] = ACTIONS(150),
    [anon_sym_matrix] = ACTIONS(150),
    [anon_sym_mf16] = ACTIONS(150),
    [anon_sym_mf32] = ACTIONS(150),
    [anon_sym_mf64] = ACTIONS(150),
    [anon_sym_mi16] = ACTIONS(150),
    [anon_sym_mi32] = ACTIONS(150),
    [anon_sym_mi64] = ACTIONS(150),
    [anon_sym_mi8] = ACTIONS(150),
    [anon_sym_mu16] = ACTIONS(150),
    [anon_sym_mu32] = ACTIONS(150),
    [anon_sym_mu64] = ACTIONS(150),
    [anon_sym_mu8] = ACTIONS(150),
    [anon_sym_numerus] = ACTIONS(150),
    [anon_sym_numquam] = ACTIONS(150),
    [anon_sym_octet] = ACTIONS(150),
    [anon_sym_octeti] = ACTIONS(150),
    [anon_sym_promissum] = ACTIONS(150),
    [anon_sym_regex] = ACTIONS(150),
    [anon_sym_series] = ACTIONS(150),
    [anon_sym_sf16] = ACTIONS(150),
    [anon_sym_sf32] = ACTIONS(150),
    [anon_sym_sf64] = ACTIONS(150),
    [anon_sym_si16] = ACTIONS(150),
    [anon_sym_si32] = ACTIONS(150),
    [anon_sym_si64] = ACTIONS(150),
    [anon_sym_si8] = ACTIONS(150),
    [anon_sym_sparsa] = ACTIONS(150),
    [anon_sym_su16] = ACTIONS(150),
    [anon_sym_su32] = ACTIONS(150),
    [anon_sym_su64] = ACTIONS(150),
    [anon_sym_su8] = ACTIONS(150),
    [anon_sym_tabula] = ACTIONS(150),
    [anon_sym_tensor] = ACTIONS(150),
    [anon_sym_textus] = ACTIONS(150),
    [anon_sym_tf16] = ACTIONS(150),
    [anon_sym_tf32] = ACTIONS(150),
    [anon_sym_tf64] = ACTIONS(150),
    [anon_sym_ti16] = ACTIONS(150),
    [anon_sym_ti32] = ACTIONS(150),
    [anon_sym_ti64] = ACTIONS(150),
    [anon_sym_ti8] = ACTIONS(150),
    [anon_sym_tu16] = ACTIONS(150),
    [anon_sym_tu32] = ACTIONS(150),
    [anon_sym_tu64] = ACTIONS(150),
    [anon_sym_tu8] = ACTIONS(150),
    [anon_sym_u16] = ACTIONS(150),
    [anon_sym_u32] = ACTIONS(150),
    [anon_sym_u64] = ACTIONS(150),
    [anon_sym_u8] = ACTIONS(150),
    [anon_sym_unio] = ACTIONS(150),
    [anon_sym_vacua] = ACTIONS(150),
    [anon_sym_vacuum] = ACTIONS(150),
    [anon_sym_valor] = ACTIONS(150),
    [anon_sym_vector] = ACTIONS(150),
    [anon_sym_vf16] = ACTIONS(150),
    [anon_sym_vf32] = ACTIONS(150),
    [anon_sym_vf64] = ACTIONS(150),
    [anon_sym_vi16] = ACTIONS(150),
    [anon_sym_vi32] = ACTIONS(150),
    [anon_sym_vi64] = ACTIONS(150),
    [anon_sym_vi8] = ACTIONS(150),
    [anon_sym_vu16] = ACTIONS(150),
    [anon_sym_vu32] = ACTIONS(150),
    [anon_sym_vu64] = ACTIONS(150),
    [anon_sym_vu8] = ACTIONS(150),
    [anon_sym_ad] = ACTIONS(150),
    [anon_sym_adfirma] = ACTIONS(150),
    [anon_sym_argumenta] = ACTIONS(150),
    [anon_sym_cape] = ACTIONS(150),
    [anon_sym_casu] = ACTIONS(150),
    [anon_sym_ceterum] = ACTIONS(150),
    [anon_sym_cura] = ACTIONS(150),
    [anon_sym_custodi] = ACTIONS(150),
    [anon_sym_demum] = ACTIONS(150),
    [anon_sym_discerne] = ACTIONS(150),
    [anon_sym_dum] = ACTIONS(150),
    [anon_sym_elige] = ACTIONS(150),
    [anon_sym_emitte] = ACTIONS(150),
    [anon_sym_ergo] = ACTIONS(150),
    [anon_sym_fac] = ACTIONS(150),
    [anon_sym_iace] = ACTIONS(150),
    [anon_sym_incipiet] = ACTIONS(150),
    [anon_sym_incipit] = ACTIONS(150),
    [anon_sym_itera] = ACTIONS(150),
    [anon_sym_mori] = ACTIONS(150),
    [anon_sym_perge] = ACTIONS(150),
    [anon_sym_redde] = ACTIONS(150),
    [anon_sym_rumpe] = ACTIONS(150),
    [anon_sym_secus] = ACTIONS(150),
    [anon_sym_si] = ACTIONS(150),
    [anon_sym_sic] = ACTIONS(150),
    [anon_sym_sin] = ACTIONS(150),
    [anon_sym_tacet] = ACTIONS(150),
    [anon_sym_tempta] = ACTIONS(150),
    [anon_sym_abstractus] = ACTIONS(150),
    [anon_sym_ceteri] = ACTIONS(150),
    [anon_sym_curata] = ACTIONS(150),
    [anon_sym_discretio] = ACTIONS(150),
    [anon_sym_errata] = ACTIONS(150),
    [anon_sym_exitus] = ACTIONS(150),
    [anon_sym_fixum] = ACTIONS(150),
    [anon_sym_functio] = ACTIONS(150),
    [anon_sym_generis] = ACTIONS(150),
    [anon_sym_genus] = ACTIONS(150),
    [anon_sym_iacit] = ACTIONS(150),
    [anon_sym_immutata] = ACTIONS(150),
    [anon_sym_implendum] = ACTIONS(150),
    [anon_sym_importa] = ACTIONS(150),
    [anon_sym_magnitudo] = ACTIONS(150),
    [anon_sym_nexum] = ACTIONS(150),
    [anon_sym_optiones] = ACTIONS(150),
    [anon_sym_ordo] = ACTIONS(150),
    [anon_sym_prae] = ACTIONS(150),
    [anon_sym_sit] = ACTIONS(150),
    [anon_sym_sponte] = ACTIONS(150),
    [anon_sym_typus] = ACTIONS(150),
    [anon_sym_varia] = ACTIONS(150),
    [anon_sym_ante] = ACTIONS(150),
    [anon_sym_aut] = ACTIONS(150),
    [anon_sym_cede] = ACTIONS(150),
    [anon_sym_clausura] = ACTIONS(150),
    [anon_sym_de] = ACTIONS(150),
    [anon_sym_ego] = ACTIONS(150),
    [anon_sym_est] = ACTIONS(150),
    [anon_sym_et] = ACTIONS(150),
    [anon_sym_ex] = ACTIONS(150),
    [anon_sym_finge] = ACTIONS(150),
    [anon_sym_fragilis] = ACTIONS(150),
    [anon_sym_futurum] = ACTIONS(150),
    [anon_sym_implet] = ACTIONS(150),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_inter] = ACTIONS(150),
    [anon_sym_intra] = ACTIONS(150),
    [anon_sym_lege] = ACTIONS(150),
    [anon_sym_lineam] = ACTIONS(150),
    [anon_sym_metior] = ACTIONS(150),
    [anon_sym_modulus] = ACTIONS(150),
    [anon_sym_mone] = ACTIONS(150),
    [anon_sym_negativum] = ACTIONS(150),
    [anon_sym_nihil] = ACTIONS(150),
    [anon_sym_non] = ACTIONS(150),
    [anon_sym_nonnihil] = ACTIONS(150),
    [anon_sym_nonnulla] = ACTIONS(150),
    [anon_sym_nota] = ACTIONS(150),
    [anon_sym_nulla] = ACTIONS(150),
    [anon_sym_omitte] = ACTIONS(150),
    [anon_sym_omnia] = ACTIONS(150),
    [anon_sym_per] = ACTIONS(150),
    [anon_sym_positivum] = ACTIONS(150),
    [anon_sym_postpara] = ACTIONS(150),
    [anon_sym_postparabit] = ACTIONS(150),
    [anon_sym_praefixum] = ACTIONS(150),
    [anon_sym_praepara] = ACTIONS(150),
    [anon_sym_praeparabit] = ACTIONS(150),
    [anon_sym_pro] = ACTIONS(150),
    [anon_sym_proba] = ACTIONS(150),
    [anon_sym_probandum] = ACTIONS(150),
    [anon_sym_repete] = ACTIONS(150),
    [anon_sym_requirit] = ACTIONS(150),
    [anon_sym_scribe] = ACTIONS(150),
    [anon_sym_scriptum] = ACTIONS(150),
    [anon_sym_solum] = ACTIONS(150),
    [anon_sym_solum_in] = ACTIONS(150),
    [anon_sym_sparge] = ACTIONS(150),
    [anon_sym_sub] = ACTIONS(150),
    [anon_sym_tag] = ACTIONS(150),
    [anon_sym_temporis] = ACTIONS(150),
    [anon_sym_usque] = ACTIONS(150),
    [anon_sym_ut] = ACTIONS(150),
    [anon_sym_vel] = ACTIONS(150),
    [anon_sym_vide] = ACTIONS(150),
    [anon_sym_falsum] = ACTIONS(150),
    [anon_sym_verum] = ACTIONS(150),
    [sym_guillemet_string] = ACTIONS(148),
    [sym_octeti_string] = ACTIONS(148),
    [sym_backtick_string] = ACTIONS(148),
    [sym_ascii_string] = ACTIONS(148),
    [sym_string] = ACTIONS(148),
    [sym_number] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
    [sym_operator] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_hash] = ACTIONS(148),
    [sym_line_comment] = ACTIONS(148),
    [sym_faber_newline] = ACTIONS(148),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_at_sign] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_cursor] = ACTIONS(154),
    [anon_sym_json] = ACTIONS(154),
    [anon_sym_privata] = ACTIONS(154),
    [anon_sym_protecta] = ACTIONS(154),
    [anon_sym_publica] = ACTIONS(154),
    [anon_sym_brevis] = ACTIONS(154),
    [anon_sym_descriptio] = ACTIONS(154),
    [anon_sym_longum] = ACTIONS(154),
    [anon_sym_nomen] = ACTIONS(154),
    [anon_sym_ubique] = ACTIONS(154),
    [anon_sym_ascii] = ACTIONS(154),
    [anon_sym_bivalens] = ACTIONS(154),
    [anon_sym_copia] = ACTIONS(154),
    [anon_sym_f16] = ACTIONS(154),
    [anon_sym_f32] = ACTIONS(154),
    [anon_sym_f64] = ACTIONS(154),
    [anon_sym_fractus] = ACTIONS(154),
    [anon_sym_i16] = ACTIONS(154),
    [anon_sym_i32] = ACTIONS(154),
    [anon_sym_i64] = ACTIONS(154),
    [anon_sym_i8] = ACTIONS(154),
    [anon_sym_ignotum] = ACTIONS(154),
    [anon_sym_instans] = ACTIONS(154),
    [anon_sym_intervallum] = ACTIONS(154),
    [anon_sym_lf16] = ACTIONS(154),
    [anon_sym_lf32] = ACTIONS(154),
    [anon_sym_lf64] = ACTIONS(154),
    [anon_sym_li16] = ACTIONS(154),
    [anon_sym_li32] = ACTIONS(154),
    [anon_sym_li64] = ACTIONS(154),
    [anon_sym_li8] = ACTIONS(154),
    [anon_sym_lista] = ACTIONS(154),
    [anon_sym_lu16] = ACTIONS(154),
    [anon_sym_lu32] = ACTIONS(154),
    [anon_sym_lu64] = ACTIONS(154),
    [anon_sym_lu8] = ACTIONS(154),
    [anon_sym_matrix] = ACTIONS(154),
    [anon_sym_mf16] = ACTIONS(154),
    [anon_sym_mf32] = ACTIONS(154),
    [anon_sym_mf64] = ACTIONS(154),
    [anon_sym_mi16] = ACTIONS(154),
    [anon_sym_mi32] = ACTIONS(154),
    [anon_sym_mi64] = ACTIONS(154),
    [anon_sym_mi8] = ACTIONS(154),
    [anon_sym_mu16] = ACTIONS(154),
    [anon_sym_mu32] = ACTIONS(154),
    [anon_sym_mu64] = ACTIONS(154),
    [anon_sym_mu8] = ACTIONS(154),
    [anon_sym_numerus] = ACTIONS(154),
    [anon_sym_numquam] = ACTIONS(154),
    [anon_sym_octet] = ACTIONS(154),
    [anon_sym_octeti] = ACTIONS(154),
    [anon_sym_promissum] = ACTIONS(154),
    [anon_sym_regex] = ACTIONS(154),
    [anon_sym_series] = ACTIONS(154),
    [anon_sym_sf16] = ACTIONS(154),
    [anon_sym_sf32] = ACTIONS(154),
    [anon_sym_sf64] = ACTIONS(154),
    [anon_sym_si16] = ACTIONS(154),
    [anon_sym_si32] = ACTIONS(154),
    [anon_sym_si64] = ACTIONS(154),
    [anon_sym_si8] = ACTIONS(154),
    [anon_sym_sparsa] = ACTIONS(154),
    [anon_sym_su16] = ACTIONS(154),
    [anon_sym_su32] = ACTIONS(154),
    [anon_sym_su64] = ACTIONS(154),
    [anon_sym_su8] = ACTIONS(154),
    [anon_sym_tabula] = ACTIONS(154),
    [anon_sym_tensor] = ACTIONS(154),
    [anon_sym_textus] = ACTIONS(154),
    [anon_sym_tf16] = ACTIONS(154),
    [anon_sym_tf32] = ACTIONS(154),
    [anon_sym_tf64] = ACTIONS(154),
    [anon_sym_ti16] = ACTIONS(154),
    [anon_sym_ti32] = ACTIONS(154),
    [anon_sym_ti64] = ACTIONS(154),
    [anon_sym_ti8] = ACTIONS(154),
    [anon_sym_tu16] = ACTIONS(154),
    [anon_sym_tu32] = ACTIONS(154),
    [anon_sym_tu64] = ACTIONS(154),
    [anon_sym_tu8] = ACTIONS(154),
    [anon_sym_u16] = ACTIONS(154),
    [anon_sym_u32] = ACTIONS(154),
    [anon_sym_u64] = ACTIONS(154),
    [anon_sym_u8] = ACTIONS(154),
    [anon_sym_unio] = ACTIONS(154),
    [anon_sym_vacua] = ACTIONS(154),
    [anon_sym_vacuum] = ACTIONS(154),
    [anon_sym_valor] = ACTIONS(154),
    [anon_sym_vector] = ACTIONS(154),
    [anon_sym_vf16] = ACTIONS(154),
    [anon_sym_vf32] = ACTIONS(154),
    [anon_sym_vf64] = ACTIONS(154),
    [anon_sym_vi16] = ACTIONS(154),
    [anon_sym_vi32] = ACTIONS(154),
    [anon_sym_vi64] = ACTIONS(154),
    [anon_sym_vi8] = ACTIONS(154),
    [anon_sym_vu16] = ACTIONS(154),
    [anon_sym_vu32] = ACTIONS(154),
    [anon_sym_vu64] = ACTIONS(154),
    [anon_sym_vu8] = ACTIONS(154),
    [anon_sym_ad] = ACTIONS(154),
    [anon_sym_adfirma] = ACTIONS(154),
    [anon_sym_argumenta] = ACTIONS(154),
    [anon_sym_cape] = ACTIONS(154),
    [anon_sym_casu] = ACTIONS(154),
    [anon_sym_ceterum] = ACTIONS(154),
    [anon_sym_cura] = ACTIONS(154),
    [anon_sym_custodi] = ACTIONS(154),
    [anon_sym_demum] = ACTIONS(154),
    [anon_sym_discerne] = ACTIONS(154),
    [anon_sym_dum] = ACTIONS(154),
    [anon_sym_elige] = ACTIONS(154),
    [anon_sym_emitte] = ACTIONS(154),
    [anon_sym_ergo] = ACTIONS(154),
    [anon_sym_fac] = ACTIONS(154),
    [anon_sym_iace] = ACTIONS(154),
    [anon_sym_incipiet] = ACTIONS(154),
    [anon_sym_incipit] = ACTIONS(154),
    [anon_sym_itera] = ACTIONS(154),
    [anon_sym_mori] = ACTIONS(154),
    [anon_sym_perge] = ACTIONS(154),
    [anon_sym_redde] = ACTIONS(154),
    [anon_sym_rumpe] = ACTIONS(154),
    [anon_sym_secus] = ACTIONS(154),
    [anon_sym_si] = ACTIONS(154),
    [anon_sym_sic] = ACTIONS(154),
    [anon_sym_sin] = ACTIONS(154),
    [anon_sym_tacet] = ACTIONS(154),
    [anon_sym_tempta] = ACTIONS(154),
    [anon_sym_abstractus] = ACTIONS(154),
    [anon_sym_ceteri] = ACTIONS(154),
    [anon_sym_curata] = ACTIONS(154),
    [anon_sym_discretio] = ACTIONS(154),
    [anon_sym_errata] = ACTIONS(154),
    [anon_sym_exitus] = ACTIONS(154),
    [anon_sym_fixum] = ACTIONS(154),
    [anon_sym_functio] = ACTIONS(154),
    [anon_sym_generis] = ACTIONS(154),
    [anon_sym_genus] = ACTIONS(154),
    [anon_sym_iacit] = ACTIONS(154),
    [anon_sym_immutata] = ACTIONS(154),
    [anon_sym_implendum] = ACTIONS(154),
    [anon_sym_importa] = ACTIONS(154),
    [anon_sym_magnitudo] = ACTIONS(154),
    [anon_sym_nexum] = ACTIONS(154),
    [anon_sym_optiones] = ACTIONS(154),
    [anon_sym_ordo] = ACTIONS(154),
    [anon_sym_prae] = ACTIONS(154),
    [anon_sym_sit] = ACTIONS(154),
    [anon_sym_sponte] = ACTIONS(154),
    [anon_sym_typus] = ACTIONS(154),
    [anon_sym_varia] = ACTIONS(154),
    [anon_sym_ante] = ACTIONS(154),
    [anon_sym_aut] = ACTIONS(154),
    [anon_sym_cede] = ACTIONS(154),
    [anon_sym_clausura] = ACTIONS(154),
    [anon_sym_de] = ACTIONS(154),
    [anon_sym_ego] = ACTIONS(154),
    [anon_sym_est] = ACTIONS(154),
    [anon_sym_et] = ACTIONS(154),
    [anon_sym_ex] = ACTIONS(154),
    [anon_sym_finge] = ACTIONS(154),
    [anon_sym_fragilis] = ACTIONS(154),
    [anon_sym_futurum] = ACTIONS(154),
    [anon_sym_implet] = ACTIONS(154),
    [anon_sym_in] = ACTIONS(154),
    [anon_sym_inter] = ACTIONS(154),
    [anon_sym_intra] = ACTIONS(154),
    [anon_sym_lege] = ACTIONS(154),
    [anon_sym_lineam] = ACTIONS(154),
    [anon_sym_metior] = ACTIONS(154),
    [anon_sym_modulus] = ACTIONS(154),
    [anon_sym_mone] = ACTIONS(154),
    [anon_sym_negativum] = ACTIONS(154),
    [anon_sym_nihil] = ACTIONS(154),
    [anon_sym_non] = ACTIONS(154),
    [anon_sym_nonnihil] = ACTIONS(154),
    [anon_sym_nonnulla] = ACTIONS(154),
    [anon_sym_nota] = ACTIONS(154),
    [anon_sym_nulla] = ACTIONS(154),
    [anon_sym_omitte] = ACTIONS(154),
    [anon_sym_omnia] = ACTIONS(154),
    [anon_sym_per] = ACTIONS(154),
    [anon_sym_positivum] = ACTIONS(154),
    [anon_sym_postpara] = ACTIONS(154),
    [anon_sym_postparabit] = ACTIONS(154),
    [anon_sym_praefixum] = ACTIONS(154),
    [anon_sym_praepara] = ACTIONS(154),
    [anon_sym_praeparabit] = ACTIONS(154),
    [anon_sym_pro] = ACTIONS(154),
    [anon_sym_proba] = ACTIONS(154),
    [anon_sym_probandum] = ACTIONS(154),
    [anon_sym_repete] = ACTIONS(154),
    [anon_sym_requirit] = ACTIONS(154),
    [anon_sym_scribe] = ACTIONS(154),
    [anon_sym_scriptum] = ACTIONS(154),
    [anon_sym_solum] = ACTIONS(154),
    [anon_sym_solum_in] = ACTIONS(154),
    [anon_sym_sparge] = ACTIONS(154),
    [anon_sym_sub] = ACTIONS(154),
    [anon_sym_tag] = ACTIONS(154),
    [anon_sym_temporis] = ACTIONS(154),
    [anon_sym_usque] = ACTIONS(154),
    [anon_sym_ut] = ACTIONS(154),
    [anon_sym_vel] = ACTIONS(154),
    [anon_sym_vide] = ACTIONS(154),
    [anon_sym_falsum] = ACTIONS(154),
    [anon_sym_verum] = ACTIONS(154),
    [sym_guillemet_string] = ACTIONS(152),
    [sym_octeti_string] = ACTIONS(152),
    [sym_backtick_string] = ACTIONS(152),
    [sym_ascii_string] = ACTIONS(152),
    [sym_string] = ACTIONS(152),
    [sym_number] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
    [sym_operator] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_hash] = ACTIONS(152),
    [sym_line_comment] = ACTIONS(152),
    [sym_faber_newline] = ACTIONS(152),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_at_sign] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_cursor] = ACTIONS(158),
    [anon_sym_json] = ACTIONS(158),
    [anon_sym_privata] = ACTIONS(158),
    [anon_sym_protecta] = ACTIONS(158),
    [anon_sym_publica] = ACTIONS(158),
    [anon_sym_brevis] = ACTIONS(158),
    [anon_sym_descriptio] = ACTIONS(158),
    [anon_sym_longum] = ACTIONS(158),
    [anon_sym_nomen] = ACTIONS(158),
    [anon_sym_ubique] = ACTIONS(158),
    [anon_sym_ascii] = ACTIONS(158),
    [anon_sym_bivalens] = ACTIONS(158),
    [anon_sym_copia] = ACTIONS(158),
    [anon_sym_f16] = ACTIONS(158),
    [anon_sym_f32] = ACTIONS(158),
    [anon_sym_f64] = ACTIONS(158),
    [anon_sym_fractus] = ACTIONS(158),
    [anon_sym_i16] = ACTIONS(158),
    [anon_sym_i32] = ACTIONS(158),
    [anon_sym_i64] = ACTIONS(158),
    [anon_sym_i8] = ACTIONS(158),
    [anon_sym_ignotum] = ACTIONS(158),
    [anon_sym_instans] = ACTIONS(158),
    [anon_sym_intervallum] = ACTIONS(158),
    [anon_sym_lf16] = ACTIONS(158),
    [anon_sym_lf32] = ACTIONS(158),
    [anon_sym_lf64] = ACTIONS(158),
    [anon_sym_li16] = ACTIONS(158),
    [anon_sym_li32] = ACTIONS(158),
    [anon_sym_li64] = ACTIONS(158),
    [anon_sym_li8] = ACTIONS(158),
    [anon_sym_lista] = ACTIONS(158),
    [anon_sym_lu16] = ACTIONS(158),
    [anon_sym_lu32] = ACTIONS(158),
    [anon_sym_lu64] = ACTIONS(158),
    [anon_sym_lu8] = ACTIONS(158),
    [anon_sym_matrix] = ACTIONS(158),
    [anon_sym_mf16] = ACTIONS(158),
    [anon_sym_mf32] = ACTIONS(158),
    [anon_sym_mf64] = ACTIONS(158),
    [anon_sym_mi16] = ACTIONS(158),
    [anon_sym_mi32] = ACTIONS(158),
    [anon_sym_mi64] = ACTIONS(158),
    [anon_sym_mi8] = ACTIONS(158),
    [anon_sym_mu16] = ACTIONS(158),
    [anon_sym_mu32] = ACTIONS(158),
    [anon_sym_mu64] = ACTIONS(158),
    [anon_sym_mu8] = ACTIONS(158),
    [anon_sym_numerus] = ACTIONS(158),
    [anon_sym_numquam] = ACTIONS(158),
    [anon_sym_octet] = ACTIONS(158),
    [anon_sym_octeti] = ACTIONS(158),
    [anon_sym_promissum] = ACTIONS(158),
    [anon_sym_regex] = ACTIONS(158),
    [anon_sym_series] = ACTIONS(158),
    [anon_sym_sf16] = ACTIONS(158),
    [anon_sym_sf32] = ACTIONS(158),
    [anon_sym_sf64] = ACTIONS(158),
    [anon_sym_si16] = ACTIONS(158),
    [anon_sym_si32] = ACTIONS(158),
    [anon_sym_si64] = ACTIONS(158),
    [anon_sym_si8] = ACTIONS(158),
    [anon_sym_sparsa] = ACTIONS(158),
    [anon_sym_su16] = ACTIONS(158),
    [anon_sym_su32] = ACTIONS(158),
    [anon_sym_su64] = ACTIONS(158),
    [anon_sym_su8] = ACTIONS(158),
    [anon_sym_tabula] = ACTIONS(158),
    [anon_sym_tensor] = ACTIONS(158),
    [anon_sym_textus] = ACTIONS(158),
    [anon_sym_tf16] = ACTIONS(158),
    [anon_sym_tf32] = ACTIONS(158),
    [anon_sym_tf64] = ACTIONS(158),
    [anon_sym_ti16] = ACTIONS(158),
    [anon_sym_ti32] = ACTIONS(158),
    [anon_sym_ti64] = ACTIONS(158),
    [anon_sym_ti8] = ACTIONS(158),
    [anon_sym_tu16] = ACTIONS(158),
    [anon_sym_tu32] = ACTIONS(158),
    [anon_sym_tu64] = ACTIONS(158),
    [anon_sym_tu8] = ACTIONS(158),
    [anon_sym_u16] = ACTIONS(158),
    [anon_sym_u32] = ACTIONS(158),
    [anon_sym_u64] = ACTIONS(158),
    [anon_sym_u8] = ACTIONS(158),
    [anon_sym_unio] = ACTIONS(158),
    [anon_sym_vacua] = ACTIONS(158),
    [anon_sym_vacuum] = ACTIONS(158),
    [anon_sym_valor] = ACTIONS(158),
    [anon_sym_vector] = ACTIONS(158),
    [anon_sym_vf16] = ACTIONS(158),
    [anon_sym_vf32] = ACTIONS(158),
    [anon_sym_vf64] = ACTIONS(158),
    [anon_sym_vi16] = ACTIONS(158),
    [anon_sym_vi32] = ACTIONS(158),
    [anon_sym_vi64] = ACTIONS(158),
    [anon_sym_vi8] = ACTIONS(158),
    [anon_sym_vu16] = ACTIONS(158),
    [anon_sym_vu32] = ACTIONS(158),
    [anon_sym_vu64] = ACTIONS(158),
    [anon_sym_vu8] = ACTIONS(158),
    [anon_sym_ad] = ACTIONS(158),
    [anon_sym_adfirma] = ACTIONS(158),
    [anon_sym_argumenta] = ACTIONS(158),
    [anon_sym_cape] = ACTIONS(158),
    [anon_sym_casu] = ACTIONS(158),
    [anon_sym_ceterum] = ACTIONS(158),
    [anon_sym_cura] = ACTIONS(158),
    [anon_sym_custodi] = ACTIONS(158),
    [anon_sym_demum] = ACTIONS(158),
    [anon_sym_discerne] = ACTIONS(158),
    [anon_sym_dum] = ACTIONS(158),
    [anon_sym_elige] = ACTIONS(158),
    [anon_sym_emitte] = ACTIONS(158),
    [anon_sym_ergo] = ACTIONS(158),
    [anon_sym_fac] = ACTIONS(158),
    [anon_sym_iace] = ACTIONS(158),
    [anon_sym_incipiet] = ACTIONS(158),
    [anon_sym_incipit] = ACTIONS(158),
    [anon_sym_itera] = ACTIONS(158),
    [anon_sym_mori] = ACTIONS(158),
    [anon_sym_perge] = ACTIONS(158),
    [anon_sym_redde] = ACTIONS(158),
    [anon_sym_rumpe] = ACTIONS(158),
    [anon_sym_secus] = ACTIONS(158),
    [anon_sym_si] = ACTIONS(158),
    [anon_sym_sic] = ACTIONS(158),
    [anon_sym_sin] = ACTIONS(158),
    [anon_sym_tacet] = ACTIONS(158),
    [anon_sym_tempta] = ACTIONS(158),
    [anon_sym_abstractus] = ACTIONS(158),
    [anon_sym_ceteri] = ACTIONS(158),
    [anon_sym_curata] = ACTIONS(158),
    [anon_sym_discretio] = ACTIONS(158),
    [anon_sym_errata] = ACTIONS(158),
    [anon_sym_exitus] = ACTIONS(158),
    [anon_sym_fixum] = ACTIONS(158),
    [anon_sym_functio] = ACTIONS(158),
    [anon_sym_generis] = ACTIONS(158),
    [anon_sym_genus] = ACTIONS(158),
    [anon_sym_iacit] = ACTIONS(158),
    [anon_sym_immutata] = ACTIONS(158),
    [anon_sym_implendum] = ACTIONS(158),
    [anon_sym_importa] = ACTIONS(158),
    [anon_sym_magnitudo] = ACTIONS(158),
    [anon_sym_nexum] = ACTIONS(158),
    [anon_sym_optiones] = ACTIONS(158),
    [anon_sym_ordo] = ACTIONS(158),
    [anon_sym_prae] = ACTIONS(158),
    [anon_sym_sit] = ACTIONS(158),
    [anon_sym_sponte] = ACTIONS(158),
    [anon_sym_typus] = ACTIONS(158),
    [anon_sym_varia] = ACTIONS(158),
    [anon_sym_ante] = ACTIONS(158),
    [anon_sym_aut] = ACTIONS(158),
    [anon_sym_cede] = ACTIONS(158),
    [anon_sym_clausura] = ACTIONS(158),
    [anon_sym_de] = ACTIONS(158),
    [anon_sym_ego] = ACTIONS(158),
    [anon_sym_est] = ACTIONS(158),
    [anon_sym_et] = ACTIONS(158),
    [anon_sym_ex] = ACTIONS(158),
    [anon_sym_finge] = ACTIONS(158),
    [anon_sym_fragilis] = ACTIONS(158),
    [anon_sym_futurum] = ACTIONS(158),
    [anon_sym_implet] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(158),
    [anon_sym_inter] = ACTIONS(158),
    [anon_sym_intra] = ACTIONS(158),
    [anon_sym_lege] = ACTIONS(158),
    [anon_sym_lineam] = ACTIONS(158),
    [anon_sym_metior] = ACTIONS(158),
    [anon_sym_modulus] = ACTIONS(158),
    [anon_sym_mone] = ACTIONS(158),
    [anon_sym_negativum] = ACTIONS(158),
    [anon_sym_nihil] = ACTIONS(158),
    [anon_sym_non] = ACTIONS(158),
    [anon_sym_nonnihil] = ACTIONS(158),
    [anon_sym_nonnulla] = ACTIONS(158),
    [anon_sym_nota] = ACTIONS(158),
    [anon_sym_nulla] = ACTIONS(158),
    [anon_sym_omitte] = ACTIONS(158),
    [anon_sym_omnia] = ACTIONS(158),
    [anon_sym_per] = ACTIONS(158),
    [anon_sym_positivum] = ACTIONS(158),
    [anon_sym_postpara] = ACTIONS(158),
    [anon_sym_postparabit] = ACTIONS(158),
    [anon_sym_praefixum] = ACTIONS(158),
    [anon_sym_praepara] = ACTIONS(158),
    [anon_sym_praeparabit] = ACTIONS(158),
    [anon_sym_pro] = ACTIONS(158),
    [anon_sym_proba] = ACTIONS(158),
    [anon_sym_probandum] = ACTIONS(158),
    [anon_sym_repete] = ACTIONS(158),
    [anon_sym_requirit] = ACTIONS(158),
    [anon_sym_scribe] = ACTIONS(158),
    [anon_sym_scriptum] = ACTIONS(158),
    [anon_sym_solum] = ACTIONS(158),
    [anon_sym_solum_in] = ACTIONS(158),
    [anon_sym_sparge] = ACTIONS(158),
    [anon_sym_sub] = ACTIONS(158),
    [anon_sym_tag] = ACTIONS(158),
    [anon_sym_temporis] = ACTIONS(158),
    [anon_sym_usque] = ACTIONS(158),
    [anon_sym_ut] = ACTIONS(158),
    [anon_sym_vel] = ACTIONS(158),
    [anon_sym_vide] = ACTIONS(158),
    [anon_sym_falsum] = ACTIONS(158),
    [anon_sym_verum] = ACTIONS(158),
    [sym_guillemet_string] = ACTIONS(156),
    [sym_octeti_string] = ACTIONS(156),
    [sym_backtick_string] = ACTIONS(156),
    [sym_ascii_string] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [sym_number] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_operator] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_hash] = ACTIONS(156),
    [sym_line_comment] = ACTIONS(156),
    [sym_faber_newline] = ACTIONS(156),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_at_sign] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_cursor] = ACTIONS(162),
    [anon_sym_json] = ACTIONS(162),
    [anon_sym_privata] = ACTIONS(162),
    [anon_sym_protecta] = ACTIONS(162),
    [anon_sym_publica] = ACTIONS(162),
    [anon_sym_brevis] = ACTIONS(162),
    [anon_sym_descriptio] = ACTIONS(162),
    [anon_sym_longum] = ACTIONS(162),
    [anon_sym_nomen] = ACTIONS(162),
    [anon_sym_ubique] = ACTIONS(162),
    [anon_sym_ascii] = ACTIONS(162),
    [anon_sym_bivalens] = ACTIONS(162),
    [anon_sym_copia] = ACTIONS(162),
    [anon_sym_f16] = ACTIONS(162),
    [anon_sym_f32] = ACTIONS(162),
    [anon_sym_f64] = ACTIONS(162),
    [anon_sym_fractus] = ACTIONS(162),
    [anon_sym_i16] = ACTIONS(162),
    [anon_sym_i32] = ACTIONS(162),
    [anon_sym_i64] = ACTIONS(162),
    [anon_sym_i8] = ACTIONS(162),
    [anon_sym_ignotum] = ACTIONS(162),
    [anon_sym_instans] = ACTIONS(162),
    [anon_sym_intervallum] = ACTIONS(162),
    [anon_sym_lf16] = ACTIONS(162),
    [anon_sym_lf32] = ACTIONS(162),
    [anon_sym_lf64] = ACTIONS(162),
    [anon_sym_li16] = ACTIONS(162),
    [anon_sym_li32] = ACTIONS(162),
    [anon_sym_li64] = ACTIONS(162),
    [anon_sym_li8] = ACTIONS(162),
    [anon_sym_lista] = ACTIONS(162),
    [anon_sym_lu16] = ACTIONS(162),
    [anon_sym_lu32] = ACTIONS(162),
    [anon_sym_lu64] = ACTIONS(162),
    [anon_sym_lu8] = ACTIONS(162),
    [anon_sym_matrix] = ACTIONS(162),
    [anon_sym_mf16] = ACTIONS(162),
    [anon_sym_mf32] = ACTIONS(162),
    [anon_sym_mf64] = ACTIONS(162),
    [anon_sym_mi16] = ACTIONS(162),
    [anon_sym_mi32] = ACTIONS(162),
    [anon_sym_mi64] = ACTIONS(162),
    [anon_sym_mi8] = ACTIONS(162),
    [anon_sym_mu16] = ACTIONS(162),
    [anon_sym_mu32] = ACTIONS(162),
    [anon_sym_mu64] = ACTIONS(162),
    [anon_sym_mu8] = ACTIONS(162),
    [anon_sym_numerus] = ACTIONS(162),
    [anon_sym_numquam] = ACTIONS(162),
    [anon_sym_octet] = ACTIONS(162),
    [anon_sym_octeti] = ACTIONS(162),
    [anon_sym_promissum] = ACTIONS(162),
    [anon_sym_regex] = ACTIONS(162),
    [anon_sym_series] = ACTIONS(162),
    [anon_sym_sf16] = ACTIONS(162),
    [anon_sym_sf32] = ACTIONS(162),
    [anon_sym_sf64] = ACTIONS(162),
    [anon_sym_si16] = ACTIONS(162),
    [anon_sym_si32] = ACTIONS(162),
    [anon_sym_si64] = ACTIONS(162),
    [anon_sym_si8] = ACTIONS(162),
    [anon_sym_sparsa] = ACTIONS(162),
    [anon_sym_su16] = ACTIONS(162),
    [anon_sym_su32] = ACTIONS(162),
    [anon_sym_su64] = ACTIONS(162),
    [anon_sym_su8] = ACTIONS(162),
    [anon_sym_tabula] = ACTIONS(162),
    [anon_sym_tensor] = ACTIONS(162),
    [anon_sym_textus] = ACTIONS(162),
    [anon_sym_tf16] = ACTIONS(162),
    [anon_sym_tf32] = ACTIONS(162),
    [anon_sym_tf64] = ACTIONS(162),
    [anon_sym_ti16] = ACTIONS(162),
    [anon_sym_ti32] = ACTIONS(162),
    [anon_sym_ti64] = ACTIONS(162),
    [anon_sym_ti8] = ACTIONS(162),
    [anon_sym_tu16] = ACTIONS(162),
    [anon_sym_tu32] = ACTIONS(162),
    [anon_sym_tu64] = ACTIONS(162),
    [anon_sym_tu8] = ACTIONS(162),
    [anon_sym_u16] = ACTIONS(162),
    [anon_sym_u32] = ACTIONS(162),
    [anon_sym_u64] = ACTIONS(162),
    [anon_sym_u8] = ACTIONS(162),
    [anon_sym_unio] = ACTIONS(162),
    [anon_sym_vacua] = ACTIONS(162),
    [anon_sym_vacuum] = ACTIONS(162),
    [anon_sym_valor] = ACTIONS(162),
    [anon_sym_vector] = ACTIONS(162),
    [anon_sym_vf16] = ACTIONS(162),
    [anon_sym_vf32] = ACTIONS(162),
    [anon_sym_vf64] = ACTIONS(162),
    [anon_sym_vi16] = ACTIONS(162),
    [anon_sym_vi32] = ACTIONS(162),
    [anon_sym_vi64] = ACTIONS(162),
    [anon_sym_vi8] = ACTIONS(162),
    [anon_sym_vu16] = ACTIONS(162),
    [anon_sym_vu32] = ACTIONS(162),
    [anon_sym_vu64] = ACTIONS(162),
    [anon_sym_vu8] = ACTIONS(162),
    [anon_sym_ad] = ACTIONS(162),
    [anon_sym_adfirma] = ACTIONS(162),
    [anon_sym_argumenta] = ACTIONS(162),
    [anon_sym_cape] = ACTIONS(162),
    [anon_sym_casu] = ACTIONS(162),
    [anon_sym_ceterum] = ACTIONS(162),
    [anon_sym_cura] = ACTIONS(162),
    [anon_sym_custodi] = ACTIONS(162),
    [anon_sym_demum] = ACTIONS(162),
    [anon_sym_discerne] = ACTIONS(162),
    [anon_sym_dum] = ACTIONS(162),
    [anon_sym_elige] = ACTIONS(162),
    [anon_sym_emitte] = ACTIONS(162),
    [anon_sym_ergo] = ACTIONS(162),
    [anon_sym_fac] = ACTIONS(162),
    [anon_sym_iace] = ACTIONS(162),
    [anon_sym_incipiet] = ACTIONS(162),
    [anon_sym_incipit] = ACTIONS(162),
    [anon_sym_itera] = ACTIONS(162),
    [anon_sym_mori] = ACTIONS(162),
    [anon_sym_perge] = ACTIONS(162),
    [anon_sym_redde] = ACTIONS(162),
    [anon_sym_rumpe] = ACTIONS(162),
    [anon_sym_secus] = ACTIONS(162),
    [anon_sym_si] = ACTIONS(162),
    [anon_sym_sic] = ACTIONS(162),
    [anon_sym_sin] = ACTIONS(162),
    [anon_sym_tacet] = ACTIONS(162),
    [anon_sym_tempta] = ACTIONS(162),
    [anon_sym_abstractus] = ACTIONS(162),
    [anon_sym_ceteri] = ACTIONS(162),
    [anon_sym_curata] = ACTIONS(162),
    [anon_sym_discretio] = ACTIONS(162),
    [anon_sym_errata] = ACTIONS(162),
    [anon_sym_exitus] = ACTIONS(162),
    [anon_sym_fixum] = ACTIONS(162),
    [anon_sym_functio] = ACTIONS(162),
    [anon_sym_generis] = ACTIONS(162),
    [anon_sym_genus] = ACTIONS(162),
    [anon_sym_iacit] = ACTIONS(162),
    [anon_sym_immutata] = ACTIONS(162),
    [anon_sym_implendum] = ACTIONS(162),
    [anon_sym_importa] = ACTIONS(162),
    [anon_sym_magnitudo] = ACTIONS(162),
    [anon_sym_nexum] = ACTIONS(162),
    [anon_sym_optiones] = ACTIONS(162),
    [anon_sym_ordo] = ACTIONS(162),
    [anon_sym_prae] = ACTIONS(162),
    [anon_sym_sit] = ACTIONS(162),
    [anon_sym_sponte] = ACTIONS(162),
    [anon_sym_typus] = ACTIONS(162),
    [anon_sym_varia] = ACTIONS(162),
    [anon_sym_ante] = ACTIONS(162),
    [anon_sym_aut] = ACTIONS(162),
    [anon_sym_cede] = ACTIONS(162),
    [anon_sym_clausura] = ACTIONS(162),
    [anon_sym_de] = ACTIONS(162),
    [anon_sym_ego] = ACTIONS(162),
    [anon_sym_est] = ACTIONS(162),
    [anon_sym_et] = ACTIONS(162),
    [anon_sym_ex] = ACTIONS(162),
    [anon_sym_finge] = ACTIONS(162),
    [anon_sym_fragilis] = ACTIONS(162),
    [anon_sym_futurum] = ACTIONS(162),
    [anon_sym_implet] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_inter] = ACTIONS(162),
    [anon_sym_intra] = ACTIONS(162),
    [anon_sym_lege] = ACTIONS(162),
    [anon_sym_lineam] = ACTIONS(162),
    [anon_sym_metior] = ACTIONS(162),
    [anon_sym_modulus] = ACTIONS(162),
    [anon_sym_mone] = ACTIONS(162),
    [anon_sym_negativum] = ACTIONS(162),
    [anon_sym_nihil] = ACTIONS(162),
    [anon_sym_non] = ACTIONS(162),
    [anon_sym_nonnihil] = ACTIONS(162),
    [anon_sym_nonnulla] = ACTIONS(162),
    [anon_sym_nota] = ACTIONS(162),
    [anon_sym_nulla] = ACTIONS(162),
    [anon_sym_omitte] = ACTIONS(162),
    [anon_sym_omnia] = ACTIONS(162),
    [anon_sym_per] = ACTIONS(162),
    [anon_sym_positivum] = ACTIONS(162),
    [anon_sym_postpara] = ACTIONS(162),
    [anon_sym_postparabit] = ACTIONS(162),
    [anon_sym_praefixum] = ACTIONS(162),
    [anon_sym_praepara] = ACTIONS(162),
    [anon_sym_praeparabit] = ACTIONS(162),
    [anon_sym_pro] = ACTIONS(162),
    [anon_sym_proba] = ACTIONS(162),
    [anon_sym_probandum] = ACTIONS(162),
    [anon_sym_repete] = ACTIONS(162),
    [anon_sym_requirit] = ACTIONS(162),
    [anon_sym_scribe] = ACTIONS(162),
    [anon_sym_scriptum] = ACTIONS(162),
    [anon_sym_solum] = ACTIONS(162),
    [anon_sym_solum_in] = ACTIONS(162),
    [anon_sym_sparge] = ACTIONS(162),
    [anon_sym_sub] = ACTIONS(162),
    [anon_sym_tag] = ACTIONS(162),
    [anon_sym_temporis] = ACTIONS(162),
    [anon_sym_usque] = ACTIONS(162),
    [anon_sym_ut] = ACTIONS(162),
    [anon_sym_vel] = ACTIONS(162),
    [anon_sym_vide] = ACTIONS(162),
    [anon_sym_falsum] = ACTIONS(162),
    [anon_sym_verum] = ACTIONS(162),
    [sym_guillemet_string] = ACTIONS(160),
    [sym_octeti_string] = ACTIONS(160),
    [sym_backtick_string] = ACTIONS(160),
    [sym_ascii_string] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [sym_number] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [sym_operator] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_hash] = ACTIONS(160),
    [sym_line_comment] = ACTIONS(160),
    [sym_faber_newline] = ACTIONS(160),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_at_sign] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_cursor] = ACTIONS(166),
    [anon_sym_json] = ACTIONS(166),
    [anon_sym_privata] = ACTIONS(166),
    [anon_sym_protecta] = ACTIONS(166),
    [anon_sym_publica] = ACTIONS(166),
    [anon_sym_brevis] = ACTIONS(166),
    [anon_sym_descriptio] = ACTIONS(166),
    [anon_sym_longum] = ACTIONS(166),
    [anon_sym_nomen] = ACTIONS(166),
    [anon_sym_ubique] = ACTIONS(166),
    [anon_sym_ascii] = ACTIONS(166),
    [anon_sym_bivalens] = ACTIONS(166),
    [anon_sym_copia] = ACTIONS(166),
    [anon_sym_f16] = ACTIONS(166),
    [anon_sym_f32] = ACTIONS(166),
    [anon_sym_f64] = ACTIONS(166),
    [anon_sym_fractus] = ACTIONS(166),
    [anon_sym_i16] = ACTIONS(166),
    [anon_sym_i32] = ACTIONS(166),
    [anon_sym_i64] = ACTIONS(166),
    [anon_sym_i8] = ACTIONS(166),
    [anon_sym_ignotum] = ACTIONS(166),
    [anon_sym_instans] = ACTIONS(166),
    [anon_sym_intervallum] = ACTIONS(166),
    [anon_sym_lf16] = ACTIONS(166),
    [anon_sym_lf32] = ACTIONS(166),
    [anon_sym_lf64] = ACTIONS(166),
    [anon_sym_li16] = ACTIONS(166),
    [anon_sym_li32] = ACTIONS(166),
    [anon_sym_li64] = ACTIONS(166),
    [anon_sym_li8] = ACTIONS(166),
    [anon_sym_lista] = ACTIONS(166),
    [anon_sym_lu16] = ACTIONS(166),
    [anon_sym_lu32] = ACTIONS(166),
    [anon_sym_lu64] = ACTIONS(166),
    [anon_sym_lu8] = ACTIONS(166),
    [anon_sym_matrix] = ACTIONS(166),
    [anon_sym_mf16] = ACTIONS(166),
    [anon_sym_mf32] = ACTIONS(166),
    [anon_sym_mf64] = ACTIONS(166),
    [anon_sym_mi16] = ACTIONS(166),
    [anon_sym_mi32] = ACTIONS(166),
    [anon_sym_mi64] = ACTIONS(166),
    [anon_sym_mi8] = ACTIONS(166),
    [anon_sym_mu16] = ACTIONS(166),
    [anon_sym_mu32] = ACTIONS(166),
    [anon_sym_mu64] = ACTIONS(166),
    [anon_sym_mu8] = ACTIONS(166),
    [anon_sym_numerus] = ACTIONS(166),
    [anon_sym_numquam] = ACTIONS(166),
    [anon_sym_octet] = ACTIONS(166),
    [anon_sym_octeti] = ACTIONS(166),
    [anon_sym_promissum] = ACTIONS(166),
    [anon_sym_regex] = ACTIONS(166),
    [anon_sym_series] = ACTIONS(166),
    [anon_sym_sf16] = ACTIONS(166),
    [anon_sym_sf32] = ACTIONS(166),
    [anon_sym_sf64] = ACTIONS(166),
    [anon_sym_si16] = ACTIONS(166),
    [anon_sym_si32] = ACTIONS(166),
    [anon_sym_si64] = ACTIONS(166),
    [anon_sym_si8] = ACTIONS(166),
    [anon_sym_sparsa] = ACTIONS(166),
    [anon_sym_su16] = ACTIONS(166),
    [anon_sym_su32] = ACTIONS(166),
    [anon_sym_su64] = ACTIONS(166),
    [anon_sym_su8] = ACTIONS(166),
    [anon_sym_tabula] = ACTIONS(166),
    [anon_sym_tensor] = ACTIONS(166),
    [anon_sym_textus] = ACTIONS(166),
    [anon_sym_tf16] = ACTIONS(166),
    [anon_sym_tf32] = ACTIONS(166),
    [anon_sym_tf64] = ACTIONS(166),
    [anon_sym_ti16] = ACTIONS(166),
    [anon_sym_ti32] = ACTIONS(166),
    [anon_sym_ti64] = ACTIONS(166),
    [anon_sym_ti8] = ACTIONS(166),
    [anon_sym_tu16] = ACTIONS(166),
    [anon_sym_tu32] = ACTIONS(166),
    [anon_sym_tu64] = ACTIONS(166),
    [anon_sym_tu8] = ACTIONS(166),
    [anon_sym_u16] = ACTIONS(166),
    [anon_sym_u32] = ACTIONS(166),
    [anon_sym_u64] = ACTIONS(166),
    [anon_sym_u8] = ACTIONS(166),
    [anon_sym_unio] = ACTIONS(166),
    [anon_sym_vacua] = ACTIONS(166),
    [anon_sym_vacuum] = ACTIONS(166),
    [anon_sym_valor] = ACTIONS(166),
    [anon_sym_vector] = ACTIONS(166),
    [anon_sym_vf16] = ACTIONS(166),
    [anon_sym_vf32] = ACTIONS(166),
    [anon_sym_vf64] = ACTIONS(166),
    [anon_sym_vi16] = ACTIONS(166),
    [anon_sym_vi32] = ACTIONS(166),
    [anon_sym_vi64] = ACTIONS(166),
    [anon_sym_vi8] = ACTIONS(166),
    [anon_sym_vu16] = ACTIONS(166),
    [anon_sym_vu32] = ACTIONS(166),
    [anon_sym_vu64] = ACTIONS(166),
    [anon_sym_vu8] = ACTIONS(166),
    [anon_sym_ad] = ACTIONS(166),
    [anon_sym_adfirma] = ACTIONS(166),
    [anon_sym_argumenta] = ACTIONS(166),
    [anon_sym_cape] = ACTIONS(166),
    [anon_sym_casu] = ACTIONS(166),
    [anon_sym_ceterum] = ACTIONS(166),
    [anon_sym_cura] = ACTIONS(166),
    [anon_sym_custodi] = ACTIONS(166),
    [anon_sym_demum] = ACTIONS(166),
    [anon_sym_discerne] = ACTIONS(166),
    [anon_sym_dum] = ACTIONS(166),
    [anon_sym_elige] = ACTIONS(166),
    [anon_sym_emitte] = ACTIONS(166),
    [anon_sym_ergo] = ACTIONS(166),
    [anon_sym_fac] = ACTIONS(166),
    [anon_sym_iace] = ACTIONS(166),
    [anon_sym_incipiet] = ACTIONS(166),
    [anon_sym_incipit] = ACTIONS(166),
    [anon_sym_itera] = ACTIONS(166),
    [anon_sym_mori] = ACTIONS(166),
    [anon_sym_perge] = ACTIONS(166),
    [anon_sym_redde] = ACTIONS(166),
    [anon_sym_rumpe] = ACTIONS(166),
    [anon_sym_secus] = ACTIONS(166),
    [anon_sym_si] = ACTIONS(166),
    [anon_sym_sic] = ACTIONS(166),
    [anon_sym_sin] = ACTIONS(166),
    [anon_sym_tacet] = ACTIONS(166),
    [anon_sym_tempta] = ACTIONS(166),
    [anon_sym_abstractus] = ACTIONS(166),
    [anon_sym_ceteri] = ACTIONS(166),
    [anon_sym_curata] = ACTIONS(166),
    [anon_sym_discretio] = ACTIONS(166),
    [anon_sym_errata] = ACTIONS(166),
    [anon_sym_exitus] = ACTIONS(166),
    [anon_sym_fixum] = ACTIONS(166),
    [anon_sym_functio] = ACTIONS(166),
    [anon_sym_generis] = ACTIONS(166),
    [anon_sym_genus] = ACTIONS(166),
    [anon_sym_iacit] = ACTIONS(166),
    [anon_sym_immutata] = ACTIONS(166),
    [anon_sym_implendum] = ACTIONS(166),
    [anon_sym_importa] = ACTIONS(166),
    [anon_sym_magnitudo] = ACTIONS(166),
    [anon_sym_nexum] = ACTIONS(166),
    [anon_sym_optiones] = ACTIONS(166),
    [anon_sym_ordo] = ACTIONS(166),
    [anon_sym_prae] = ACTIONS(166),
    [anon_sym_sit] = ACTIONS(166),
    [anon_sym_sponte] = ACTIONS(166),
    [anon_sym_typus] = ACTIONS(166),
    [anon_sym_varia] = ACTIONS(166),
    [anon_sym_ante] = ACTIONS(166),
    [anon_sym_aut] = ACTIONS(166),
    [anon_sym_cede] = ACTIONS(166),
    [anon_sym_clausura] = ACTIONS(166),
    [anon_sym_de] = ACTIONS(166),
    [anon_sym_ego] = ACTIONS(166),
    [anon_sym_est] = ACTIONS(166),
    [anon_sym_et] = ACTIONS(166),
    [anon_sym_ex] = ACTIONS(166),
    [anon_sym_finge] = ACTIONS(166),
    [anon_sym_fragilis] = ACTIONS(166),
    [anon_sym_futurum] = ACTIONS(166),
    [anon_sym_implet] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_inter] = ACTIONS(166),
    [anon_sym_intra] = ACTIONS(166),
    [anon_sym_lege] = ACTIONS(166),
    [anon_sym_lineam] = ACTIONS(166),
    [anon_sym_metior] = ACTIONS(166),
    [anon_sym_modulus] = ACTIONS(166),
    [anon_sym_mone] = ACTIONS(166),
    [anon_sym_negativum] = ACTIONS(166),
    [anon_sym_nihil] = ACTIONS(166),
    [anon_sym_non] = ACTIONS(166),
    [anon_sym_nonnihil] = ACTIONS(166),
    [anon_sym_nonnulla] = ACTIONS(166),
    [anon_sym_nota] = ACTIONS(166),
    [anon_sym_nulla] = ACTIONS(166),
    [anon_sym_omitte] = ACTIONS(166),
    [anon_sym_omnia] = ACTIONS(166),
    [anon_sym_per] = ACTIONS(166),
    [anon_sym_positivum] = ACTIONS(166),
    [anon_sym_postpara] = ACTIONS(166),
    [anon_sym_postparabit] = ACTIONS(166),
    [anon_sym_praefixum] = ACTIONS(166),
    [anon_sym_praepara] = ACTIONS(166),
    [anon_sym_praeparabit] = ACTIONS(166),
    [anon_sym_pro] = ACTIONS(166),
    [anon_sym_proba] = ACTIONS(166),
    [anon_sym_probandum] = ACTIONS(166),
    [anon_sym_repete] = ACTIONS(166),
    [anon_sym_requirit] = ACTIONS(166),
    [anon_sym_scribe] = ACTIONS(166),
    [anon_sym_scriptum] = ACTIONS(166),
    [anon_sym_solum] = ACTIONS(166),
    [anon_sym_solum_in] = ACTIONS(166),
    [anon_sym_sparge] = ACTIONS(166),
    [anon_sym_sub] = ACTIONS(166),
    [anon_sym_tag] = ACTIONS(166),
    [anon_sym_temporis] = ACTIONS(166),
    [anon_sym_usque] = ACTIONS(166),
    [anon_sym_ut] = ACTIONS(166),
    [anon_sym_vel] = ACTIONS(166),
    [anon_sym_vide] = ACTIONS(166),
    [anon_sym_falsum] = ACTIONS(166),
    [anon_sym_verum] = ACTIONS(166),
    [sym_guillemet_string] = ACTIONS(164),
    [sym_octeti_string] = ACTIONS(164),
    [sym_backtick_string] = ACTIONS(164),
    [sym_ascii_string] = ACTIONS(164),
    [sym_string] = ACTIONS(164),
    [sym_number] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
    [sym_operator] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_hash] = ACTIONS(164),
    [sym_line_comment] = ACTIONS(164),
    [sym_faber_newline] = ACTIONS(164),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_at_sign] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_cursor] = ACTIONS(170),
    [anon_sym_json] = ACTIONS(170),
    [anon_sym_privata] = ACTIONS(170),
    [anon_sym_protecta] = ACTIONS(170),
    [anon_sym_publica] = ACTIONS(170),
    [anon_sym_ascii] = ACTIONS(170),
    [anon_sym_bivalens] = ACTIONS(170),
    [anon_sym_copia] = ACTIONS(170),
    [anon_sym_f16] = ACTIONS(170),
    [anon_sym_f32] = ACTIONS(170),
    [anon_sym_f64] = ACTIONS(170),
    [anon_sym_fractus] = ACTIONS(170),
    [anon_sym_i16] = ACTIONS(170),
    [anon_sym_i32] = ACTIONS(170),
    [anon_sym_i64] = ACTIONS(170),
    [anon_sym_i8] = ACTIONS(170),
    [anon_sym_ignotum] = ACTIONS(170),
    [anon_sym_instans] = ACTIONS(170),
    [anon_sym_intervallum] = ACTIONS(170),
    [anon_sym_lf16] = ACTIONS(170),
    [anon_sym_lf32] = ACTIONS(170),
    [anon_sym_lf64] = ACTIONS(170),
    [anon_sym_li16] = ACTIONS(170),
    [anon_sym_li32] = ACTIONS(170),
    [anon_sym_li64] = ACTIONS(170),
    [anon_sym_li8] = ACTIONS(170),
    [anon_sym_lista] = ACTIONS(170),
    [anon_sym_lu16] = ACTIONS(170),
    [anon_sym_lu32] = ACTIONS(170),
    [anon_sym_lu64] = ACTIONS(170),
    [anon_sym_lu8] = ACTIONS(170),
    [anon_sym_matrix] = ACTIONS(170),
    [anon_sym_mf16] = ACTIONS(170),
    [anon_sym_mf32] = ACTIONS(170),
    [anon_sym_mf64] = ACTIONS(170),
    [anon_sym_mi16] = ACTIONS(170),
    [anon_sym_mi32] = ACTIONS(170),
    [anon_sym_mi64] = ACTIONS(170),
    [anon_sym_mi8] = ACTIONS(170),
    [anon_sym_mu16] = ACTIONS(170),
    [anon_sym_mu32] = ACTIONS(170),
    [anon_sym_mu64] = ACTIONS(170),
    [anon_sym_mu8] = ACTIONS(170),
    [anon_sym_numerus] = ACTIONS(170),
    [anon_sym_numquam] = ACTIONS(170),
    [anon_sym_octet] = ACTIONS(170),
    [anon_sym_octeti] = ACTIONS(170),
    [anon_sym_promissum] = ACTIONS(170),
    [anon_sym_regex] = ACTIONS(170),
    [anon_sym_series] = ACTIONS(170),
    [anon_sym_sf16] = ACTIONS(170),
    [anon_sym_sf32] = ACTIONS(170),
    [anon_sym_sf64] = ACTIONS(170),
    [anon_sym_si16] = ACTIONS(170),
    [anon_sym_si32] = ACTIONS(170),
    [anon_sym_si64] = ACTIONS(170),
    [anon_sym_si8] = ACTIONS(170),
    [anon_sym_sparsa] = ACTIONS(170),
    [anon_sym_su16] = ACTIONS(170),
    [anon_sym_su32] = ACTIONS(170),
    [anon_sym_su64] = ACTIONS(170),
    [anon_sym_su8] = ACTIONS(170),
    [anon_sym_tabula] = ACTIONS(170),
    [anon_sym_tensor] = ACTIONS(170),
    [anon_sym_textus] = ACTIONS(170),
    [anon_sym_tf16] = ACTIONS(170),
    [anon_sym_tf32] = ACTIONS(170),
    [anon_sym_tf64] = ACTIONS(170),
    [anon_sym_ti16] = ACTIONS(170),
    [anon_sym_ti32] = ACTIONS(170),
    [anon_sym_ti64] = ACTIONS(170),
    [anon_sym_ti8] = ACTIONS(170),
    [anon_sym_tu16] = ACTIONS(170),
    [anon_sym_tu32] = ACTIONS(170),
    [anon_sym_tu64] = ACTIONS(170),
    [anon_sym_tu8] = ACTIONS(170),
    [anon_sym_u16] = ACTIONS(170),
    [anon_sym_u32] = ACTIONS(170),
    [anon_sym_u64] = ACTIONS(170),
    [anon_sym_u8] = ACTIONS(170),
    [anon_sym_unio] = ACTIONS(170),
    [anon_sym_vacua] = ACTIONS(170),
    [anon_sym_vacuum] = ACTIONS(170),
    [anon_sym_valor] = ACTIONS(170),
    [anon_sym_vector] = ACTIONS(170),
    [anon_sym_vf16] = ACTIONS(170),
    [anon_sym_vf32] = ACTIONS(170),
    [anon_sym_vf64] = ACTIONS(170),
    [anon_sym_vi16] = ACTIONS(170),
    [anon_sym_vi32] = ACTIONS(170),
    [anon_sym_vi64] = ACTIONS(170),
    [anon_sym_vi8] = ACTIONS(170),
    [anon_sym_vu16] = ACTIONS(170),
    [anon_sym_vu32] = ACTIONS(170),
    [anon_sym_vu64] = ACTIONS(170),
    [anon_sym_vu8] = ACTIONS(170),
    [anon_sym_ad] = ACTIONS(170),
    [anon_sym_adfirma] = ACTIONS(170),
    [anon_sym_argumenta] = ACTIONS(170),
    [anon_sym_cape] = ACTIONS(170),
    [anon_sym_casu] = ACTIONS(170),
    [anon_sym_ceterum] = ACTIONS(170),
    [anon_sym_cura] = ACTIONS(170),
    [anon_sym_custodi] = ACTIONS(170),
    [anon_sym_demum] = ACTIONS(170),
    [anon_sym_discerne] = ACTIONS(170),
    [anon_sym_dum] = ACTIONS(170),
    [anon_sym_elige] = ACTIONS(170),
    [anon_sym_emitte] = ACTIONS(170),
    [anon_sym_ergo] = ACTIONS(170),
    [anon_sym_fac] = ACTIONS(170),
    [anon_sym_iace] = ACTIONS(170),
    [anon_sym_incipiet] = ACTIONS(170),
    [anon_sym_incipit] = ACTIONS(170),
    [anon_sym_itera] = ACTIONS(170),
    [anon_sym_mori] = ACTIONS(170),
    [anon_sym_perge] = ACTIONS(170),
    [anon_sym_redde] = ACTIONS(170),
    [anon_sym_rumpe] = ACTIONS(170),
    [anon_sym_secus] = ACTIONS(170),
    [anon_sym_si] = ACTIONS(170),
    [anon_sym_sic] = ACTIONS(170),
    [anon_sym_sin] = ACTIONS(170),
    [anon_sym_tacet] = ACTIONS(170),
    [anon_sym_tempta] = ACTIONS(170),
    [anon_sym_abstractus] = ACTIONS(170),
    [anon_sym_ceteri] = ACTIONS(170),
    [anon_sym_curata] = ACTIONS(170),
    [anon_sym_discretio] = ACTIONS(170),
    [anon_sym_errata] = ACTIONS(170),
    [anon_sym_exitus] = ACTIONS(170),
    [anon_sym_fixum] = ACTIONS(170),
    [anon_sym_functio] = ACTIONS(170),
    [anon_sym_generis] = ACTIONS(170),
    [anon_sym_genus] = ACTIONS(170),
    [anon_sym_iacit] = ACTIONS(170),
    [anon_sym_immutata] = ACTIONS(170),
    [anon_sym_implendum] = ACTIONS(170),
    [anon_sym_importa] = ACTIONS(170),
    [anon_sym_magnitudo] = ACTIONS(170),
    [anon_sym_nexum] = ACTIONS(170),
    [anon_sym_optiones] = ACTIONS(170),
    [anon_sym_ordo] = ACTIONS(170),
    [anon_sym_prae] = ACTIONS(170),
    [anon_sym_sit] = ACTIONS(170),
    [anon_sym_sponte] = ACTIONS(170),
    [anon_sym_typus] = ACTIONS(170),
    [anon_sym_varia] = ACTIONS(170),
    [anon_sym_ante] = ACTIONS(170),
    [anon_sym_aut] = ACTIONS(170),
    [anon_sym_cede] = ACTIONS(170),
    [anon_sym_clausura] = ACTIONS(170),
    [anon_sym_de] = ACTIONS(170),
    [anon_sym_ego] = ACTIONS(170),
    [anon_sym_est] = ACTIONS(170),
    [anon_sym_et] = ACTIONS(170),
    [anon_sym_ex] = ACTIONS(170),
    [anon_sym_finge] = ACTIONS(170),
    [anon_sym_fragilis] = ACTIONS(170),
    [anon_sym_futurum] = ACTIONS(170),
    [anon_sym_implet] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(170),
    [anon_sym_inter] = ACTIONS(170),
    [anon_sym_intra] = ACTIONS(170),
    [anon_sym_lege] = ACTIONS(170),
    [anon_sym_lineam] = ACTIONS(170),
    [anon_sym_metior] = ACTIONS(170),
    [anon_sym_modulus] = ACTIONS(170),
    [anon_sym_mone] = ACTIONS(170),
    [anon_sym_negativum] = ACTIONS(170),
    [anon_sym_nihil] = ACTIONS(170),
    [anon_sym_non] = ACTIONS(170),
    [anon_sym_nonnihil] = ACTIONS(170),
    [anon_sym_nonnulla] = ACTIONS(170),
    [anon_sym_nota] = ACTIONS(170),
    [anon_sym_nulla] = ACTIONS(170),
    [anon_sym_omitte] = ACTIONS(170),
    [anon_sym_omnia] = ACTIONS(170),
    [anon_sym_per] = ACTIONS(170),
    [anon_sym_positivum] = ACTIONS(170),
    [anon_sym_postpara] = ACTIONS(170),
    [anon_sym_postparabit] = ACTIONS(170),
    [anon_sym_praefixum] = ACTIONS(170),
    [anon_sym_praepara] = ACTIONS(170),
    [anon_sym_praeparabit] = ACTIONS(170),
    [anon_sym_pro] = ACTIONS(170),
    [anon_sym_proba] = ACTIONS(170),
    [anon_sym_probandum] = ACTIONS(170),
    [anon_sym_repete] = ACTIONS(170),
    [anon_sym_requirit] = ACTIONS(170),
    [anon_sym_scribe] = ACTIONS(170),
    [anon_sym_scriptum] = ACTIONS(170),
    [anon_sym_solum] = ACTIONS(170),
    [anon_sym_solum_in] = ACTIONS(170),
    [anon_sym_sparge] = ACTIONS(170),
    [anon_sym_sub] = ACTIONS(170),
    [anon_sym_tag] = ACTIONS(170),
    [anon_sym_temporis] = ACTIONS(170),
    [anon_sym_usque] = ACTIONS(170),
    [anon_sym_ut] = ACTIONS(170),
    [anon_sym_vel] = ACTIONS(170),
    [anon_sym_vide] = ACTIONS(170),
    [anon_sym_falsum] = ACTIONS(170),
    [anon_sym_verum] = ACTIONS(170),
    [sym_guillemet_string] = ACTIONS(168),
    [sym_octeti_string] = ACTIONS(168),
    [sym_backtick_string] = ACTIONS(168),
    [sym_ascii_string] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_number] = ACTIONS(168),
    [sym_identifier] = ACTIONS(170),
    [sym_operator] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_hash] = ACTIONS(168),
    [sym_line_comment] = ACTIONS(168),
    [sym_faber_newline] = ACTIONS(168),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_at_sign] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_cursor] = ACTIONS(166),
    [anon_sym_json] = ACTIONS(166),
    [anon_sym_privata] = ACTIONS(166),
    [anon_sym_protecta] = ACTIONS(166),
    [anon_sym_publica] = ACTIONS(166),
    [anon_sym_ascii] = ACTIONS(166),
    [anon_sym_bivalens] = ACTIONS(166),
    [anon_sym_copia] = ACTIONS(166),
    [anon_sym_f16] = ACTIONS(166),
    [anon_sym_f32] = ACTIONS(166),
    [anon_sym_f64] = ACTIONS(166),
    [anon_sym_fractus] = ACTIONS(166),
    [anon_sym_i16] = ACTIONS(166),
    [anon_sym_i32] = ACTIONS(166),
    [anon_sym_i64] = ACTIONS(166),
    [anon_sym_i8] = ACTIONS(166),
    [anon_sym_ignotum] = ACTIONS(166),
    [anon_sym_instans] = ACTIONS(166),
    [anon_sym_intervallum] = ACTIONS(166),
    [anon_sym_lf16] = ACTIONS(166),
    [anon_sym_lf32] = ACTIONS(166),
    [anon_sym_lf64] = ACTIONS(166),
    [anon_sym_li16] = ACTIONS(166),
    [anon_sym_li32] = ACTIONS(166),
    [anon_sym_li64] = ACTIONS(166),
    [anon_sym_li8] = ACTIONS(166),
    [anon_sym_lista] = ACTIONS(166),
    [anon_sym_lu16] = ACTIONS(166),
    [anon_sym_lu32] = ACTIONS(166),
    [anon_sym_lu64] = ACTIONS(166),
    [anon_sym_lu8] = ACTIONS(166),
    [anon_sym_matrix] = ACTIONS(166),
    [anon_sym_mf16] = ACTIONS(166),
    [anon_sym_mf32] = ACTIONS(166),
    [anon_sym_mf64] = ACTIONS(166),
    [anon_sym_mi16] = ACTIONS(166),
    [anon_sym_mi32] = ACTIONS(166),
    [anon_sym_mi64] = ACTIONS(166),
    [anon_sym_mi8] = ACTIONS(166),
    [anon_sym_mu16] = ACTIONS(166),
    [anon_sym_mu32] = ACTIONS(166),
    [anon_sym_mu64] = ACTIONS(166),
    [anon_sym_mu8] = ACTIONS(166),
    [anon_sym_numerus] = ACTIONS(166),
    [anon_sym_numquam] = ACTIONS(166),
    [anon_sym_octet] = ACTIONS(166),
    [anon_sym_octeti] = ACTIONS(166),
    [anon_sym_promissum] = ACTIONS(166),
    [anon_sym_regex] = ACTIONS(166),
    [anon_sym_series] = ACTIONS(166),
    [anon_sym_sf16] = ACTIONS(166),
    [anon_sym_sf32] = ACTIONS(166),
    [anon_sym_sf64] = ACTIONS(166),
    [anon_sym_si16] = ACTIONS(166),
    [anon_sym_si32] = ACTIONS(166),
    [anon_sym_si64] = ACTIONS(166),
    [anon_sym_si8] = ACTIONS(166),
    [anon_sym_sparsa] = ACTIONS(166),
    [anon_sym_su16] = ACTIONS(166),
    [anon_sym_su32] = ACTIONS(166),
    [anon_sym_su64] = ACTIONS(166),
    [anon_sym_su8] = ACTIONS(166),
    [anon_sym_tabula] = ACTIONS(166),
    [anon_sym_tensor] = ACTIONS(166),
    [anon_sym_textus] = ACTIONS(166),
    [anon_sym_tf16] = ACTIONS(166),
    [anon_sym_tf32] = ACTIONS(166),
    [anon_sym_tf64] = ACTIONS(166),
    [anon_sym_ti16] = ACTIONS(166),
    [anon_sym_ti32] = ACTIONS(166),
    [anon_sym_ti64] = ACTIONS(166),
    [anon_sym_ti8] = ACTIONS(166),
    [anon_sym_tu16] = ACTIONS(166),
    [anon_sym_tu32] = ACTIONS(166),
    [anon_sym_tu64] = ACTIONS(166),
    [anon_sym_tu8] = ACTIONS(166),
    [anon_sym_u16] = ACTIONS(166),
    [anon_sym_u32] = ACTIONS(166),
    [anon_sym_u64] = ACTIONS(166),
    [anon_sym_u8] = ACTIONS(166),
    [anon_sym_unio] = ACTIONS(166),
    [anon_sym_vacua] = ACTIONS(166),
    [anon_sym_vacuum] = ACTIONS(166),
    [anon_sym_valor] = ACTIONS(166),
    [anon_sym_vector] = ACTIONS(166),
    [anon_sym_vf16] = ACTIONS(166),
    [anon_sym_vf32] = ACTIONS(166),
    [anon_sym_vf64] = ACTIONS(166),
    [anon_sym_vi16] = ACTIONS(166),
    [anon_sym_vi32] = ACTIONS(166),
    [anon_sym_vi64] = ACTIONS(166),
    [anon_sym_vi8] = ACTIONS(166),
    [anon_sym_vu16] = ACTIONS(166),
    [anon_sym_vu32] = ACTIONS(166),
    [anon_sym_vu64] = ACTIONS(166),
    [anon_sym_vu8] = ACTIONS(166),
    [anon_sym_ad] = ACTIONS(166),
    [anon_sym_adfirma] = ACTIONS(166),
    [anon_sym_argumenta] = ACTIONS(166),
    [anon_sym_cape] = ACTIONS(166),
    [anon_sym_casu] = ACTIONS(166),
    [anon_sym_ceterum] = ACTIONS(166),
    [anon_sym_cura] = ACTIONS(166),
    [anon_sym_custodi] = ACTIONS(166),
    [anon_sym_demum] = ACTIONS(166),
    [anon_sym_discerne] = ACTIONS(166),
    [anon_sym_dum] = ACTIONS(166),
    [anon_sym_elige] = ACTIONS(166),
    [anon_sym_emitte] = ACTIONS(166),
    [anon_sym_ergo] = ACTIONS(166),
    [anon_sym_fac] = ACTIONS(166),
    [anon_sym_iace] = ACTIONS(166),
    [anon_sym_incipiet] = ACTIONS(166),
    [anon_sym_incipit] = ACTIONS(166),
    [anon_sym_itera] = ACTIONS(166),
    [anon_sym_mori] = ACTIONS(166),
    [anon_sym_perge] = ACTIONS(166),
    [anon_sym_redde] = ACTIONS(166),
    [anon_sym_rumpe] = ACTIONS(166),
    [anon_sym_secus] = ACTIONS(166),
    [anon_sym_si] = ACTIONS(166),
    [anon_sym_sic] = ACTIONS(166),
    [anon_sym_sin] = ACTIONS(166),
    [anon_sym_tacet] = ACTIONS(166),
    [anon_sym_tempta] = ACTIONS(166),
    [anon_sym_abstractus] = ACTIONS(166),
    [anon_sym_ceteri] = ACTIONS(166),
    [anon_sym_curata] = ACTIONS(166),
    [anon_sym_discretio] = ACTIONS(166),
    [anon_sym_errata] = ACTIONS(166),
    [anon_sym_exitus] = ACTIONS(166),
    [anon_sym_fixum] = ACTIONS(166),
    [anon_sym_functio] = ACTIONS(166),
    [anon_sym_generis] = ACTIONS(166),
    [anon_sym_genus] = ACTIONS(166),
    [anon_sym_iacit] = ACTIONS(166),
    [anon_sym_immutata] = ACTIONS(166),
    [anon_sym_implendum] = ACTIONS(166),
    [anon_sym_importa] = ACTIONS(166),
    [anon_sym_magnitudo] = ACTIONS(166),
    [anon_sym_nexum] = ACTIONS(166),
    [anon_sym_optiones] = ACTIONS(166),
    [anon_sym_ordo] = ACTIONS(166),
    [anon_sym_prae] = ACTIONS(166),
    [anon_sym_sit] = ACTIONS(166),
    [anon_sym_sponte] = ACTIONS(166),
    [anon_sym_typus] = ACTIONS(166),
    [anon_sym_varia] = ACTIONS(166),
    [anon_sym_ante] = ACTIONS(166),
    [anon_sym_aut] = ACTIONS(166),
    [anon_sym_cede] = ACTIONS(166),
    [anon_sym_clausura] = ACTIONS(166),
    [anon_sym_de] = ACTIONS(166),
    [anon_sym_ego] = ACTIONS(166),
    [anon_sym_est] = ACTIONS(166),
    [anon_sym_et] = ACTIONS(166),
    [anon_sym_ex] = ACTIONS(166),
    [anon_sym_finge] = ACTIONS(166),
    [anon_sym_fragilis] = ACTIONS(166),
    [anon_sym_futurum] = ACTIONS(166),
    [anon_sym_implet] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_inter] = ACTIONS(166),
    [anon_sym_intra] = ACTIONS(166),
    [anon_sym_lege] = ACTIONS(166),
    [anon_sym_lineam] = ACTIONS(166),
    [anon_sym_metior] = ACTIONS(166),
    [anon_sym_modulus] = ACTIONS(166),
    [anon_sym_mone] = ACTIONS(166),
    [anon_sym_negativum] = ACTIONS(166),
    [anon_sym_nihil] = ACTIONS(166),
    [anon_sym_non] = ACTIONS(166),
    [anon_sym_nonnihil] = ACTIONS(166),
    [anon_sym_nonnulla] = ACTIONS(166),
    [anon_sym_nota] = ACTIONS(166),
    [anon_sym_nulla] = ACTIONS(166),
    [anon_sym_omitte] = ACTIONS(166),
    [anon_sym_omnia] = ACTIONS(166),
    [anon_sym_per] = ACTIONS(166),
    [anon_sym_positivum] = ACTIONS(166),
    [anon_sym_postpara] = ACTIONS(166),
    [anon_sym_postparabit] = ACTIONS(166),
    [anon_sym_praefixum] = ACTIONS(166),
    [anon_sym_praepara] = ACTIONS(166),
    [anon_sym_praeparabit] = ACTIONS(166),
    [anon_sym_pro] = ACTIONS(166),
    [anon_sym_proba] = ACTIONS(166),
    [anon_sym_probandum] = ACTIONS(166),
    [anon_sym_repete] = ACTIONS(166),
    [anon_sym_requirit] = ACTIONS(166),
    [anon_sym_scribe] = ACTIONS(166),
    [anon_sym_scriptum] = ACTIONS(166),
    [anon_sym_solum] = ACTIONS(166),
    [anon_sym_solum_in] = ACTIONS(166),
    [anon_sym_sparge] = ACTIONS(166),
    [anon_sym_sub] = ACTIONS(166),
    [anon_sym_tag] = ACTIONS(166),
    [anon_sym_temporis] = ACTIONS(166),
    [anon_sym_usque] = ACTIONS(166),
    [anon_sym_ut] = ACTIONS(166),
    [anon_sym_vel] = ACTIONS(166),
    [anon_sym_vide] = ACTIONS(166),
    [anon_sym_falsum] = ACTIONS(166),
    [anon_sym_verum] = ACTIONS(166),
    [sym_guillemet_string] = ACTIONS(164),
    [sym_octeti_string] = ACTIONS(164),
    [sym_backtick_string] = ACTIONS(164),
    [sym_ascii_string] = ACTIONS(164),
    [sym_string] = ACTIONS(164),
    [sym_number] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
    [sym_operator] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_hash] = ACTIONS(164),
    [sym_line_comment] = ACTIONS(164),
    [sym_faber_newline] = ACTIONS(164),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_at_sign] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_cursor] = ACTIONS(174),
    [anon_sym_json] = ACTIONS(174),
    [anon_sym_privata] = ACTIONS(174),
    [anon_sym_protecta] = ACTIONS(174),
    [anon_sym_publica] = ACTIONS(174),
    [anon_sym_ascii] = ACTIONS(174),
    [anon_sym_bivalens] = ACTIONS(174),
    [anon_sym_copia] = ACTIONS(174),
    [anon_sym_f16] = ACTIONS(174),
    [anon_sym_f32] = ACTIONS(174),
    [anon_sym_f64] = ACTIONS(174),
    [anon_sym_fractus] = ACTIONS(174),
    [anon_sym_i16] = ACTIONS(174),
    [anon_sym_i32] = ACTIONS(174),
    [anon_sym_i64] = ACTIONS(174),
    [anon_sym_i8] = ACTIONS(174),
    [anon_sym_ignotum] = ACTIONS(174),
    [anon_sym_instans] = ACTIONS(174),
    [anon_sym_intervallum] = ACTIONS(174),
    [anon_sym_lf16] = ACTIONS(174),
    [anon_sym_lf32] = ACTIONS(174),
    [anon_sym_lf64] = ACTIONS(174),
    [anon_sym_li16] = ACTIONS(174),
    [anon_sym_li32] = ACTIONS(174),
    [anon_sym_li64] = ACTIONS(174),
    [anon_sym_li8] = ACTIONS(174),
    [anon_sym_lista] = ACTIONS(174),
    [anon_sym_lu16] = ACTIONS(174),
    [anon_sym_lu32] = ACTIONS(174),
    [anon_sym_lu64] = ACTIONS(174),
    [anon_sym_lu8] = ACTIONS(174),
    [anon_sym_matrix] = ACTIONS(174),
    [anon_sym_mf16] = ACTIONS(174),
    [anon_sym_mf32] = ACTIONS(174),
    [anon_sym_mf64] = ACTIONS(174),
    [anon_sym_mi16] = ACTIONS(174),
    [anon_sym_mi32] = ACTIONS(174),
    [anon_sym_mi64] = ACTIONS(174),
    [anon_sym_mi8] = ACTIONS(174),
    [anon_sym_mu16] = ACTIONS(174),
    [anon_sym_mu32] = ACTIONS(174),
    [anon_sym_mu64] = ACTIONS(174),
    [anon_sym_mu8] = ACTIONS(174),
    [anon_sym_numerus] = ACTIONS(174),
    [anon_sym_numquam] = ACTIONS(174),
    [anon_sym_octet] = ACTIONS(174),
    [anon_sym_octeti] = ACTIONS(174),
    [anon_sym_promissum] = ACTIONS(174),
    [anon_sym_regex] = ACTIONS(174),
    [anon_sym_series] = ACTIONS(174),
    [anon_sym_sf16] = ACTIONS(174),
    [anon_sym_sf32] = ACTIONS(174),
    [anon_sym_sf64] = ACTIONS(174),
    [anon_sym_si16] = ACTIONS(174),
    [anon_sym_si32] = ACTIONS(174),
    [anon_sym_si64] = ACTIONS(174),
    [anon_sym_si8] = ACTIONS(174),
    [anon_sym_sparsa] = ACTIONS(174),
    [anon_sym_su16] = ACTIONS(174),
    [anon_sym_su32] = ACTIONS(174),
    [anon_sym_su64] = ACTIONS(174),
    [anon_sym_su8] = ACTIONS(174),
    [anon_sym_tabula] = ACTIONS(174),
    [anon_sym_tensor] = ACTIONS(174),
    [anon_sym_textus] = ACTIONS(174),
    [anon_sym_tf16] = ACTIONS(174),
    [anon_sym_tf32] = ACTIONS(174),
    [anon_sym_tf64] = ACTIONS(174),
    [anon_sym_ti16] = ACTIONS(174),
    [anon_sym_ti32] = ACTIONS(174),
    [anon_sym_ti64] = ACTIONS(174),
    [anon_sym_ti8] = ACTIONS(174),
    [anon_sym_tu16] = ACTIONS(174),
    [anon_sym_tu32] = ACTIONS(174),
    [anon_sym_tu64] = ACTIONS(174),
    [anon_sym_tu8] = ACTIONS(174),
    [anon_sym_u16] = ACTIONS(174),
    [anon_sym_u32] = ACTIONS(174),
    [anon_sym_u64] = ACTIONS(174),
    [anon_sym_u8] = ACTIONS(174),
    [anon_sym_unio] = ACTIONS(174),
    [anon_sym_vacua] = ACTIONS(174),
    [anon_sym_vacuum] = ACTIONS(174),
    [anon_sym_valor] = ACTIONS(174),
    [anon_sym_vector] = ACTIONS(174),
    [anon_sym_vf16] = ACTIONS(174),
    [anon_sym_vf32] = ACTIONS(174),
    [anon_sym_vf64] = ACTIONS(174),
    [anon_sym_vi16] = ACTIONS(174),
    [anon_sym_vi32] = ACTIONS(174),
    [anon_sym_vi64] = ACTIONS(174),
    [anon_sym_vi8] = ACTIONS(174),
    [anon_sym_vu16] = ACTIONS(174),
    [anon_sym_vu32] = ACTIONS(174),
    [anon_sym_vu64] = ACTIONS(174),
    [anon_sym_vu8] = ACTIONS(174),
    [anon_sym_ad] = ACTIONS(174),
    [anon_sym_adfirma] = ACTIONS(174),
    [anon_sym_argumenta] = ACTIONS(174),
    [anon_sym_cape] = ACTIONS(174),
    [anon_sym_casu] = ACTIONS(174),
    [anon_sym_ceterum] = ACTIONS(174),
    [anon_sym_cura] = ACTIONS(174),
    [anon_sym_custodi] = ACTIONS(174),
    [anon_sym_demum] = ACTIONS(174),
    [anon_sym_discerne] = ACTIONS(174),
    [anon_sym_dum] = ACTIONS(174),
    [anon_sym_elige] = ACTIONS(174),
    [anon_sym_emitte] = ACTIONS(174),
    [anon_sym_ergo] = ACTIONS(174),
    [anon_sym_fac] = ACTIONS(174),
    [anon_sym_iace] = ACTIONS(174),
    [anon_sym_incipiet] = ACTIONS(174),
    [anon_sym_incipit] = ACTIONS(174),
    [anon_sym_itera] = ACTIONS(174),
    [anon_sym_mori] = ACTIONS(174),
    [anon_sym_perge] = ACTIONS(174),
    [anon_sym_redde] = ACTIONS(174),
    [anon_sym_rumpe] = ACTIONS(174),
    [anon_sym_secus] = ACTIONS(174),
    [anon_sym_si] = ACTIONS(174),
    [anon_sym_sic] = ACTIONS(174),
    [anon_sym_sin] = ACTIONS(174),
    [anon_sym_tacet] = ACTIONS(174),
    [anon_sym_tempta] = ACTIONS(174),
    [anon_sym_abstractus] = ACTIONS(174),
    [anon_sym_ceteri] = ACTIONS(174),
    [anon_sym_curata] = ACTIONS(174),
    [anon_sym_discretio] = ACTIONS(174),
    [anon_sym_errata] = ACTIONS(174),
    [anon_sym_exitus] = ACTIONS(174),
    [anon_sym_fixum] = ACTIONS(174),
    [anon_sym_functio] = ACTIONS(174),
    [anon_sym_generis] = ACTIONS(174),
    [anon_sym_genus] = ACTIONS(174),
    [anon_sym_iacit] = ACTIONS(174),
    [anon_sym_immutata] = ACTIONS(174),
    [anon_sym_implendum] = ACTIONS(174),
    [anon_sym_importa] = ACTIONS(174),
    [anon_sym_magnitudo] = ACTIONS(174),
    [anon_sym_nexum] = ACTIONS(174),
    [anon_sym_optiones] = ACTIONS(174),
    [anon_sym_ordo] = ACTIONS(174),
    [anon_sym_prae] = ACTIONS(174),
    [anon_sym_sit] = ACTIONS(174),
    [anon_sym_sponte] = ACTIONS(174),
    [anon_sym_typus] = ACTIONS(174),
    [anon_sym_varia] = ACTIONS(174),
    [anon_sym_ante] = ACTIONS(174),
    [anon_sym_aut] = ACTIONS(174),
    [anon_sym_cede] = ACTIONS(174),
    [anon_sym_clausura] = ACTIONS(174),
    [anon_sym_de] = ACTIONS(174),
    [anon_sym_ego] = ACTIONS(174),
    [anon_sym_est] = ACTIONS(174),
    [anon_sym_et] = ACTIONS(174),
    [anon_sym_ex] = ACTIONS(174),
    [anon_sym_finge] = ACTIONS(174),
    [anon_sym_fragilis] = ACTIONS(174),
    [anon_sym_futurum] = ACTIONS(174),
    [anon_sym_implet] = ACTIONS(174),
    [anon_sym_in] = ACTIONS(174),
    [anon_sym_inter] = ACTIONS(174),
    [anon_sym_intra] = ACTIONS(174),
    [anon_sym_lege] = ACTIONS(174),
    [anon_sym_lineam] = ACTIONS(174),
    [anon_sym_metior] = ACTIONS(174),
    [anon_sym_modulus] = ACTIONS(174),
    [anon_sym_mone] = ACTIONS(174),
    [anon_sym_negativum] = ACTIONS(174),
    [anon_sym_nihil] = ACTIONS(174),
    [anon_sym_non] = ACTIONS(174),
    [anon_sym_nonnihil] = ACTIONS(174),
    [anon_sym_nonnulla] = ACTIONS(174),
    [anon_sym_nota] = ACTIONS(174),
    [anon_sym_nulla] = ACTIONS(174),
    [anon_sym_omitte] = ACTIONS(174),
    [anon_sym_omnia] = ACTIONS(174),
    [anon_sym_per] = ACTIONS(174),
    [anon_sym_positivum] = ACTIONS(174),
    [anon_sym_postpara] = ACTIONS(174),
    [anon_sym_postparabit] = ACTIONS(174),
    [anon_sym_praefixum] = ACTIONS(174),
    [anon_sym_praepara] = ACTIONS(174),
    [anon_sym_praeparabit] = ACTIONS(174),
    [anon_sym_pro] = ACTIONS(174),
    [anon_sym_proba] = ACTIONS(174),
    [anon_sym_probandum] = ACTIONS(174),
    [anon_sym_repete] = ACTIONS(174),
    [anon_sym_requirit] = ACTIONS(174),
    [anon_sym_scribe] = ACTIONS(174),
    [anon_sym_scriptum] = ACTIONS(174),
    [anon_sym_solum] = ACTIONS(174),
    [anon_sym_solum_in] = ACTIONS(174),
    [anon_sym_sparge] = ACTIONS(174),
    [anon_sym_sub] = ACTIONS(174),
    [anon_sym_tag] = ACTIONS(174),
    [anon_sym_temporis] = ACTIONS(174),
    [anon_sym_usque] = ACTIONS(174),
    [anon_sym_ut] = ACTIONS(174),
    [anon_sym_vel] = ACTIONS(174),
    [anon_sym_vide] = ACTIONS(174),
    [anon_sym_falsum] = ACTIONS(174),
    [anon_sym_verum] = ACTIONS(174),
    [sym_guillemet_string] = ACTIONS(172),
    [sym_octeti_string] = ACTIONS(172),
    [sym_backtick_string] = ACTIONS(172),
    [sym_ascii_string] = ACTIONS(172),
    [sym_string] = ACTIONS(172),
    [sym_number] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
    [sym_operator] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_hash] = ACTIONS(172),
    [sym_line_comment] = ACTIONS(172),
    [sym_faber_newline] = ACTIONS(172),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_at_sign] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_cursor] = ACTIONS(178),
    [anon_sym_json] = ACTIONS(178),
    [anon_sym_privata] = ACTIONS(178),
    [anon_sym_protecta] = ACTIONS(178),
    [anon_sym_publica] = ACTIONS(178),
    [anon_sym_ascii] = ACTIONS(178),
    [anon_sym_bivalens] = ACTIONS(178),
    [anon_sym_copia] = ACTIONS(178),
    [anon_sym_f16] = ACTIONS(178),
    [anon_sym_f32] = ACTIONS(178),
    [anon_sym_f64] = ACTIONS(178),
    [anon_sym_fractus] = ACTIONS(178),
    [anon_sym_i16] = ACTIONS(178),
    [anon_sym_i32] = ACTIONS(178),
    [anon_sym_i64] = ACTIONS(178),
    [anon_sym_i8] = ACTIONS(178),
    [anon_sym_ignotum] = ACTIONS(178),
    [anon_sym_instans] = ACTIONS(178),
    [anon_sym_intervallum] = ACTIONS(178),
    [anon_sym_lf16] = ACTIONS(178),
    [anon_sym_lf32] = ACTIONS(178),
    [anon_sym_lf64] = ACTIONS(178),
    [anon_sym_li16] = ACTIONS(178),
    [anon_sym_li32] = ACTIONS(178),
    [anon_sym_li64] = ACTIONS(178),
    [anon_sym_li8] = ACTIONS(178),
    [anon_sym_lista] = ACTIONS(178),
    [anon_sym_lu16] = ACTIONS(178),
    [anon_sym_lu32] = ACTIONS(178),
    [anon_sym_lu64] = ACTIONS(178),
    [anon_sym_lu8] = ACTIONS(178),
    [anon_sym_matrix] = ACTIONS(178),
    [anon_sym_mf16] = ACTIONS(178),
    [anon_sym_mf32] = ACTIONS(178),
    [anon_sym_mf64] = ACTIONS(178),
    [anon_sym_mi16] = ACTIONS(178),
    [anon_sym_mi32] = ACTIONS(178),
    [anon_sym_mi64] = ACTIONS(178),
    [anon_sym_mi8] = ACTIONS(178),
    [anon_sym_mu16] = ACTIONS(178),
    [anon_sym_mu32] = ACTIONS(178),
    [anon_sym_mu64] = ACTIONS(178),
    [anon_sym_mu8] = ACTIONS(178),
    [anon_sym_numerus] = ACTIONS(178),
    [anon_sym_numquam] = ACTIONS(178),
    [anon_sym_octet] = ACTIONS(178),
    [anon_sym_octeti] = ACTIONS(178),
    [anon_sym_promissum] = ACTIONS(178),
    [anon_sym_regex] = ACTIONS(178),
    [anon_sym_series] = ACTIONS(178),
    [anon_sym_sf16] = ACTIONS(178),
    [anon_sym_sf32] = ACTIONS(178),
    [anon_sym_sf64] = ACTIONS(178),
    [anon_sym_si16] = ACTIONS(178),
    [anon_sym_si32] = ACTIONS(178),
    [anon_sym_si64] = ACTIONS(178),
    [anon_sym_si8] = ACTIONS(178),
    [anon_sym_sparsa] = ACTIONS(178),
    [anon_sym_su16] = ACTIONS(178),
    [anon_sym_su32] = ACTIONS(178),
    [anon_sym_su64] = ACTIONS(178),
    [anon_sym_su8] = ACTIONS(178),
    [anon_sym_tabula] = ACTIONS(178),
    [anon_sym_tensor] = ACTIONS(178),
    [anon_sym_textus] = ACTIONS(178),
    [anon_sym_tf16] = ACTIONS(178),
    [anon_sym_tf32] = ACTIONS(178),
    [anon_sym_tf64] = ACTIONS(178),
    [anon_sym_ti16] = ACTIONS(178),
    [anon_sym_ti32] = ACTIONS(178),
    [anon_sym_ti64] = ACTIONS(178),
    [anon_sym_ti8] = ACTIONS(178),
    [anon_sym_tu16] = ACTIONS(178),
    [anon_sym_tu32] = ACTIONS(178),
    [anon_sym_tu64] = ACTIONS(178),
    [anon_sym_tu8] = ACTIONS(178),
    [anon_sym_u16] = ACTIONS(178),
    [anon_sym_u32] = ACTIONS(178),
    [anon_sym_u64] = ACTIONS(178),
    [anon_sym_u8] = ACTIONS(178),
    [anon_sym_unio] = ACTIONS(178),
    [anon_sym_vacua] = ACTIONS(178),
    [anon_sym_vacuum] = ACTIONS(178),
    [anon_sym_valor] = ACTIONS(178),
    [anon_sym_vector] = ACTIONS(178),
    [anon_sym_vf16] = ACTIONS(178),
    [anon_sym_vf32] = ACTIONS(178),
    [anon_sym_vf64] = ACTIONS(178),
    [anon_sym_vi16] = ACTIONS(178),
    [anon_sym_vi32] = ACTIONS(178),
    [anon_sym_vi64] = ACTIONS(178),
    [anon_sym_vi8] = ACTIONS(178),
    [anon_sym_vu16] = ACTIONS(178),
    [anon_sym_vu32] = ACTIONS(178),
    [anon_sym_vu64] = ACTIONS(178),
    [anon_sym_vu8] = ACTIONS(178),
    [anon_sym_ad] = ACTIONS(178),
    [anon_sym_adfirma] = ACTIONS(178),
    [anon_sym_argumenta] = ACTIONS(178),
    [anon_sym_cape] = ACTIONS(178),
    [anon_sym_casu] = ACTIONS(178),
    [anon_sym_ceterum] = ACTIONS(178),
    [anon_sym_cura] = ACTIONS(178),
    [anon_sym_custodi] = ACTIONS(178),
    [anon_sym_demum] = ACTIONS(178),
    [anon_sym_discerne] = ACTIONS(178),
    [anon_sym_dum] = ACTIONS(178),
    [anon_sym_elige] = ACTIONS(178),
    [anon_sym_emitte] = ACTIONS(178),
    [anon_sym_ergo] = ACTIONS(178),
    [anon_sym_fac] = ACTIONS(178),
    [anon_sym_iace] = ACTIONS(178),
    [anon_sym_incipiet] = ACTIONS(178),
    [anon_sym_incipit] = ACTIONS(178),
    [anon_sym_itera] = ACTIONS(178),
    [anon_sym_mori] = ACTIONS(178),
    [anon_sym_perge] = ACTIONS(178),
    [anon_sym_redde] = ACTIONS(178),
    [anon_sym_rumpe] = ACTIONS(178),
    [anon_sym_secus] = ACTIONS(178),
    [anon_sym_si] = ACTIONS(178),
    [anon_sym_sic] = ACTIONS(178),
    [anon_sym_sin] = ACTIONS(178),
    [anon_sym_tacet] = ACTIONS(178),
    [anon_sym_tempta] = ACTIONS(178),
    [anon_sym_abstractus] = ACTIONS(178),
    [anon_sym_ceteri] = ACTIONS(178),
    [anon_sym_curata] = ACTIONS(178),
    [anon_sym_discretio] = ACTIONS(178),
    [anon_sym_errata] = ACTIONS(178),
    [anon_sym_exitus] = ACTIONS(178),
    [anon_sym_fixum] = ACTIONS(178),
    [anon_sym_functio] = ACTIONS(178),
    [anon_sym_generis] = ACTIONS(178),
    [anon_sym_genus] = ACTIONS(178),
    [anon_sym_iacit] = ACTIONS(178),
    [anon_sym_immutata] = ACTIONS(178),
    [anon_sym_implendum] = ACTIONS(178),
    [anon_sym_importa] = ACTIONS(178),
    [anon_sym_magnitudo] = ACTIONS(178),
    [anon_sym_nexum] = ACTIONS(178),
    [anon_sym_optiones] = ACTIONS(178),
    [anon_sym_ordo] = ACTIONS(178),
    [anon_sym_prae] = ACTIONS(178),
    [anon_sym_sit] = ACTIONS(178),
    [anon_sym_sponte] = ACTIONS(178),
    [anon_sym_typus] = ACTIONS(178),
    [anon_sym_varia] = ACTIONS(178),
    [anon_sym_ante] = ACTIONS(178),
    [anon_sym_aut] = ACTIONS(178),
    [anon_sym_cede] = ACTIONS(178),
    [anon_sym_clausura] = ACTIONS(178),
    [anon_sym_de] = ACTIONS(178),
    [anon_sym_ego] = ACTIONS(178),
    [anon_sym_est] = ACTIONS(178),
    [anon_sym_et] = ACTIONS(178),
    [anon_sym_ex] = ACTIONS(178),
    [anon_sym_finge] = ACTIONS(178),
    [anon_sym_fragilis] = ACTIONS(178),
    [anon_sym_futurum] = ACTIONS(178),
    [anon_sym_implet] = ACTIONS(178),
    [anon_sym_in] = ACTIONS(178),
    [anon_sym_inter] = ACTIONS(178),
    [anon_sym_intra] = ACTIONS(178),
    [anon_sym_lege] = ACTIONS(178),
    [anon_sym_lineam] = ACTIONS(178),
    [anon_sym_metior] = ACTIONS(178),
    [anon_sym_modulus] = ACTIONS(178),
    [anon_sym_mone] = ACTIONS(178),
    [anon_sym_negativum] = ACTIONS(178),
    [anon_sym_nihil] = ACTIONS(178),
    [anon_sym_non] = ACTIONS(178),
    [anon_sym_nonnihil] = ACTIONS(178),
    [anon_sym_nonnulla] = ACTIONS(178),
    [anon_sym_nota] = ACTIONS(178),
    [anon_sym_nulla] = ACTIONS(178),
    [anon_sym_omitte] = ACTIONS(178),
    [anon_sym_omnia] = ACTIONS(178),
    [anon_sym_per] = ACTIONS(178),
    [anon_sym_positivum] = ACTIONS(178),
    [anon_sym_postpara] = ACTIONS(178),
    [anon_sym_postparabit] = ACTIONS(178),
    [anon_sym_praefixum] = ACTIONS(178),
    [anon_sym_praepara] = ACTIONS(178),
    [anon_sym_praeparabit] = ACTIONS(178),
    [anon_sym_pro] = ACTIONS(178),
    [anon_sym_proba] = ACTIONS(178),
    [anon_sym_probandum] = ACTIONS(178),
    [anon_sym_repete] = ACTIONS(178),
    [anon_sym_requirit] = ACTIONS(178),
    [anon_sym_scribe] = ACTIONS(178),
    [anon_sym_scriptum] = ACTIONS(178),
    [anon_sym_solum] = ACTIONS(178),
    [anon_sym_solum_in] = ACTIONS(178),
    [anon_sym_sparge] = ACTIONS(178),
    [anon_sym_sub] = ACTIONS(178),
    [anon_sym_tag] = ACTIONS(178),
    [anon_sym_temporis] = ACTIONS(178),
    [anon_sym_usque] = ACTIONS(178),
    [anon_sym_ut] = ACTIONS(178),
    [anon_sym_vel] = ACTIONS(178),
    [anon_sym_vide] = ACTIONS(178),
    [anon_sym_falsum] = ACTIONS(178),
    [anon_sym_verum] = ACTIONS(178),
    [sym_guillemet_string] = ACTIONS(176),
    [sym_octeti_string] = ACTIONS(176),
    [sym_backtick_string] = ACTIONS(176),
    [sym_ascii_string] = ACTIONS(176),
    [sym_string] = ACTIONS(176),
    [sym_number] = ACTIONS(176),
    [sym_identifier] = ACTIONS(178),
    [sym_operator] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_hash] = ACTIONS(176),
    [sym_line_comment] = ACTIONS(176),
    [sym_faber_newline] = ACTIONS(176),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_at_sign] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_cursor] = ACTIONS(182),
    [anon_sym_json] = ACTIONS(182),
    [anon_sym_privata] = ACTIONS(182),
    [anon_sym_protecta] = ACTIONS(182),
    [anon_sym_publica] = ACTIONS(182),
    [anon_sym_ascii] = ACTIONS(182),
    [anon_sym_bivalens] = ACTIONS(182),
    [anon_sym_copia] = ACTIONS(182),
    [anon_sym_f16] = ACTIONS(182),
    [anon_sym_f32] = ACTIONS(182),
    [anon_sym_f64] = ACTIONS(182),
    [anon_sym_fractus] = ACTIONS(182),
    [anon_sym_i16] = ACTIONS(182),
    [anon_sym_i32] = ACTIONS(182),
    [anon_sym_i64] = ACTIONS(182),
    [anon_sym_i8] = ACTIONS(182),
    [anon_sym_ignotum] = ACTIONS(182),
    [anon_sym_instans] = ACTIONS(182),
    [anon_sym_intervallum] = ACTIONS(182),
    [anon_sym_lf16] = ACTIONS(182),
    [anon_sym_lf32] = ACTIONS(182),
    [anon_sym_lf64] = ACTIONS(182),
    [anon_sym_li16] = ACTIONS(182),
    [anon_sym_li32] = ACTIONS(182),
    [anon_sym_li64] = ACTIONS(182),
    [anon_sym_li8] = ACTIONS(182),
    [anon_sym_lista] = ACTIONS(182),
    [anon_sym_lu16] = ACTIONS(182),
    [anon_sym_lu32] = ACTIONS(182),
    [anon_sym_lu64] = ACTIONS(182),
    [anon_sym_lu8] = ACTIONS(182),
    [anon_sym_matrix] = ACTIONS(182),
    [anon_sym_mf16] = ACTIONS(182),
    [anon_sym_mf32] = ACTIONS(182),
    [anon_sym_mf64] = ACTIONS(182),
    [anon_sym_mi16] = ACTIONS(182),
    [anon_sym_mi32] = ACTIONS(182),
    [anon_sym_mi64] = ACTIONS(182),
    [anon_sym_mi8] = ACTIONS(182),
    [anon_sym_mu16] = ACTIONS(182),
    [anon_sym_mu32] = ACTIONS(182),
    [anon_sym_mu64] = ACTIONS(182),
    [anon_sym_mu8] = ACTIONS(182),
    [anon_sym_numerus] = ACTIONS(182),
    [anon_sym_numquam] = ACTIONS(182),
    [anon_sym_octet] = ACTIONS(182),
    [anon_sym_octeti] = ACTIONS(182),
    [anon_sym_promissum] = ACTIONS(182),
    [anon_sym_regex] = ACTIONS(182),
    [anon_sym_series] = ACTIONS(182),
    [anon_sym_sf16] = ACTIONS(182),
    [anon_sym_sf32] = ACTIONS(182),
    [anon_sym_sf64] = ACTIONS(182),
    [anon_sym_si16] = ACTIONS(182),
    [anon_sym_si32] = ACTIONS(182),
    [anon_sym_si64] = ACTIONS(182),
    [anon_sym_si8] = ACTIONS(182),
    [anon_sym_sparsa] = ACTIONS(182),
    [anon_sym_su16] = ACTIONS(182),
    [anon_sym_su32] = ACTIONS(182),
    [anon_sym_su64] = ACTIONS(182),
    [anon_sym_su8] = ACTIONS(182),
    [anon_sym_tabula] = ACTIONS(182),
    [anon_sym_tensor] = ACTIONS(182),
    [anon_sym_textus] = ACTIONS(182),
    [anon_sym_tf16] = ACTIONS(182),
    [anon_sym_tf32] = ACTIONS(182),
    [anon_sym_tf64] = ACTIONS(182),
    [anon_sym_ti16] = ACTIONS(182),
    [anon_sym_ti32] = ACTIONS(182),
    [anon_sym_ti64] = ACTIONS(182),
    [anon_sym_ti8] = ACTIONS(182),
    [anon_sym_tu16] = ACTIONS(182),
    [anon_sym_tu32] = ACTIONS(182),
    [anon_sym_tu64] = ACTIONS(182),
    [anon_sym_tu8] = ACTIONS(182),
    [anon_sym_u16] = ACTIONS(182),
    [anon_sym_u32] = ACTIONS(182),
    [anon_sym_u64] = ACTIONS(182),
    [anon_sym_u8] = ACTIONS(182),
    [anon_sym_unio] = ACTIONS(182),
    [anon_sym_vacua] = ACTIONS(182),
    [anon_sym_vacuum] = ACTIONS(182),
    [anon_sym_valor] = ACTIONS(182),
    [anon_sym_vector] = ACTIONS(182),
    [anon_sym_vf16] = ACTIONS(182),
    [anon_sym_vf32] = ACTIONS(182),
    [anon_sym_vf64] = ACTIONS(182),
    [anon_sym_vi16] = ACTIONS(182),
    [anon_sym_vi32] = ACTIONS(182),
    [anon_sym_vi64] = ACTIONS(182),
    [anon_sym_vi8] = ACTIONS(182),
    [anon_sym_vu16] = ACTIONS(182),
    [anon_sym_vu32] = ACTIONS(182),
    [anon_sym_vu64] = ACTIONS(182),
    [anon_sym_vu8] = ACTIONS(182),
    [anon_sym_ad] = ACTIONS(182),
    [anon_sym_adfirma] = ACTIONS(182),
    [anon_sym_argumenta] = ACTIONS(182),
    [anon_sym_cape] = ACTIONS(182),
    [anon_sym_casu] = ACTIONS(182),
    [anon_sym_ceterum] = ACTIONS(182),
    [anon_sym_cura] = ACTIONS(182),
    [anon_sym_custodi] = ACTIONS(182),
    [anon_sym_demum] = ACTIONS(182),
    [anon_sym_discerne] = ACTIONS(182),
    [anon_sym_dum] = ACTIONS(182),
    [anon_sym_elige] = ACTIONS(182),
    [anon_sym_emitte] = ACTIONS(182),
    [anon_sym_ergo] = ACTIONS(182),
    [anon_sym_fac] = ACTIONS(182),
    [anon_sym_iace] = ACTIONS(182),
    [anon_sym_incipiet] = ACTIONS(182),
    [anon_sym_incipit] = ACTIONS(182),
    [anon_sym_itera] = ACTIONS(182),
    [anon_sym_mori] = ACTIONS(182),
    [anon_sym_perge] = ACTIONS(182),
    [anon_sym_redde] = ACTIONS(182),
    [anon_sym_rumpe] = ACTIONS(182),
    [anon_sym_secus] = ACTIONS(182),
    [anon_sym_si] = ACTIONS(182),
    [anon_sym_sic] = ACTIONS(182),
    [anon_sym_sin] = ACTIONS(182),
    [anon_sym_tacet] = ACTIONS(182),
    [anon_sym_tempta] = ACTIONS(182),
    [anon_sym_abstractus] = ACTIONS(182),
    [anon_sym_ceteri] = ACTIONS(182),
    [anon_sym_curata] = ACTIONS(182),
    [anon_sym_discretio] = ACTIONS(182),
    [anon_sym_errata] = ACTIONS(182),
    [anon_sym_exitus] = ACTIONS(182),
    [anon_sym_fixum] = ACTIONS(182),
    [anon_sym_functio] = ACTIONS(182),
    [anon_sym_generis] = ACTIONS(182),
    [anon_sym_genus] = ACTIONS(182),
    [anon_sym_iacit] = ACTIONS(182),
    [anon_sym_immutata] = ACTIONS(182),
    [anon_sym_implendum] = ACTIONS(182),
    [anon_sym_importa] = ACTIONS(182),
    [anon_sym_magnitudo] = ACTIONS(182),
    [anon_sym_nexum] = ACTIONS(182),
    [anon_sym_optiones] = ACTIONS(182),
    [anon_sym_ordo] = ACTIONS(182),
    [anon_sym_prae] = ACTIONS(182),
    [anon_sym_sit] = ACTIONS(182),
    [anon_sym_sponte] = ACTIONS(182),
    [anon_sym_typus] = ACTIONS(182),
    [anon_sym_varia] = ACTIONS(182),
    [anon_sym_ante] = ACTIONS(182),
    [anon_sym_aut] = ACTIONS(182),
    [anon_sym_cede] = ACTIONS(182),
    [anon_sym_clausura] = ACTIONS(182),
    [anon_sym_de] = ACTIONS(182),
    [anon_sym_ego] = ACTIONS(182),
    [anon_sym_est] = ACTIONS(182),
    [anon_sym_et] = ACTIONS(182),
    [anon_sym_ex] = ACTIONS(182),
    [anon_sym_finge] = ACTIONS(182),
    [anon_sym_fragilis] = ACTIONS(182),
    [anon_sym_futurum] = ACTIONS(182),
    [anon_sym_implet] = ACTIONS(182),
    [anon_sym_in] = ACTIONS(182),
    [anon_sym_inter] = ACTIONS(182),
    [anon_sym_intra] = ACTIONS(182),
    [anon_sym_lege] = ACTIONS(182),
    [anon_sym_lineam] = ACTIONS(182),
    [anon_sym_metior] = ACTIONS(182),
    [anon_sym_modulus] = ACTIONS(182),
    [anon_sym_mone] = ACTIONS(182),
    [anon_sym_negativum] = ACTIONS(182),
    [anon_sym_nihil] = ACTIONS(182),
    [anon_sym_non] = ACTIONS(182),
    [anon_sym_nonnihil] = ACTIONS(182),
    [anon_sym_nonnulla] = ACTIONS(182),
    [anon_sym_nota] = ACTIONS(182),
    [anon_sym_nulla] = ACTIONS(182),
    [anon_sym_omitte] = ACTIONS(182),
    [anon_sym_omnia] = ACTIONS(182),
    [anon_sym_per] = ACTIONS(182),
    [anon_sym_positivum] = ACTIONS(182),
    [anon_sym_postpara] = ACTIONS(182),
    [anon_sym_postparabit] = ACTIONS(182),
    [anon_sym_praefixum] = ACTIONS(182),
    [anon_sym_praepara] = ACTIONS(182),
    [anon_sym_praeparabit] = ACTIONS(182),
    [anon_sym_pro] = ACTIONS(182),
    [anon_sym_proba] = ACTIONS(182),
    [anon_sym_probandum] = ACTIONS(182),
    [anon_sym_repete] = ACTIONS(182),
    [anon_sym_requirit] = ACTIONS(182),
    [anon_sym_scribe] = ACTIONS(182),
    [anon_sym_scriptum] = ACTIONS(182),
    [anon_sym_solum] = ACTIONS(182),
    [anon_sym_solum_in] = ACTIONS(182),
    [anon_sym_sparge] = ACTIONS(182),
    [anon_sym_sub] = ACTIONS(182),
    [anon_sym_tag] = ACTIONS(182),
    [anon_sym_temporis] = ACTIONS(182),
    [anon_sym_usque] = ACTIONS(182),
    [anon_sym_ut] = ACTIONS(182),
    [anon_sym_vel] = ACTIONS(182),
    [anon_sym_vide] = ACTIONS(182),
    [anon_sym_falsum] = ACTIONS(182),
    [anon_sym_verum] = ACTIONS(182),
    [sym_guillemet_string] = ACTIONS(180),
    [sym_octeti_string] = ACTIONS(180),
    [sym_backtick_string] = ACTIONS(180),
    [sym_ascii_string] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [sym_number] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [sym_operator] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_hash] = ACTIONS(180),
    [sym_line_comment] = ACTIONS(180),
    [sym_faber_newline] = ACTIONS(180),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_at_sign] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_cursor] = ACTIONS(186),
    [anon_sym_json] = ACTIONS(186),
    [anon_sym_privata] = ACTIONS(186),
    [anon_sym_protecta] = ACTIONS(186),
    [anon_sym_publica] = ACTIONS(186),
    [anon_sym_ascii] = ACTIONS(186),
    [anon_sym_bivalens] = ACTIONS(186),
    [anon_sym_copia] = ACTIONS(186),
    [anon_sym_f16] = ACTIONS(186),
    [anon_sym_f32] = ACTIONS(186),
    [anon_sym_f64] = ACTIONS(186),
    [anon_sym_fractus] = ACTIONS(186),
    [anon_sym_i16] = ACTIONS(186),
    [anon_sym_i32] = ACTIONS(186),
    [anon_sym_i64] = ACTIONS(186),
    [anon_sym_i8] = ACTIONS(186),
    [anon_sym_ignotum] = ACTIONS(186),
    [anon_sym_instans] = ACTIONS(186),
    [anon_sym_intervallum] = ACTIONS(186),
    [anon_sym_lf16] = ACTIONS(186),
    [anon_sym_lf32] = ACTIONS(186),
    [anon_sym_lf64] = ACTIONS(186),
    [anon_sym_li16] = ACTIONS(186),
    [anon_sym_li32] = ACTIONS(186),
    [anon_sym_li64] = ACTIONS(186),
    [anon_sym_li8] = ACTIONS(186),
    [anon_sym_lista] = ACTIONS(186),
    [anon_sym_lu16] = ACTIONS(186),
    [anon_sym_lu32] = ACTIONS(186),
    [anon_sym_lu64] = ACTIONS(186),
    [anon_sym_lu8] = ACTIONS(186),
    [anon_sym_matrix] = ACTIONS(186),
    [anon_sym_mf16] = ACTIONS(186),
    [anon_sym_mf32] = ACTIONS(186),
    [anon_sym_mf64] = ACTIONS(186),
    [anon_sym_mi16] = ACTIONS(186),
    [anon_sym_mi32] = ACTIONS(186),
    [anon_sym_mi64] = ACTIONS(186),
    [anon_sym_mi8] = ACTIONS(186),
    [anon_sym_mu16] = ACTIONS(186),
    [anon_sym_mu32] = ACTIONS(186),
    [anon_sym_mu64] = ACTIONS(186),
    [anon_sym_mu8] = ACTIONS(186),
    [anon_sym_numerus] = ACTIONS(186),
    [anon_sym_numquam] = ACTIONS(186),
    [anon_sym_octet] = ACTIONS(186),
    [anon_sym_octeti] = ACTIONS(186),
    [anon_sym_promissum] = ACTIONS(186),
    [anon_sym_regex] = ACTIONS(186),
    [anon_sym_series] = ACTIONS(186),
    [anon_sym_sf16] = ACTIONS(186),
    [anon_sym_sf32] = ACTIONS(186),
    [anon_sym_sf64] = ACTIONS(186),
    [anon_sym_si16] = ACTIONS(186),
    [anon_sym_si32] = ACTIONS(186),
    [anon_sym_si64] = ACTIONS(186),
    [anon_sym_si8] = ACTIONS(186),
    [anon_sym_sparsa] = ACTIONS(186),
    [anon_sym_su16] = ACTIONS(186),
    [anon_sym_su32] = ACTIONS(186),
    [anon_sym_su64] = ACTIONS(186),
    [anon_sym_su8] = ACTIONS(186),
    [anon_sym_tabula] = ACTIONS(186),
    [anon_sym_tensor] = ACTIONS(186),
    [anon_sym_textus] = ACTIONS(186),
    [anon_sym_tf16] = ACTIONS(186),
    [anon_sym_tf32] = ACTIONS(186),
    [anon_sym_tf64] = ACTIONS(186),
    [anon_sym_ti16] = ACTIONS(186),
    [anon_sym_ti32] = ACTIONS(186),
    [anon_sym_ti64] = ACTIONS(186),
    [anon_sym_ti8] = ACTIONS(186),
    [anon_sym_tu16] = ACTIONS(186),
    [anon_sym_tu32] = ACTIONS(186),
    [anon_sym_tu64] = ACTIONS(186),
    [anon_sym_tu8] = ACTIONS(186),
    [anon_sym_u16] = ACTIONS(186),
    [anon_sym_u32] = ACTIONS(186),
    [anon_sym_u64] = ACTIONS(186),
    [anon_sym_u8] = ACTIONS(186),
    [anon_sym_unio] = ACTIONS(186),
    [anon_sym_vacua] = ACTIONS(186),
    [anon_sym_vacuum] = ACTIONS(186),
    [anon_sym_valor] = ACTIONS(186),
    [anon_sym_vector] = ACTIONS(186),
    [anon_sym_vf16] = ACTIONS(186),
    [anon_sym_vf32] = ACTIONS(186),
    [anon_sym_vf64] = ACTIONS(186),
    [anon_sym_vi16] = ACTIONS(186),
    [anon_sym_vi32] = ACTIONS(186),
    [anon_sym_vi64] = ACTIONS(186),
    [anon_sym_vi8] = ACTIONS(186),
    [anon_sym_vu16] = ACTIONS(186),
    [anon_sym_vu32] = ACTIONS(186),
    [anon_sym_vu64] = ACTIONS(186),
    [anon_sym_vu8] = ACTIONS(186),
    [anon_sym_ad] = ACTIONS(186),
    [anon_sym_adfirma] = ACTIONS(186),
    [anon_sym_argumenta] = ACTIONS(186),
    [anon_sym_cape] = ACTIONS(186),
    [anon_sym_casu] = ACTIONS(186),
    [anon_sym_ceterum] = ACTIONS(186),
    [anon_sym_cura] = ACTIONS(186),
    [anon_sym_custodi] = ACTIONS(186),
    [anon_sym_demum] = ACTIONS(186),
    [anon_sym_discerne] = ACTIONS(186),
    [anon_sym_dum] = ACTIONS(186),
    [anon_sym_elige] = ACTIONS(186),
    [anon_sym_emitte] = ACTIONS(186),
    [anon_sym_ergo] = ACTIONS(186),
    [anon_sym_fac] = ACTIONS(186),
    [anon_sym_iace] = ACTIONS(186),
    [anon_sym_incipiet] = ACTIONS(186),
    [anon_sym_incipit] = ACTIONS(186),
    [anon_sym_itera] = ACTIONS(186),
    [anon_sym_mori] = ACTIONS(186),
    [anon_sym_perge] = ACTIONS(186),
    [anon_sym_redde] = ACTIONS(186),
    [anon_sym_rumpe] = ACTIONS(186),
    [anon_sym_secus] = ACTIONS(186),
    [anon_sym_si] = ACTIONS(186),
    [anon_sym_sic] = ACTIONS(186),
    [anon_sym_sin] = ACTIONS(186),
    [anon_sym_tacet] = ACTIONS(186),
    [anon_sym_tempta] = ACTIONS(186),
    [anon_sym_abstractus] = ACTIONS(186),
    [anon_sym_ceteri] = ACTIONS(186),
    [anon_sym_curata] = ACTIONS(186),
    [anon_sym_discretio] = ACTIONS(186),
    [anon_sym_errata] = ACTIONS(186),
    [anon_sym_exitus] = ACTIONS(186),
    [anon_sym_fixum] = ACTIONS(186),
    [anon_sym_functio] = ACTIONS(186),
    [anon_sym_generis] = ACTIONS(186),
    [anon_sym_genus] = ACTIONS(186),
    [anon_sym_iacit] = ACTIONS(186),
    [anon_sym_immutata] = ACTIONS(186),
    [anon_sym_implendum] = ACTIONS(186),
    [anon_sym_importa] = ACTIONS(186),
    [anon_sym_magnitudo] = ACTIONS(186),
    [anon_sym_nexum] = ACTIONS(186),
    [anon_sym_optiones] = ACTIONS(186),
    [anon_sym_ordo] = ACTIONS(186),
    [anon_sym_prae] = ACTIONS(186),
    [anon_sym_sit] = ACTIONS(186),
    [anon_sym_sponte] = ACTIONS(186),
    [anon_sym_typus] = ACTIONS(186),
    [anon_sym_varia] = ACTIONS(186),
    [anon_sym_ante] = ACTIONS(186),
    [anon_sym_aut] = ACTIONS(186),
    [anon_sym_cede] = ACTIONS(186),
    [anon_sym_clausura] = ACTIONS(186),
    [anon_sym_de] = ACTIONS(186),
    [anon_sym_ego] = ACTIONS(186),
    [anon_sym_est] = ACTIONS(186),
    [anon_sym_et] = ACTIONS(186),
    [anon_sym_ex] = ACTIONS(186),
    [anon_sym_finge] = ACTIONS(186),
    [anon_sym_fragilis] = ACTIONS(186),
    [anon_sym_futurum] = ACTIONS(186),
    [anon_sym_implet] = ACTIONS(186),
    [anon_sym_in] = ACTIONS(186),
    [anon_sym_inter] = ACTIONS(186),
    [anon_sym_intra] = ACTIONS(186),
    [anon_sym_lege] = ACTIONS(186),
    [anon_sym_lineam] = ACTIONS(186),
    [anon_sym_metior] = ACTIONS(186),
    [anon_sym_modulus] = ACTIONS(186),
    [anon_sym_mone] = ACTIONS(186),
    [anon_sym_negativum] = ACTIONS(186),
    [anon_sym_nihil] = ACTIONS(186),
    [anon_sym_non] = ACTIONS(186),
    [anon_sym_nonnihil] = ACTIONS(186),
    [anon_sym_nonnulla] = ACTIONS(186),
    [anon_sym_nota] = ACTIONS(186),
    [anon_sym_nulla] = ACTIONS(186),
    [anon_sym_omitte] = ACTIONS(186),
    [anon_sym_omnia] = ACTIONS(186),
    [anon_sym_per] = ACTIONS(186),
    [anon_sym_positivum] = ACTIONS(186),
    [anon_sym_postpara] = ACTIONS(186),
    [anon_sym_postparabit] = ACTIONS(186),
    [anon_sym_praefixum] = ACTIONS(186),
    [anon_sym_praepara] = ACTIONS(186),
    [anon_sym_praeparabit] = ACTIONS(186),
    [anon_sym_pro] = ACTIONS(186),
    [anon_sym_proba] = ACTIONS(186),
    [anon_sym_probandum] = ACTIONS(186),
    [anon_sym_repete] = ACTIONS(186),
    [anon_sym_requirit] = ACTIONS(186),
    [anon_sym_scribe] = ACTIONS(186),
    [anon_sym_scriptum] = ACTIONS(186),
    [anon_sym_solum] = ACTIONS(186),
    [anon_sym_solum_in] = ACTIONS(186),
    [anon_sym_sparge] = ACTIONS(186),
    [anon_sym_sub] = ACTIONS(186),
    [anon_sym_tag] = ACTIONS(186),
    [anon_sym_temporis] = ACTIONS(186),
    [anon_sym_usque] = ACTIONS(186),
    [anon_sym_ut] = ACTIONS(186),
    [anon_sym_vel] = ACTIONS(186),
    [anon_sym_vide] = ACTIONS(186),
    [anon_sym_falsum] = ACTIONS(186),
    [anon_sym_verum] = ACTIONS(186),
    [sym_guillemet_string] = ACTIONS(184),
    [sym_octeti_string] = ACTIONS(184),
    [sym_backtick_string] = ACTIONS(184),
    [sym_ascii_string] = ACTIONS(184),
    [sym_string] = ACTIONS(184),
    [sym_number] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [sym_operator] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [sym_hash] = ACTIONS(184),
    [sym_line_comment] = ACTIONS(184),
    [sym_faber_newline] = ACTIONS(184),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_at_sign] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_cursor] = ACTIONS(190),
    [anon_sym_json] = ACTIONS(190),
    [anon_sym_privata] = ACTIONS(190),
    [anon_sym_protecta] = ACTIONS(190),
    [anon_sym_publica] = ACTIONS(190),
    [anon_sym_ascii] = ACTIONS(190),
    [anon_sym_bivalens] = ACTIONS(190),
    [anon_sym_copia] = ACTIONS(190),
    [anon_sym_f16] = ACTIONS(190),
    [anon_sym_f32] = ACTIONS(190),
    [anon_sym_f64] = ACTIONS(190),
    [anon_sym_fractus] = ACTIONS(190),
    [anon_sym_i16] = ACTIONS(190),
    [anon_sym_i32] = ACTIONS(190),
    [anon_sym_i64] = ACTIONS(190),
    [anon_sym_i8] = ACTIONS(190),
    [anon_sym_ignotum] = ACTIONS(190),
    [anon_sym_instans] = ACTIONS(190),
    [anon_sym_intervallum] = ACTIONS(190),
    [anon_sym_lf16] = ACTIONS(190),
    [anon_sym_lf32] = ACTIONS(190),
    [anon_sym_lf64] = ACTIONS(190),
    [anon_sym_li16] = ACTIONS(190),
    [anon_sym_li32] = ACTIONS(190),
    [anon_sym_li64] = ACTIONS(190),
    [anon_sym_li8] = ACTIONS(190),
    [anon_sym_lista] = ACTIONS(190),
    [anon_sym_lu16] = ACTIONS(190),
    [anon_sym_lu32] = ACTIONS(190),
    [anon_sym_lu64] = ACTIONS(190),
    [anon_sym_lu8] = ACTIONS(190),
    [anon_sym_matrix] = ACTIONS(190),
    [anon_sym_mf16] = ACTIONS(190),
    [anon_sym_mf32] = ACTIONS(190),
    [anon_sym_mf64] = ACTIONS(190),
    [anon_sym_mi16] = ACTIONS(190),
    [anon_sym_mi32] = ACTIONS(190),
    [anon_sym_mi64] = ACTIONS(190),
    [anon_sym_mi8] = ACTIONS(190),
    [anon_sym_mu16] = ACTIONS(190),
    [anon_sym_mu32] = ACTIONS(190),
    [anon_sym_mu64] = ACTIONS(190),
    [anon_sym_mu8] = ACTIONS(190),
    [anon_sym_numerus] = ACTIONS(190),
    [anon_sym_numquam] = ACTIONS(190),
    [anon_sym_octet] = ACTIONS(190),
    [anon_sym_octeti] = ACTIONS(190),
    [anon_sym_promissum] = ACTIONS(190),
    [anon_sym_regex] = ACTIONS(190),
    [anon_sym_series] = ACTIONS(190),
    [anon_sym_sf16] = ACTIONS(190),
    [anon_sym_sf32] = ACTIONS(190),
    [anon_sym_sf64] = ACTIONS(190),
    [anon_sym_si16] = ACTIONS(190),
    [anon_sym_si32] = ACTIONS(190),
    [anon_sym_si64] = ACTIONS(190),
    [anon_sym_si8] = ACTIONS(190),
    [anon_sym_sparsa] = ACTIONS(190),
    [anon_sym_su16] = ACTIONS(190),
    [anon_sym_su32] = ACTIONS(190),
    [anon_sym_su64] = ACTIONS(190),
    [anon_sym_su8] = ACTIONS(190),
    [anon_sym_tabula] = ACTIONS(190),
    [anon_sym_tensor] = ACTIONS(190),
    [anon_sym_textus] = ACTIONS(190),
    [anon_sym_tf16] = ACTIONS(190),
    [anon_sym_tf32] = ACTIONS(190),
    [anon_sym_tf64] = ACTIONS(190),
    [anon_sym_ti16] = ACTIONS(190),
    [anon_sym_ti32] = ACTIONS(190),
    [anon_sym_ti64] = ACTIONS(190),
    [anon_sym_ti8] = ACTIONS(190),
    [anon_sym_tu16] = ACTIONS(190),
    [anon_sym_tu32] = ACTIONS(190),
    [anon_sym_tu64] = ACTIONS(190),
    [anon_sym_tu8] = ACTIONS(190),
    [anon_sym_u16] = ACTIONS(190),
    [anon_sym_u32] = ACTIONS(190),
    [anon_sym_u64] = ACTIONS(190),
    [anon_sym_u8] = ACTIONS(190),
    [anon_sym_unio] = ACTIONS(190),
    [anon_sym_vacua] = ACTIONS(190),
    [anon_sym_vacuum] = ACTIONS(190),
    [anon_sym_valor] = ACTIONS(190),
    [anon_sym_vector] = ACTIONS(190),
    [anon_sym_vf16] = ACTIONS(190),
    [anon_sym_vf32] = ACTIONS(190),
    [anon_sym_vf64] = ACTIONS(190),
    [anon_sym_vi16] = ACTIONS(190),
    [anon_sym_vi32] = ACTIONS(190),
    [anon_sym_vi64] = ACTIONS(190),
    [anon_sym_vi8] = ACTIONS(190),
    [anon_sym_vu16] = ACTIONS(190),
    [anon_sym_vu32] = ACTIONS(190),
    [anon_sym_vu64] = ACTIONS(190),
    [anon_sym_vu8] = ACTIONS(190),
    [anon_sym_ad] = ACTIONS(190),
    [anon_sym_adfirma] = ACTIONS(190),
    [anon_sym_argumenta] = ACTIONS(190),
    [anon_sym_cape] = ACTIONS(190),
    [anon_sym_casu] = ACTIONS(190),
    [anon_sym_ceterum] = ACTIONS(190),
    [anon_sym_cura] = ACTIONS(190),
    [anon_sym_custodi] = ACTIONS(190),
    [anon_sym_demum] = ACTIONS(190),
    [anon_sym_discerne] = ACTIONS(190),
    [anon_sym_dum] = ACTIONS(190),
    [anon_sym_elige] = ACTIONS(190),
    [anon_sym_emitte] = ACTIONS(190),
    [anon_sym_ergo] = ACTIONS(190),
    [anon_sym_fac] = ACTIONS(190),
    [anon_sym_iace] = ACTIONS(190),
    [anon_sym_incipiet] = ACTIONS(190),
    [anon_sym_incipit] = ACTIONS(190),
    [anon_sym_itera] = ACTIONS(190),
    [anon_sym_mori] = ACTIONS(190),
    [anon_sym_perge] = ACTIONS(190),
    [anon_sym_redde] = ACTIONS(190),
    [anon_sym_rumpe] = ACTIONS(190),
    [anon_sym_secus] = ACTIONS(190),
    [anon_sym_si] = ACTIONS(190),
    [anon_sym_sic] = ACTIONS(190),
    [anon_sym_sin] = ACTIONS(190),
    [anon_sym_tacet] = ACTIONS(190),
    [anon_sym_tempta] = ACTIONS(190),
    [anon_sym_abstractus] = ACTIONS(190),
    [anon_sym_ceteri] = ACTIONS(190),
    [anon_sym_curata] = ACTIONS(190),
    [anon_sym_discretio] = ACTIONS(190),
    [anon_sym_errata] = ACTIONS(190),
    [anon_sym_exitus] = ACTIONS(190),
    [anon_sym_fixum] = ACTIONS(190),
    [anon_sym_functio] = ACTIONS(190),
    [anon_sym_generis] = ACTIONS(190),
    [anon_sym_genus] = ACTIONS(190),
    [anon_sym_iacit] = ACTIONS(190),
    [anon_sym_immutata] = ACTIONS(190),
    [anon_sym_implendum] = ACTIONS(190),
    [anon_sym_importa] = ACTIONS(190),
    [anon_sym_magnitudo] = ACTIONS(190),
    [anon_sym_nexum] = ACTIONS(190),
    [anon_sym_optiones] = ACTIONS(190),
    [anon_sym_ordo] = ACTIONS(190),
    [anon_sym_prae] = ACTIONS(190),
    [anon_sym_sit] = ACTIONS(190),
    [anon_sym_sponte] = ACTIONS(190),
    [anon_sym_typus] = ACTIONS(190),
    [anon_sym_varia] = ACTIONS(190),
    [anon_sym_ante] = ACTIONS(190),
    [anon_sym_aut] = ACTIONS(190),
    [anon_sym_cede] = ACTIONS(190),
    [anon_sym_clausura] = ACTIONS(190),
    [anon_sym_de] = ACTIONS(190),
    [anon_sym_ego] = ACTIONS(190),
    [anon_sym_est] = ACTIONS(190),
    [anon_sym_et] = ACTIONS(190),
    [anon_sym_ex] = ACTIONS(190),
    [anon_sym_finge] = ACTIONS(190),
    [anon_sym_fragilis] = ACTIONS(190),
    [anon_sym_futurum] = ACTIONS(190),
    [anon_sym_implet] = ACTIONS(190),
    [anon_sym_in] = ACTIONS(190),
    [anon_sym_inter] = ACTIONS(190),
    [anon_sym_intra] = ACTIONS(190),
    [anon_sym_lege] = ACTIONS(190),
    [anon_sym_lineam] = ACTIONS(190),
    [anon_sym_metior] = ACTIONS(190),
    [anon_sym_modulus] = ACTIONS(190),
    [anon_sym_mone] = ACTIONS(190),
    [anon_sym_negativum] = ACTIONS(190),
    [anon_sym_nihil] = ACTIONS(190),
    [anon_sym_non] = ACTIONS(190),
    [anon_sym_nonnihil] = ACTIONS(190),
    [anon_sym_nonnulla] = ACTIONS(190),
    [anon_sym_nota] = ACTIONS(190),
    [anon_sym_nulla] = ACTIONS(190),
    [anon_sym_omitte] = ACTIONS(190),
    [anon_sym_omnia] = ACTIONS(190),
    [anon_sym_per] = ACTIONS(190),
    [anon_sym_positivum] = ACTIONS(190),
    [anon_sym_postpara] = ACTIONS(190),
    [anon_sym_postparabit] = ACTIONS(190),
    [anon_sym_praefixum] = ACTIONS(190),
    [anon_sym_praepara] = ACTIONS(190),
    [anon_sym_praeparabit] = ACTIONS(190),
    [anon_sym_pro] = ACTIONS(190),
    [anon_sym_proba] = ACTIONS(190),
    [anon_sym_probandum] = ACTIONS(190),
    [anon_sym_repete] = ACTIONS(190),
    [anon_sym_requirit] = ACTIONS(190),
    [anon_sym_scribe] = ACTIONS(190),
    [anon_sym_scriptum] = ACTIONS(190),
    [anon_sym_solum] = ACTIONS(190),
    [anon_sym_solum_in] = ACTIONS(190),
    [anon_sym_sparge] = ACTIONS(190),
    [anon_sym_sub] = ACTIONS(190),
    [anon_sym_tag] = ACTIONS(190),
    [anon_sym_temporis] = ACTIONS(190),
    [anon_sym_usque] = ACTIONS(190),
    [anon_sym_ut] = ACTIONS(190),
    [anon_sym_vel] = ACTIONS(190),
    [anon_sym_vide] = ACTIONS(190),
    [anon_sym_falsum] = ACTIONS(190),
    [anon_sym_verum] = ACTIONS(190),
    [sym_guillemet_string] = ACTIONS(188),
    [sym_octeti_string] = ACTIONS(188),
    [sym_backtick_string] = ACTIONS(188),
    [sym_ascii_string] = ACTIONS(188),
    [sym_string] = ACTIONS(188),
    [sym_number] = ACTIONS(188),
    [sym_identifier] = ACTIONS(190),
    [sym_operator] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [sym_hash] = ACTIONS(188),
    [sym_line_comment] = ACTIONS(188),
    [sym_faber_newline] = ACTIONS(188),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_at_sign] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_cursor] = ACTIONS(194),
    [anon_sym_json] = ACTIONS(194),
    [anon_sym_privata] = ACTIONS(194),
    [anon_sym_protecta] = ACTIONS(194),
    [anon_sym_publica] = ACTIONS(194),
    [anon_sym_ascii] = ACTIONS(194),
    [anon_sym_bivalens] = ACTIONS(194),
    [anon_sym_copia] = ACTIONS(194),
    [anon_sym_f16] = ACTIONS(194),
    [anon_sym_f32] = ACTIONS(194),
    [anon_sym_f64] = ACTIONS(194),
    [anon_sym_fractus] = ACTIONS(194),
    [anon_sym_i16] = ACTIONS(194),
    [anon_sym_i32] = ACTIONS(194),
    [anon_sym_i64] = ACTIONS(194),
    [anon_sym_i8] = ACTIONS(194),
    [anon_sym_ignotum] = ACTIONS(194),
    [anon_sym_instans] = ACTIONS(194),
    [anon_sym_intervallum] = ACTIONS(194),
    [anon_sym_lf16] = ACTIONS(194),
    [anon_sym_lf32] = ACTIONS(194),
    [anon_sym_lf64] = ACTIONS(194),
    [anon_sym_li16] = ACTIONS(194),
    [anon_sym_li32] = ACTIONS(194),
    [anon_sym_li64] = ACTIONS(194),
    [anon_sym_li8] = ACTIONS(194),
    [anon_sym_lista] = ACTIONS(194),
    [anon_sym_lu16] = ACTIONS(194),
    [anon_sym_lu32] = ACTIONS(194),
    [anon_sym_lu64] = ACTIONS(194),
    [anon_sym_lu8] = ACTIONS(194),
    [anon_sym_matrix] = ACTIONS(194),
    [anon_sym_mf16] = ACTIONS(194),
    [anon_sym_mf32] = ACTIONS(194),
    [anon_sym_mf64] = ACTIONS(194),
    [anon_sym_mi16] = ACTIONS(194),
    [anon_sym_mi32] = ACTIONS(194),
    [anon_sym_mi64] = ACTIONS(194),
    [anon_sym_mi8] = ACTIONS(194),
    [anon_sym_mu16] = ACTIONS(194),
    [anon_sym_mu32] = ACTIONS(194),
    [anon_sym_mu64] = ACTIONS(194),
    [anon_sym_mu8] = ACTIONS(194),
    [anon_sym_numerus] = ACTIONS(194),
    [anon_sym_numquam] = ACTIONS(194),
    [anon_sym_octet] = ACTIONS(194),
    [anon_sym_octeti] = ACTIONS(194),
    [anon_sym_promissum] = ACTIONS(194),
    [anon_sym_regex] = ACTIONS(194),
    [anon_sym_series] = ACTIONS(194),
    [anon_sym_sf16] = ACTIONS(194),
    [anon_sym_sf32] = ACTIONS(194),
    [anon_sym_sf64] = ACTIONS(194),
    [anon_sym_si16] = ACTIONS(194),
    [anon_sym_si32] = ACTIONS(194),
    [anon_sym_si64] = ACTIONS(194),
    [anon_sym_si8] = ACTIONS(194),
    [anon_sym_sparsa] = ACTIONS(194),
    [anon_sym_su16] = ACTIONS(194),
    [anon_sym_su32] = ACTIONS(194),
    [anon_sym_su64] = ACTIONS(194),
    [anon_sym_su8] = ACTIONS(194),
    [anon_sym_tabula] = ACTIONS(194),
    [anon_sym_tensor] = ACTIONS(194),
    [anon_sym_textus] = ACTIONS(194),
    [anon_sym_tf16] = ACTIONS(194),
    [anon_sym_tf32] = ACTIONS(194),
    [anon_sym_tf64] = ACTIONS(194),
    [anon_sym_ti16] = ACTIONS(194),
    [anon_sym_ti32] = ACTIONS(194),
    [anon_sym_ti64] = ACTIONS(194),
    [anon_sym_ti8] = ACTIONS(194),
    [anon_sym_tu16] = ACTIONS(194),
    [anon_sym_tu32] = ACTIONS(194),
    [anon_sym_tu64] = ACTIONS(194),
    [anon_sym_tu8] = ACTIONS(194),
    [anon_sym_u16] = ACTIONS(194),
    [anon_sym_u32] = ACTIONS(194),
    [anon_sym_u64] = ACTIONS(194),
    [anon_sym_u8] = ACTIONS(194),
    [anon_sym_unio] = ACTIONS(194),
    [anon_sym_vacua] = ACTIONS(194),
    [anon_sym_vacuum] = ACTIONS(194),
    [anon_sym_valor] = ACTIONS(194),
    [anon_sym_vector] = ACTIONS(194),
    [anon_sym_vf16] = ACTIONS(194),
    [anon_sym_vf32] = ACTIONS(194),
    [anon_sym_vf64] = ACTIONS(194),
    [anon_sym_vi16] = ACTIONS(194),
    [anon_sym_vi32] = ACTIONS(194),
    [anon_sym_vi64] = ACTIONS(194),
    [anon_sym_vi8] = ACTIONS(194),
    [anon_sym_vu16] = ACTIONS(194),
    [anon_sym_vu32] = ACTIONS(194),
    [anon_sym_vu64] = ACTIONS(194),
    [anon_sym_vu8] = ACTIONS(194),
    [anon_sym_ad] = ACTIONS(194),
    [anon_sym_adfirma] = ACTIONS(194),
    [anon_sym_argumenta] = ACTIONS(194),
    [anon_sym_cape] = ACTIONS(194),
    [anon_sym_casu] = ACTIONS(194),
    [anon_sym_ceterum] = ACTIONS(194),
    [anon_sym_cura] = ACTIONS(194),
    [anon_sym_custodi] = ACTIONS(194),
    [anon_sym_demum] = ACTIONS(194),
    [anon_sym_discerne] = ACTIONS(194),
    [anon_sym_dum] = ACTIONS(194),
    [anon_sym_elige] = ACTIONS(194),
    [anon_sym_emitte] = ACTIONS(194),
    [anon_sym_ergo] = ACTIONS(194),
    [anon_sym_fac] = ACTIONS(194),
    [anon_sym_iace] = ACTIONS(194),
    [anon_sym_incipiet] = ACTIONS(194),
    [anon_sym_incipit] = ACTIONS(194),
    [anon_sym_itera] = ACTIONS(194),
    [anon_sym_mori] = ACTIONS(194),
    [anon_sym_perge] = ACTIONS(194),
    [anon_sym_redde] = ACTIONS(194),
    [anon_sym_rumpe] = ACTIONS(194),
    [anon_sym_secus] = ACTIONS(194),
    [anon_sym_si] = ACTIONS(194),
    [anon_sym_sic] = ACTIONS(194),
    [anon_sym_sin] = ACTIONS(194),
    [anon_sym_tacet] = ACTIONS(194),
    [anon_sym_tempta] = ACTIONS(194),
    [anon_sym_abstractus] = ACTIONS(194),
    [anon_sym_ceteri] = ACTIONS(194),
    [anon_sym_curata] = ACTIONS(194),
    [anon_sym_discretio] = ACTIONS(194),
    [anon_sym_errata] = ACTIONS(194),
    [anon_sym_exitus] = ACTIONS(194),
    [anon_sym_fixum] = ACTIONS(194),
    [anon_sym_functio] = ACTIONS(194),
    [anon_sym_generis] = ACTIONS(194),
    [anon_sym_genus] = ACTIONS(194),
    [anon_sym_iacit] = ACTIONS(194),
    [anon_sym_immutata] = ACTIONS(194),
    [anon_sym_implendum] = ACTIONS(194),
    [anon_sym_importa] = ACTIONS(194),
    [anon_sym_magnitudo] = ACTIONS(194),
    [anon_sym_nexum] = ACTIONS(194),
    [anon_sym_optiones] = ACTIONS(194),
    [anon_sym_ordo] = ACTIONS(194),
    [anon_sym_prae] = ACTIONS(194),
    [anon_sym_sit] = ACTIONS(194),
    [anon_sym_sponte] = ACTIONS(194),
    [anon_sym_typus] = ACTIONS(194),
    [anon_sym_varia] = ACTIONS(194),
    [anon_sym_ante] = ACTIONS(194),
    [anon_sym_aut] = ACTIONS(194),
    [anon_sym_cede] = ACTIONS(194),
    [anon_sym_clausura] = ACTIONS(194),
    [anon_sym_de] = ACTIONS(194),
    [anon_sym_ego] = ACTIONS(194),
    [anon_sym_est] = ACTIONS(194),
    [anon_sym_et] = ACTIONS(194),
    [anon_sym_ex] = ACTIONS(194),
    [anon_sym_finge] = ACTIONS(194),
    [anon_sym_fragilis] = ACTIONS(194),
    [anon_sym_futurum] = ACTIONS(194),
    [anon_sym_implet] = ACTIONS(194),
    [anon_sym_in] = ACTIONS(194),
    [anon_sym_inter] = ACTIONS(194),
    [anon_sym_intra] = ACTIONS(194),
    [anon_sym_lege] = ACTIONS(194),
    [anon_sym_lineam] = ACTIONS(194),
    [anon_sym_metior] = ACTIONS(194),
    [anon_sym_modulus] = ACTIONS(194),
    [anon_sym_mone] = ACTIONS(194),
    [anon_sym_negativum] = ACTIONS(194),
    [anon_sym_nihil] = ACTIONS(194),
    [anon_sym_non] = ACTIONS(194),
    [anon_sym_nonnihil] = ACTIONS(194),
    [anon_sym_nonnulla] = ACTIONS(194),
    [anon_sym_nota] = ACTIONS(194),
    [anon_sym_nulla] = ACTIONS(194),
    [anon_sym_omitte] = ACTIONS(194),
    [anon_sym_omnia] = ACTIONS(194),
    [anon_sym_per] = ACTIONS(194),
    [anon_sym_positivum] = ACTIONS(194),
    [anon_sym_postpara] = ACTIONS(194),
    [anon_sym_postparabit] = ACTIONS(194),
    [anon_sym_praefixum] = ACTIONS(194),
    [anon_sym_praepara] = ACTIONS(194),
    [anon_sym_praeparabit] = ACTIONS(194),
    [anon_sym_pro] = ACTIONS(194),
    [anon_sym_proba] = ACTIONS(194),
    [anon_sym_probandum] = ACTIONS(194),
    [anon_sym_repete] = ACTIONS(194),
    [anon_sym_requirit] = ACTIONS(194),
    [anon_sym_scribe] = ACTIONS(194),
    [anon_sym_scriptum] = ACTIONS(194),
    [anon_sym_solum] = ACTIONS(194),
    [anon_sym_solum_in] = ACTIONS(194),
    [anon_sym_sparge] = ACTIONS(194),
    [anon_sym_sub] = ACTIONS(194),
    [anon_sym_tag] = ACTIONS(194),
    [anon_sym_temporis] = ACTIONS(194),
    [anon_sym_usque] = ACTIONS(194),
    [anon_sym_ut] = ACTIONS(194),
    [anon_sym_vel] = ACTIONS(194),
    [anon_sym_vide] = ACTIONS(194),
    [anon_sym_falsum] = ACTIONS(194),
    [anon_sym_verum] = ACTIONS(194),
    [sym_guillemet_string] = ACTIONS(192),
    [sym_octeti_string] = ACTIONS(192),
    [sym_backtick_string] = ACTIONS(192),
    [sym_ascii_string] = ACTIONS(192),
    [sym_string] = ACTIONS(192),
    [sym_number] = ACTIONS(192),
    [sym_identifier] = ACTIONS(194),
    [sym_operator] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [sym_hash] = ACTIONS(192),
    [sym_line_comment] = ACTIONS(192),
    [sym_faber_newline] = ACTIONS(192),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_at_sign] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_cursor] = ACTIONS(198),
    [anon_sym_json] = ACTIONS(198),
    [anon_sym_privata] = ACTIONS(198),
    [anon_sym_protecta] = ACTIONS(198),
    [anon_sym_publica] = ACTIONS(198),
    [anon_sym_ascii] = ACTIONS(198),
    [anon_sym_bivalens] = ACTIONS(198),
    [anon_sym_copia] = ACTIONS(198),
    [anon_sym_f16] = ACTIONS(198),
    [anon_sym_f32] = ACTIONS(198),
    [anon_sym_f64] = ACTIONS(198),
    [anon_sym_fractus] = ACTIONS(198),
    [anon_sym_i16] = ACTIONS(198),
    [anon_sym_i32] = ACTIONS(198),
    [anon_sym_i64] = ACTIONS(198),
    [anon_sym_i8] = ACTIONS(198),
    [anon_sym_ignotum] = ACTIONS(198),
    [anon_sym_instans] = ACTIONS(198),
    [anon_sym_intervallum] = ACTIONS(198),
    [anon_sym_lf16] = ACTIONS(198),
    [anon_sym_lf32] = ACTIONS(198),
    [anon_sym_lf64] = ACTIONS(198),
    [anon_sym_li16] = ACTIONS(198),
    [anon_sym_li32] = ACTIONS(198),
    [anon_sym_li64] = ACTIONS(198),
    [anon_sym_li8] = ACTIONS(198),
    [anon_sym_lista] = ACTIONS(198),
    [anon_sym_lu16] = ACTIONS(198),
    [anon_sym_lu32] = ACTIONS(198),
    [anon_sym_lu64] = ACTIONS(198),
    [anon_sym_lu8] = ACTIONS(198),
    [anon_sym_matrix] = ACTIONS(198),
    [anon_sym_mf16] = ACTIONS(198),
    [anon_sym_mf32] = ACTIONS(198),
    [anon_sym_mf64] = ACTIONS(198),
    [anon_sym_mi16] = ACTIONS(198),
    [anon_sym_mi32] = ACTIONS(198),
    [anon_sym_mi64] = ACTIONS(198),
    [anon_sym_mi8] = ACTIONS(198),
    [anon_sym_mu16] = ACTIONS(198),
    [anon_sym_mu32] = ACTIONS(198),
    [anon_sym_mu64] = ACTIONS(198),
    [anon_sym_mu8] = ACTIONS(198),
    [anon_sym_numerus] = ACTIONS(198),
    [anon_sym_numquam] = ACTIONS(198),
    [anon_sym_octet] = ACTIONS(198),
    [anon_sym_octeti] = ACTIONS(198),
    [anon_sym_promissum] = ACTIONS(198),
    [anon_sym_regex] = ACTIONS(198),
    [anon_sym_series] = ACTIONS(198),
    [anon_sym_sf16] = ACTIONS(198),
    [anon_sym_sf32] = ACTIONS(198),
    [anon_sym_sf64] = ACTIONS(198),
    [anon_sym_si16] = ACTIONS(198),
    [anon_sym_si32] = ACTIONS(198),
    [anon_sym_si64] = ACTIONS(198),
    [anon_sym_si8] = ACTIONS(198),
    [anon_sym_sparsa] = ACTIONS(198),
    [anon_sym_su16] = ACTIONS(198),
    [anon_sym_su32] = ACTIONS(198),
    [anon_sym_su64] = ACTIONS(198),
    [anon_sym_su8] = ACTIONS(198),
    [anon_sym_tabula] = ACTIONS(198),
    [anon_sym_tensor] = ACTIONS(198),
    [anon_sym_textus] = ACTIONS(198),
    [anon_sym_tf16] = ACTIONS(198),
    [anon_sym_tf32] = ACTIONS(198),
    [anon_sym_tf64] = ACTIONS(198),
    [anon_sym_ti16] = ACTIONS(198),
    [anon_sym_ti32] = ACTIONS(198),
    [anon_sym_ti64] = ACTIONS(198),
    [anon_sym_ti8] = ACTIONS(198),
    [anon_sym_tu16] = ACTIONS(198),
    [anon_sym_tu32] = ACTIONS(198),
    [anon_sym_tu64] = ACTIONS(198),
    [anon_sym_tu8] = ACTIONS(198),
    [anon_sym_u16] = ACTIONS(198),
    [anon_sym_u32] = ACTIONS(198),
    [anon_sym_u64] = ACTIONS(198),
    [anon_sym_u8] = ACTIONS(198),
    [anon_sym_unio] = ACTIONS(198),
    [anon_sym_vacua] = ACTIONS(198),
    [anon_sym_vacuum] = ACTIONS(198),
    [anon_sym_valor] = ACTIONS(198),
    [anon_sym_vector] = ACTIONS(198),
    [anon_sym_vf16] = ACTIONS(198),
    [anon_sym_vf32] = ACTIONS(198),
    [anon_sym_vf64] = ACTIONS(198),
    [anon_sym_vi16] = ACTIONS(198),
    [anon_sym_vi32] = ACTIONS(198),
    [anon_sym_vi64] = ACTIONS(198),
    [anon_sym_vi8] = ACTIONS(198),
    [anon_sym_vu16] = ACTIONS(198),
    [anon_sym_vu32] = ACTIONS(198),
    [anon_sym_vu64] = ACTIONS(198),
    [anon_sym_vu8] = ACTIONS(198),
    [anon_sym_ad] = ACTIONS(198),
    [anon_sym_adfirma] = ACTIONS(198),
    [anon_sym_argumenta] = ACTIONS(198),
    [anon_sym_cape] = ACTIONS(198),
    [anon_sym_casu] = ACTIONS(198),
    [anon_sym_ceterum] = ACTIONS(198),
    [anon_sym_cura] = ACTIONS(198),
    [anon_sym_custodi] = ACTIONS(198),
    [anon_sym_demum] = ACTIONS(198),
    [anon_sym_discerne] = ACTIONS(198),
    [anon_sym_dum] = ACTIONS(198),
    [anon_sym_elige] = ACTIONS(198),
    [anon_sym_emitte] = ACTIONS(198),
    [anon_sym_ergo] = ACTIONS(198),
    [anon_sym_fac] = ACTIONS(198),
    [anon_sym_iace] = ACTIONS(198),
    [anon_sym_incipiet] = ACTIONS(198),
    [anon_sym_incipit] = ACTIONS(198),
    [anon_sym_itera] = ACTIONS(198),
    [anon_sym_mori] = ACTIONS(198),
    [anon_sym_perge] = ACTIONS(198),
    [anon_sym_redde] = ACTIONS(198),
    [anon_sym_rumpe] = ACTIONS(198),
    [anon_sym_secus] = ACTIONS(198),
    [anon_sym_si] = ACTIONS(198),
    [anon_sym_sic] = ACTIONS(198),
    [anon_sym_sin] = ACTIONS(198),
    [anon_sym_tacet] = ACTIONS(198),
    [anon_sym_tempta] = ACTIONS(198),
    [anon_sym_abstractus] = ACTIONS(198),
    [anon_sym_ceteri] = ACTIONS(198),
    [anon_sym_curata] = ACTIONS(198),
    [anon_sym_discretio] = ACTIONS(198),
    [anon_sym_errata] = ACTIONS(198),
    [anon_sym_exitus] = ACTIONS(198),
    [anon_sym_fixum] = ACTIONS(198),
    [anon_sym_functio] = ACTIONS(198),
    [anon_sym_generis] = ACTIONS(198),
    [anon_sym_genus] = ACTIONS(198),
    [anon_sym_iacit] = ACTIONS(198),
    [anon_sym_immutata] = ACTIONS(198),
    [anon_sym_implendum] = ACTIONS(198),
    [anon_sym_importa] = ACTIONS(198),
    [anon_sym_magnitudo] = ACTIONS(198),
    [anon_sym_nexum] = ACTIONS(198),
    [anon_sym_optiones] = ACTIONS(198),
    [anon_sym_ordo] = ACTIONS(198),
    [anon_sym_prae] = ACTIONS(198),
    [anon_sym_sit] = ACTIONS(198),
    [anon_sym_sponte] = ACTIONS(198),
    [anon_sym_typus] = ACTIONS(198),
    [anon_sym_varia] = ACTIONS(198),
    [anon_sym_ante] = ACTIONS(198),
    [anon_sym_aut] = ACTIONS(198),
    [anon_sym_cede] = ACTIONS(198),
    [anon_sym_clausura] = ACTIONS(198),
    [anon_sym_de] = ACTIONS(198),
    [anon_sym_ego] = ACTIONS(198),
    [anon_sym_est] = ACTIONS(198),
    [anon_sym_et] = ACTIONS(198),
    [anon_sym_ex] = ACTIONS(198),
    [anon_sym_finge] = ACTIONS(198),
    [anon_sym_fragilis] = ACTIONS(198),
    [anon_sym_futurum] = ACTIONS(198),
    [anon_sym_implet] = ACTIONS(198),
    [anon_sym_in] = ACTIONS(198),
    [anon_sym_inter] = ACTIONS(198),
    [anon_sym_intra] = ACTIONS(198),
    [anon_sym_lege] = ACTIONS(198),
    [anon_sym_lineam] = ACTIONS(198),
    [anon_sym_metior] = ACTIONS(198),
    [anon_sym_modulus] = ACTIONS(198),
    [anon_sym_mone] = ACTIONS(198),
    [anon_sym_negativum] = ACTIONS(198),
    [anon_sym_nihil] = ACTIONS(198),
    [anon_sym_non] = ACTIONS(198),
    [anon_sym_nonnihil] = ACTIONS(198),
    [anon_sym_nonnulla] = ACTIONS(198),
    [anon_sym_nota] = ACTIONS(198),
    [anon_sym_nulla] = ACTIONS(198),
    [anon_sym_omitte] = ACTIONS(198),
    [anon_sym_omnia] = ACTIONS(198),
    [anon_sym_per] = ACTIONS(198),
    [anon_sym_positivum] = ACTIONS(198),
    [anon_sym_postpara] = ACTIONS(198),
    [anon_sym_postparabit] = ACTIONS(198),
    [anon_sym_praefixum] = ACTIONS(198),
    [anon_sym_praepara] = ACTIONS(198),
    [anon_sym_praeparabit] = ACTIONS(198),
    [anon_sym_pro] = ACTIONS(198),
    [anon_sym_proba] = ACTIONS(198),
    [anon_sym_probandum] = ACTIONS(198),
    [anon_sym_repete] = ACTIONS(198),
    [anon_sym_requirit] = ACTIONS(198),
    [anon_sym_scribe] = ACTIONS(198),
    [anon_sym_scriptum] = ACTIONS(198),
    [anon_sym_solum] = ACTIONS(198),
    [anon_sym_solum_in] = ACTIONS(198),
    [anon_sym_sparge] = ACTIONS(198),
    [anon_sym_sub] = ACTIONS(198),
    [anon_sym_tag] = ACTIONS(198),
    [anon_sym_temporis] = ACTIONS(198),
    [anon_sym_usque] = ACTIONS(198),
    [anon_sym_ut] = ACTIONS(198),
    [anon_sym_vel] = ACTIONS(198),
    [anon_sym_vide] = ACTIONS(198),
    [anon_sym_falsum] = ACTIONS(198),
    [anon_sym_verum] = ACTIONS(198),
    [sym_guillemet_string] = ACTIONS(196),
    [sym_octeti_string] = ACTIONS(196),
    [sym_backtick_string] = ACTIONS(196),
    [sym_ascii_string] = ACTIONS(196),
    [sym_string] = ACTIONS(196),
    [sym_number] = ACTIONS(196),
    [sym_identifier] = ACTIONS(198),
    [sym_operator] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [sym_hash] = ACTIONS(196),
    [sym_line_comment] = ACTIONS(196),
    [sym_faber_newline] = ACTIONS(196),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_at_sign] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_cursor] = ACTIONS(202),
    [anon_sym_json] = ACTIONS(202),
    [anon_sym_privata] = ACTIONS(202),
    [anon_sym_protecta] = ACTIONS(202),
    [anon_sym_publica] = ACTIONS(202),
    [anon_sym_ascii] = ACTIONS(202),
    [anon_sym_bivalens] = ACTIONS(202),
    [anon_sym_copia] = ACTIONS(202),
    [anon_sym_f16] = ACTIONS(202),
    [anon_sym_f32] = ACTIONS(202),
    [anon_sym_f64] = ACTIONS(202),
    [anon_sym_fractus] = ACTIONS(202),
    [anon_sym_i16] = ACTIONS(202),
    [anon_sym_i32] = ACTIONS(202),
    [anon_sym_i64] = ACTIONS(202),
    [anon_sym_i8] = ACTIONS(202),
    [anon_sym_ignotum] = ACTIONS(202),
    [anon_sym_instans] = ACTIONS(202),
    [anon_sym_intervallum] = ACTIONS(202),
    [anon_sym_lf16] = ACTIONS(202),
    [anon_sym_lf32] = ACTIONS(202),
    [anon_sym_lf64] = ACTIONS(202),
    [anon_sym_li16] = ACTIONS(202),
    [anon_sym_li32] = ACTIONS(202),
    [anon_sym_li64] = ACTIONS(202),
    [anon_sym_li8] = ACTIONS(202),
    [anon_sym_lista] = ACTIONS(202),
    [anon_sym_lu16] = ACTIONS(202),
    [anon_sym_lu32] = ACTIONS(202),
    [anon_sym_lu64] = ACTIONS(202),
    [anon_sym_lu8] = ACTIONS(202),
    [anon_sym_matrix] = ACTIONS(202),
    [anon_sym_mf16] = ACTIONS(202),
    [anon_sym_mf32] = ACTIONS(202),
    [anon_sym_mf64] = ACTIONS(202),
    [anon_sym_mi16] = ACTIONS(202),
    [anon_sym_mi32] = ACTIONS(202),
    [anon_sym_mi64] = ACTIONS(202),
    [anon_sym_mi8] = ACTIONS(202),
    [anon_sym_mu16] = ACTIONS(202),
    [anon_sym_mu32] = ACTIONS(202),
    [anon_sym_mu64] = ACTIONS(202),
    [anon_sym_mu8] = ACTIONS(202),
    [anon_sym_numerus] = ACTIONS(202),
    [anon_sym_numquam] = ACTIONS(202),
    [anon_sym_octet] = ACTIONS(202),
    [anon_sym_octeti] = ACTIONS(202),
    [anon_sym_promissum] = ACTIONS(202),
    [anon_sym_regex] = ACTIONS(202),
    [anon_sym_series] = ACTIONS(202),
    [anon_sym_sf16] = ACTIONS(202),
    [anon_sym_sf32] = ACTIONS(202),
    [anon_sym_sf64] = ACTIONS(202),
    [anon_sym_si16] = ACTIONS(202),
    [anon_sym_si32] = ACTIONS(202),
    [anon_sym_si64] = ACTIONS(202),
    [anon_sym_si8] = ACTIONS(202),
    [anon_sym_sparsa] = ACTIONS(202),
    [anon_sym_su16] = ACTIONS(202),
    [anon_sym_su32] = ACTIONS(202),
    [anon_sym_su64] = ACTIONS(202),
    [anon_sym_su8] = ACTIONS(202),
    [anon_sym_tabula] = ACTIONS(202),
    [anon_sym_tensor] = ACTIONS(202),
    [anon_sym_textus] = ACTIONS(202),
    [anon_sym_tf16] = ACTIONS(202),
    [anon_sym_tf32] = ACTIONS(202),
    [anon_sym_tf64] = ACTIONS(202),
    [anon_sym_ti16] = ACTIONS(202),
    [anon_sym_ti32] = ACTIONS(202),
    [anon_sym_ti64] = ACTIONS(202),
    [anon_sym_ti8] = ACTIONS(202),
    [anon_sym_tu16] = ACTIONS(202),
    [anon_sym_tu32] = ACTIONS(202),
    [anon_sym_tu64] = ACTIONS(202),
    [anon_sym_tu8] = ACTIONS(202),
    [anon_sym_u16] = ACTIONS(202),
    [anon_sym_u32] = ACTIONS(202),
    [anon_sym_u64] = ACTIONS(202),
    [anon_sym_u8] = ACTIONS(202),
    [anon_sym_unio] = ACTIONS(202),
    [anon_sym_vacua] = ACTIONS(202),
    [anon_sym_vacuum] = ACTIONS(202),
    [anon_sym_valor] = ACTIONS(202),
    [anon_sym_vector] = ACTIONS(202),
    [anon_sym_vf16] = ACTIONS(202),
    [anon_sym_vf32] = ACTIONS(202),
    [anon_sym_vf64] = ACTIONS(202),
    [anon_sym_vi16] = ACTIONS(202),
    [anon_sym_vi32] = ACTIONS(202),
    [anon_sym_vi64] = ACTIONS(202),
    [anon_sym_vi8] = ACTIONS(202),
    [anon_sym_vu16] = ACTIONS(202),
    [anon_sym_vu32] = ACTIONS(202),
    [anon_sym_vu64] = ACTIONS(202),
    [anon_sym_vu8] = ACTIONS(202),
    [anon_sym_ad] = ACTIONS(202),
    [anon_sym_adfirma] = ACTIONS(202),
    [anon_sym_argumenta] = ACTIONS(202),
    [anon_sym_cape] = ACTIONS(202),
    [anon_sym_casu] = ACTIONS(202),
    [anon_sym_ceterum] = ACTIONS(202),
    [anon_sym_cura] = ACTIONS(202),
    [anon_sym_custodi] = ACTIONS(202),
    [anon_sym_demum] = ACTIONS(202),
    [anon_sym_discerne] = ACTIONS(202),
    [anon_sym_dum] = ACTIONS(202),
    [anon_sym_elige] = ACTIONS(202),
    [anon_sym_emitte] = ACTIONS(202),
    [anon_sym_ergo] = ACTIONS(202),
    [anon_sym_fac] = ACTIONS(202),
    [anon_sym_iace] = ACTIONS(202),
    [anon_sym_incipiet] = ACTIONS(202),
    [anon_sym_incipit] = ACTIONS(202),
    [anon_sym_itera] = ACTIONS(202),
    [anon_sym_mori] = ACTIONS(202),
    [anon_sym_perge] = ACTIONS(202),
    [anon_sym_redde] = ACTIONS(202),
    [anon_sym_rumpe] = ACTIONS(202),
    [anon_sym_secus] = ACTIONS(202),
    [anon_sym_si] = ACTIONS(202),
    [anon_sym_sic] = ACTIONS(202),
    [anon_sym_sin] = ACTIONS(202),
    [anon_sym_tacet] = ACTIONS(202),
    [anon_sym_tempta] = ACTIONS(202),
    [anon_sym_abstractus] = ACTIONS(202),
    [anon_sym_ceteri] = ACTIONS(202),
    [anon_sym_curata] = ACTIONS(202),
    [anon_sym_discretio] = ACTIONS(202),
    [anon_sym_errata] = ACTIONS(202),
    [anon_sym_exitus] = ACTIONS(202),
    [anon_sym_fixum] = ACTIONS(202),
    [anon_sym_functio] = ACTIONS(202),
    [anon_sym_generis] = ACTIONS(202),
    [anon_sym_genus] = ACTIONS(202),
    [anon_sym_iacit] = ACTIONS(202),
    [anon_sym_immutata] = ACTIONS(202),
    [anon_sym_implendum] = ACTIONS(202),
    [anon_sym_importa] = ACTIONS(202),
    [anon_sym_magnitudo] = ACTIONS(202),
    [anon_sym_nexum] = ACTIONS(202),
    [anon_sym_optiones] = ACTIONS(202),
    [anon_sym_ordo] = ACTIONS(202),
    [anon_sym_prae] = ACTIONS(202),
    [anon_sym_sit] = ACTIONS(202),
    [anon_sym_sponte] = ACTIONS(202),
    [anon_sym_typus] = ACTIONS(202),
    [anon_sym_varia] = ACTIONS(202),
    [anon_sym_ante] = ACTIONS(202),
    [anon_sym_aut] = ACTIONS(202),
    [anon_sym_cede] = ACTIONS(202),
    [anon_sym_clausura] = ACTIONS(202),
    [anon_sym_de] = ACTIONS(202),
    [anon_sym_ego] = ACTIONS(202),
    [anon_sym_est] = ACTIONS(202),
    [anon_sym_et] = ACTIONS(202),
    [anon_sym_ex] = ACTIONS(202),
    [anon_sym_finge] = ACTIONS(202),
    [anon_sym_fragilis] = ACTIONS(202),
    [anon_sym_futurum] = ACTIONS(202),
    [anon_sym_implet] = ACTIONS(202),
    [anon_sym_in] = ACTIONS(202),
    [anon_sym_inter] = ACTIONS(202),
    [anon_sym_intra] = ACTIONS(202),
    [anon_sym_lege] = ACTIONS(202),
    [anon_sym_lineam] = ACTIONS(202),
    [anon_sym_metior] = ACTIONS(202),
    [anon_sym_modulus] = ACTIONS(202),
    [anon_sym_mone] = ACTIONS(202),
    [anon_sym_negativum] = ACTIONS(202),
    [anon_sym_nihil] = ACTIONS(202),
    [anon_sym_non] = ACTIONS(202),
    [anon_sym_nonnihil] = ACTIONS(202),
    [anon_sym_nonnulla] = ACTIONS(202),
    [anon_sym_nota] = ACTIONS(202),
    [anon_sym_nulla] = ACTIONS(202),
    [anon_sym_omitte] = ACTIONS(202),
    [anon_sym_omnia] = ACTIONS(202),
    [anon_sym_per] = ACTIONS(202),
    [anon_sym_positivum] = ACTIONS(202),
    [anon_sym_postpara] = ACTIONS(202),
    [anon_sym_postparabit] = ACTIONS(202),
    [anon_sym_praefixum] = ACTIONS(202),
    [anon_sym_praepara] = ACTIONS(202),
    [anon_sym_praeparabit] = ACTIONS(202),
    [anon_sym_pro] = ACTIONS(202),
    [anon_sym_proba] = ACTIONS(202),
    [anon_sym_probandum] = ACTIONS(202),
    [anon_sym_repete] = ACTIONS(202),
    [anon_sym_requirit] = ACTIONS(202),
    [anon_sym_scribe] = ACTIONS(202),
    [anon_sym_scriptum] = ACTIONS(202),
    [anon_sym_solum] = ACTIONS(202),
    [anon_sym_solum_in] = ACTIONS(202),
    [anon_sym_sparge] = ACTIONS(202),
    [anon_sym_sub] = ACTIONS(202),
    [anon_sym_tag] = ACTIONS(202),
    [anon_sym_temporis] = ACTIONS(202),
    [anon_sym_usque] = ACTIONS(202),
    [anon_sym_ut] = ACTIONS(202),
    [anon_sym_vel] = ACTIONS(202),
    [anon_sym_vide] = ACTIONS(202),
    [anon_sym_falsum] = ACTIONS(202),
    [anon_sym_verum] = ACTIONS(202),
    [sym_guillemet_string] = ACTIONS(200),
    [sym_octeti_string] = ACTIONS(200),
    [sym_backtick_string] = ACTIONS(200),
    [sym_ascii_string] = ACTIONS(200),
    [sym_string] = ACTIONS(200),
    [sym_number] = ACTIONS(200),
    [sym_identifier] = ACTIONS(202),
    [sym_operator] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(200),
    [sym_hash] = ACTIONS(200),
    [sym_line_comment] = ACTIONS(200),
    [sym_faber_newline] = ACTIONS(200),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_at_sign] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_cursor] = ACTIONS(158),
    [anon_sym_json] = ACTIONS(158),
    [anon_sym_privata] = ACTIONS(158),
    [anon_sym_protecta] = ACTIONS(158),
    [anon_sym_publica] = ACTIONS(158),
    [anon_sym_ascii] = ACTIONS(158),
    [anon_sym_bivalens] = ACTIONS(158),
    [anon_sym_copia] = ACTIONS(158),
    [anon_sym_f16] = ACTIONS(158),
    [anon_sym_f32] = ACTIONS(158),
    [anon_sym_f64] = ACTIONS(158),
    [anon_sym_fractus] = ACTIONS(158),
    [anon_sym_i16] = ACTIONS(158),
    [anon_sym_i32] = ACTIONS(158),
    [anon_sym_i64] = ACTIONS(158),
    [anon_sym_i8] = ACTIONS(158),
    [anon_sym_ignotum] = ACTIONS(158),
    [anon_sym_instans] = ACTIONS(158),
    [anon_sym_intervallum] = ACTIONS(158),
    [anon_sym_lf16] = ACTIONS(158),
    [anon_sym_lf32] = ACTIONS(158),
    [anon_sym_lf64] = ACTIONS(158),
    [anon_sym_li16] = ACTIONS(158),
    [anon_sym_li32] = ACTIONS(158),
    [anon_sym_li64] = ACTIONS(158),
    [anon_sym_li8] = ACTIONS(158),
    [anon_sym_lista] = ACTIONS(158),
    [anon_sym_lu16] = ACTIONS(158),
    [anon_sym_lu32] = ACTIONS(158),
    [anon_sym_lu64] = ACTIONS(158),
    [anon_sym_lu8] = ACTIONS(158),
    [anon_sym_matrix] = ACTIONS(158),
    [anon_sym_mf16] = ACTIONS(158),
    [anon_sym_mf32] = ACTIONS(158),
    [anon_sym_mf64] = ACTIONS(158),
    [anon_sym_mi16] = ACTIONS(158),
    [anon_sym_mi32] = ACTIONS(158),
    [anon_sym_mi64] = ACTIONS(158),
    [anon_sym_mi8] = ACTIONS(158),
    [anon_sym_mu16] = ACTIONS(158),
    [anon_sym_mu32] = ACTIONS(158),
    [anon_sym_mu64] = ACTIONS(158),
    [anon_sym_mu8] = ACTIONS(158),
    [anon_sym_numerus] = ACTIONS(158),
    [anon_sym_numquam] = ACTIONS(158),
    [anon_sym_octet] = ACTIONS(158),
    [anon_sym_octeti] = ACTIONS(158),
    [anon_sym_promissum] = ACTIONS(158),
    [anon_sym_regex] = ACTIONS(158),
    [anon_sym_series] = ACTIONS(158),
    [anon_sym_sf16] = ACTIONS(158),
    [anon_sym_sf32] = ACTIONS(158),
    [anon_sym_sf64] = ACTIONS(158),
    [anon_sym_si16] = ACTIONS(158),
    [anon_sym_si32] = ACTIONS(158),
    [anon_sym_si64] = ACTIONS(158),
    [anon_sym_si8] = ACTIONS(158),
    [anon_sym_sparsa] = ACTIONS(158),
    [anon_sym_su16] = ACTIONS(158),
    [anon_sym_su32] = ACTIONS(158),
    [anon_sym_su64] = ACTIONS(158),
    [anon_sym_su8] = ACTIONS(158),
    [anon_sym_tabula] = ACTIONS(158),
    [anon_sym_tensor] = ACTIONS(158),
    [anon_sym_textus] = ACTIONS(158),
    [anon_sym_tf16] = ACTIONS(158),
    [anon_sym_tf32] = ACTIONS(158),
    [anon_sym_tf64] = ACTIONS(158),
    [anon_sym_ti16] = ACTIONS(158),
    [anon_sym_ti32] = ACTIONS(158),
    [anon_sym_ti64] = ACTIONS(158),
    [anon_sym_ti8] = ACTIONS(158),
    [anon_sym_tu16] = ACTIONS(158),
    [anon_sym_tu32] = ACTIONS(158),
    [anon_sym_tu64] = ACTIONS(158),
    [anon_sym_tu8] = ACTIONS(158),
    [anon_sym_u16] = ACTIONS(158),
    [anon_sym_u32] = ACTIONS(158),
    [anon_sym_u64] = ACTIONS(158),
    [anon_sym_u8] = ACTIONS(158),
    [anon_sym_unio] = ACTIONS(158),
    [anon_sym_vacua] = ACTIONS(158),
    [anon_sym_vacuum] = ACTIONS(158),
    [anon_sym_valor] = ACTIONS(158),
    [anon_sym_vector] = ACTIONS(158),
    [anon_sym_vf16] = ACTIONS(158),
    [anon_sym_vf32] = ACTIONS(158),
    [anon_sym_vf64] = ACTIONS(158),
    [anon_sym_vi16] = ACTIONS(158),
    [anon_sym_vi32] = ACTIONS(158),
    [anon_sym_vi64] = ACTIONS(158),
    [anon_sym_vi8] = ACTIONS(158),
    [anon_sym_vu16] = ACTIONS(158),
    [anon_sym_vu32] = ACTIONS(158),
    [anon_sym_vu64] = ACTIONS(158),
    [anon_sym_vu8] = ACTIONS(158),
    [anon_sym_ad] = ACTIONS(158),
    [anon_sym_adfirma] = ACTIONS(158),
    [anon_sym_argumenta] = ACTIONS(158),
    [anon_sym_cape] = ACTIONS(158),
    [anon_sym_casu] = ACTIONS(158),
    [anon_sym_ceterum] = ACTIONS(158),
    [anon_sym_cura] = ACTIONS(158),
    [anon_sym_custodi] = ACTIONS(158),
    [anon_sym_demum] = ACTIONS(158),
    [anon_sym_discerne] = ACTIONS(158),
    [anon_sym_dum] = ACTIONS(158),
    [anon_sym_elige] = ACTIONS(158),
    [anon_sym_emitte] = ACTIONS(158),
    [anon_sym_ergo] = ACTIONS(158),
    [anon_sym_fac] = ACTIONS(158),
    [anon_sym_iace] = ACTIONS(158),
    [anon_sym_incipiet] = ACTIONS(158),
    [anon_sym_incipit] = ACTIONS(158),
    [anon_sym_itera] = ACTIONS(158),
    [anon_sym_mori] = ACTIONS(158),
    [anon_sym_perge] = ACTIONS(158),
    [anon_sym_redde] = ACTIONS(158),
    [anon_sym_rumpe] = ACTIONS(158),
    [anon_sym_secus] = ACTIONS(158),
    [anon_sym_si] = ACTIONS(158),
    [anon_sym_sic] = ACTIONS(158),
    [anon_sym_sin] = ACTIONS(158),
    [anon_sym_tacet] = ACTIONS(158),
    [anon_sym_tempta] = ACTIONS(158),
    [anon_sym_abstractus] = ACTIONS(158),
    [anon_sym_ceteri] = ACTIONS(158),
    [anon_sym_curata] = ACTIONS(158),
    [anon_sym_discretio] = ACTIONS(158),
    [anon_sym_errata] = ACTIONS(158),
    [anon_sym_exitus] = ACTIONS(158),
    [anon_sym_fixum] = ACTIONS(158),
    [anon_sym_functio] = ACTIONS(158),
    [anon_sym_generis] = ACTIONS(158),
    [anon_sym_genus] = ACTIONS(158),
    [anon_sym_iacit] = ACTIONS(158),
    [anon_sym_immutata] = ACTIONS(158),
    [anon_sym_implendum] = ACTIONS(158),
    [anon_sym_importa] = ACTIONS(158),
    [anon_sym_magnitudo] = ACTIONS(158),
    [anon_sym_nexum] = ACTIONS(158),
    [anon_sym_optiones] = ACTIONS(158),
    [anon_sym_ordo] = ACTIONS(158),
    [anon_sym_prae] = ACTIONS(158),
    [anon_sym_sit] = ACTIONS(158),
    [anon_sym_sponte] = ACTIONS(158),
    [anon_sym_typus] = ACTIONS(158),
    [anon_sym_varia] = ACTIONS(158),
    [anon_sym_ante] = ACTIONS(158),
    [anon_sym_aut] = ACTIONS(158),
    [anon_sym_cede] = ACTIONS(158),
    [anon_sym_clausura] = ACTIONS(158),
    [anon_sym_de] = ACTIONS(158),
    [anon_sym_ego] = ACTIONS(158),
    [anon_sym_est] = ACTIONS(158),
    [anon_sym_et] = ACTIONS(158),
    [anon_sym_ex] = ACTIONS(158),
    [anon_sym_finge] = ACTIONS(158),
    [anon_sym_fragilis] = ACTIONS(158),
    [anon_sym_futurum] = ACTIONS(158),
    [anon_sym_implet] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(158),
    [anon_sym_inter] = ACTIONS(158),
    [anon_sym_intra] = ACTIONS(158),
    [anon_sym_lege] = ACTIONS(158),
    [anon_sym_lineam] = ACTIONS(158),
    [anon_sym_metior] = ACTIONS(158),
    [anon_sym_modulus] = ACTIONS(158),
    [anon_sym_mone] = ACTIONS(158),
    [anon_sym_negativum] = ACTIONS(158),
    [anon_sym_nihil] = ACTIONS(158),
    [anon_sym_non] = ACTIONS(158),
    [anon_sym_nonnihil] = ACTIONS(158),
    [anon_sym_nonnulla] = ACTIONS(158),
    [anon_sym_nota] = ACTIONS(158),
    [anon_sym_nulla] = ACTIONS(158),
    [anon_sym_omitte] = ACTIONS(158),
    [anon_sym_omnia] = ACTIONS(158),
    [anon_sym_per] = ACTIONS(158),
    [anon_sym_positivum] = ACTIONS(158),
    [anon_sym_postpara] = ACTIONS(158),
    [anon_sym_postparabit] = ACTIONS(158),
    [anon_sym_praefixum] = ACTIONS(158),
    [anon_sym_praepara] = ACTIONS(158),
    [anon_sym_praeparabit] = ACTIONS(158),
    [anon_sym_pro] = ACTIONS(158),
    [anon_sym_proba] = ACTIONS(158),
    [anon_sym_probandum] = ACTIONS(158),
    [anon_sym_repete] = ACTIONS(158),
    [anon_sym_requirit] = ACTIONS(158),
    [anon_sym_scribe] = ACTIONS(158),
    [anon_sym_scriptum] = ACTIONS(158),
    [anon_sym_solum] = ACTIONS(158),
    [anon_sym_solum_in] = ACTIONS(158),
    [anon_sym_sparge] = ACTIONS(158),
    [anon_sym_sub] = ACTIONS(158),
    [anon_sym_tag] = ACTIONS(158),
    [anon_sym_temporis] = ACTIONS(158),
    [anon_sym_usque] = ACTIONS(158),
    [anon_sym_ut] = ACTIONS(158),
    [anon_sym_vel] = ACTIONS(158),
    [anon_sym_vide] = ACTIONS(158),
    [anon_sym_falsum] = ACTIONS(158),
    [anon_sym_verum] = ACTIONS(158),
    [sym_guillemet_string] = ACTIONS(156),
    [sym_octeti_string] = ACTIONS(156),
    [sym_backtick_string] = ACTIONS(156),
    [sym_ascii_string] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [sym_number] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
    [sym_operator] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_hash] = ACTIONS(156),
    [sym_line_comment] = ACTIONS(156),
    [sym_faber_newline] = ACTIONS(156),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_at_sign] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_cursor] = ACTIONS(206),
    [anon_sym_json] = ACTIONS(206),
    [anon_sym_privata] = ACTIONS(206),
    [anon_sym_protecta] = ACTIONS(206),
    [anon_sym_publica] = ACTIONS(206),
    [anon_sym_ascii] = ACTIONS(206),
    [anon_sym_bivalens] = ACTIONS(206),
    [anon_sym_copia] = ACTIONS(206),
    [anon_sym_f16] = ACTIONS(206),
    [anon_sym_f32] = ACTIONS(206),
    [anon_sym_f64] = ACTIONS(206),
    [anon_sym_fractus] = ACTIONS(206),
    [anon_sym_i16] = ACTIONS(206),
    [anon_sym_i32] = ACTIONS(206),
    [anon_sym_i64] = ACTIONS(206),
    [anon_sym_i8] = ACTIONS(206),
    [anon_sym_ignotum] = ACTIONS(206),
    [anon_sym_instans] = ACTIONS(206),
    [anon_sym_intervallum] = ACTIONS(206),
    [anon_sym_lf16] = ACTIONS(206),
    [anon_sym_lf32] = ACTIONS(206),
    [anon_sym_lf64] = ACTIONS(206),
    [anon_sym_li16] = ACTIONS(206),
    [anon_sym_li32] = ACTIONS(206),
    [anon_sym_li64] = ACTIONS(206),
    [anon_sym_li8] = ACTIONS(206),
    [anon_sym_lista] = ACTIONS(206),
    [anon_sym_lu16] = ACTIONS(206),
    [anon_sym_lu32] = ACTIONS(206),
    [anon_sym_lu64] = ACTIONS(206),
    [anon_sym_lu8] = ACTIONS(206),
    [anon_sym_matrix] = ACTIONS(206),
    [anon_sym_mf16] = ACTIONS(206),
    [anon_sym_mf32] = ACTIONS(206),
    [anon_sym_mf64] = ACTIONS(206),
    [anon_sym_mi16] = ACTIONS(206),
    [anon_sym_mi32] = ACTIONS(206),
    [anon_sym_mi64] = ACTIONS(206),
    [anon_sym_mi8] = ACTIONS(206),
    [anon_sym_mu16] = ACTIONS(206),
    [anon_sym_mu32] = ACTIONS(206),
    [anon_sym_mu64] = ACTIONS(206),
    [anon_sym_mu8] = ACTIONS(206),
    [anon_sym_numerus] = ACTIONS(206),
    [anon_sym_numquam] = ACTIONS(206),
    [anon_sym_octet] = ACTIONS(206),
    [anon_sym_octeti] = ACTIONS(206),
    [anon_sym_promissum] = ACTIONS(206),
    [anon_sym_regex] = ACTIONS(206),
    [anon_sym_series] = ACTIONS(206),
    [anon_sym_sf16] = ACTIONS(206),
    [anon_sym_sf32] = ACTIONS(206),
    [anon_sym_sf64] = ACTIONS(206),
    [anon_sym_si16] = ACTIONS(206),
    [anon_sym_si32] = ACTIONS(206),
    [anon_sym_si64] = ACTIONS(206),
    [anon_sym_si8] = ACTIONS(206),
    [anon_sym_sparsa] = ACTIONS(206),
    [anon_sym_su16] = ACTIONS(206),
    [anon_sym_su32] = ACTIONS(206),
    [anon_sym_su64] = ACTIONS(206),
    [anon_sym_su8] = ACTIONS(206),
    [anon_sym_tabula] = ACTIONS(206),
    [anon_sym_tensor] = ACTIONS(206),
    [anon_sym_textus] = ACTIONS(206),
    [anon_sym_tf16] = ACTIONS(206),
    [anon_sym_tf32] = ACTIONS(206),
    [anon_sym_tf64] = ACTIONS(206),
    [anon_sym_ti16] = ACTIONS(206),
    [anon_sym_ti32] = ACTIONS(206),
    [anon_sym_ti64] = ACTIONS(206),
    [anon_sym_ti8] = ACTIONS(206),
    [anon_sym_tu16] = ACTIONS(206),
    [anon_sym_tu32] = ACTIONS(206),
    [anon_sym_tu64] = ACTIONS(206),
    [anon_sym_tu8] = ACTIONS(206),
    [anon_sym_u16] = ACTIONS(206),
    [anon_sym_u32] = ACTIONS(206),
    [anon_sym_u64] = ACTIONS(206),
    [anon_sym_u8] = ACTIONS(206),
    [anon_sym_unio] = ACTIONS(206),
    [anon_sym_vacua] = ACTIONS(206),
    [anon_sym_vacuum] = ACTIONS(206),
    [anon_sym_valor] = ACTIONS(206),
    [anon_sym_vector] = ACTIONS(206),
    [anon_sym_vf16] = ACTIONS(206),
    [anon_sym_vf32] = ACTIONS(206),
    [anon_sym_vf64] = ACTIONS(206),
    [anon_sym_vi16] = ACTIONS(206),
    [anon_sym_vi32] = ACTIONS(206),
    [anon_sym_vi64] = ACTIONS(206),
    [anon_sym_vi8] = ACTIONS(206),
    [anon_sym_vu16] = ACTIONS(206),
    [anon_sym_vu32] = ACTIONS(206),
    [anon_sym_vu64] = ACTIONS(206),
    [anon_sym_vu8] = ACTIONS(206),
    [anon_sym_ad] = ACTIONS(206),
    [anon_sym_adfirma] = ACTIONS(206),
    [anon_sym_argumenta] = ACTIONS(206),
    [anon_sym_cape] = ACTIONS(206),
    [anon_sym_casu] = ACTIONS(206),
    [anon_sym_ceterum] = ACTIONS(206),
    [anon_sym_cura] = ACTIONS(206),
    [anon_sym_custodi] = ACTIONS(206),
    [anon_sym_demum] = ACTIONS(206),
    [anon_sym_discerne] = ACTIONS(206),
    [anon_sym_dum] = ACTIONS(206),
    [anon_sym_elige] = ACTIONS(206),
    [anon_sym_emitte] = ACTIONS(206),
    [anon_sym_ergo] = ACTIONS(206),
    [anon_sym_fac] = ACTIONS(206),
    [anon_sym_iace] = ACTIONS(206),
    [anon_sym_incipiet] = ACTIONS(206),
    [anon_sym_incipit] = ACTIONS(206),
    [anon_sym_itera] = ACTIONS(206),
    [anon_sym_mori] = ACTIONS(206),
    [anon_sym_perge] = ACTIONS(206),
    [anon_sym_redde] = ACTIONS(206),
    [anon_sym_rumpe] = ACTIONS(206),
    [anon_sym_secus] = ACTIONS(206),
    [anon_sym_si] = ACTIONS(206),
    [anon_sym_sic] = ACTIONS(206),
    [anon_sym_sin] = ACTIONS(206),
    [anon_sym_tacet] = ACTIONS(206),
    [anon_sym_tempta] = ACTIONS(206),
    [anon_sym_abstractus] = ACTIONS(206),
    [anon_sym_ceteri] = ACTIONS(206),
    [anon_sym_curata] = ACTIONS(206),
    [anon_sym_discretio] = ACTIONS(206),
    [anon_sym_errata] = ACTIONS(206),
    [anon_sym_exitus] = ACTIONS(206),
    [anon_sym_fixum] = ACTIONS(206),
    [anon_sym_functio] = ACTIONS(206),
    [anon_sym_generis] = ACTIONS(206),
    [anon_sym_genus] = ACTIONS(206),
    [anon_sym_iacit] = ACTIONS(206),
    [anon_sym_immutata] = ACTIONS(206),
    [anon_sym_implendum] = ACTIONS(206),
    [anon_sym_importa] = ACTIONS(206),
    [anon_sym_magnitudo] = ACTIONS(206),
    [anon_sym_nexum] = ACTIONS(206),
    [anon_sym_optiones] = ACTIONS(206),
    [anon_sym_ordo] = ACTIONS(206),
    [anon_sym_prae] = ACTIONS(206),
    [anon_sym_sit] = ACTIONS(206),
    [anon_sym_sponte] = ACTIONS(206),
    [anon_sym_typus] = ACTIONS(206),
    [anon_sym_varia] = ACTIONS(206),
    [anon_sym_ante] = ACTIONS(206),
    [anon_sym_aut] = ACTIONS(206),
    [anon_sym_cede] = ACTIONS(206),
    [anon_sym_clausura] = ACTIONS(206),
    [anon_sym_de] = ACTIONS(206),
    [anon_sym_ego] = ACTIONS(206),
    [anon_sym_est] = ACTIONS(206),
    [anon_sym_et] = ACTIONS(206),
    [anon_sym_ex] = ACTIONS(206),
    [anon_sym_finge] = ACTIONS(206),
    [anon_sym_fragilis] = ACTIONS(206),
    [anon_sym_futurum] = ACTIONS(206),
    [anon_sym_implet] = ACTIONS(206),
    [anon_sym_in] = ACTIONS(206),
    [anon_sym_inter] = ACTIONS(206),
    [anon_sym_intra] = ACTIONS(206),
    [anon_sym_lege] = ACTIONS(206),
    [anon_sym_lineam] = ACTIONS(206),
    [anon_sym_metior] = ACTIONS(206),
    [anon_sym_modulus] = ACTIONS(206),
    [anon_sym_mone] = ACTIONS(206),
    [anon_sym_negativum] = ACTIONS(206),
    [anon_sym_nihil] = ACTIONS(206),
    [anon_sym_non] = ACTIONS(206),
    [anon_sym_nonnihil] = ACTIONS(206),
    [anon_sym_nonnulla] = ACTIONS(206),
    [anon_sym_nota] = ACTIONS(206),
    [anon_sym_nulla] = ACTIONS(206),
    [anon_sym_omitte] = ACTIONS(206),
    [anon_sym_omnia] = ACTIONS(206),
    [anon_sym_per] = ACTIONS(206),
    [anon_sym_positivum] = ACTIONS(206),
    [anon_sym_postpara] = ACTIONS(206),
    [anon_sym_postparabit] = ACTIONS(206),
    [anon_sym_praefixum] = ACTIONS(206),
    [anon_sym_praepara] = ACTIONS(206),
    [anon_sym_praeparabit] = ACTIONS(206),
    [anon_sym_pro] = ACTIONS(206),
    [anon_sym_proba] = ACTIONS(206),
    [anon_sym_probandum] = ACTIONS(206),
    [anon_sym_repete] = ACTIONS(206),
    [anon_sym_requirit] = ACTIONS(206),
    [anon_sym_scribe] = ACTIONS(206),
    [anon_sym_scriptum] = ACTIONS(206),
    [anon_sym_solum] = ACTIONS(206),
    [anon_sym_solum_in] = ACTIONS(206),
    [anon_sym_sparge] = ACTIONS(206),
    [anon_sym_sub] = ACTIONS(206),
    [anon_sym_tag] = ACTIONS(206),
    [anon_sym_temporis] = ACTIONS(206),
    [anon_sym_usque] = ACTIONS(206),
    [anon_sym_ut] = ACTIONS(206),
    [anon_sym_vel] = ACTIONS(206),
    [anon_sym_vide] = ACTIONS(206),
    [anon_sym_falsum] = ACTIONS(206),
    [anon_sym_verum] = ACTIONS(206),
    [sym_guillemet_string] = ACTIONS(204),
    [sym_octeti_string] = ACTIONS(204),
    [sym_backtick_string] = ACTIONS(204),
    [sym_ascii_string] = ACTIONS(204),
    [sym_string] = ACTIONS(204),
    [sym_number] = ACTIONS(204),
    [sym_identifier] = ACTIONS(206),
    [sym_operator] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [sym_hash] = ACTIONS(204),
    [sym_line_comment] = ACTIONS(204),
    [sym_faber_newline] = ACTIONS(204),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_at_sign] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_cursor] = ACTIONS(162),
    [anon_sym_json] = ACTIONS(162),
    [anon_sym_privata] = ACTIONS(162),
    [anon_sym_protecta] = ACTIONS(162),
    [anon_sym_publica] = ACTIONS(162),
    [anon_sym_ascii] = ACTIONS(162),
    [anon_sym_bivalens] = ACTIONS(162),
    [anon_sym_copia] = ACTIONS(162),
    [anon_sym_f16] = ACTIONS(162),
    [anon_sym_f32] = ACTIONS(162),
    [anon_sym_f64] = ACTIONS(162),
    [anon_sym_fractus] = ACTIONS(162),
    [anon_sym_i16] = ACTIONS(162),
    [anon_sym_i32] = ACTIONS(162),
    [anon_sym_i64] = ACTIONS(162),
    [anon_sym_i8] = ACTIONS(162),
    [anon_sym_ignotum] = ACTIONS(162),
    [anon_sym_instans] = ACTIONS(162),
    [anon_sym_intervallum] = ACTIONS(162),
    [anon_sym_lf16] = ACTIONS(162),
    [anon_sym_lf32] = ACTIONS(162),
    [anon_sym_lf64] = ACTIONS(162),
    [anon_sym_li16] = ACTIONS(162),
    [anon_sym_li32] = ACTIONS(162),
    [anon_sym_li64] = ACTIONS(162),
    [anon_sym_li8] = ACTIONS(162),
    [anon_sym_lista] = ACTIONS(162),
    [anon_sym_lu16] = ACTIONS(162),
    [anon_sym_lu32] = ACTIONS(162),
    [anon_sym_lu64] = ACTIONS(162),
    [anon_sym_lu8] = ACTIONS(162),
    [anon_sym_matrix] = ACTIONS(162),
    [anon_sym_mf16] = ACTIONS(162),
    [anon_sym_mf32] = ACTIONS(162),
    [anon_sym_mf64] = ACTIONS(162),
    [anon_sym_mi16] = ACTIONS(162),
    [anon_sym_mi32] = ACTIONS(162),
    [anon_sym_mi64] = ACTIONS(162),
    [anon_sym_mi8] = ACTIONS(162),
    [anon_sym_mu16] = ACTIONS(162),
    [anon_sym_mu32] = ACTIONS(162),
    [anon_sym_mu64] = ACTIONS(162),
    [anon_sym_mu8] = ACTIONS(162),
    [anon_sym_numerus] = ACTIONS(162),
    [anon_sym_numquam] = ACTIONS(162),
    [anon_sym_octet] = ACTIONS(162),
    [anon_sym_octeti] = ACTIONS(162),
    [anon_sym_promissum] = ACTIONS(162),
    [anon_sym_regex] = ACTIONS(162),
    [anon_sym_series] = ACTIONS(162),
    [anon_sym_sf16] = ACTIONS(162),
    [anon_sym_sf32] = ACTIONS(162),
    [anon_sym_sf64] = ACTIONS(162),
    [anon_sym_si16] = ACTIONS(162),
    [anon_sym_si32] = ACTIONS(162),
    [anon_sym_si64] = ACTIONS(162),
    [anon_sym_si8] = ACTIONS(162),
    [anon_sym_sparsa] = ACTIONS(162),
    [anon_sym_su16] = ACTIONS(162),
    [anon_sym_su32] = ACTIONS(162),
    [anon_sym_su64] = ACTIONS(162),
    [anon_sym_su8] = ACTIONS(162),
    [anon_sym_tabula] = ACTIONS(162),
    [anon_sym_tensor] = ACTIONS(162),
    [anon_sym_textus] = ACTIONS(162),
    [anon_sym_tf16] = ACTIONS(162),
    [anon_sym_tf32] = ACTIONS(162),
    [anon_sym_tf64] = ACTIONS(162),
    [anon_sym_ti16] = ACTIONS(162),
    [anon_sym_ti32] = ACTIONS(162),
    [anon_sym_ti64] = ACTIONS(162),
    [anon_sym_ti8] = ACTIONS(162),
    [anon_sym_tu16] = ACTIONS(162),
    [anon_sym_tu32] = ACTIONS(162),
    [anon_sym_tu64] = ACTIONS(162),
    [anon_sym_tu8] = ACTIONS(162),
    [anon_sym_u16] = ACTIONS(162),
    [anon_sym_u32] = ACTIONS(162),
    [anon_sym_u64] = ACTIONS(162),
    [anon_sym_u8] = ACTIONS(162),
    [anon_sym_unio] = ACTIONS(162),
    [anon_sym_vacua] = ACTIONS(162),
    [anon_sym_vacuum] = ACTIONS(162),
    [anon_sym_valor] = ACTIONS(162),
    [anon_sym_vector] = ACTIONS(162),
    [anon_sym_vf16] = ACTIONS(162),
    [anon_sym_vf32] = ACTIONS(162),
    [anon_sym_vf64] = ACTIONS(162),
    [anon_sym_vi16] = ACTIONS(162),
    [anon_sym_vi32] = ACTIONS(162),
    [anon_sym_vi64] = ACTIONS(162),
    [anon_sym_vi8] = ACTIONS(162),
    [anon_sym_vu16] = ACTIONS(162),
    [anon_sym_vu32] = ACTIONS(162),
    [anon_sym_vu64] = ACTIONS(162),
    [anon_sym_vu8] = ACTIONS(162),
    [anon_sym_ad] = ACTIONS(162),
    [anon_sym_adfirma] = ACTIONS(162),
    [anon_sym_argumenta] = ACTIONS(162),
    [anon_sym_cape] = ACTIONS(162),
    [anon_sym_casu] = ACTIONS(162),
    [anon_sym_ceterum] = ACTIONS(162),
    [anon_sym_cura] = ACTIONS(162),
    [anon_sym_custodi] = ACTIONS(162),
    [anon_sym_demum] = ACTIONS(162),
    [anon_sym_discerne] = ACTIONS(162),
    [anon_sym_dum] = ACTIONS(162),
    [anon_sym_elige] = ACTIONS(162),
    [anon_sym_emitte] = ACTIONS(162),
    [anon_sym_ergo] = ACTIONS(162),
    [anon_sym_fac] = ACTIONS(162),
    [anon_sym_iace] = ACTIONS(162),
    [anon_sym_incipiet] = ACTIONS(162),
    [anon_sym_incipit] = ACTIONS(162),
    [anon_sym_itera] = ACTIONS(162),
    [anon_sym_mori] = ACTIONS(162),
    [anon_sym_perge] = ACTIONS(162),
    [anon_sym_redde] = ACTIONS(162),
    [anon_sym_rumpe] = ACTIONS(162),
    [anon_sym_secus] = ACTIONS(162),
    [anon_sym_si] = ACTIONS(162),
    [anon_sym_sic] = ACTIONS(162),
    [anon_sym_sin] = ACTIONS(162),
    [anon_sym_tacet] = ACTIONS(162),
    [anon_sym_tempta] = ACTIONS(162),
    [anon_sym_abstractus] = ACTIONS(162),
    [anon_sym_ceteri] = ACTIONS(162),
    [anon_sym_curata] = ACTIONS(162),
    [anon_sym_discretio] = ACTIONS(162),
    [anon_sym_errata] = ACTIONS(162),
    [anon_sym_exitus] = ACTIONS(162),
    [anon_sym_fixum] = ACTIONS(162),
    [anon_sym_functio] = ACTIONS(162),
    [anon_sym_generis] = ACTIONS(162),
    [anon_sym_genus] = ACTIONS(162),
    [anon_sym_iacit] = ACTIONS(162),
    [anon_sym_immutata] = ACTIONS(162),
    [anon_sym_implendum] = ACTIONS(162),
    [anon_sym_importa] = ACTIONS(162),
    [anon_sym_magnitudo] = ACTIONS(162),
    [anon_sym_nexum] = ACTIONS(162),
    [anon_sym_optiones] = ACTIONS(162),
    [anon_sym_ordo] = ACTIONS(162),
    [anon_sym_prae] = ACTIONS(162),
    [anon_sym_sit] = ACTIONS(162),
    [anon_sym_sponte] = ACTIONS(162),
    [anon_sym_typus] = ACTIONS(162),
    [anon_sym_varia] = ACTIONS(162),
    [anon_sym_ante] = ACTIONS(162),
    [anon_sym_aut] = ACTIONS(162),
    [anon_sym_cede] = ACTIONS(162),
    [anon_sym_clausura] = ACTIONS(162),
    [anon_sym_de] = ACTIONS(162),
    [anon_sym_ego] = ACTIONS(162),
    [anon_sym_est] = ACTIONS(162),
    [anon_sym_et] = ACTIONS(162),
    [anon_sym_ex] = ACTIONS(162),
    [anon_sym_finge] = ACTIONS(162),
    [anon_sym_fragilis] = ACTIONS(162),
    [anon_sym_futurum] = ACTIONS(162),
    [anon_sym_implet] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_inter] = ACTIONS(162),
    [anon_sym_intra] = ACTIONS(162),
    [anon_sym_lege] = ACTIONS(162),
    [anon_sym_lineam] = ACTIONS(162),
    [anon_sym_metior] = ACTIONS(162),
    [anon_sym_modulus] = ACTIONS(162),
    [anon_sym_mone] = ACTIONS(162),
    [anon_sym_negativum] = ACTIONS(162),
    [anon_sym_nihil] = ACTIONS(162),
    [anon_sym_non] = ACTIONS(162),
    [anon_sym_nonnihil] = ACTIONS(162),
    [anon_sym_nonnulla] = ACTIONS(162),
    [anon_sym_nota] = ACTIONS(162),
    [anon_sym_nulla] = ACTIONS(162),
    [anon_sym_omitte] = ACTIONS(162),
    [anon_sym_omnia] = ACTIONS(162),
    [anon_sym_per] = ACTIONS(162),
    [anon_sym_positivum] = ACTIONS(162),
    [anon_sym_postpara] = ACTIONS(162),
    [anon_sym_postparabit] = ACTIONS(162),
    [anon_sym_praefixum] = ACTIONS(162),
    [anon_sym_praepara] = ACTIONS(162),
    [anon_sym_praeparabit] = ACTIONS(162),
    [anon_sym_pro] = ACTIONS(162),
    [anon_sym_proba] = ACTIONS(162),
    [anon_sym_probandum] = ACTIONS(162),
    [anon_sym_repete] = ACTIONS(162),
    [anon_sym_requirit] = ACTIONS(162),
    [anon_sym_scribe] = ACTIONS(162),
    [anon_sym_scriptum] = ACTIONS(162),
    [anon_sym_solum] = ACTIONS(162),
    [anon_sym_solum_in] = ACTIONS(162),
    [anon_sym_sparge] = ACTIONS(162),
    [anon_sym_sub] = ACTIONS(162),
    [anon_sym_tag] = ACTIONS(162),
    [anon_sym_temporis] = ACTIONS(162),
    [anon_sym_usque] = ACTIONS(162),
    [anon_sym_ut] = ACTIONS(162),
    [anon_sym_vel] = ACTIONS(162),
    [anon_sym_vide] = ACTIONS(162),
    [anon_sym_falsum] = ACTIONS(162),
    [anon_sym_verum] = ACTIONS(162),
    [sym_guillemet_string] = ACTIONS(160),
    [sym_octeti_string] = ACTIONS(160),
    [sym_backtick_string] = ACTIONS(160),
    [sym_ascii_string] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [sym_number] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [sym_operator] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_hash] = ACTIONS(160),
    [sym_line_comment] = ACTIONS(160),
    [sym_faber_newline] = ACTIONS(160),
  },
  [29] = {
    [sym_annotation_value_type] = STATE(46),
    [sym_boolean] = STATE(46),
    [anon_sym_ascii] = ACTIONS(208),
    [anon_sym_bivalens] = ACTIONS(208),
    [anon_sym_copia] = ACTIONS(208),
    [anon_sym_f16] = ACTIONS(208),
    [anon_sym_f32] = ACTIONS(208),
    [anon_sym_f64] = ACTIONS(208),
    [anon_sym_fractus] = ACTIONS(208),
    [anon_sym_i16] = ACTIONS(208),
    [anon_sym_i32] = ACTIONS(208),
    [anon_sym_i64] = ACTIONS(208),
    [anon_sym_i8] = ACTIONS(208),
    [anon_sym_ignotum] = ACTIONS(208),
    [anon_sym_instans] = ACTIONS(208),
    [anon_sym_intervallum] = ACTIONS(208),
    [anon_sym_lf16] = ACTIONS(208),
    [anon_sym_lf32] = ACTIONS(208),
    [anon_sym_lf64] = ACTIONS(208),
    [anon_sym_li16] = ACTIONS(208),
    [anon_sym_li32] = ACTIONS(208),
    [anon_sym_li64] = ACTIONS(208),
    [anon_sym_li8] = ACTIONS(208),
    [anon_sym_lista] = ACTIONS(208),
    [anon_sym_lu16] = ACTIONS(208),
    [anon_sym_lu32] = ACTIONS(208),
    [anon_sym_lu64] = ACTIONS(208),
    [anon_sym_lu8] = ACTIONS(208),
    [anon_sym_matrix] = ACTIONS(208),
    [anon_sym_mf16] = ACTIONS(208),
    [anon_sym_mf32] = ACTIONS(208),
    [anon_sym_mf64] = ACTIONS(208),
    [anon_sym_mi16] = ACTIONS(208),
    [anon_sym_mi32] = ACTIONS(208),
    [anon_sym_mi64] = ACTIONS(208),
    [anon_sym_mi8] = ACTIONS(208),
    [anon_sym_mu16] = ACTIONS(208),
    [anon_sym_mu32] = ACTIONS(208),
    [anon_sym_mu64] = ACTIONS(208),
    [anon_sym_mu8] = ACTIONS(208),
    [anon_sym_numerus] = ACTIONS(208),
    [anon_sym_numquam] = ACTIONS(208),
    [anon_sym_octet] = ACTIONS(208),
    [anon_sym_octeti] = ACTIONS(208),
    [anon_sym_promissum] = ACTIONS(208),
    [anon_sym_regex] = ACTIONS(208),
    [anon_sym_series] = ACTIONS(208),
    [anon_sym_sf16] = ACTIONS(208),
    [anon_sym_sf32] = ACTIONS(208),
    [anon_sym_sf64] = ACTIONS(208),
    [anon_sym_si16] = ACTIONS(208),
    [anon_sym_si32] = ACTIONS(208),
    [anon_sym_si64] = ACTIONS(208),
    [anon_sym_si8] = ACTIONS(208),
    [anon_sym_sparsa] = ACTIONS(208),
    [anon_sym_su16] = ACTIONS(208),
    [anon_sym_su32] = ACTIONS(208),
    [anon_sym_su64] = ACTIONS(208),
    [anon_sym_su8] = ACTIONS(208),
    [anon_sym_tabula] = ACTIONS(208),
    [anon_sym_tensor] = ACTIONS(208),
    [anon_sym_textus] = ACTIONS(208),
    [anon_sym_tf16] = ACTIONS(208),
    [anon_sym_tf32] = ACTIONS(208),
    [anon_sym_tf64] = ACTIONS(208),
    [anon_sym_ti16] = ACTIONS(208),
    [anon_sym_ti32] = ACTIONS(208),
    [anon_sym_ti64] = ACTIONS(208),
    [anon_sym_ti8] = ACTIONS(208),
    [anon_sym_tu16] = ACTIONS(208),
    [anon_sym_tu32] = ACTIONS(208),
    [anon_sym_tu64] = ACTIONS(208),
    [anon_sym_tu8] = ACTIONS(208),
    [anon_sym_u16] = ACTIONS(208),
    [anon_sym_u32] = ACTIONS(208),
    [anon_sym_u64] = ACTIONS(208),
    [anon_sym_u8] = ACTIONS(208),
    [anon_sym_unio] = ACTIONS(208),
    [anon_sym_vacua] = ACTIONS(208),
    [anon_sym_vacuum] = ACTIONS(208),
    [anon_sym_valor] = ACTIONS(208),
    [anon_sym_vector] = ACTIONS(208),
    [anon_sym_vf16] = ACTIONS(208),
    [anon_sym_vf32] = ACTIONS(208),
    [anon_sym_vf64] = ACTIONS(208),
    [anon_sym_vi16] = ACTIONS(208),
    [anon_sym_vi32] = ACTIONS(208),
    [anon_sym_vi64] = ACTIONS(208),
    [anon_sym_vi8] = ACTIONS(208),
    [anon_sym_vu16] = ACTIONS(208),
    [anon_sym_vu32] = ACTIONS(208),
    [anon_sym_vu64] = ACTIONS(208),
    [anon_sym_vu8] = ACTIONS(208),
    [anon_sym_falsum] = ACTIONS(210),
    [anon_sym_verum] = ACTIONS(210),
    [sym_guillemet_string] = ACTIONS(212),
    [sym_octeti_string] = ACTIONS(212),
    [sym_backtick_string] = ACTIONS(212),
    [sym_ascii_string] = ACTIONS(212),
    [sym_string] = ACTIONS(212),
    [sym_number] = ACTIONS(212),
    [sym_identifier] = ACTIONS(214),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(2), 1,
      sym_annotation_name,
    STATE(12), 1,
      sym_known_annotation_name,
    ACTIONS(216), 13,
      anon_sym_cli,
      anon_sym_cursor,
      anon_sym_futura,
      anon_sym_imperia,
      anon_sym_imperium,
      anon_sym_json,
      anon_sym_operandus,
      anon_sym_optio,
      anon_sym_privata,
      anon_sym_protecta,
      anon_sym_publica,
      anon_sym_versio,
      anon_sym_vertex,
  [25] = 9,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_faber_newline,
    STATE(22), 1,
      sym_rbrace,
    STATE(41), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [58] = 9,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_faber_newline,
    STATE(20), 1,
      sym_rbrace,
    STATE(40), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(31), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [91] = 9,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(45), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [124] = 9,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_faber_newline,
    STATE(24), 1,
      sym_rbrace,
    STATE(45), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [157] = 9,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_faber_newline,
    STATE(16), 1,
      sym_rbrace,
    STATE(45), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [190] = 7,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_faber_newline,
    STATE(45), 1,
      sym_annotation_field,
    STATE(49), 1,
      sym_annotation_modifier,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(224), 5,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
  [217] = 5,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      sym_faber_newline,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(237), 6,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
      sym_identifier,
  [239] = 2,
    ACTIONS(242), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(244), 6,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
      sym_identifier,
  [253] = 2,
    ACTIONS(246), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(248), 6,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_longum,
      anon_sym_nomen,
      anon_sym_ubique,
      sym_identifier,
  [267] = 6,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      sym_faber_newline,
    STATE(22), 1,
      sym_rbrace,
    STATE(43), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(33), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [287] = 6,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(42), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(35), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [307] = 6,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym_faber_newline,
    STATE(16), 1,
      sym_rbrace,
    STATE(44), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(34), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [327] = 6,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(44), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(35), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [347] = 5,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_faber_newline,
    STATE(44), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(36), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [364] = 1,
    ACTIONS(256), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [370] = 1,
    ACTIONS(264), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [376] = 1,
    ACTIONS(140), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [382] = 1,
    ACTIONS(164), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [388] = 1,
    ACTIONS(266), 1,
      sym_eq_sign,
  [392] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [396] = 1,
    ACTIONS(144), 1,
      sym_eq_sign,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 25,
  [SMALL_STATE(32)] = 58,
  [SMALL_STATE(33)] = 91,
  [SMALL_STATE(34)] = 124,
  [SMALL_STATE(35)] = 157,
  [SMALL_STATE(36)] = 190,
  [SMALL_STATE(37)] = 217,
  [SMALL_STATE(38)] = 239,
  [SMALL_STATE(39)] = 253,
  [SMALL_STATE(40)] = 267,
  [SMALL_STATE(41)] = 287,
  [SMALL_STATE(42)] = 307,
  [SMALL_STATE(43)] = 327,
  [SMALL_STATE(44)] = 347,
  [SMALL_STATE(45)] = 364,
  [SMALL_STATE(46)] = 370,
  [SMALL_STATE(47)] = 376,
  [SMALL_STATE(48)] = 382,
  [SMALL_STATE(49)] = 388,
  [SMALL_STATE(50)] = 392,
  [SMALL_STATE(51)] = 396,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(38),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(14),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(4),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(13),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(14),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(15),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(3),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value_type, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_value_type, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_modifier, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_modifier, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_annotation_name, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_annotation_name, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, 0, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rbrace, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rbrace, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 6, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 6, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lbrace, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lbrace, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_sign, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma_sign, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0), SHIFT_REPEAT(39),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_field, 3, 0, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_comment = 0,
  ts_external_token_faber_newline = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_faber_newline] = sym_faber_newline,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_comment] = true,
    [ts_external_token_faber_newline] = true,
  },
  [2] = {
    [ts_external_token_faber_newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_faber_external_scanner_create(void);
void tree_sitter_faber_external_scanner_destroy(void *);
bool tree_sitter_faber_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_faber_external_scanner_serialize(void *, char *);
void tree_sitter_faber_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_faber(void) {
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
      tree_sitter_faber_external_scanner_create,
      tree_sitter_faber_external_scanner_destroy,
      tree_sitter_faber_external_scanner_scan,
      tree_sitter_faber_external_scanner_serialize,
      tree_sitter_faber_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
