/* Write a C function to return the index of FIRST occurrence of
a number in a given array. Array index start from 0. If the item
is not in the list return -1.
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 3 */

#include <stdio.h>
#include "operation.h"
// i will use operation.c to store my functions

void main()
{
	int array[6] = {11, 22, 33, 44, 55, 66};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	int index_found, search_number;
	printf("Please enter a number to search for: ");
	scanf("%d", &search_number);
	index_found = search_array(array, sizeofarray, search_number);
	if(index_found == -1)
	{
		printf("Number was not found in the list");
	}
	else
	{
		printf("The required number is found at index: %d", index_found);
	}
}