CC = gcc $(INCLUDES)
CFLAGs = -g -Wall $(INCLUDES)

INCLUDES = -I../../lab3/solutions/part1

LDFLAGS = -g -L../../lab3/solutions/part1
LDLIBS = -lmylist

mdb-lookup: mdb.h 

.PHONY: clean
clean: 
	rm -f *.o mdb-lookup
.PHONY:all
all: clean mdb-lookup

.PHONY: run
run: clean mdb-lookup
	./mdb-lookup my-mdb
.PHONY: vg
vg: clean mdb-lookup
	valgrind --leak-check=yes --track-origins=yes ./mdb-lookup my-mdb


