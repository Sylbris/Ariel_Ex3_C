CC=gcc
CFLAGS= -Wall -g

mains: main.o libmysort.a
	$(CC) $(CFLAGS) -o mains main.o libmysort.a 

libmysort.a: isort.o                 
	ar -rcs libmysort.a isort.o

isort.o: isort.c isort.h
	$(CC) $(CFLAGS) -c isort.c

main.o: main.c isort.h
	$(CC) $(CFLAGS) -c main.c
	
.PHONY: clean 
	
clean:              #clean all .o files.
	rm -f mains *.o *.a
