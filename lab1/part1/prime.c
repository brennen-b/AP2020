#include "prime.h"

//returns 0 if not prime and 1 if prime.
int isPrime (int x)
{
	int i;

	//since 1 is technically not prime
	if (x==1){
		return 0;
	}
	
	//int i begins at 2 so that x isn't modded by 1
	for (i=2; i<x; i++){
		if ( x%i ==  0){
			return 0;
		}
	}
	
	return 1;
}
