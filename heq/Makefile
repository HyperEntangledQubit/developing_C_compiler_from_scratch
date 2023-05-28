OBJECTS= bld/compiler.o bld/cprocess.o
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o main

bld/compiler.o: compiler.c
	gcc compiler.c ${INCLUDES} -o bld/compiler.o -g -c

bld/cprocess.o: cprocess.c
	gcc cprocess.c ${INCLUDES} -o bld/cprocess.o -g -c

clean:
	rm main
	rm -rf main.dSYM # This bothers me
	rm -rf ${OBJECTS}
