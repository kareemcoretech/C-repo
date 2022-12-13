/*Write a C function that takes an array as input and reverse
it without creating another array.
Example:
Input : 1,2,3,4,5
Output: 5,4,3,2,1*/

#include <stdio.h>
#include "operation.h"
//i will use operation.c to store my functions

void main()
{
	int array1[5];
	int sizeofarray = sizeof(array1)/sizeof(array1[0]);
	
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Enter number %d in the array: ", i);
		scanf("%d", &array1[i]);
	}
	
	reverse_array(array1, sizeofarray);
}