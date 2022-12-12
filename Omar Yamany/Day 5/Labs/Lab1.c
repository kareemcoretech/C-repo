#include <stdio.h>
#include "operation.h"



int main()
{
	int numarray[10];
	int sizeofarray = sizeof(numarray)/sizeof(numarray[0]);
	for(int i=0;i<10;i++)
	{
		printf("Please enter number %d: ", i);
		scanf("%d", &numarray[i]);
	}
	reversearray(numarray, sizeofarray);
	
	
}