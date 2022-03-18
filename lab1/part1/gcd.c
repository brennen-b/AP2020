#include "gcd.h"

//recursive version of the Euclidean Algorithm from Wikipedia. Source also in README
int gcd(int x, int y){

	if (y==0){
		return x;
	}else{
		return gcd(y, x%y);
	}	
}	

