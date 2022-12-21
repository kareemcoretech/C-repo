#include<stdio.h>
#include"arrayio.h"

void get_min(int *ptr, int size, int *output);

void main()
{
	int array[5];
	int min;
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	input_array(array,sizeofarray); //from arrayio library
	get_min(array,sizeofarray,&min);
	printf("Minimum element equals: %d", min);
}

void get_min(int *ptr, int size, int *output)
{
	*output = ptr[0];
	for(int i=0;i<size;i++)
	{
		if(*output > ptr[i])
			*output = ptr[i];
	}
}