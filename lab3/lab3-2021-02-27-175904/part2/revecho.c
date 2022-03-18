#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../part1/mylist.h"

int main(int argc, char ** argv){

int dudeChecker =0;
char *dude = "dude";
char *curStr;

struct List list;
initList(&list);

	//i=1 in each loop to skip argv[0]
	for (int i=1; i<argc;i++){
		addFront(&list, argv[i]);
	}

	for(int i=1; i<argc; i++){
		curStr = popFront(&list);
		printf("%s\n",curStr);
	
	
		if (strcmp(dude, argv[i])==0){
			dudeChecker = 1;
		}	
	}

	if (dudeChecker ==1){
		printf("\ndude found\n");
	}else{
		printf("\ndude not found\n");
	}


return 0;
}
