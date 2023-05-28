OBJECTS=
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o ./main

clean:
	rm main
	rm -rf main.dSYM # This bothers me
	rm -rf ${OBJECTS}
