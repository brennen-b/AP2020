#include <stdio.h>

int main(){

	int x,i;
	printf("Please enter an integer: ");
	scanf("%d", &x);

	printf("signed dec:   %d\n", x);
	printf("unsigned dec: %u\n", x);
	printf("hex:          %x\n", x);
	printf("binary:       ");

	
	for(i=0;i<32;i++){

		int p;

		//loop moves bit all the way to the left then increments to the right
		p = x & (1<<(31-i));
	
		if(p==0){
			 printf("0");
	       	}else{
			printf("1");
		}	
	
		//breaks at the end so that it doesn't create an extra space and starts a new line
		if (i==31){
			printf("\n");
			break;
		}	
			
		if ((i+1)%4==0){
			printf(" ");
		}	

	}	
}





