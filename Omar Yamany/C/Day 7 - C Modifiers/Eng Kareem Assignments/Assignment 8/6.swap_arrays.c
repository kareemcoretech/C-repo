/* Write a C function to swap the contents of two arrays with
the same length using pointers. */

#include<stdio.h>
#include"arrayio.h"

void swap_arrays(int *ptr1, int *ptr2, int size);

void main()
{
	int arr1[6],arr2[6];
	int sizeofarray = sizeof(arr1)/sizeof(arr1[0]);
	printf("Enter values of array 1: \n");
	input_array(arr1,sizeofarray); //from arrayio library
	printf("Enter values of array 2: \n");
	input_array(arr2,sizeofarray); //from arrayio library
	swap_arrays(arr1,arr2,sizeofarray);
	printf("\n----------------------\n");
	printf("Values of array 1 after swapping:\n");
	output_array(arr1,sizeofarray);
	printf("\n----------------------\n");
	printf("Values of array 2 after swapping:\n");
	output_array(arr2,sizeofarray);
}

void swap_arrays(int *ptr1, int *ptr2, int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		temp = ptr1[i];
		ptr1[i] = ptr2[i];
		ptr2[i] = temp;
	}
}