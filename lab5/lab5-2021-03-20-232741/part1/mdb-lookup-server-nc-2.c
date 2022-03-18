#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>



static void die(const char *s)
{
    perror(s);
    exit(1);
}

int main(int argc, char * argv[])
{
	
	int br=1;//break character for loop
    	int j=0;
	char port[100];
	pid_t pid;

	while(br){
		start:

		for (int i=0;i<j;i++){ //loop to remove exited children
			pid_t pid2;
			while( (pid2 = waitpid( (pid_t) -1, NULL, WNOHANG))!=0){
	     			fprintf(stderr, "[pid=%d] ", (int)pid);
   	   			fprintf(stderr, "mdb-lookup-server terminated\n");
			}
		}

		printf("port number: ");

		char E = getc(stdin);		//catch Enter Key
		if (E=='\n'){
			goto start;		
		}else						
			ungetc(E, stdin);	

		scanf("%s", port); //get port input
		argv[1] = port;

		E=getc(stdin);//flush \n from previous input
		E='\0';	      //reset E (clearing stdin)

		j++; //variable to track potential children
      		pid= fork();

  		if (pid < 0) {
       			die("fork failed");    
	  	}else if (pid== 0) {
    			// child process
			fprintf(stderr, "[pid=%d] ", (int)getpid());
			fprintf(stderr, "mdb-lookup-server started on port %s\n", argv[1]);
			execl("./mdb-lookup-server-nc.sh", "mdb-lookup-server-nc.sh",argv[1], (char *)0);
			die("execl failed");
    		}
	}
return 0;
}

