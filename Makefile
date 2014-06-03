CC=gcc
CFLAGS=-Wall -g
all: test

test: test.o lib2.o
	$(CC) $(CFLAGS) -o test lib2.o test.o

test.o: lib2.o 
	$(CC) $(CFLAGS) -c test.c
	

lib2.o: 
	$(CC) $(CFLAGS) -c lib2.c

clean:
	rm -f *.o test

