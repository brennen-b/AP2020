#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void sort_integer_array(int *begin, int *end, int ascending); 


int compareFunction(const void* a , const void* b){

	const int *pa = (int*) a;
	const int *pb = (int*) b;
	const int diff= *pb- *pa;

	return (diff);
}

int compareFunctionReverse(const void* a , const void* b){
	
        const int *pa = (int*) a;
        const int *pb = (int*) b;
        const int diff= *pa- *pb;

        return (diff);

}

void sort_integer_array(int *begin, int *end, int ascending){

        int size = (end - begin)+1 ;

        if (ascending ==1){
                qsort( begin , size,  sizeof(int) , compareFunction);
        }else{
                qsort (begin , size, sizeof(int), compareFunctionReverse);
        }
}

int main()
{
	int x;
	srandom(time(NULL));

	//user input
	printf("Please enter array size: ");
	scanf("%d",&x);

	//malloc	
	int *p=malloc(x * sizeof(int));
        if (p== NULL){
                perror("malloc returned NULL");
                exit(1);
        }

	//prints orignal numbers modded by 100
	printf("original: ");
	for (int i =0; i<x; i++){
		p[i]=(random() % 100);
		printf("%d ",p[i]);
	}
	printf("\n");
	
	//sorts numbers in ascending order
	printf("ascending: ");
	sort_integer_array(p,(p+x)-1,0);

	for (int i =0; i<x; i++){
		printf("%d ",p[i]);
	}
	printf("\n");

	//sorts numbers in descending order
	printf("descending: ");
	sort_integer_array(p,(p+x)-1,1);

 	for (int i =0; i<x; i++){
                printf("%d ",p[i]);
        }
	printf("\n");


	free(p);

}
