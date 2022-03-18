#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mdb.h"
#include "mylist.h"

int main(int argc, char ** argv){
	
	char *br = "temp";//used to break loop at the end

	do{
		char *filename = argv[1];
		FILE *db = fopen(filename,"r");

		struct List list;
		initList(&list);

		struct Node *node=NULL;
		struct MdbRec *block;

		char *name;
		char *msg;
		int j=0;
		char buf[40];

		while (fread((void *) buf, 40, 1, db)){ //creates each MdbRec and assigns in linked list

			block = malloc(40);
			if (block==NULL){
				perror("malloc return NULL");
				exit(1);
			}
	
			name = &buf[0];
			msg = &buf[16];

			for (int i=0; i<strlen(name)+1;i++){
				block->name[i] = name[i];
			}	

			for (int i=0; i<strlen(msg)+1;i++){
				block->msg[i] = msg[i];
			}
		
			node = addAfter(&list, node, block);
		}

		char input[1000] = "temps"; //Had to initialize this string to avoid errors
		char term[5];

		printf("lookup: ");

		if (fgets(input,1000,stdin)==NULL){ //catches if Ctrl+D is pressed and frees memory early
			printf("\n");
			br = NULL;
			while(block = popFront(&list))
				free(block);
			fclose(db);
			break;
		}

		for (int i=0; i<5; i++){//condenses input into 5 char array

			if(input[i]=='\n'){//catches if enter was pressed
				term[i]='\0';
			}else{
				term[i] = input[i];
			}
		}

		while(block = popFront(&list)){
			j++;
			if (strstr(block->name,term) || strstr(block->msg, term) || input[0]=='\0'){//prints matching records or all records  
				if(j<10)//gives proper spacing before digits to match Jae's format 		   
					printf(" ");
				if (j<100)
					printf(" ");
		
				printf("%d: {%s} said {%s}\n",j,block->name,block->msg);
			}	

			free(block);
		}

		fclose(db);

	}while(br);

return 0;

}

