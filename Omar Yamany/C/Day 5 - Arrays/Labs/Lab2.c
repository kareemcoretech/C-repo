#include <stdio.h>
#include "operation.h"

int main()
{
	int narray[10] = {0};
	int sizeofarray = sizeof(narray)/sizeof(narray[0]);
	int average, sum;
	
	sum = getsum(narray, sizeofarray);
	
	average = sum/10;
	
	printf("Sum = %d\n", sum);
	printf("Average = %d\n", average);
}