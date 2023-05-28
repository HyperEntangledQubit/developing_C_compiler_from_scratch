#ifndef HEQCOMPILER_H
#define HEQCOMPILER_H
/* Will eventually contain all methods (which will be alot) to get HEQ to work.
 * Not the cleanest way to do this. Right now, we are optimizing for ease. */

#include <stdio.h> // Put this into the Makefile

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
