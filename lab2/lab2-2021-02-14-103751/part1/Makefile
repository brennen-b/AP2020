CC= gcc
CFLAGS= -Wall -g
LDLibs= lm

isort: isort.o


.PHONY: clean
clean:
	rm -f *.o a.out core isort

.Phony: all
all: clean isort


.Phony: run
run: clean isort
	./isort

.Phony: vg 
vg:
	valgrind --leak-check=yes ./isort
	
