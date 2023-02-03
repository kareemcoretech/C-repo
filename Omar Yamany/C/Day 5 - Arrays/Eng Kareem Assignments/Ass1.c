/* Write a function called total, which totals the sum of an
integer array passed to it (as the first parameter) and returns
the total of all the elements as an integer. Let the second
parameter to the function be an integer which contains the
number of elements of the array. */

#include <stdio.h>
#include "operation.h"
//i will use operation.c to save my functions

void main()
{
	int array[7];
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	printf("Enter the 7 values of the array: ");
	for(int i=0;i<sizeofarray;i++)
	{
		scanf("%d", &array[i]);
	}
	int sum = total(array, sizeofarray);
	printf("Total values of the array is: %d", sum);
}