CC=gcc
CFLAGS= -Wall -g

mains: main.o libmysort.a
	$(CC) $(CFLAGS) -o mains main.o libmysort.a

txtfind: txtfind.o libmytxt.a
	$(CC) $(CFLAGS) -o txtfind txtfind.o libmytxt.a

libmysort.a: isort.o                 
	ar -rcs libmysort.a isort.o

libmytxt.a: txtfind.o               
	ar -rcs libmytxt.a txtfind.o

isort.o: isort.c isort.h
	$(CC) $(CFLAGS) -c isort.c

txtfind.o: txtfind.c isort.h
	$(CC) $(CFLAGS) -c txtfind.c

main.o: main.c isort.h
	$(CC) $(CFLAGS) -c main.c
	
.PHONY: clean 
	
clean:              #clean all .o files.
	rm -f mains *.o *.a
