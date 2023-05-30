OBJECTS= bld/compiler.o bld/cprocess.o bld/lexer.o bld/lex_process.o bld/utils/buffer.o bld/utils/vector.o
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o main

bld/compiler.o: compiler.c
	gcc compiler.c ${INCLUDES} -o bld/compiler.o -g -c

bld/cprocess.o: cprocess.c
	gcc cprocess.c ${INCLUDES} -o bld/cprocess.o -g -c

bld/lexer.o: lexer.c
	gcc lexer.c ${INCLUDES} -o bld/lexer.o -g -c

bld/lex_process.o: lex_process.c
	gcc lex_process.c ${INCLUDES} -o bld/lex_process.o -g -c

bld/utils/buffer.o: utils/buffer.c
	gcc utils/buffer.c ${INCLUDES} -o bld/utils/buffer.o -g -c

bld/utils/vector.o: utils/vector.c
	gcc utils/vector.c ${INCLUDES} -o bld/utils/vector.o -g -c
clean:
	rm main
	rm -rf main.dSYM # This bothers me
	rm -rf ${OBJECTS}
