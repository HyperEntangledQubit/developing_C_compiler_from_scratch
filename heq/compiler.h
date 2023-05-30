#ifndef HEQCOMPILER_H
#define HEQCOMPILER_H
/* Will eventually contain all methods (which will be alot) to get HEQ to work.
 * Not the cleanest way to do this. Right now, we are optimizing for ease. */

#include <stdio.h> // Put this into the Makefile
#include <stdbool.h>

struct pos {
    int line;
    int col;
    const char* filename;
};

enum {
    TOKEN_TYPE_IDENTIFIER,
    TOKEN_TYPE_KEYWORD,
    TOKEN_TYPE_OPERATOR,
    TOKEN_TYPE_SYMBOL,
    TOKEN_TYPE_NUMBER,
    TOKEN_TYPE_STRING,
    TOKEN_TYPE_COMMENT,
    TOKEN_TYPE_NEWLINE,
};

struct token {
    int type;
    int flags;

    union {
        char cval;
        const char* sval;
        unsigned int inum;
        unsigned long lnum;
        unsigned long long llnum;
        void* any;
    };
    bool whitespace; // only true if whitespace between multiple token(s)
    const char* between_brackets; // points to all tokens inside brackets
};

enum {
    COMPILER_FILE_COMPILED_OK,
    COMPILER_FAILED_WITH_ERRORS,
};

struct compile_process {
    int flags; // Compilation flags

    struct compile_process_input_file {
        FILE* fp;
        const char* abs_path;
    } cfile;

    FILE* ofile;
};

int compile_file(const char* filename, const char* out_filename, int flags);
struct compile_process* compile_process_create(const char* filename, const char* filename_out, int flags);

#endif
