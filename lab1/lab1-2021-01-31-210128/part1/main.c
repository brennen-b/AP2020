#include <stdio.h>
#include "prime.h"
#include "gcd.h"

int main()
{
	int x,y,z;
	double avg;		

	printf("Please type first integer: ");
	scanf("%d", &x);

        printf("Please type second integer: ");
	scanf("%d", &y);

	printf("You typed in %d and %d.\n", x, y);
	avg = ((double)x+y) / 2;
	printf("The average is: %f\n", avg);

	if (isPrime(x)==1){
		printf("%d is prime.\n", x );
	}else{
		printf("%d is not prime.\n",x );
	}

	if (isPrime(y)==1){
        	printf("%d is prime.\n", y );
        }else{
	        printf("%d is not prime.\n", y );
        }

	z = gcd(x,y);

	if (z==1){
		printf("%d and %d are relatively prime.\n",x,y);
	}else{
		printf("%d and %d are not relatively prime.\n",x,y);
	}
	return 0;
}	



