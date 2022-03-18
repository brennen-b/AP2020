CC= gcc
CFLAGS= -Wall -g
LDLibs= lm

twecho: twecho.o


.PHONY: clean
clean:
	rm -f *.o a.out core twecho

.Phony: all
all: clean isort


.Phony: run
run: clean  twecho
	./twecho hello world and cs3157
.Phony: vg
vg:
	valgrind --leak-check=yes  ./twecho hello world and cs3157 
