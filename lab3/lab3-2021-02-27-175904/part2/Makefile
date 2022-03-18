CC = gcc
CFLAGS = -Wall -g
LDLIBS= -lm -L../part1/ -lmylist
INCLUDES= -I../part1/ mylist.h

revecho: revecho.o 

revecho.o: revecho.c

.PHONY:clean
clean:
	rm -f *.o *.a a.out core revecho

.PHONY:all
all: clean revecho

.PHONY:run
run: clean revecho
	./revecho hello world dude friend

.PHONY: vg
vg: 
	valgrind --leak-check=yes ./revecho hello world dude friend

