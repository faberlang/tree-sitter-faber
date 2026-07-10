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
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 0
#define TOKEN_COUNT 226
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_frontmatter = 1,
  anon_sym_ad = 2,
  anon_sym_adfirma = 3,
  anon_sym_argumenta = 4,
  anon_sym_cape = 5,
  anon_sym_casu = 6,
  anon_sym_ceterum = 7,
  anon_sym_cura = 8,
  anon_sym_custodi = 9,
  anon_sym_demum = 10,
  anon_sym_discerne = 11,
  anon_sym_dum = 12,
  anon_sym_elige = 13,
  anon_sym_emitte = 14,
  anon_sym_ergo = 15,
  anon_sym_fac = 16,
  anon_sym_iace = 17,
  anon_sym_incipiet = 18,
  anon_sym_incipit = 19,
  anon_sym_itera = 20,
  anon_sym_mori = 21,
  anon_sym_perge = 22,
  anon_sym_redde = 23,
  anon_sym_rumpe = 24,
  anon_sym_secus = 25,
  anon_sym_si = 26,
  anon_sym_sic = 27,
  anon_sym_sin = 28,
  anon_sym_tacet = 29,
  anon_sym_tempta = 30,
  anon_sym_abstractus = 31,
  anon_sym_ceteri = 32,
  anon_sym_curata = 33,
  anon_sym_discretio = 34,
  anon_sym_errata = 35,
  anon_sym_exitus = 36,
  anon_sym_fixum = 37,
  anon_sym_functio = 38,
  anon_sym_generis = 39,
  anon_sym_genus = 40,
  anon_sym_iacit = 41,
  anon_sym_immutata = 42,
  anon_sym_implendum = 43,
  anon_sym_importa = 44,
  anon_sym_magnitudo = 45,
  anon_sym_nexum = 46,
  anon_sym_optiones = 47,
  anon_sym_ordo = 48,
  anon_sym_prae = 49,
  anon_sym_privata = 50,
  anon_sym_protecta = 51,
  anon_sym_publica = 52,
  anon_sym_sit = 53,
  anon_sym_sponte = 54,
  anon_sym_typus = 55,
  anon_sym_varia = 56,
  anon_sym_ante = 57,
  anon_sym_aut = 58,
  anon_sym_cede = 59,
  anon_sym_clausura = 60,
  anon_sym_de = 61,
  anon_sym_ego = 62,
  anon_sym_est = 63,
  anon_sym_et = 64,
  anon_sym_ex = 65,
  anon_sym_finge = 66,
  anon_sym_fragilis = 67,
  anon_sym_futurum = 68,
  anon_sym_implet = 69,
  anon_sym_in = 70,
  anon_sym_inter = 71,
  anon_sym_intra = 72,
  anon_sym_lege = 73,
  anon_sym_lineam = 74,
  anon_sym_metior = 75,
  anon_sym_modulus = 76,
  anon_sym_mone = 77,
  anon_sym_negativum = 78,
  anon_sym_non = 79,
  anon_sym_nonnihil = 80,
  anon_sym_nonnulla = 81,
  anon_sym_nota = 82,
  anon_sym_nulla = 83,
  anon_sym_omitte = 84,
  anon_sym_omnia = 85,
  anon_sym_per = 86,
  anon_sym_positivum = 87,
  anon_sym_postpara = 88,
  anon_sym_postparabit = 89,
  anon_sym_praefixum = 90,
  anon_sym_praepara = 91,
  anon_sym_praeparabit = 92,
  anon_sym_pro = 93,
  anon_sym_proba = 94,
  anon_sym_probandum = 95,
  anon_sym_repete = 96,
  anon_sym_requirit = 97,
  anon_sym_scribe = 98,
  anon_sym_scriptum = 99,
  anon_sym_solum = 100,
  anon_sym_solum_in = 101,
  anon_sym_sparge = 102,
  anon_sym_sub = 103,
  anon_sym_tag = 104,
  anon_sym_temporis = 105,
  anon_sym_usque = 106,
  anon_sym_ut = 107,
  anon_sym_vel = 108,
  anon_sym_vide = 109,
  anon_sym_ascii = 110,
  anon_sym_bivalens = 111,
  anon_sym_copia = 112,
  anon_sym_cursor = 113,
  anon_sym_f16 = 114,
  anon_sym_f32 = 115,
  anon_sym_f64 = 116,
  anon_sym_fractus = 117,
  anon_sym_i16 = 118,
  anon_sym_i32 = 119,
  anon_sym_i64 = 120,
  anon_sym_i8 = 121,
  anon_sym_ignotum = 122,
  anon_sym_instans = 123,
  anon_sym_intervallum = 124,
  anon_sym_json = 125,
  anon_sym_lf16 = 126,
  anon_sym_lf32 = 127,
  anon_sym_lf64 = 128,
  anon_sym_li16 = 129,
  anon_sym_li32 = 130,
  anon_sym_li64 = 131,
  anon_sym_li8 = 132,
  anon_sym_lista = 133,
  anon_sym_lu16 = 134,
  anon_sym_lu32 = 135,
  anon_sym_lu64 = 136,
  anon_sym_lu8 = 137,
  anon_sym_matrix = 138,
  anon_sym_mf16 = 139,
  anon_sym_mf32 = 140,
  anon_sym_mf64 = 141,
  anon_sym_mi16 = 142,
  anon_sym_mi32 = 143,
  anon_sym_mi64 = 144,
  anon_sym_mi8 = 145,
  anon_sym_mu16 = 146,
  anon_sym_mu32 = 147,
  anon_sym_mu64 = 148,
  anon_sym_mu8 = 149,
  anon_sym_nihil = 150,
  anon_sym_numerus = 151,
  anon_sym_numquam = 152,
  anon_sym_octet = 153,
  anon_sym_octeti = 154,
  anon_sym_promissum = 155,
  anon_sym_regex = 156,
  anon_sym_series = 157,
  anon_sym_sf16 = 158,
  anon_sym_sf32 = 159,
  anon_sym_sf64 = 160,
  anon_sym_si16 = 161,
  anon_sym_si32 = 162,
  anon_sym_si64 = 163,
  anon_sym_si8 = 164,
  anon_sym_sparsa = 165,
  anon_sym_su16 = 166,
  anon_sym_su32 = 167,
  anon_sym_su64 = 168,
  anon_sym_su8 = 169,
  anon_sym_tabula = 170,
  anon_sym_tensor = 171,
  anon_sym_textus = 172,
  anon_sym_tf16 = 173,
  anon_sym_tf32 = 174,
  anon_sym_tf64 = 175,
  anon_sym_ti16 = 176,
  anon_sym_ti32 = 177,
  anon_sym_ti64 = 178,
  anon_sym_ti8 = 179,
  anon_sym_tu16 = 180,
  anon_sym_tu32 = 181,
  anon_sym_tu64 = 182,
  anon_sym_tu8 = 183,
  anon_sym_u16 = 184,
  anon_sym_u32 = 185,
  anon_sym_u64 = 186,
  anon_sym_u8 = 187,
  anon_sym_unio = 188,
  anon_sym_vacua = 189,
  anon_sym_vacuum = 190,
  anon_sym_valor = 191,
  anon_sym_vector = 192,
  anon_sym_vf16 = 193,
  anon_sym_vf32 = 194,
  anon_sym_vf64 = 195,
  anon_sym_vi16 = 196,
  anon_sym_vi32 = 197,
  anon_sym_vi64 = 198,
  anon_sym_vi8 = 199,
  anon_sym_vu16 = 200,
  anon_sym_vu32 = 201,
  anon_sym_vu64 = 202,
  anon_sym_vu8 = 203,
  anon_sym_falsum = 204,
  anon_sym_verum = 205,
  sym_guillemet_string = 206,
  sym_octeti_string = 207,
  sym_backtick_string = 208,
  sym_ascii_string = 209,
  sym_string = 210,
  sym_number = 211,
  sym_identifier = 212,
  sym_operator = 213,
  anon_sym_LPAREN = 214,
  anon_sym_RPAREN = 215,
  anon_sym_LBRACE = 216,
  anon_sym_RBRACE = 217,
  anon_sym_LBRACK = 218,
  anon_sym_RBRACK = 219,
  anon_sym_COMMA = 220,
  anon_sym_COLON = 221,
  anon_sym_SEMI = 222,
  sym_hash = 223,
  sym_line_comment = 224,
  sym_faber_newline = 225,
  sym_program = 226,
  sym__token = 227,
  sym_keyword_control = 228,
  sym_keyword_declaration = 229,
  sym_keyword_other = 230,
  sym_builtin_type = 231,
  sym_boolean = 232,
  sym_punctuation = 233,
  aux_sym_program_repeat1 = 234,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_frontmatter] = "frontmatter",
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
  [anon_sym_privata] = "privata",
  [anon_sym_protecta] = "protecta",
  [anon_sym_publica] = "publica",
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
  [anon_sym_ascii] = "ascii",
  [anon_sym_bivalens] = "bivalens",
  [anon_sym_copia] = "copia",
  [anon_sym_cursor] = "cursor",
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
  [anon_sym_json] = "json",
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
  [anon_sym_nihil] = "nihil",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_hash] = "hash",
  [sym_line_comment] = "line_comment",
  [sym_faber_newline] = "faber_newline",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym_keyword_control] = "keyword_control",
  [sym_keyword_declaration] = "keyword_declaration",
  [sym_keyword_other] = "keyword_other",
  [sym_builtin_type] = "builtin_type",
  [sym_boolean] = "boolean",
  [sym_punctuation] = "punctuation",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_frontmatter] = sym_frontmatter,
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
  [anon_sym_privata] = anon_sym_privata,
  [anon_sym_protecta] = anon_sym_protecta,
  [anon_sym_publica] = anon_sym_publica,
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
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_bivalens] = anon_sym_bivalens,
  [anon_sym_copia] = anon_sym_copia,
  [anon_sym_cursor] = anon_sym_cursor,
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
  [anon_sym_json] = anon_sym_json,
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
  [anon_sym_nihil] = anon_sym_nihil,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_hash] = sym_hash,
  [sym_line_comment] = sym_line_comment,
  [sym_faber_newline] = sym_faber_newline,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym_keyword_control] = sym_keyword_control,
  [sym_keyword_declaration] = sym_keyword_declaration,
  [sym_keyword_other] = sym_keyword_other,
  [sym_builtin_type] = sym_builtin_type,
  [sym_boolean] = sym_boolean,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [anon_sym_cursor] = {
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
  [anon_sym_json] = {
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
  [anon_sym_nihil] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_COMMA] = {
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
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '!', 703,
        '"', 2,
        '#', 713,
        '\'', 3,
        '(', 704,
        ')', 705,
        '+', 702,
        ',', 710,
        '0', 232,
        ':', 711,
        ';', 712,
        '?', 703,
        '[', 708,
        ']', 709,
        '`', 8,
        'a', 357,
        'b', 441,
        'c', 310,
        'd', 384,
        'e', 430,
        'f', 239,
        'g', 385,
        'i', 240,
        'j', 606,
        'l', 411,
        'm', 311,
        'n', 386,
        'o', 368,
        'p', 387,
        'r', 388,
        's', 363,
        't', 312,
        'u', 241,
        'v', 313,
        '{', 706,
        '|', 9,
        '}', 707,
        0xab, 10,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '|') ADVANCE(228);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 0xbb) ADVANCE(227);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(235);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(236);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '!', 703,
        '"', 2,
        '#', 713,
        '\'', 3,
        '(', 704,
        ')', 705,
        ',', 710,
        '0', 232,
        ':', 711,
        ';', 712,
        '?', 703,
        '[', 708,
        ']', 709,
        '`', 8,
        'a', 357,
        'b', 441,
        'c', 310,
        'd', 384,
        'e', 430,
        'f', 239,
        'g', 385,
        'i', 240,
        'j', 606,
        'l', 411,
        'm', 311,
        'n', 386,
        'o', 368,
        'p', 387,
        'r', 388,
        's', 363,
        't', 312,
        'u', 241,
        'v', 313,
        '{', 706,
        '|', 9,
        '}', 707,
        0xab, 10,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (set_contains(sym_operator_character_set_1, 23, lookahead)) ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_frontmatter);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_frontmatter);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ad);
      if (lookahead == 'f') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_adfirma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_argumenta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_cape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_casu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ceterum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_cura);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_custodi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_demum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_discerne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_dum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_elige);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_emitte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ergo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_fac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_iace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_incipiet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_incipit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_itera);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_mori);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_perge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_redde);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_rumpe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_secus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_si);
      if (lookahead == '1') ADVANCE(302);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead == '6') ADVANCE(284);
      if (lookahead == '8') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_sic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_tacet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_tempta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_abstractus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ceteri);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_curata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_discretio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_errata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_exitus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_fixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_functio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_generis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_genus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_iacit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_immutata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_implendum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_importa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_magnitudo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_nexum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_optiones);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ordo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_prae);
      if (lookahead == 'f') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_privata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_protecta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_publica);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_sit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_sponte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_typus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_varia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ante);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_aut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_cede);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_clausura);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'm') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ego);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_est);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_et);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ex);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_finge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_fragilis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_futurum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_implet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_inter);
      if (lookahead == 'v') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_intra);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_lege);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_lineam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_metior);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_modulus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_negativum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_non);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_nonnihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_nonnulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_nota);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_nulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_omitte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_omnia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_per);
      if (lookahead == 'g') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_positivum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_postpara);
      if (lookahead == 'b') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_postparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_praefixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_praepara);
      if (lookahead == 'b') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_praeparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_pro);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_proba);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_probandum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_repete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_requirit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_scribe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_scriptum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_solum);
      if (lookahead == '_') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_solum_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_sparge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_temporis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_usque);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_vel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_vide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ascii);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_bivalens);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_copia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_fractus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ignotum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_instans);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_intervallum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_lf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_lf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_li16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_li32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_li64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_li8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_lista);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_lu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_lu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_lu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_lu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_matrix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_mf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_mf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_mi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_mi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_mi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_mi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_mu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_mu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_mu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_mu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_nihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_numerus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_numquam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_octet);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_octeti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_promissum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_series);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_sf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_sf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_sf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_si16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_si32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_si64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_si8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_sparsa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_su16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_su32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_su64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_su8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_tabula);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_tensor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_textus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_tf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_tf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ti16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ti32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ti64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ti8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_tu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_tu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_tu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_tu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_unio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_vacua);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_vacuum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_valor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_vf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_vf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_vf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_vi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_vi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_vi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_vi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_vu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_vu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_vu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_vu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_falsum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_verum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_guillemet_string);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_octeti_string);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_backtick_string);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 14,
        'B', 12,
        'b', 12,
        'E', 11,
        'e', 11,
        'O', 13,
        'o', 13,
        'X', 16,
        'x', 16,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(292);
      if (lookahead == '3') ADVANCE(256);
      if (lookahead == '6') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 293,
        '3', 257,
        '6', 275,
        '8', 142,
        'a', 362,
        'g', 529,
        'm', 521,
        'n', 91,
        't', 413,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(294);
      if (lookahead == '3') ADVANCE(258);
      if (lookahead == '6') ADVANCE(276);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(295);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '6') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '6') ADVANCE(278);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '3') ADVANCE(261);
      if (lookahead == '6') ADVANCE(279);
      if (lookahead == '8') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(298);
      if (lookahead == '3') ADVANCE(262);
      if (lookahead == '6') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '3') ADVANCE(263);
      if (lookahead == '6') ADVANCE(281);
      if (lookahead == '8') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(300);
      if (lookahead == '3') ADVANCE(264);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead == '8') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '6') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(303);
      if (lookahead == '3') ADVANCE(267);
      if (lookahead == '6') ADVANCE(285);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '6') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '3') ADVANCE(269);
      if (lookahead == '6') ADVANCE(287);
      if (lookahead == '8') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(306);
      if (lookahead == '3') ADVANCE(270);
      if (lookahead == '6') ADVANCE(288);
      if (lookahead == '8') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(307);
      if (lookahead == '3') ADVANCE(271);
      if (lookahead == '6') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(308);
      if (lookahead == '3') ADVANCE(272);
      if (lookahead == '6') ADVANCE(290);
      if (lookahead == '8') ADVANCE(220);
      if (lookahead == 'd') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(309);
      if (lookahead == '3') ADVANCE(273);
      if (lookahead == '6') ADVANCE(291);
      if (lookahead == '8') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 's') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(608);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(690);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(657);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == 'r') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'g') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 'q') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'u') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'u') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'q') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'r') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'u') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'm') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(535);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(408);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(349);
      if (lookahead == 'x') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(654);
      if (lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead == 'x') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'x') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == 's') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+') ADVANCE(4);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '(' ||
          lookahead == '.' ||
          lookahead == '[') ADVANCE(701);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_hash);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 19, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 1},
  [4] = {.lex_state = 19, .external_lex_state = 1},
  [5] = {.lex_state = 19, .external_lex_state = 1},
  [6] = {.lex_state = 19, .external_lex_state = 1},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 19, .external_lex_state = 1},
  [9] = {.lex_state = 19, .external_lex_state = 1},
  [10] = {.lex_state = 19, .external_lex_state = 1},
  [11] = {.lex_state = 19, .external_lex_state = 1},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_frontmatter] = ACTIONS(1),
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
    [anon_sym_optiones] = ACTIONS(1),
    [anon_sym_ordo] = ACTIONS(1),
    [anon_sym_prae] = ACTIONS(1),
    [anon_sym_privata] = ACTIONS(1),
    [anon_sym_protecta] = ACTIONS(1),
    [anon_sym_publica] = ACTIONS(1),
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
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_bivalens] = ACTIONS(1),
    [anon_sym_copia] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
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
    [anon_sym_json] = ACTIONS(1),
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
    [anon_sym_nihil] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_faber_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__token] = STATE(3),
    [sym_keyword_control] = STATE(3),
    [sym_keyword_declaration] = STATE(3),
    [sym_keyword_other] = STATE(3),
    [sym_builtin_type] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_frontmatter] = ACTIONS(5),
    [anon_sym_ad] = ACTIONS(7),
    [anon_sym_adfirma] = ACTIONS(7),
    [anon_sym_argumenta] = ACTIONS(7),
    [anon_sym_cape] = ACTIONS(7),
    [anon_sym_casu] = ACTIONS(7),
    [anon_sym_ceterum] = ACTIONS(7),
    [anon_sym_cura] = ACTIONS(7),
    [anon_sym_custodi] = ACTIONS(7),
    [anon_sym_demum] = ACTIONS(7),
    [anon_sym_discerne] = ACTIONS(7),
    [anon_sym_dum] = ACTIONS(7),
    [anon_sym_elige] = ACTIONS(7),
    [anon_sym_emitte] = ACTIONS(7),
    [anon_sym_ergo] = ACTIONS(7),
    [anon_sym_fac] = ACTIONS(7),
    [anon_sym_iace] = ACTIONS(7),
    [anon_sym_incipiet] = ACTIONS(7),
    [anon_sym_incipit] = ACTIONS(7),
    [anon_sym_itera] = ACTIONS(7),
    [anon_sym_mori] = ACTIONS(7),
    [anon_sym_perge] = ACTIONS(7),
    [anon_sym_redde] = ACTIONS(7),
    [anon_sym_rumpe] = ACTIONS(7),
    [anon_sym_secus] = ACTIONS(7),
    [anon_sym_si] = ACTIONS(7),
    [anon_sym_sic] = ACTIONS(7),
    [anon_sym_sin] = ACTIONS(7),
    [anon_sym_tacet] = ACTIONS(7),
    [anon_sym_tempta] = ACTIONS(7),
    [anon_sym_abstractus] = ACTIONS(9),
    [anon_sym_ceteri] = ACTIONS(9),
    [anon_sym_curata] = ACTIONS(9),
    [anon_sym_discretio] = ACTIONS(9),
    [anon_sym_errata] = ACTIONS(9),
    [anon_sym_exitus] = ACTIONS(9),
    [anon_sym_fixum] = ACTIONS(9),
    [anon_sym_functio] = ACTIONS(9),
    [anon_sym_generis] = ACTIONS(9),
    [anon_sym_genus] = ACTIONS(9),
    [anon_sym_iacit] = ACTIONS(9),
    [anon_sym_immutata] = ACTIONS(9),
    [anon_sym_implendum] = ACTIONS(9),
    [anon_sym_importa] = ACTIONS(9),
    [anon_sym_magnitudo] = ACTIONS(9),
    [anon_sym_nexum] = ACTIONS(9),
    [anon_sym_optiones] = ACTIONS(9),
    [anon_sym_ordo] = ACTIONS(9),
    [anon_sym_prae] = ACTIONS(9),
    [anon_sym_privata] = ACTIONS(9),
    [anon_sym_protecta] = ACTIONS(9),
    [anon_sym_publica] = ACTIONS(9),
    [anon_sym_sit] = ACTIONS(9),
    [anon_sym_sponte] = ACTIONS(9),
    [anon_sym_typus] = ACTIONS(9),
    [anon_sym_varia] = ACTIONS(9),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_inter] = ACTIONS(11),
    [anon_sym_intra] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_pro] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_requirit] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_nihil] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octet] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_falsum] = ACTIONS(15),
    [anon_sym_verum] = ACTIONS(15),
    [sym_guillemet_string] = ACTIONS(17),
    [sym_octeti_string] = ACTIONS(17),
    [sym_backtick_string] = ACTIONS(17),
    [sym_ascii_string] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_operator] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_hash] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(17),
    [sym_faber_newline] = ACTIONS(17),
  },
  [2] = {
    [sym__token] = STATE(4),
    [sym_keyword_control] = STATE(4),
    [sym_keyword_declaration] = STATE(4),
    [sym_keyword_other] = STATE(4),
    [sym_builtin_type] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_punctuation] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_ad] = ACTIONS(7),
    [anon_sym_adfirma] = ACTIONS(7),
    [anon_sym_argumenta] = ACTIONS(7),
    [anon_sym_cape] = ACTIONS(7),
    [anon_sym_casu] = ACTIONS(7),
    [anon_sym_ceterum] = ACTIONS(7),
    [anon_sym_cura] = ACTIONS(7),
    [anon_sym_custodi] = ACTIONS(7),
    [anon_sym_demum] = ACTIONS(7),
    [anon_sym_discerne] = ACTIONS(7),
    [anon_sym_dum] = ACTIONS(7),
    [anon_sym_elige] = ACTIONS(7),
    [anon_sym_emitte] = ACTIONS(7),
    [anon_sym_ergo] = ACTIONS(7),
    [anon_sym_fac] = ACTIONS(7),
    [anon_sym_iace] = ACTIONS(7),
    [anon_sym_incipiet] = ACTIONS(7),
    [anon_sym_incipit] = ACTIONS(7),
    [anon_sym_itera] = ACTIONS(7),
    [anon_sym_mori] = ACTIONS(7),
    [anon_sym_perge] = ACTIONS(7),
    [anon_sym_redde] = ACTIONS(7),
    [anon_sym_rumpe] = ACTIONS(7),
    [anon_sym_secus] = ACTIONS(7),
    [anon_sym_si] = ACTIONS(7),
    [anon_sym_sic] = ACTIONS(7),
    [anon_sym_sin] = ACTIONS(7),
    [anon_sym_tacet] = ACTIONS(7),
    [anon_sym_tempta] = ACTIONS(7),
    [anon_sym_abstractus] = ACTIONS(9),
    [anon_sym_ceteri] = ACTIONS(9),
    [anon_sym_curata] = ACTIONS(9),
    [anon_sym_discretio] = ACTIONS(9),
    [anon_sym_errata] = ACTIONS(9),
    [anon_sym_exitus] = ACTIONS(9),
    [anon_sym_fixum] = ACTIONS(9),
    [anon_sym_functio] = ACTIONS(9),
    [anon_sym_generis] = ACTIONS(9),
    [anon_sym_genus] = ACTIONS(9),
    [anon_sym_iacit] = ACTIONS(9),
    [anon_sym_immutata] = ACTIONS(9),
    [anon_sym_implendum] = ACTIONS(9),
    [anon_sym_importa] = ACTIONS(9),
    [anon_sym_magnitudo] = ACTIONS(9),
    [anon_sym_nexum] = ACTIONS(9),
    [anon_sym_optiones] = ACTIONS(9),
    [anon_sym_ordo] = ACTIONS(9),
    [anon_sym_prae] = ACTIONS(9),
    [anon_sym_privata] = ACTIONS(9),
    [anon_sym_protecta] = ACTIONS(9),
    [anon_sym_publica] = ACTIONS(9),
    [anon_sym_sit] = ACTIONS(9),
    [anon_sym_sponte] = ACTIONS(9),
    [anon_sym_typus] = ACTIONS(9),
    [anon_sym_varia] = ACTIONS(9),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_inter] = ACTIONS(11),
    [anon_sym_intra] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_pro] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_requirit] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_nihil] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octet] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_falsum] = ACTIONS(15),
    [anon_sym_verum] = ACTIONS(15),
    [sym_guillemet_string] = ACTIONS(25),
    [sym_octeti_string] = ACTIONS(25),
    [sym_backtick_string] = ACTIONS(25),
    [sym_ascii_string] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_operator] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_hash] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(25),
    [sym_faber_newline] = ACTIONS(25),
  },
  [3] = {
    [sym__token] = STATE(5),
    [sym_keyword_control] = STATE(5),
    [sym_keyword_declaration] = STATE(5),
    [sym_keyword_other] = STATE(5),
    [sym_builtin_type] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_ad] = ACTIONS(7),
    [anon_sym_adfirma] = ACTIONS(7),
    [anon_sym_argumenta] = ACTIONS(7),
    [anon_sym_cape] = ACTIONS(7),
    [anon_sym_casu] = ACTIONS(7),
    [anon_sym_ceterum] = ACTIONS(7),
    [anon_sym_cura] = ACTIONS(7),
    [anon_sym_custodi] = ACTIONS(7),
    [anon_sym_demum] = ACTIONS(7),
    [anon_sym_discerne] = ACTIONS(7),
    [anon_sym_dum] = ACTIONS(7),
    [anon_sym_elige] = ACTIONS(7),
    [anon_sym_emitte] = ACTIONS(7),
    [anon_sym_ergo] = ACTIONS(7),
    [anon_sym_fac] = ACTIONS(7),
    [anon_sym_iace] = ACTIONS(7),
    [anon_sym_incipiet] = ACTIONS(7),
    [anon_sym_incipit] = ACTIONS(7),
    [anon_sym_itera] = ACTIONS(7),
    [anon_sym_mori] = ACTIONS(7),
    [anon_sym_perge] = ACTIONS(7),
    [anon_sym_redde] = ACTIONS(7),
    [anon_sym_rumpe] = ACTIONS(7),
    [anon_sym_secus] = ACTIONS(7),
    [anon_sym_si] = ACTIONS(7),
    [anon_sym_sic] = ACTIONS(7),
    [anon_sym_sin] = ACTIONS(7),
    [anon_sym_tacet] = ACTIONS(7),
    [anon_sym_tempta] = ACTIONS(7),
    [anon_sym_abstractus] = ACTIONS(9),
    [anon_sym_ceteri] = ACTIONS(9),
    [anon_sym_curata] = ACTIONS(9),
    [anon_sym_discretio] = ACTIONS(9),
    [anon_sym_errata] = ACTIONS(9),
    [anon_sym_exitus] = ACTIONS(9),
    [anon_sym_fixum] = ACTIONS(9),
    [anon_sym_functio] = ACTIONS(9),
    [anon_sym_generis] = ACTIONS(9),
    [anon_sym_genus] = ACTIONS(9),
    [anon_sym_iacit] = ACTIONS(9),
    [anon_sym_immutata] = ACTIONS(9),
    [anon_sym_implendum] = ACTIONS(9),
    [anon_sym_importa] = ACTIONS(9),
    [anon_sym_magnitudo] = ACTIONS(9),
    [anon_sym_nexum] = ACTIONS(9),
    [anon_sym_optiones] = ACTIONS(9),
    [anon_sym_ordo] = ACTIONS(9),
    [anon_sym_prae] = ACTIONS(9),
    [anon_sym_privata] = ACTIONS(9),
    [anon_sym_protecta] = ACTIONS(9),
    [anon_sym_publica] = ACTIONS(9),
    [anon_sym_sit] = ACTIONS(9),
    [anon_sym_sponte] = ACTIONS(9),
    [anon_sym_typus] = ACTIONS(9),
    [anon_sym_varia] = ACTIONS(9),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_inter] = ACTIONS(11),
    [anon_sym_intra] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_pro] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_requirit] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_nihil] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octet] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_falsum] = ACTIONS(15),
    [anon_sym_verum] = ACTIONS(15),
    [sym_guillemet_string] = ACTIONS(29),
    [sym_octeti_string] = ACTIONS(29),
    [sym_backtick_string] = ACTIONS(29),
    [sym_ascii_string] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [sym_operator] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_hash] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(29),
    [sym_faber_newline] = ACTIONS(29),
  },
  [4] = {
    [sym__token] = STATE(5),
    [sym_keyword_control] = STATE(5),
    [sym_keyword_declaration] = STATE(5),
    [sym_keyword_other] = STATE(5),
    [sym_builtin_type] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_ad] = ACTIONS(7),
    [anon_sym_adfirma] = ACTIONS(7),
    [anon_sym_argumenta] = ACTIONS(7),
    [anon_sym_cape] = ACTIONS(7),
    [anon_sym_casu] = ACTIONS(7),
    [anon_sym_ceterum] = ACTIONS(7),
    [anon_sym_cura] = ACTIONS(7),
    [anon_sym_custodi] = ACTIONS(7),
    [anon_sym_demum] = ACTIONS(7),
    [anon_sym_discerne] = ACTIONS(7),
    [anon_sym_dum] = ACTIONS(7),
    [anon_sym_elige] = ACTIONS(7),
    [anon_sym_emitte] = ACTIONS(7),
    [anon_sym_ergo] = ACTIONS(7),
    [anon_sym_fac] = ACTIONS(7),
    [anon_sym_iace] = ACTIONS(7),
    [anon_sym_incipiet] = ACTIONS(7),
    [anon_sym_incipit] = ACTIONS(7),
    [anon_sym_itera] = ACTIONS(7),
    [anon_sym_mori] = ACTIONS(7),
    [anon_sym_perge] = ACTIONS(7),
    [anon_sym_redde] = ACTIONS(7),
    [anon_sym_rumpe] = ACTIONS(7),
    [anon_sym_secus] = ACTIONS(7),
    [anon_sym_si] = ACTIONS(7),
    [anon_sym_sic] = ACTIONS(7),
    [anon_sym_sin] = ACTIONS(7),
    [anon_sym_tacet] = ACTIONS(7),
    [anon_sym_tempta] = ACTIONS(7),
    [anon_sym_abstractus] = ACTIONS(9),
    [anon_sym_ceteri] = ACTIONS(9),
    [anon_sym_curata] = ACTIONS(9),
    [anon_sym_discretio] = ACTIONS(9),
    [anon_sym_errata] = ACTIONS(9),
    [anon_sym_exitus] = ACTIONS(9),
    [anon_sym_fixum] = ACTIONS(9),
    [anon_sym_functio] = ACTIONS(9),
    [anon_sym_generis] = ACTIONS(9),
    [anon_sym_genus] = ACTIONS(9),
    [anon_sym_iacit] = ACTIONS(9),
    [anon_sym_immutata] = ACTIONS(9),
    [anon_sym_implendum] = ACTIONS(9),
    [anon_sym_importa] = ACTIONS(9),
    [anon_sym_magnitudo] = ACTIONS(9),
    [anon_sym_nexum] = ACTIONS(9),
    [anon_sym_optiones] = ACTIONS(9),
    [anon_sym_ordo] = ACTIONS(9),
    [anon_sym_prae] = ACTIONS(9),
    [anon_sym_privata] = ACTIONS(9),
    [anon_sym_protecta] = ACTIONS(9),
    [anon_sym_publica] = ACTIONS(9),
    [anon_sym_sit] = ACTIONS(9),
    [anon_sym_sponte] = ACTIONS(9),
    [anon_sym_typus] = ACTIONS(9),
    [anon_sym_varia] = ACTIONS(9),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_inter] = ACTIONS(11),
    [anon_sym_intra] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_pro] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_requirit] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_nihil] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octet] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_falsum] = ACTIONS(15),
    [anon_sym_verum] = ACTIONS(15),
    [sym_guillemet_string] = ACTIONS(29),
    [sym_octeti_string] = ACTIONS(29),
    [sym_backtick_string] = ACTIONS(29),
    [sym_ascii_string] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [sym_operator] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_hash] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(29),
    [sym_faber_newline] = ACTIONS(29),
  },
  [5] = {
    [sym__token] = STATE(5),
    [sym_keyword_control] = STATE(5),
    [sym_keyword_declaration] = STATE(5),
    [sym_keyword_other] = STATE(5),
    [sym_builtin_type] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_ad] = ACTIONS(37),
    [anon_sym_adfirma] = ACTIONS(37),
    [anon_sym_argumenta] = ACTIONS(37),
    [anon_sym_cape] = ACTIONS(37),
    [anon_sym_casu] = ACTIONS(37),
    [anon_sym_ceterum] = ACTIONS(37),
    [anon_sym_cura] = ACTIONS(37),
    [anon_sym_custodi] = ACTIONS(37),
    [anon_sym_demum] = ACTIONS(37),
    [anon_sym_discerne] = ACTIONS(37),
    [anon_sym_dum] = ACTIONS(37),
    [anon_sym_elige] = ACTIONS(37),
    [anon_sym_emitte] = ACTIONS(37),
    [anon_sym_ergo] = ACTIONS(37),
    [anon_sym_fac] = ACTIONS(37),
    [anon_sym_iace] = ACTIONS(37),
    [anon_sym_incipiet] = ACTIONS(37),
    [anon_sym_incipit] = ACTIONS(37),
    [anon_sym_itera] = ACTIONS(37),
    [anon_sym_mori] = ACTIONS(37),
    [anon_sym_perge] = ACTIONS(37),
    [anon_sym_redde] = ACTIONS(37),
    [anon_sym_rumpe] = ACTIONS(37),
    [anon_sym_secus] = ACTIONS(37),
    [anon_sym_si] = ACTIONS(37),
    [anon_sym_sic] = ACTIONS(37),
    [anon_sym_sin] = ACTIONS(37),
    [anon_sym_tacet] = ACTIONS(37),
    [anon_sym_tempta] = ACTIONS(37),
    [anon_sym_abstractus] = ACTIONS(40),
    [anon_sym_ceteri] = ACTIONS(40),
    [anon_sym_curata] = ACTIONS(40),
    [anon_sym_discretio] = ACTIONS(40),
    [anon_sym_errata] = ACTIONS(40),
    [anon_sym_exitus] = ACTIONS(40),
    [anon_sym_fixum] = ACTIONS(40),
    [anon_sym_functio] = ACTIONS(40),
    [anon_sym_generis] = ACTIONS(40),
    [anon_sym_genus] = ACTIONS(40),
    [anon_sym_iacit] = ACTIONS(40),
    [anon_sym_immutata] = ACTIONS(40),
    [anon_sym_implendum] = ACTIONS(40),
    [anon_sym_importa] = ACTIONS(40),
    [anon_sym_magnitudo] = ACTIONS(40),
    [anon_sym_nexum] = ACTIONS(40),
    [anon_sym_optiones] = ACTIONS(40),
    [anon_sym_ordo] = ACTIONS(40),
    [anon_sym_prae] = ACTIONS(40),
    [anon_sym_privata] = ACTIONS(40),
    [anon_sym_protecta] = ACTIONS(40),
    [anon_sym_publica] = ACTIONS(40),
    [anon_sym_sit] = ACTIONS(40),
    [anon_sym_sponte] = ACTIONS(40),
    [anon_sym_typus] = ACTIONS(40),
    [anon_sym_varia] = ACTIONS(40),
    [anon_sym_ante] = ACTIONS(43),
    [anon_sym_aut] = ACTIONS(43),
    [anon_sym_cede] = ACTIONS(43),
    [anon_sym_clausura] = ACTIONS(43),
    [anon_sym_de] = ACTIONS(43),
    [anon_sym_ego] = ACTIONS(43),
    [anon_sym_est] = ACTIONS(43),
    [anon_sym_et] = ACTIONS(43),
    [anon_sym_ex] = ACTIONS(43),
    [anon_sym_finge] = ACTIONS(43),
    [anon_sym_fragilis] = ACTIONS(43),
    [anon_sym_futurum] = ACTIONS(43),
    [anon_sym_implet] = ACTIONS(43),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_inter] = ACTIONS(43),
    [anon_sym_intra] = ACTIONS(43),
    [anon_sym_lege] = ACTIONS(43),
    [anon_sym_lineam] = ACTIONS(43),
    [anon_sym_metior] = ACTIONS(43),
    [anon_sym_modulus] = ACTIONS(43),
    [anon_sym_mone] = ACTIONS(43),
    [anon_sym_negativum] = ACTIONS(43),
    [anon_sym_non] = ACTIONS(43),
    [anon_sym_nonnihil] = ACTIONS(43),
    [anon_sym_nonnulla] = ACTIONS(43),
    [anon_sym_nota] = ACTIONS(43),
    [anon_sym_nulla] = ACTIONS(43),
    [anon_sym_omitte] = ACTIONS(43),
    [anon_sym_omnia] = ACTIONS(43),
    [anon_sym_per] = ACTIONS(43),
    [anon_sym_positivum] = ACTIONS(43),
    [anon_sym_postpara] = ACTIONS(43),
    [anon_sym_postparabit] = ACTIONS(43),
    [anon_sym_praefixum] = ACTIONS(43),
    [anon_sym_praepara] = ACTIONS(43),
    [anon_sym_praeparabit] = ACTIONS(43),
    [anon_sym_pro] = ACTIONS(43),
    [anon_sym_proba] = ACTIONS(43),
    [anon_sym_probandum] = ACTIONS(43),
    [anon_sym_repete] = ACTIONS(43),
    [anon_sym_requirit] = ACTIONS(43),
    [anon_sym_scribe] = ACTIONS(43),
    [anon_sym_scriptum] = ACTIONS(43),
    [anon_sym_solum] = ACTIONS(43),
    [anon_sym_solum_in] = ACTIONS(43),
    [anon_sym_sparge] = ACTIONS(43),
    [anon_sym_sub] = ACTIONS(43),
    [anon_sym_tag] = ACTIONS(43),
    [anon_sym_temporis] = ACTIONS(43),
    [anon_sym_usque] = ACTIONS(43),
    [anon_sym_ut] = ACTIONS(43),
    [anon_sym_vel] = ACTIONS(43),
    [anon_sym_vide] = ACTIONS(43),
    [anon_sym_ascii] = ACTIONS(46),
    [anon_sym_bivalens] = ACTIONS(46),
    [anon_sym_copia] = ACTIONS(46),
    [anon_sym_cursor] = ACTIONS(46),
    [anon_sym_f16] = ACTIONS(46),
    [anon_sym_f32] = ACTIONS(46),
    [anon_sym_f64] = ACTIONS(46),
    [anon_sym_fractus] = ACTIONS(46),
    [anon_sym_i16] = ACTIONS(46),
    [anon_sym_i32] = ACTIONS(46),
    [anon_sym_i64] = ACTIONS(46),
    [anon_sym_i8] = ACTIONS(46),
    [anon_sym_ignotum] = ACTIONS(46),
    [anon_sym_instans] = ACTIONS(46),
    [anon_sym_intervallum] = ACTIONS(46),
    [anon_sym_json] = ACTIONS(46),
    [anon_sym_lf16] = ACTIONS(46),
    [anon_sym_lf32] = ACTIONS(46),
    [anon_sym_lf64] = ACTIONS(46),
    [anon_sym_li16] = ACTIONS(46),
    [anon_sym_li32] = ACTIONS(46),
    [anon_sym_li64] = ACTIONS(46),
    [anon_sym_li8] = ACTIONS(46),
    [anon_sym_lista] = ACTIONS(46),
    [anon_sym_lu16] = ACTIONS(46),
    [anon_sym_lu32] = ACTIONS(46),
    [anon_sym_lu64] = ACTIONS(46),
    [anon_sym_lu8] = ACTIONS(46),
    [anon_sym_matrix] = ACTIONS(46),
    [anon_sym_mf16] = ACTIONS(46),
    [anon_sym_mf32] = ACTIONS(46),
    [anon_sym_mf64] = ACTIONS(46),
    [anon_sym_mi16] = ACTIONS(46),
    [anon_sym_mi32] = ACTIONS(46),
    [anon_sym_mi64] = ACTIONS(46),
    [anon_sym_mi8] = ACTIONS(46),
    [anon_sym_mu16] = ACTIONS(46),
    [anon_sym_mu32] = ACTIONS(46),
    [anon_sym_mu64] = ACTIONS(46),
    [anon_sym_mu8] = ACTIONS(46),
    [anon_sym_nihil] = ACTIONS(46),
    [anon_sym_numerus] = ACTIONS(46),
    [anon_sym_numquam] = ACTIONS(46),
    [anon_sym_octet] = ACTIONS(46),
    [anon_sym_octeti] = ACTIONS(46),
    [anon_sym_promissum] = ACTIONS(46),
    [anon_sym_regex] = ACTIONS(46),
    [anon_sym_series] = ACTIONS(46),
    [anon_sym_sf16] = ACTIONS(46),
    [anon_sym_sf32] = ACTIONS(46),
    [anon_sym_sf64] = ACTIONS(46),
    [anon_sym_si16] = ACTIONS(46),
    [anon_sym_si32] = ACTIONS(46),
    [anon_sym_si64] = ACTIONS(46),
    [anon_sym_si8] = ACTIONS(46),
    [anon_sym_sparsa] = ACTIONS(46),
    [anon_sym_su16] = ACTIONS(46),
    [anon_sym_su32] = ACTIONS(46),
    [anon_sym_su64] = ACTIONS(46),
    [anon_sym_su8] = ACTIONS(46),
    [anon_sym_tabula] = ACTIONS(46),
    [anon_sym_tensor] = ACTIONS(46),
    [anon_sym_textus] = ACTIONS(46),
    [anon_sym_tf16] = ACTIONS(46),
    [anon_sym_tf32] = ACTIONS(46),
    [anon_sym_tf64] = ACTIONS(46),
    [anon_sym_ti16] = ACTIONS(46),
    [anon_sym_ti32] = ACTIONS(46),
    [anon_sym_ti64] = ACTIONS(46),
    [anon_sym_ti8] = ACTIONS(46),
    [anon_sym_tu16] = ACTIONS(46),
    [anon_sym_tu32] = ACTIONS(46),
    [anon_sym_tu64] = ACTIONS(46),
    [anon_sym_tu8] = ACTIONS(46),
    [anon_sym_u16] = ACTIONS(46),
    [anon_sym_u32] = ACTIONS(46),
    [anon_sym_u64] = ACTIONS(46),
    [anon_sym_u8] = ACTIONS(46),
    [anon_sym_unio] = ACTIONS(46),
    [anon_sym_vacua] = ACTIONS(46),
    [anon_sym_vacuum] = ACTIONS(46),
    [anon_sym_valor] = ACTIONS(46),
    [anon_sym_vector] = ACTIONS(46),
    [anon_sym_vf16] = ACTIONS(46),
    [anon_sym_vf32] = ACTIONS(46),
    [anon_sym_vf64] = ACTIONS(46),
    [anon_sym_vi16] = ACTIONS(46),
    [anon_sym_vi32] = ACTIONS(46),
    [anon_sym_vi64] = ACTIONS(46),
    [anon_sym_vi8] = ACTIONS(46),
    [anon_sym_vu16] = ACTIONS(46),
    [anon_sym_vu32] = ACTIONS(46),
    [anon_sym_vu64] = ACTIONS(46),
    [anon_sym_vu8] = ACTIONS(46),
    [anon_sym_falsum] = ACTIONS(49),
    [anon_sym_verum] = ACTIONS(49),
    [sym_guillemet_string] = ACTIONS(52),
    [sym_octeti_string] = ACTIONS(52),
    [sym_backtick_string] = ACTIONS(52),
    [sym_ascii_string] = ACTIONS(52),
    [sym_string] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_identifier] = ACTIONS(55),
    [sym_operator] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(58),
    [sym_hash] = ACTIONS(52),
    [sym_line_comment] = ACTIONS(52),
    [sym_faber_newline] = ACTIONS(52),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_ad] = ACTIONS(63),
    [anon_sym_adfirma] = ACTIONS(63),
    [anon_sym_argumenta] = ACTIONS(63),
    [anon_sym_cape] = ACTIONS(63),
    [anon_sym_casu] = ACTIONS(63),
    [anon_sym_ceterum] = ACTIONS(63),
    [anon_sym_cura] = ACTIONS(63),
    [anon_sym_custodi] = ACTIONS(63),
    [anon_sym_demum] = ACTIONS(63),
    [anon_sym_discerne] = ACTIONS(63),
    [anon_sym_dum] = ACTIONS(63),
    [anon_sym_elige] = ACTIONS(63),
    [anon_sym_emitte] = ACTIONS(63),
    [anon_sym_ergo] = ACTIONS(63),
    [anon_sym_fac] = ACTIONS(63),
    [anon_sym_iace] = ACTIONS(63),
    [anon_sym_incipiet] = ACTIONS(63),
    [anon_sym_incipit] = ACTIONS(63),
    [anon_sym_itera] = ACTIONS(63),
    [anon_sym_mori] = ACTIONS(63),
    [anon_sym_perge] = ACTIONS(63),
    [anon_sym_redde] = ACTIONS(63),
    [anon_sym_rumpe] = ACTIONS(63),
    [anon_sym_secus] = ACTIONS(63),
    [anon_sym_si] = ACTIONS(63),
    [anon_sym_sic] = ACTIONS(63),
    [anon_sym_sin] = ACTIONS(63),
    [anon_sym_tacet] = ACTIONS(63),
    [anon_sym_tempta] = ACTIONS(63),
    [anon_sym_abstractus] = ACTIONS(63),
    [anon_sym_ceteri] = ACTIONS(63),
    [anon_sym_curata] = ACTIONS(63),
    [anon_sym_discretio] = ACTIONS(63),
    [anon_sym_errata] = ACTIONS(63),
    [anon_sym_exitus] = ACTIONS(63),
    [anon_sym_fixum] = ACTIONS(63),
    [anon_sym_functio] = ACTIONS(63),
    [anon_sym_generis] = ACTIONS(63),
    [anon_sym_genus] = ACTIONS(63),
    [anon_sym_iacit] = ACTIONS(63),
    [anon_sym_immutata] = ACTIONS(63),
    [anon_sym_implendum] = ACTIONS(63),
    [anon_sym_importa] = ACTIONS(63),
    [anon_sym_magnitudo] = ACTIONS(63),
    [anon_sym_nexum] = ACTIONS(63),
    [anon_sym_optiones] = ACTIONS(63),
    [anon_sym_ordo] = ACTIONS(63),
    [anon_sym_prae] = ACTIONS(63),
    [anon_sym_privata] = ACTIONS(63),
    [anon_sym_protecta] = ACTIONS(63),
    [anon_sym_publica] = ACTIONS(63),
    [anon_sym_sit] = ACTIONS(63),
    [anon_sym_sponte] = ACTIONS(63),
    [anon_sym_typus] = ACTIONS(63),
    [anon_sym_varia] = ACTIONS(63),
    [anon_sym_ante] = ACTIONS(63),
    [anon_sym_aut] = ACTIONS(63),
    [anon_sym_cede] = ACTIONS(63),
    [anon_sym_clausura] = ACTIONS(63),
    [anon_sym_de] = ACTIONS(63),
    [anon_sym_ego] = ACTIONS(63),
    [anon_sym_est] = ACTIONS(63),
    [anon_sym_et] = ACTIONS(63),
    [anon_sym_ex] = ACTIONS(63),
    [anon_sym_finge] = ACTIONS(63),
    [anon_sym_fragilis] = ACTIONS(63),
    [anon_sym_futurum] = ACTIONS(63),
    [anon_sym_implet] = ACTIONS(63),
    [anon_sym_in] = ACTIONS(63),
    [anon_sym_inter] = ACTIONS(63),
    [anon_sym_intra] = ACTIONS(63),
    [anon_sym_lege] = ACTIONS(63),
    [anon_sym_lineam] = ACTIONS(63),
    [anon_sym_metior] = ACTIONS(63),
    [anon_sym_modulus] = ACTIONS(63),
    [anon_sym_mone] = ACTIONS(63),
    [anon_sym_negativum] = ACTIONS(63),
    [anon_sym_non] = ACTIONS(63),
    [anon_sym_nonnihil] = ACTIONS(63),
    [anon_sym_nonnulla] = ACTIONS(63),
    [anon_sym_nota] = ACTIONS(63),
    [anon_sym_nulla] = ACTIONS(63),
    [anon_sym_omitte] = ACTIONS(63),
    [anon_sym_omnia] = ACTIONS(63),
    [anon_sym_per] = ACTIONS(63),
    [anon_sym_positivum] = ACTIONS(63),
    [anon_sym_postpara] = ACTIONS(63),
    [anon_sym_postparabit] = ACTIONS(63),
    [anon_sym_praefixum] = ACTIONS(63),
    [anon_sym_praepara] = ACTIONS(63),
    [anon_sym_praeparabit] = ACTIONS(63),
    [anon_sym_pro] = ACTIONS(63),
    [anon_sym_proba] = ACTIONS(63),
    [anon_sym_probandum] = ACTIONS(63),
    [anon_sym_repete] = ACTIONS(63),
    [anon_sym_requirit] = ACTIONS(63),
    [anon_sym_scribe] = ACTIONS(63),
    [anon_sym_scriptum] = ACTIONS(63),
    [anon_sym_solum] = ACTIONS(63),
    [anon_sym_solum_in] = ACTIONS(63),
    [anon_sym_sparge] = ACTIONS(63),
    [anon_sym_sub] = ACTIONS(63),
    [anon_sym_tag] = ACTIONS(63),
    [anon_sym_temporis] = ACTIONS(63),
    [anon_sym_usque] = ACTIONS(63),
    [anon_sym_ut] = ACTIONS(63),
    [anon_sym_vel] = ACTIONS(63),
    [anon_sym_vide] = ACTIONS(63),
    [anon_sym_ascii] = ACTIONS(63),
    [anon_sym_bivalens] = ACTIONS(63),
    [anon_sym_copia] = ACTIONS(63),
    [anon_sym_cursor] = ACTIONS(63),
    [anon_sym_f16] = ACTIONS(63),
    [anon_sym_f32] = ACTIONS(63),
    [anon_sym_f64] = ACTIONS(63),
    [anon_sym_fractus] = ACTIONS(63),
    [anon_sym_i16] = ACTIONS(63),
    [anon_sym_i32] = ACTIONS(63),
    [anon_sym_i64] = ACTIONS(63),
    [anon_sym_i8] = ACTIONS(63),
    [anon_sym_ignotum] = ACTIONS(63),
    [anon_sym_instans] = ACTIONS(63),
    [anon_sym_intervallum] = ACTIONS(63),
    [anon_sym_json] = ACTIONS(63),
    [anon_sym_lf16] = ACTIONS(63),
    [anon_sym_lf32] = ACTIONS(63),
    [anon_sym_lf64] = ACTIONS(63),
    [anon_sym_li16] = ACTIONS(63),
    [anon_sym_li32] = ACTIONS(63),
    [anon_sym_li64] = ACTIONS(63),
    [anon_sym_li8] = ACTIONS(63),
    [anon_sym_lista] = ACTIONS(63),
    [anon_sym_lu16] = ACTIONS(63),
    [anon_sym_lu32] = ACTIONS(63),
    [anon_sym_lu64] = ACTIONS(63),
    [anon_sym_lu8] = ACTIONS(63),
    [anon_sym_matrix] = ACTIONS(63),
    [anon_sym_mf16] = ACTIONS(63),
    [anon_sym_mf32] = ACTIONS(63),
    [anon_sym_mf64] = ACTIONS(63),
    [anon_sym_mi16] = ACTIONS(63),
    [anon_sym_mi32] = ACTIONS(63),
    [anon_sym_mi64] = ACTIONS(63),
    [anon_sym_mi8] = ACTIONS(63),
    [anon_sym_mu16] = ACTIONS(63),
    [anon_sym_mu32] = ACTIONS(63),
    [anon_sym_mu64] = ACTIONS(63),
    [anon_sym_mu8] = ACTIONS(63),
    [anon_sym_nihil] = ACTIONS(63),
    [anon_sym_numerus] = ACTIONS(63),
    [anon_sym_numquam] = ACTIONS(63),
    [anon_sym_octet] = ACTIONS(63),
    [anon_sym_octeti] = ACTIONS(63),
    [anon_sym_promissum] = ACTIONS(63),
    [anon_sym_regex] = ACTIONS(63),
    [anon_sym_series] = ACTIONS(63),
    [anon_sym_sf16] = ACTIONS(63),
    [anon_sym_sf32] = ACTIONS(63),
    [anon_sym_sf64] = ACTIONS(63),
    [anon_sym_si16] = ACTIONS(63),
    [anon_sym_si32] = ACTIONS(63),
    [anon_sym_si64] = ACTIONS(63),
    [anon_sym_si8] = ACTIONS(63),
    [anon_sym_sparsa] = ACTIONS(63),
    [anon_sym_su16] = ACTIONS(63),
    [anon_sym_su32] = ACTIONS(63),
    [anon_sym_su64] = ACTIONS(63),
    [anon_sym_su8] = ACTIONS(63),
    [anon_sym_tabula] = ACTIONS(63),
    [anon_sym_tensor] = ACTIONS(63),
    [anon_sym_textus] = ACTIONS(63),
    [anon_sym_tf16] = ACTIONS(63),
    [anon_sym_tf32] = ACTIONS(63),
    [anon_sym_tf64] = ACTIONS(63),
    [anon_sym_ti16] = ACTIONS(63),
    [anon_sym_ti32] = ACTIONS(63),
    [anon_sym_ti64] = ACTIONS(63),
    [anon_sym_ti8] = ACTIONS(63),
    [anon_sym_tu16] = ACTIONS(63),
    [anon_sym_tu32] = ACTIONS(63),
    [anon_sym_tu64] = ACTIONS(63),
    [anon_sym_tu8] = ACTIONS(63),
    [anon_sym_u16] = ACTIONS(63),
    [anon_sym_u32] = ACTIONS(63),
    [anon_sym_u64] = ACTIONS(63),
    [anon_sym_u8] = ACTIONS(63),
    [anon_sym_unio] = ACTIONS(63),
    [anon_sym_vacua] = ACTIONS(63),
    [anon_sym_vacuum] = ACTIONS(63),
    [anon_sym_valor] = ACTIONS(63),
    [anon_sym_vector] = ACTIONS(63),
    [anon_sym_vf16] = ACTIONS(63),
    [anon_sym_vf32] = ACTIONS(63),
    [anon_sym_vf64] = ACTIONS(63),
    [anon_sym_vi16] = ACTIONS(63),
    [anon_sym_vi32] = ACTIONS(63),
    [anon_sym_vi64] = ACTIONS(63),
    [anon_sym_vi8] = ACTIONS(63),
    [anon_sym_vu16] = ACTIONS(63),
    [anon_sym_vu32] = ACTIONS(63),
    [anon_sym_vu64] = ACTIONS(63),
    [anon_sym_vu8] = ACTIONS(63),
    [anon_sym_falsum] = ACTIONS(63),
    [anon_sym_verum] = ACTIONS(63),
    [sym_guillemet_string] = ACTIONS(61),
    [sym_octeti_string] = ACTIONS(61),
    [sym_backtick_string] = ACTIONS(61),
    [sym_ascii_string] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_operator] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_hash] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(61),
    [sym_faber_newline] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_ad] = ACTIONS(67),
    [anon_sym_adfirma] = ACTIONS(67),
    [anon_sym_argumenta] = ACTIONS(67),
    [anon_sym_cape] = ACTIONS(67),
    [anon_sym_casu] = ACTIONS(67),
    [anon_sym_ceterum] = ACTIONS(67),
    [anon_sym_cura] = ACTIONS(67),
    [anon_sym_custodi] = ACTIONS(67),
    [anon_sym_demum] = ACTIONS(67),
    [anon_sym_discerne] = ACTIONS(67),
    [anon_sym_dum] = ACTIONS(67),
    [anon_sym_elige] = ACTIONS(67),
    [anon_sym_emitte] = ACTIONS(67),
    [anon_sym_ergo] = ACTIONS(67),
    [anon_sym_fac] = ACTIONS(67),
    [anon_sym_iace] = ACTIONS(67),
    [anon_sym_incipiet] = ACTIONS(67),
    [anon_sym_incipit] = ACTIONS(67),
    [anon_sym_itera] = ACTIONS(67),
    [anon_sym_mori] = ACTIONS(67),
    [anon_sym_perge] = ACTIONS(67),
    [anon_sym_redde] = ACTIONS(67),
    [anon_sym_rumpe] = ACTIONS(67),
    [anon_sym_secus] = ACTIONS(67),
    [anon_sym_si] = ACTIONS(67),
    [anon_sym_sic] = ACTIONS(67),
    [anon_sym_sin] = ACTIONS(67),
    [anon_sym_tacet] = ACTIONS(67),
    [anon_sym_tempta] = ACTIONS(67),
    [anon_sym_abstractus] = ACTIONS(67),
    [anon_sym_ceteri] = ACTIONS(67),
    [anon_sym_curata] = ACTIONS(67),
    [anon_sym_discretio] = ACTIONS(67),
    [anon_sym_errata] = ACTIONS(67),
    [anon_sym_exitus] = ACTIONS(67),
    [anon_sym_fixum] = ACTIONS(67),
    [anon_sym_functio] = ACTIONS(67),
    [anon_sym_generis] = ACTIONS(67),
    [anon_sym_genus] = ACTIONS(67),
    [anon_sym_iacit] = ACTIONS(67),
    [anon_sym_immutata] = ACTIONS(67),
    [anon_sym_implendum] = ACTIONS(67),
    [anon_sym_importa] = ACTIONS(67),
    [anon_sym_magnitudo] = ACTIONS(67),
    [anon_sym_nexum] = ACTIONS(67),
    [anon_sym_optiones] = ACTIONS(67),
    [anon_sym_ordo] = ACTIONS(67),
    [anon_sym_prae] = ACTIONS(67),
    [anon_sym_privata] = ACTIONS(67),
    [anon_sym_protecta] = ACTIONS(67),
    [anon_sym_publica] = ACTIONS(67),
    [anon_sym_sit] = ACTIONS(67),
    [anon_sym_sponte] = ACTIONS(67),
    [anon_sym_typus] = ACTIONS(67),
    [anon_sym_varia] = ACTIONS(67),
    [anon_sym_ante] = ACTIONS(67),
    [anon_sym_aut] = ACTIONS(67),
    [anon_sym_cede] = ACTIONS(67),
    [anon_sym_clausura] = ACTIONS(67),
    [anon_sym_de] = ACTIONS(67),
    [anon_sym_ego] = ACTIONS(67),
    [anon_sym_est] = ACTIONS(67),
    [anon_sym_et] = ACTIONS(67),
    [anon_sym_ex] = ACTIONS(67),
    [anon_sym_finge] = ACTIONS(67),
    [anon_sym_fragilis] = ACTIONS(67),
    [anon_sym_futurum] = ACTIONS(67),
    [anon_sym_implet] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_inter] = ACTIONS(67),
    [anon_sym_intra] = ACTIONS(67),
    [anon_sym_lege] = ACTIONS(67),
    [anon_sym_lineam] = ACTIONS(67),
    [anon_sym_metior] = ACTIONS(67),
    [anon_sym_modulus] = ACTIONS(67),
    [anon_sym_mone] = ACTIONS(67),
    [anon_sym_negativum] = ACTIONS(67),
    [anon_sym_non] = ACTIONS(67),
    [anon_sym_nonnihil] = ACTIONS(67),
    [anon_sym_nonnulla] = ACTIONS(67),
    [anon_sym_nota] = ACTIONS(67),
    [anon_sym_nulla] = ACTIONS(67),
    [anon_sym_omitte] = ACTIONS(67),
    [anon_sym_omnia] = ACTIONS(67),
    [anon_sym_per] = ACTIONS(67),
    [anon_sym_positivum] = ACTIONS(67),
    [anon_sym_postpara] = ACTIONS(67),
    [anon_sym_postparabit] = ACTIONS(67),
    [anon_sym_praefixum] = ACTIONS(67),
    [anon_sym_praepara] = ACTIONS(67),
    [anon_sym_praeparabit] = ACTIONS(67),
    [anon_sym_pro] = ACTIONS(67),
    [anon_sym_proba] = ACTIONS(67),
    [anon_sym_probandum] = ACTIONS(67),
    [anon_sym_repete] = ACTIONS(67),
    [anon_sym_requirit] = ACTIONS(67),
    [anon_sym_scribe] = ACTIONS(67),
    [anon_sym_scriptum] = ACTIONS(67),
    [anon_sym_solum] = ACTIONS(67),
    [anon_sym_solum_in] = ACTIONS(67),
    [anon_sym_sparge] = ACTIONS(67),
    [anon_sym_sub] = ACTIONS(67),
    [anon_sym_tag] = ACTIONS(67),
    [anon_sym_temporis] = ACTIONS(67),
    [anon_sym_usque] = ACTIONS(67),
    [anon_sym_ut] = ACTIONS(67),
    [anon_sym_vel] = ACTIONS(67),
    [anon_sym_vide] = ACTIONS(67),
    [anon_sym_ascii] = ACTIONS(67),
    [anon_sym_bivalens] = ACTIONS(67),
    [anon_sym_copia] = ACTIONS(67),
    [anon_sym_cursor] = ACTIONS(67),
    [anon_sym_f16] = ACTIONS(67),
    [anon_sym_f32] = ACTIONS(67),
    [anon_sym_f64] = ACTIONS(67),
    [anon_sym_fractus] = ACTIONS(67),
    [anon_sym_i16] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(67),
    [anon_sym_i64] = ACTIONS(67),
    [anon_sym_i8] = ACTIONS(67),
    [anon_sym_ignotum] = ACTIONS(67),
    [anon_sym_instans] = ACTIONS(67),
    [anon_sym_intervallum] = ACTIONS(67),
    [anon_sym_json] = ACTIONS(67),
    [anon_sym_lf16] = ACTIONS(67),
    [anon_sym_lf32] = ACTIONS(67),
    [anon_sym_lf64] = ACTIONS(67),
    [anon_sym_li16] = ACTIONS(67),
    [anon_sym_li32] = ACTIONS(67),
    [anon_sym_li64] = ACTIONS(67),
    [anon_sym_li8] = ACTIONS(67),
    [anon_sym_lista] = ACTIONS(67),
    [anon_sym_lu16] = ACTIONS(67),
    [anon_sym_lu32] = ACTIONS(67),
    [anon_sym_lu64] = ACTIONS(67),
    [anon_sym_lu8] = ACTIONS(67),
    [anon_sym_matrix] = ACTIONS(67),
    [anon_sym_mf16] = ACTIONS(67),
    [anon_sym_mf32] = ACTIONS(67),
    [anon_sym_mf64] = ACTIONS(67),
    [anon_sym_mi16] = ACTIONS(67),
    [anon_sym_mi32] = ACTIONS(67),
    [anon_sym_mi64] = ACTIONS(67),
    [anon_sym_mi8] = ACTIONS(67),
    [anon_sym_mu16] = ACTIONS(67),
    [anon_sym_mu32] = ACTIONS(67),
    [anon_sym_mu64] = ACTIONS(67),
    [anon_sym_mu8] = ACTIONS(67),
    [anon_sym_nihil] = ACTIONS(67),
    [anon_sym_numerus] = ACTIONS(67),
    [anon_sym_numquam] = ACTIONS(67),
    [anon_sym_octet] = ACTIONS(67),
    [anon_sym_octeti] = ACTIONS(67),
    [anon_sym_promissum] = ACTIONS(67),
    [anon_sym_regex] = ACTIONS(67),
    [anon_sym_series] = ACTIONS(67),
    [anon_sym_sf16] = ACTIONS(67),
    [anon_sym_sf32] = ACTIONS(67),
    [anon_sym_sf64] = ACTIONS(67),
    [anon_sym_si16] = ACTIONS(67),
    [anon_sym_si32] = ACTIONS(67),
    [anon_sym_si64] = ACTIONS(67),
    [anon_sym_si8] = ACTIONS(67),
    [anon_sym_sparsa] = ACTIONS(67),
    [anon_sym_su16] = ACTIONS(67),
    [anon_sym_su32] = ACTIONS(67),
    [anon_sym_su64] = ACTIONS(67),
    [anon_sym_su8] = ACTIONS(67),
    [anon_sym_tabula] = ACTIONS(67),
    [anon_sym_tensor] = ACTIONS(67),
    [anon_sym_textus] = ACTIONS(67),
    [anon_sym_tf16] = ACTIONS(67),
    [anon_sym_tf32] = ACTIONS(67),
    [anon_sym_tf64] = ACTIONS(67),
    [anon_sym_ti16] = ACTIONS(67),
    [anon_sym_ti32] = ACTIONS(67),
    [anon_sym_ti64] = ACTIONS(67),
    [anon_sym_ti8] = ACTIONS(67),
    [anon_sym_tu16] = ACTIONS(67),
    [anon_sym_tu32] = ACTIONS(67),
    [anon_sym_tu64] = ACTIONS(67),
    [anon_sym_tu8] = ACTIONS(67),
    [anon_sym_u16] = ACTIONS(67),
    [anon_sym_u32] = ACTIONS(67),
    [anon_sym_u64] = ACTIONS(67),
    [anon_sym_u8] = ACTIONS(67),
    [anon_sym_unio] = ACTIONS(67),
    [anon_sym_vacua] = ACTIONS(67),
    [anon_sym_vacuum] = ACTIONS(67),
    [anon_sym_valor] = ACTIONS(67),
    [anon_sym_vector] = ACTIONS(67),
    [anon_sym_vf16] = ACTIONS(67),
    [anon_sym_vf32] = ACTIONS(67),
    [anon_sym_vf64] = ACTIONS(67),
    [anon_sym_vi16] = ACTIONS(67),
    [anon_sym_vi32] = ACTIONS(67),
    [anon_sym_vi64] = ACTIONS(67),
    [anon_sym_vi8] = ACTIONS(67),
    [anon_sym_vu16] = ACTIONS(67),
    [anon_sym_vu32] = ACTIONS(67),
    [anon_sym_vu64] = ACTIONS(67),
    [anon_sym_vu8] = ACTIONS(67),
    [anon_sym_falsum] = ACTIONS(67),
    [anon_sym_verum] = ACTIONS(67),
    [sym_guillemet_string] = ACTIONS(65),
    [sym_octeti_string] = ACTIONS(65),
    [sym_backtick_string] = ACTIONS(65),
    [sym_ascii_string] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_operator] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_hash] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(65),
    [sym_faber_newline] = ACTIONS(65),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_ad] = ACTIONS(71),
    [anon_sym_adfirma] = ACTIONS(71),
    [anon_sym_argumenta] = ACTIONS(71),
    [anon_sym_cape] = ACTIONS(71),
    [anon_sym_casu] = ACTIONS(71),
    [anon_sym_ceterum] = ACTIONS(71),
    [anon_sym_cura] = ACTIONS(71),
    [anon_sym_custodi] = ACTIONS(71),
    [anon_sym_demum] = ACTIONS(71),
    [anon_sym_discerne] = ACTIONS(71),
    [anon_sym_dum] = ACTIONS(71),
    [anon_sym_elige] = ACTIONS(71),
    [anon_sym_emitte] = ACTIONS(71),
    [anon_sym_ergo] = ACTIONS(71),
    [anon_sym_fac] = ACTIONS(71),
    [anon_sym_iace] = ACTIONS(71),
    [anon_sym_incipiet] = ACTIONS(71),
    [anon_sym_incipit] = ACTIONS(71),
    [anon_sym_itera] = ACTIONS(71),
    [anon_sym_mori] = ACTIONS(71),
    [anon_sym_perge] = ACTIONS(71),
    [anon_sym_redde] = ACTIONS(71),
    [anon_sym_rumpe] = ACTIONS(71),
    [anon_sym_secus] = ACTIONS(71),
    [anon_sym_si] = ACTIONS(71),
    [anon_sym_sic] = ACTIONS(71),
    [anon_sym_sin] = ACTIONS(71),
    [anon_sym_tacet] = ACTIONS(71),
    [anon_sym_tempta] = ACTIONS(71),
    [anon_sym_abstractus] = ACTIONS(71),
    [anon_sym_ceteri] = ACTIONS(71),
    [anon_sym_curata] = ACTIONS(71),
    [anon_sym_discretio] = ACTIONS(71),
    [anon_sym_errata] = ACTIONS(71),
    [anon_sym_exitus] = ACTIONS(71),
    [anon_sym_fixum] = ACTIONS(71),
    [anon_sym_functio] = ACTIONS(71),
    [anon_sym_generis] = ACTIONS(71),
    [anon_sym_genus] = ACTIONS(71),
    [anon_sym_iacit] = ACTIONS(71),
    [anon_sym_immutata] = ACTIONS(71),
    [anon_sym_implendum] = ACTIONS(71),
    [anon_sym_importa] = ACTIONS(71),
    [anon_sym_magnitudo] = ACTIONS(71),
    [anon_sym_nexum] = ACTIONS(71),
    [anon_sym_optiones] = ACTIONS(71),
    [anon_sym_ordo] = ACTIONS(71),
    [anon_sym_prae] = ACTIONS(71),
    [anon_sym_privata] = ACTIONS(71),
    [anon_sym_protecta] = ACTIONS(71),
    [anon_sym_publica] = ACTIONS(71),
    [anon_sym_sit] = ACTIONS(71),
    [anon_sym_sponte] = ACTIONS(71),
    [anon_sym_typus] = ACTIONS(71),
    [anon_sym_varia] = ACTIONS(71),
    [anon_sym_ante] = ACTIONS(71),
    [anon_sym_aut] = ACTIONS(71),
    [anon_sym_cede] = ACTIONS(71),
    [anon_sym_clausura] = ACTIONS(71),
    [anon_sym_de] = ACTIONS(71),
    [anon_sym_ego] = ACTIONS(71),
    [anon_sym_est] = ACTIONS(71),
    [anon_sym_et] = ACTIONS(71),
    [anon_sym_ex] = ACTIONS(71),
    [anon_sym_finge] = ACTIONS(71),
    [anon_sym_fragilis] = ACTIONS(71),
    [anon_sym_futurum] = ACTIONS(71),
    [anon_sym_implet] = ACTIONS(71),
    [anon_sym_in] = ACTIONS(71),
    [anon_sym_inter] = ACTIONS(71),
    [anon_sym_intra] = ACTIONS(71),
    [anon_sym_lege] = ACTIONS(71),
    [anon_sym_lineam] = ACTIONS(71),
    [anon_sym_metior] = ACTIONS(71),
    [anon_sym_modulus] = ACTIONS(71),
    [anon_sym_mone] = ACTIONS(71),
    [anon_sym_negativum] = ACTIONS(71),
    [anon_sym_non] = ACTIONS(71),
    [anon_sym_nonnihil] = ACTIONS(71),
    [anon_sym_nonnulla] = ACTIONS(71),
    [anon_sym_nota] = ACTIONS(71),
    [anon_sym_nulla] = ACTIONS(71),
    [anon_sym_omitte] = ACTIONS(71),
    [anon_sym_omnia] = ACTIONS(71),
    [anon_sym_per] = ACTIONS(71),
    [anon_sym_positivum] = ACTIONS(71),
    [anon_sym_postpara] = ACTIONS(71),
    [anon_sym_postparabit] = ACTIONS(71),
    [anon_sym_praefixum] = ACTIONS(71),
    [anon_sym_praepara] = ACTIONS(71),
    [anon_sym_praeparabit] = ACTIONS(71),
    [anon_sym_pro] = ACTIONS(71),
    [anon_sym_proba] = ACTIONS(71),
    [anon_sym_probandum] = ACTIONS(71),
    [anon_sym_repete] = ACTIONS(71),
    [anon_sym_requirit] = ACTIONS(71),
    [anon_sym_scribe] = ACTIONS(71),
    [anon_sym_scriptum] = ACTIONS(71),
    [anon_sym_solum] = ACTIONS(71),
    [anon_sym_solum_in] = ACTIONS(71),
    [anon_sym_sparge] = ACTIONS(71),
    [anon_sym_sub] = ACTIONS(71),
    [anon_sym_tag] = ACTIONS(71),
    [anon_sym_temporis] = ACTIONS(71),
    [anon_sym_usque] = ACTIONS(71),
    [anon_sym_ut] = ACTIONS(71),
    [anon_sym_vel] = ACTIONS(71),
    [anon_sym_vide] = ACTIONS(71),
    [anon_sym_ascii] = ACTIONS(71),
    [anon_sym_bivalens] = ACTIONS(71),
    [anon_sym_copia] = ACTIONS(71),
    [anon_sym_cursor] = ACTIONS(71),
    [anon_sym_f16] = ACTIONS(71),
    [anon_sym_f32] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(71),
    [anon_sym_fractus] = ACTIONS(71),
    [anon_sym_i16] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(71),
    [anon_sym_i8] = ACTIONS(71),
    [anon_sym_ignotum] = ACTIONS(71),
    [anon_sym_instans] = ACTIONS(71),
    [anon_sym_intervallum] = ACTIONS(71),
    [anon_sym_json] = ACTIONS(71),
    [anon_sym_lf16] = ACTIONS(71),
    [anon_sym_lf32] = ACTIONS(71),
    [anon_sym_lf64] = ACTIONS(71),
    [anon_sym_li16] = ACTIONS(71),
    [anon_sym_li32] = ACTIONS(71),
    [anon_sym_li64] = ACTIONS(71),
    [anon_sym_li8] = ACTIONS(71),
    [anon_sym_lista] = ACTIONS(71),
    [anon_sym_lu16] = ACTIONS(71),
    [anon_sym_lu32] = ACTIONS(71),
    [anon_sym_lu64] = ACTIONS(71),
    [anon_sym_lu8] = ACTIONS(71),
    [anon_sym_matrix] = ACTIONS(71),
    [anon_sym_mf16] = ACTIONS(71),
    [anon_sym_mf32] = ACTIONS(71),
    [anon_sym_mf64] = ACTIONS(71),
    [anon_sym_mi16] = ACTIONS(71),
    [anon_sym_mi32] = ACTIONS(71),
    [anon_sym_mi64] = ACTIONS(71),
    [anon_sym_mi8] = ACTIONS(71),
    [anon_sym_mu16] = ACTIONS(71),
    [anon_sym_mu32] = ACTIONS(71),
    [anon_sym_mu64] = ACTIONS(71),
    [anon_sym_mu8] = ACTIONS(71),
    [anon_sym_nihil] = ACTIONS(71),
    [anon_sym_numerus] = ACTIONS(71),
    [anon_sym_numquam] = ACTIONS(71),
    [anon_sym_octet] = ACTIONS(71),
    [anon_sym_octeti] = ACTIONS(71),
    [anon_sym_promissum] = ACTIONS(71),
    [anon_sym_regex] = ACTIONS(71),
    [anon_sym_series] = ACTIONS(71),
    [anon_sym_sf16] = ACTIONS(71),
    [anon_sym_sf32] = ACTIONS(71),
    [anon_sym_sf64] = ACTIONS(71),
    [anon_sym_si16] = ACTIONS(71),
    [anon_sym_si32] = ACTIONS(71),
    [anon_sym_si64] = ACTIONS(71),
    [anon_sym_si8] = ACTIONS(71),
    [anon_sym_sparsa] = ACTIONS(71),
    [anon_sym_su16] = ACTIONS(71),
    [anon_sym_su32] = ACTIONS(71),
    [anon_sym_su64] = ACTIONS(71),
    [anon_sym_su8] = ACTIONS(71),
    [anon_sym_tabula] = ACTIONS(71),
    [anon_sym_tensor] = ACTIONS(71),
    [anon_sym_textus] = ACTIONS(71),
    [anon_sym_tf16] = ACTIONS(71),
    [anon_sym_tf32] = ACTIONS(71),
    [anon_sym_tf64] = ACTIONS(71),
    [anon_sym_ti16] = ACTIONS(71),
    [anon_sym_ti32] = ACTIONS(71),
    [anon_sym_ti64] = ACTIONS(71),
    [anon_sym_ti8] = ACTIONS(71),
    [anon_sym_tu16] = ACTIONS(71),
    [anon_sym_tu32] = ACTIONS(71),
    [anon_sym_tu64] = ACTIONS(71),
    [anon_sym_tu8] = ACTIONS(71),
    [anon_sym_u16] = ACTIONS(71),
    [anon_sym_u32] = ACTIONS(71),
    [anon_sym_u64] = ACTIONS(71),
    [anon_sym_u8] = ACTIONS(71),
    [anon_sym_unio] = ACTIONS(71),
    [anon_sym_vacua] = ACTIONS(71),
    [anon_sym_vacuum] = ACTIONS(71),
    [anon_sym_valor] = ACTIONS(71),
    [anon_sym_vector] = ACTIONS(71),
    [anon_sym_vf16] = ACTIONS(71),
    [anon_sym_vf32] = ACTIONS(71),
    [anon_sym_vf64] = ACTIONS(71),
    [anon_sym_vi16] = ACTIONS(71),
    [anon_sym_vi32] = ACTIONS(71),
    [anon_sym_vi64] = ACTIONS(71),
    [anon_sym_vi8] = ACTIONS(71),
    [anon_sym_vu16] = ACTIONS(71),
    [anon_sym_vu32] = ACTIONS(71),
    [anon_sym_vu64] = ACTIONS(71),
    [anon_sym_vu8] = ACTIONS(71),
    [anon_sym_falsum] = ACTIONS(71),
    [anon_sym_verum] = ACTIONS(71),
    [sym_guillemet_string] = ACTIONS(69),
    [sym_octeti_string] = ACTIONS(69),
    [sym_backtick_string] = ACTIONS(69),
    [sym_ascii_string] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym_operator] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_hash] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(69),
    [sym_faber_newline] = ACTIONS(69),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_ad] = ACTIONS(75),
    [anon_sym_adfirma] = ACTIONS(75),
    [anon_sym_argumenta] = ACTIONS(75),
    [anon_sym_cape] = ACTIONS(75),
    [anon_sym_casu] = ACTIONS(75),
    [anon_sym_ceterum] = ACTIONS(75),
    [anon_sym_cura] = ACTIONS(75),
    [anon_sym_custodi] = ACTIONS(75),
    [anon_sym_demum] = ACTIONS(75),
    [anon_sym_discerne] = ACTIONS(75),
    [anon_sym_dum] = ACTIONS(75),
    [anon_sym_elige] = ACTIONS(75),
    [anon_sym_emitte] = ACTIONS(75),
    [anon_sym_ergo] = ACTIONS(75),
    [anon_sym_fac] = ACTIONS(75),
    [anon_sym_iace] = ACTIONS(75),
    [anon_sym_incipiet] = ACTIONS(75),
    [anon_sym_incipit] = ACTIONS(75),
    [anon_sym_itera] = ACTIONS(75),
    [anon_sym_mori] = ACTIONS(75),
    [anon_sym_perge] = ACTIONS(75),
    [anon_sym_redde] = ACTIONS(75),
    [anon_sym_rumpe] = ACTIONS(75),
    [anon_sym_secus] = ACTIONS(75),
    [anon_sym_si] = ACTIONS(75),
    [anon_sym_sic] = ACTIONS(75),
    [anon_sym_sin] = ACTIONS(75),
    [anon_sym_tacet] = ACTIONS(75),
    [anon_sym_tempta] = ACTIONS(75),
    [anon_sym_abstractus] = ACTIONS(75),
    [anon_sym_ceteri] = ACTIONS(75),
    [anon_sym_curata] = ACTIONS(75),
    [anon_sym_discretio] = ACTIONS(75),
    [anon_sym_errata] = ACTIONS(75),
    [anon_sym_exitus] = ACTIONS(75),
    [anon_sym_fixum] = ACTIONS(75),
    [anon_sym_functio] = ACTIONS(75),
    [anon_sym_generis] = ACTIONS(75),
    [anon_sym_genus] = ACTIONS(75),
    [anon_sym_iacit] = ACTIONS(75),
    [anon_sym_immutata] = ACTIONS(75),
    [anon_sym_implendum] = ACTIONS(75),
    [anon_sym_importa] = ACTIONS(75),
    [anon_sym_magnitudo] = ACTIONS(75),
    [anon_sym_nexum] = ACTIONS(75),
    [anon_sym_optiones] = ACTIONS(75),
    [anon_sym_ordo] = ACTIONS(75),
    [anon_sym_prae] = ACTIONS(75),
    [anon_sym_privata] = ACTIONS(75),
    [anon_sym_protecta] = ACTIONS(75),
    [anon_sym_publica] = ACTIONS(75),
    [anon_sym_sit] = ACTIONS(75),
    [anon_sym_sponte] = ACTIONS(75),
    [anon_sym_typus] = ACTIONS(75),
    [anon_sym_varia] = ACTIONS(75),
    [anon_sym_ante] = ACTIONS(75),
    [anon_sym_aut] = ACTIONS(75),
    [anon_sym_cede] = ACTIONS(75),
    [anon_sym_clausura] = ACTIONS(75),
    [anon_sym_de] = ACTIONS(75),
    [anon_sym_ego] = ACTIONS(75),
    [anon_sym_est] = ACTIONS(75),
    [anon_sym_et] = ACTIONS(75),
    [anon_sym_ex] = ACTIONS(75),
    [anon_sym_finge] = ACTIONS(75),
    [anon_sym_fragilis] = ACTIONS(75),
    [anon_sym_futurum] = ACTIONS(75),
    [anon_sym_implet] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(75),
    [anon_sym_inter] = ACTIONS(75),
    [anon_sym_intra] = ACTIONS(75),
    [anon_sym_lege] = ACTIONS(75),
    [anon_sym_lineam] = ACTIONS(75),
    [anon_sym_metior] = ACTIONS(75),
    [anon_sym_modulus] = ACTIONS(75),
    [anon_sym_mone] = ACTIONS(75),
    [anon_sym_negativum] = ACTIONS(75),
    [anon_sym_non] = ACTIONS(75),
    [anon_sym_nonnihil] = ACTIONS(75),
    [anon_sym_nonnulla] = ACTIONS(75),
    [anon_sym_nota] = ACTIONS(75),
    [anon_sym_nulla] = ACTIONS(75),
    [anon_sym_omitte] = ACTIONS(75),
    [anon_sym_omnia] = ACTIONS(75),
    [anon_sym_per] = ACTIONS(75),
    [anon_sym_positivum] = ACTIONS(75),
    [anon_sym_postpara] = ACTIONS(75),
    [anon_sym_postparabit] = ACTIONS(75),
    [anon_sym_praefixum] = ACTIONS(75),
    [anon_sym_praepara] = ACTIONS(75),
    [anon_sym_praeparabit] = ACTIONS(75),
    [anon_sym_pro] = ACTIONS(75),
    [anon_sym_proba] = ACTIONS(75),
    [anon_sym_probandum] = ACTIONS(75),
    [anon_sym_repete] = ACTIONS(75),
    [anon_sym_requirit] = ACTIONS(75),
    [anon_sym_scribe] = ACTIONS(75),
    [anon_sym_scriptum] = ACTIONS(75),
    [anon_sym_solum] = ACTIONS(75),
    [anon_sym_solum_in] = ACTIONS(75),
    [anon_sym_sparge] = ACTIONS(75),
    [anon_sym_sub] = ACTIONS(75),
    [anon_sym_tag] = ACTIONS(75),
    [anon_sym_temporis] = ACTIONS(75),
    [anon_sym_usque] = ACTIONS(75),
    [anon_sym_ut] = ACTIONS(75),
    [anon_sym_vel] = ACTIONS(75),
    [anon_sym_vide] = ACTIONS(75),
    [anon_sym_ascii] = ACTIONS(75),
    [anon_sym_bivalens] = ACTIONS(75),
    [anon_sym_copia] = ACTIONS(75),
    [anon_sym_cursor] = ACTIONS(75),
    [anon_sym_f16] = ACTIONS(75),
    [anon_sym_f32] = ACTIONS(75),
    [anon_sym_f64] = ACTIONS(75),
    [anon_sym_fractus] = ACTIONS(75),
    [anon_sym_i16] = ACTIONS(75),
    [anon_sym_i32] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(75),
    [anon_sym_i8] = ACTIONS(75),
    [anon_sym_ignotum] = ACTIONS(75),
    [anon_sym_instans] = ACTIONS(75),
    [anon_sym_intervallum] = ACTIONS(75),
    [anon_sym_json] = ACTIONS(75),
    [anon_sym_lf16] = ACTIONS(75),
    [anon_sym_lf32] = ACTIONS(75),
    [anon_sym_lf64] = ACTIONS(75),
    [anon_sym_li16] = ACTIONS(75),
    [anon_sym_li32] = ACTIONS(75),
    [anon_sym_li64] = ACTIONS(75),
    [anon_sym_li8] = ACTIONS(75),
    [anon_sym_lista] = ACTIONS(75),
    [anon_sym_lu16] = ACTIONS(75),
    [anon_sym_lu32] = ACTIONS(75),
    [anon_sym_lu64] = ACTIONS(75),
    [anon_sym_lu8] = ACTIONS(75),
    [anon_sym_matrix] = ACTIONS(75),
    [anon_sym_mf16] = ACTIONS(75),
    [anon_sym_mf32] = ACTIONS(75),
    [anon_sym_mf64] = ACTIONS(75),
    [anon_sym_mi16] = ACTIONS(75),
    [anon_sym_mi32] = ACTIONS(75),
    [anon_sym_mi64] = ACTIONS(75),
    [anon_sym_mi8] = ACTIONS(75),
    [anon_sym_mu16] = ACTIONS(75),
    [anon_sym_mu32] = ACTIONS(75),
    [anon_sym_mu64] = ACTIONS(75),
    [anon_sym_mu8] = ACTIONS(75),
    [anon_sym_nihil] = ACTIONS(75),
    [anon_sym_numerus] = ACTIONS(75),
    [anon_sym_numquam] = ACTIONS(75),
    [anon_sym_octet] = ACTIONS(75),
    [anon_sym_octeti] = ACTIONS(75),
    [anon_sym_promissum] = ACTIONS(75),
    [anon_sym_regex] = ACTIONS(75),
    [anon_sym_series] = ACTIONS(75),
    [anon_sym_sf16] = ACTIONS(75),
    [anon_sym_sf32] = ACTIONS(75),
    [anon_sym_sf64] = ACTIONS(75),
    [anon_sym_si16] = ACTIONS(75),
    [anon_sym_si32] = ACTIONS(75),
    [anon_sym_si64] = ACTIONS(75),
    [anon_sym_si8] = ACTIONS(75),
    [anon_sym_sparsa] = ACTIONS(75),
    [anon_sym_su16] = ACTIONS(75),
    [anon_sym_su32] = ACTIONS(75),
    [anon_sym_su64] = ACTIONS(75),
    [anon_sym_su8] = ACTIONS(75),
    [anon_sym_tabula] = ACTIONS(75),
    [anon_sym_tensor] = ACTIONS(75),
    [anon_sym_textus] = ACTIONS(75),
    [anon_sym_tf16] = ACTIONS(75),
    [anon_sym_tf32] = ACTIONS(75),
    [anon_sym_tf64] = ACTIONS(75),
    [anon_sym_ti16] = ACTIONS(75),
    [anon_sym_ti32] = ACTIONS(75),
    [anon_sym_ti64] = ACTIONS(75),
    [anon_sym_ti8] = ACTIONS(75),
    [anon_sym_tu16] = ACTIONS(75),
    [anon_sym_tu32] = ACTIONS(75),
    [anon_sym_tu64] = ACTIONS(75),
    [anon_sym_tu8] = ACTIONS(75),
    [anon_sym_u16] = ACTIONS(75),
    [anon_sym_u32] = ACTIONS(75),
    [anon_sym_u64] = ACTIONS(75),
    [anon_sym_u8] = ACTIONS(75),
    [anon_sym_unio] = ACTIONS(75),
    [anon_sym_vacua] = ACTIONS(75),
    [anon_sym_vacuum] = ACTIONS(75),
    [anon_sym_valor] = ACTIONS(75),
    [anon_sym_vector] = ACTIONS(75),
    [anon_sym_vf16] = ACTIONS(75),
    [anon_sym_vf32] = ACTIONS(75),
    [anon_sym_vf64] = ACTIONS(75),
    [anon_sym_vi16] = ACTIONS(75),
    [anon_sym_vi32] = ACTIONS(75),
    [anon_sym_vi64] = ACTIONS(75),
    [anon_sym_vi8] = ACTIONS(75),
    [anon_sym_vu16] = ACTIONS(75),
    [anon_sym_vu32] = ACTIONS(75),
    [anon_sym_vu64] = ACTIONS(75),
    [anon_sym_vu8] = ACTIONS(75),
    [anon_sym_falsum] = ACTIONS(75),
    [anon_sym_verum] = ACTIONS(75),
    [sym_guillemet_string] = ACTIONS(73),
    [sym_octeti_string] = ACTIONS(73),
    [sym_backtick_string] = ACTIONS(73),
    [sym_ascii_string] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_operator] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_hash] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(73),
    [sym_faber_newline] = ACTIONS(73),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [anon_sym_abstractus] = ACTIONS(79),
    [anon_sym_ceteri] = ACTIONS(79),
    [anon_sym_curata] = ACTIONS(79),
    [anon_sym_discretio] = ACTIONS(79),
    [anon_sym_errata] = ACTIONS(79),
    [anon_sym_exitus] = ACTIONS(79),
    [anon_sym_fixum] = ACTIONS(79),
    [anon_sym_functio] = ACTIONS(79),
    [anon_sym_generis] = ACTIONS(79),
    [anon_sym_genus] = ACTIONS(79),
    [anon_sym_iacit] = ACTIONS(79),
    [anon_sym_immutata] = ACTIONS(79),
    [anon_sym_implendum] = ACTIONS(79),
    [anon_sym_importa] = ACTIONS(79),
    [anon_sym_magnitudo] = ACTIONS(79),
    [anon_sym_nexum] = ACTIONS(79),
    [anon_sym_optiones] = ACTIONS(79),
    [anon_sym_ordo] = ACTIONS(79),
    [anon_sym_prae] = ACTIONS(79),
    [anon_sym_privata] = ACTIONS(79),
    [anon_sym_protecta] = ACTIONS(79),
    [anon_sym_publica] = ACTIONS(79),
    [anon_sym_sit] = ACTIONS(79),
    [anon_sym_sponte] = ACTIONS(79),
    [anon_sym_typus] = ACTIONS(79),
    [anon_sym_varia] = ACTIONS(79),
    [anon_sym_ante] = ACTIONS(79),
    [anon_sym_aut] = ACTIONS(79),
    [anon_sym_cede] = ACTIONS(79),
    [anon_sym_clausura] = ACTIONS(79),
    [anon_sym_de] = ACTIONS(79),
    [anon_sym_ego] = ACTIONS(79),
    [anon_sym_est] = ACTIONS(79),
    [anon_sym_et] = ACTIONS(79),
    [anon_sym_ex] = ACTIONS(79),
    [anon_sym_finge] = ACTIONS(79),
    [anon_sym_fragilis] = ACTIONS(79),
    [anon_sym_futurum] = ACTIONS(79),
    [anon_sym_implet] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_inter] = ACTIONS(79),
    [anon_sym_intra] = ACTIONS(79),
    [anon_sym_lege] = ACTIONS(79),
    [anon_sym_lineam] = ACTIONS(79),
    [anon_sym_metior] = ACTIONS(79),
    [anon_sym_modulus] = ACTIONS(79),
    [anon_sym_mone] = ACTIONS(79),
    [anon_sym_negativum] = ACTIONS(79),
    [anon_sym_non] = ACTIONS(79),
    [anon_sym_nonnihil] = ACTIONS(79),
    [anon_sym_nonnulla] = ACTIONS(79),
    [anon_sym_nota] = ACTIONS(79),
    [anon_sym_nulla] = ACTIONS(79),
    [anon_sym_omitte] = ACTIONS(79),
    [anon_sym_omnia] = ACTIONS(79),
    [anon_sym_per] = ACTIONS(79),
    [anon_sym_positivum] = ACTIONS(79),
    [anon_sym_postpara] = ACTIONS(79),
    [anon_sym_postparabit] = ACTIONS(79),
    [anon_sym_praefixum] = ACTIONS(79),
    [anon_sym_praepara] = ACTIONS(79),
    [anon_sym_praeparabit] = ACTIONS(79),
    [anon_sym_pro] = ACTIONS(79),
    [anon_sym_proba] = ACTIONS(79),
    [anon_sym_probandum] = ACTIONS(79),
    [anon_sym_repete] = ACTIONS(79),
    [anon_sym_requirit] = ACTIONS(79),
    [anon_sym_scribe] = ACTIONS(79),
    [anon_sym_scriptum] = ACTIONS(79),
    [anon_sym_solum] = ACTIONS(79),
    [anon_sym_solum_in] = ACTIONS(79),
    [anon_sym_sparge] = ACTIONS(79),
    [anon_sym_sub] = ACTIONS(79),
    [anon_sym_tag] = ACTIONS(79),
    [anon_sym_temporis] = ACTIONS(79),
    [anon_sym_usque] = ACTIONS(79),
    [anon_sym_ut] = ACTIONS(79),
    [anon_sym_vel] = ACTIONS(79),
    [anon_sym_vide] = ACTIONS(79),
    [anon_sym_ascii] = ACTIONS(79),
    [anon_sym_bivalens] = ACTIONS(79),
    [anon_sym_copia] = ACTIONS(79),
    [anon_sym_cursor] = ACTIONS(79),
    [anon_sym_f16] = ACTIONS(79),
    [anon_sym_f32] = ACTIONS(79),
    [anon_sym_f64] = ACTIONS(79),
    [anon_sym_fractus] = ACTIONS(79),
    [anon_sym_i16] = ACTIONS(79),
    [anon_sym_i32] = ACTIONS(79),
    [anon_sym_i64] = ACTIONS(79),
    [anon_sym_i8] = ACTIONS(79),
    [anon_sym_ignotum] = ACTIONS(79),
    [anon_sym_instans] = ACTIONS(79),
    [anon_sym_intervallum] = ACTIONS(79),
    [anon_sym_json] = ACTIONS(79),
    [anon_sym_lf16] = ACTIONS(79),
    [anon_sym_lf32] = ACTIONS(79),
    [anon_sym_lf64] = ACTIONS(79),
    [anon_sym_li16] = ACTIONS(79),
    [anon_sym_li32] = ACTIONS(79),
    [anon_sym_li64] = ACTIONS(79),
    [anon_sym_li8] = ACTIONS(79),
    [anon_sym_lista] = ACTIONS(79),
    [anon_sym_lu16] = ACTIONS(79),
    [anon_sym_lu32] = ACTIONS(79),
    [anon_sym_lu64] = ACTIONS(79),
    [anon_sym_lu8] = ACTIONS(79),
    [anon_sym_matrix] = ACTIONS(79),
    [anon_sym_mf16] = ACTIONS(79),
    [anon_sym_mf32] = ACTIONS(79),
    [anon_sym_mf64] = ACTIONS(79),
    [anon_sym_mi16] = ACTIONS(79),
    [anon_sym_mi32] = ACTIONS(79),
    [anon_sym_mi64] = ACTIONS(79),
    [anon_sym_mi8] = ACTIONS(79),
    [anon_sym_mu16] = ACTIONS(79),
    [anon_sym_mu32] = ACTIONS(79),
    [anon_sym_mu64] = ACTIONS(79),
    [anon_sym_mu8] = ACTIONS(79),
    [anon_sym_nihil] = ACTIONS(79),
    [anon_sym_numerus] = ACTIONS(79),
    [anon_sym_numquam] = ACTIONS(79),
    [anon_sym_octet] = ACTIONS(79),
    [anon_sym_octeti] = ACTIONS(79),
    [anon_sym_promissum] = ACTIONS(79),
    [anon_sym_regex] = ACTIONS(79),
    [anon_sym_series] = ACTIONS(79),
    [anon_sym_sf16] = ACTIONS(79),
    [anon_sym_sf32] = ACTIONS(79),
    [anon_sym_sf64] = ACTIONS(79),
    [anon_sym_si16] = ACTIONS(79),
    [anon_sym_si32] = ACTIONS(79),
    [anon_sym_si64] = ACTIONS(79),
    [anon_sym_si8] = ACTIONS(79),
    [anon_sym_sparsa] = ACTIONS(79),
    [anon_sym_su16] = ACTIONS(79),
    [anon_sym_su32] = ACTIONS(79),
    [anon_sym_su64] = ACTIONS(79),
    [anon_sym_su8] = ACTIONS(79),
    [anon_sym_tabula] = ACTIONS(79),
    [anon_sym_tensor] = ACTIONS(79),
    [anon_sym_textus] = ACTIONS(79),
    [anon_sym_tf16] = ACTIONS(79),
    [anon_sym_tf32] = ACTIONS(79),
    [anon_sym_tf64] = ACTIONS(79),
    [anon_sym_ti16] = ACTIONS(79),
    [anon_sym_ti32] = ACTIONS(79),
    [anon_sym_ti64] = ACTIONS(79),
    [anon_sym_ti8] = ACTIONS(79),
    [anon_sym_tu16] = ACTIONS(79),
    [anon_sym_tu32] = ACTIONS(79),
    [anon_sym_tu64] = ACTIONS(79),
    [anon_sym_tu8] = ACTIONS(79),
    [anon_sym_u16] = ACTIONS(79),
    [anon_sym_u32] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(79),
    [anon_sym_u8] = ACTIONS(79),
    [anon_sym_unio] = ACTIONS(79),
    [anon_sym_vacua] = ACTIONS(79),
    [anon_sym_vacuum] = ACTIONS(79),
    [anon_sym_valor] = ACTIONS(79),
    [anon_sym_vector] = ACTIONS(79),
    [anon_sym_vf16] = ACTIONS(79),
    [anon_sym_vf32] = ACTIONS(79),
    [anon_sym_vf64] = ACTIONS(79),
    [anon_sym_vi16] = ACTIONS(79),
    [anon_sym_vi32] = ACTIONS(79),
    [anon_sym_vi64] = ACTIONS(79),
    [anon_sym_vi8] = ACTIONS(79),
    [anon_sym_vu16] = ACTIONS(79),
    [anon_sym_vu32] = ACTIONS(79),
    [anon_sym_vu64] = ACTIONS(79),
    [anon_sym_vu8] = ACTIONS(79),
    [anon_sym_falsum] = ACTIONS(79),
    [anon_sym_verum] = ACTIONS(79),
    [sym_guillemet_string] = ACTIONS(77),
    [sym_octeti_string] = ACTIONS(77),
    [sym_backtick_string] = ACTIONS(77),
    [sym_ascii_string] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_operator] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_hash] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(77),
    [sym_faber_newline] = ACTIONS(77),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_ad] = ACTIONS(83),
    [anon_sym_adfirma] = ACTIONS(83),
    [anon_sym_argumenta] = ACTIONS(83),
    [anon_sym_cape] = ACTIONS(83),
    [anon_sym_casu] = ACTIONS(83),
    [anon_sym_ceterum] = ACTIONS(83),
    [anon_sym_cura] = ACTIONS(83),
    [anon_sym_custodi] = ACTIONS(83),
    [anon_sym_demum] = ACTIONS(83),
    [anon_sym_discerne] = ACTIONS(83),
    [anon_sym_dum] = ACTIONS(83),
    [anon_sym_elige] = ACTIONS(83),
    [anon_sym_emitte] = ACTIONS(83),
    [anon_sym_ergo] = ACTIONS(83),
    [anon_sym_fac] = ACTIONS(83),
    [anon_sym_iace] = ACTIONS(83),
    [anon_sym_incipiet] = ACTIONS(83),
    [anon_sym_incipit] = ACTIONS(83),
    [anon_sym_itera] = ACTIONS(83),
    [anon_sym_mori] = ACTIONS(83),
    [anon_sym_perge] = ACTIONS(83),
    [anon_sym_redde] = ACTIONS(83),
    [anon_sym_rumpe] = ACTIONS(83),
    [anon_sym_secus] = ACTIONS(83),
    [anon_sym_si] = ACTIONS(83),
    [anon_sym_sic] = ACTIONS(83),
    [anon_sym_sin] = ACTIONS(83),
    [anon_sym_tacet] = ACTIONS(83),
    [anon_sym_tempta] = ACTIONS(83),
    [anon_sym_abstractus] = ACTIONS(83),
    [anon_sym_ceteri] = ACTIONS(83),
    [anon_sym_curata] = ACTIONS(83),
    [anon_sym_discretio] = ACTIONS(83),
    [anon_sym_errata] = ACTIONS(83),
    [anon_sym_exitus] = ACTIONS(83),
    [anon_sym_fixum] = ACTIONS(83),
    [anon_sym_functio] = ACTIONS(83),
    [anon_sym_generis] = ACTIONS(83),
    [anon_sym_genus] = ACTIONS(83),
    [anon_sym_iacit] = ACTIONS(83),
    [anon_sym_immutata] = ACTIONS(83),
    [anon_sym_implendum] = ACTIONS(83),
    [anon_sym_importa] = ACTIONS(83),
    [anon_sym_magnitudo] = ACTIONS(83),
    [anon_sym_nexum] = ACTIONS(83),
    [anon_sym_optiones] = ACTIONS(83),
    [anon_sym_ordo] = ACTIONS(83),
    [anon_sym_prae] = ACTIONS(83),
    [anon_sym_privata] = ACTIONS(83),
    [anon_sym_protecta] = ACTIONS(83),
    [anon_sym_publica] = ACTIONS(83),
    [anon_sym_sit] = ACTIONS(83),
    [anon_sym_sponte] = ACTIONS(83),
    [anon_sym_typus] = ACTIONS(83),
    [anon_sym_varia] = ACTIONS(83),
    [anon_sym_ante] = ACTIONS(83),
    [anon_sym_aut] = ACTIONS(83),
    [anon_sym_cede] = ACTIONS(83),
    [anon_sym_clausura] = ACTIONS(83),
    [anon_sym_de] = ACTIONS(83),
    [anon_sym_ego] = ACTIONS(83),
    [anon_sym_est] = ACTIONS(83),
    [anon_sym_et] = ACTIONS(83),
    [anon_sym_ex] = ACTIONS(83),
    [anon_sym_finge] = ACTIONS(83),
    [anon_sym_fragilis] = ACTIONS(83),
    [anon_sym_futurum] = ACTIONS(83),
    [anon_sym_implet] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_inter] = ACTIONS(83),
    [anon_sym_intra] = ACTIONS(83),
    [anon_sym_lege] = ACTIONS(83),
    [anon_sym_lineam] = ACTIONS(83),
    [anon_sym_metior] = ACTIONS(83),
    [anon_sym_modulus] = ACTIONS(83),
    [anon_sym_mone] = ACTIONS(83),
    [anon_sym_negativum] = ACTIONS(83),
    [anon_sym_non] = ACTIONS(83),
    [anon_sym_nonnihil] = ACTIONS(83),
    [anon_sym_nonnulla] = ACTIONS(83),
    [anon_sym_nota] = ACTIONS(83),
    [anon_sym_nulla] = ACTIONS(83),
    [anon_sym_omitte] = ACTIONS(83),
    [anon_sym_omnia] = ACTIONS(83),
    [anon_sym_per] = ACTIONS(83),
    [anon_sym_positivum] = ACTIONS(83),
    [anon_sym_postpara] = ACTIONS(83),
    [anon_sym_postparabit] = ACTIONS(83),
    [anon_sym_praefixum] = ACTIONS(83),
    [anon_sym_praepara] = ACTIONS(83),
    [anon_sym_praeparabit] = ACTIONS(83),
    [anon_sym_pro] = ACTIONS(83),
    [anon_sym_proba] = ACTIONS(83),
    [anon_sym_probandum] = ACTIONS(83),
    [anon_sym_repete] = ACTIONS(83),
    [anon_sym_requirit] = ACTIONS(83),
    [anon_sym_scribe] = ACTIONS(83),
    [anon_sym_scriptum] = ACTIONS(83),
    [anon_sym_solum] = ACTIONS(83),
    [anon_sym_solum_in] = ACTIONS(83),
    [anon_sym_sparge] = ACTIONS(83),
    [anon_sym_sub] = ACTIONS(83),
    [anon_sym_tag] = ACTIONS(83),
    [anon_sym_temporis] = ACTIONS(83),
    [anon_sym_usque] = ACTIONS(83),
    [anon_sym_ut] = ACTIONS(83),
    [anon_sym_vel] = ACTIONS(83),
    [anon_sym_vide] = ACTIONS(83),
    [anon_sym_ascii] = ACTIONS(83),
    [anon_sym_bivalens] = ACTIONS(83),
    [anon_sym_copia] = ACTIONS(83),
    [anon_sym_cursor] = ACTIONS(83),
    [anon_sym_f16] = ACTIONS(83),
    [anon_sym_f32] = ACTIONS(83),
    [anon_sym_f64] = ACTIONS(83),
    [anon_sym_fractus] = ACTIONS(83),
    [anon_sym_i16] = ACTIONS(83),
    [anon_sym_i32] = ACTIONS(83),
    [anon_sym_i64] = ACTIONS(83),
    [anon_sym_i8] = ACTIONS(83),
    [anon_sym_ignotum] = ACTIONS(83),
    [anon_sym_instans] = ACTIONS(83),
    [anon_sym_intervallum] = ACTIONS(83),
    [anon_sym_json] = ACTIONS(83),
    [anon_sym_lf16] = ACTIONS(83),
    [anon_sym_lf32] = ACTIONS(83),
    [anon_sym_lf64] = ACTIONS(83),
    [anon_sym_li16] = ACTIONS(83),
    [anon_sym_li32] = ACTIONS(83),
    [anon_sym_li64] = ACTIONS(83),
    [anon_sym_li8] = ACTIONS(83),
    [anon_sym_lista] = ACTIONS(83),
    [anon_sym_lu16] = ACTIONS(83),
    [anon_sym_lu32] = ACTIONS(83),
    [anon_sym_lu64] = ACTIONS(83),
    [anon_sym_lu8] = ACTIONS(83),
    [anon_sym_matrix] = ACTIONS(83),
    [anon_sym_mf16] = ACTIONS(83),
    [anon_sym_mf32] = ACTIONS(83),
    [anon_sym_mf64] = ACTIONS(83),
    [anon_sym_mi16] = ACTIONS(83),
    [anon_sym_mi32] = ACTIONS(83),
    [anon_sym_mi64] = ACTIONS(83),
    [anon_sym_mi8] = ACTIONS(83),
    [anon_sym_mu16] = ACTIONS(83),
    [anon_sym_mu32] = ACTIONS(83),
    [anon_sym_mu64] = ACTIONS(83),
    [anon_sym_mu8] = ACTIONS(83),
    [anon_sym_nihil] = ACTIONS(83),
    [anon_sym_numerus] = ACTIONS(83),
    [anon_sym_numquam] = ACTIONS(83),
    [anon_sym_octet] = ACTIONS(83),
    [anon_sym_octeti] = ACTIONS(83),
    [anon_sym_promissum] = ACTIONS(83),
    [anon_sym_regex] = ACTIONS(83),
    [anon_sym_series] = ACTIONS(83),
    [anon_sym_sf16] = ACTIONS(83),
    [anon_sym_sf32] = ACTIONS(83),
    [anon_sym_sf64] = ACTIONS(83),
    [anon_sym_si16] = ACTIONS(83),
    [anon_sym_si32] = ACTIONS(83),
    [anon_sym_si64] = ACTIONS(83),
    [anon_sym_si8] = ACTIONS(83),
    [anon_sym_sparsa] = ACTIONS(83),
    [anon_sym_su16] = ACTIONS(83),
    [anon_sym_su32] = ACTIONS(83),
    [anon_sym_su64] = ACTIONS(83),
    [anon_sym_su8] = ACTIONS(83),
    [anon_sym_tabula] = ACTIONS(83),
    [anon_sym_tensor] = ACTIONS(83),
    [anon_sym_textus] = ACTIONS(83),
    [anon_sym_tf16] = ACTIONS(83),
    [anon_sym_tf32] = ACTIONS(83),
    [anon_sym_tf64] = ACTIONS(83),
    [anon_sym_ti16] = ACTIONS(83),
    [anon_sym_ti32] = ACTIONS(83),
    [anon_sym_ti64] = ACTIONS(83),
    [anon_sym_ti8] = ACTIONS(83),
    [anon_sym_tu16] = ACTIONS(83),
    [anon_sym_tu32] = ACTIONS(83),
    [anon_sym_tu64] = ACTIONS(83),
    [anon_sym_tu8] = ACTIONS(83),
    [anon_sym_u16] = ACTIONS(83),
    [anon_sym_u32] = ACTIONS(83),
    [anon_sym_u64] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(83),
    [anon_sym_unio] = ACTIONS(83),
    [anon_sym_vacua] = ACTIONS(83),
    [anon_sym_vacuum] = ACTIONS(83),
    [anon_sym_valor] = ACTIONS(83),
    [anon_sym_vector] = ACTIONS(83),
    [anon_sym_vf16] = ACTIONS(83),
    [anon_sym_vf32] = ACTIONS(83),
    [anon_sym_vf64] = ACTIONS(83),
    [anon_sym_vi16] = ACTIONS(83),
    [anon_sym_vi32] = ACTIONS(83),
    [anon_sym_vi64] = ACTIONS(83),
    [anon_sym_vi8] = ACTIONS(83),
    [anon_sym_vu16] = ACTIONS(83),
    [anon_sym_vu32] = ACTIONS(83),
    [anon_sym_vu64] = ACTIONS(83),
    [anon_sym_vu8] = ACTIONS(83),
    [anon_sym_falsum] = ACTIONS(83),
    [anon_sym_verum] = ACTIONS(83),
    [sym_guillemet_string] = ACTIONS(81),
    [sym_octeti_string] = ACTIONS(81),
    [sym_backtick_string] = ACTIONS(81),
    [sym_ascii_string] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_operator] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_hash] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(81),
    [sym_faber_newline] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_comment = 0,
  ts_external_token_faber_newline = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_faber_newline] = sym_faber_newline,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_comment] = true,
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
