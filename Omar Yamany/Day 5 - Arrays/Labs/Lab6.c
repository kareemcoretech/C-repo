#include <stdio.h>
#include "operation.h"

void main ()
{
	int numarray[10];
	int sizeofarray = sizeof(numarray)/sizeof(numarray[0]);
	
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Please Enter number %d: ", i);
		scanf("%d", &numarray[i]);
	}
	
	print_max(numarray, sizeofarray);
	print_min(numarray, sizeofarray);
}