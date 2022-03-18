CC= gcc
CFLAGS= -g -Wall

mdb-lookup-server-nc-2: 

.PHONY: clean
clean: 
	rm -f *.o mdb-lookup-server-nc-2

.PHONY: run
run: clean mdb-lookup-server-nc-2
	./mdb-lookup-server-nc-2

.PHONY: vg
vg: clean mdb-lookup-server-nc-2
	valgrind --leak-check=yes ./mdb-lookup-server-nc-2


