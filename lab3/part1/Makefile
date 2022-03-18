CC= gcc
CFLAGS= -Wall -g
LDLibs= lm

mylist: libmylist.a

libmylist.a: mylist.o mylist-test.o
	ar rcs libmylist.a mylist.o mylist-test.o 

mylist.o: mylist.c mylist.h

mylist-test.o: mylist-test.c
 


.PHONY: clean
clean:
	rm -f *.o *.a a.out core mylist

.Phony: all
all: clean mylist


.Phony: run
run: clean  mylist
	./mylist
.Phony: vg
vg: mylist
	valgrind --leak-check=yes  ./mylist
