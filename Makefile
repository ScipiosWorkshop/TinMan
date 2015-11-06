

all: main.x hash.o

main.x: main.o probability.o hash.o
	gcc -g main.o probability.o hash.o -o main.x

main.o: main.c probability.h hash.h
	gcc -c main.c

probability.o: probability.c probability.h
	gcc -c probability.c

hash.o: hash.c hash.h
	gcc -c hash.c

clean:
	rm *.o *.x
