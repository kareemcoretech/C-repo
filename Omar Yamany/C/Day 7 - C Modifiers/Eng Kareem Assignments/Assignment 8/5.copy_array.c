/* C function to copy all elements of an array into another
array using pointers. The two arrays have the same length and
types. */

#include<stdio.h>
#include"arrayio.h"

void copy_array(int *ptr1, int *ptr2, int size);

void main()
{
	int arr1[6],arr2[6];
	int sizeofarray = sizeof(arr1)/sizeof(arr1[0]);
	printf("Enter an array to copy to another array: \n");
	input_array(arr1,sizeofarray); //from arrayio library
	copy_array(arr1,arr2,sizeofarray);
	printf("\n----------------------\n");
	printf("Values of array 1 after copying:\n");
	output_array(arr1,sizeofarray);
	printf("\n----------------------\n");
	printf("Values of array 2 after copying:\n");
	output_array(arr2,sizeofarray);
}

void copy_array(int *ptr1, int *ptr2, int size)
{
	for(int i=0;i<size;i++)
		ptr2[i] = ptr1[i];
}