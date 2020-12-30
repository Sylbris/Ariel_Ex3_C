CC=gcc
CFLAGS= -Wall -g

all: isort txtfind

isort: isort.c isort.h
	$(CC) $(CFLAGS) -o isort isort.c

txtfind: txtfind.c isort.h
	$(CC) $(CFLAGS) -o txtfind txtfind.c

.PHONY: clean 
	
clean:              #clean all .o files.
	rm -f mains *.o *.a isort txtfind
