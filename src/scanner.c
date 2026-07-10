#include "tree_sitter/parser.h"

enum TokenType {
    LINE_COMMENT,
    FABER_NEWLINE,
};

typedef struct {
    bool line_has_code;
} Scanner;

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_newline(TSLexer *lexer, Scanner *scanner) {
    if (lexer->lookahead == '\r') {
        advance(lexer);
        if (lexer->lookahead == '\n') {
            advance(lexer);
        }
        scanner->line_has_code = false;
        lexer->mark_end(lexer);
        lexer->result_symbol = FABER_NEWLINE;
        return true;
    }

    if (lexer->lookahead == '\n') {
        advance(lexer);
        scanner->line_has_code = false;
        lexer->mark_end(lexer);
        lexer->result_symbol = FABER_NEWLINE;
        return true;
    }

    return false;
}

static bool scan_line_comment(TSLexer *lexer, Scanner *scanner) {
    if (lexer->lookahead != '#') {
        return false;
    }

    if (scanner->line_has_code) {
        return false;
    }

    advance(lexer);
    while (lexer->lookahead != 0 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
        advance(lexer);
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = LINE_COMMENT;
    return true;
}

void *tree_sitter_faber_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    return scanner;
}

void tree_sitter_faber_external_scanner_destroy(void *payload) {
    free(payload);
}

unsigned tree_sitter_faber_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = payload;
    buffer[0] = scanner->line_has_code ? 1 : 0;
    return 1;
}

void tree_sitter_faber_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = payload;
    scanner->line_has_code = length > 0 && buffer[0] != 0;
}

static bool is_significant(int32_t lookahead) {
    return lookahead != 0 && lookahead != ' ' && lookahead != '\t' && lookahead != '\n' && lookahead != '\r';
}

bool tree_sitter_faber_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = payload;

    if (valid_symbols[FABER_NEWLINE] && scan_newline(lexer, scanner)) {
        return true;
    }

    if (valid_symbols[LINE_COMMENT] && scan_line_comment(lexer, scanner)) {
        return true;
    }

    if (is_significant(lexer->lookahead) && lexer->lookahead != '#') {
        scanner->line_has_code = true;
    }

    return false;
}