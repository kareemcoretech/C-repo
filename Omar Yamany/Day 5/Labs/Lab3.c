#include <stdio.h>
#include "operation.h"

void main()
{
	int numarray[10];
	int sizeofarray = sizeof(numarray)/sizeof(numarray[0]);
	int temp;
	
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Please Enter number %d: ", i);
		scanf("%d", &numarray[i]);
	}
	
	for(int i=0;i<sizeofarray-1;i++)
	{
		for(int j=0;j<sizeofarray-i-1;j++)
		{
			if(numarray[j]>numarray[j+1])
			{
				temp=numarray[j];
				numarray[j]=numarray[j+1];
				numarray[j+1]=temp;
			}
		}
	}
	
	print_array(numarray, sizeofarray);
	
}