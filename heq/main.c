#include<stdio.h>

#include "utils/vector.h"
#include "compiler.h"

int main(int argc, char* argv[]) {

    int result = compile_file("dummy.c", "dummy.c", 0);

    if (result == COMPILER_FILE_COMPILED_OK) {
        printf("HEQ compiler succeeded compilation!\n");
    } else if (result == COMPILER_FAILED_WITH_ERRORS){
        printf("HEQ compiler failed compilation!\n");
    } else {
        printf("HEQ compiler received an unknown response!\n");
    }

    return 0;
}
