//C Function to compute sum of the array elements using pointers.

#include<stdio.h>
#include"arrayio.h"

void get_sum(int *ptr, int size, int *result);

void main()
{
	int array[5]={0};
	int sum=0;
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	input_array(array,sizeofarray); //from arrayio.h
	get_sum(array, sizeofarray, &sum);
	printf("Sum of array elements: %d", sum);
}

void get_sum(int *ptr, int size, int *result)
{
	for(int i=0;i<size;i++)
		*result += ptr[i];
}
