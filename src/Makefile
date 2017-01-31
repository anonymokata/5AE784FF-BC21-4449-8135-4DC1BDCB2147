CFLAGS=-Wall -pthread 
LIBS= -lcheck_pic -pthread -lrt -lm -lsubunit

all: calculare-test

clean:
	rm -f *.o
	rm -f calculare-test.c

calculare-test: calculare.o calculare-test.o
	gcc -o calculare-test calculare.o calculare-test.o $(LIBS)

calculare.o: calculare.c calculare.h
	gcc $(CFLAGS) -c calculare.c
	
calculare-test.o: calculare-test.c calculare.h
	gcc $(CFLAGS) -c calculare-test.c

calculare-test.c: calculare-test.check
	checkmk calculare-test.check > calculare-test.c
