/*Write a C function to swap the contents of two arrays with
the same length.*/

#include <stdio.h>
#include "operation.h"
//i will use operation.c to save my functions

void main()
{
	int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
	int sizeofarray = sizeof(arr1)/sizeof(arr1[0]);
	printf("Arrays before swapping: \n");
	printf("Array 1\t\tArray2\n");
	for(int i=0; i<sizeofarray;i++)
	{
		printf("%d\t\t%d\n", arr1[i], arr2[i]);
	}
	
	swap_arrays(arr1, arr2, sizeofarray);
}