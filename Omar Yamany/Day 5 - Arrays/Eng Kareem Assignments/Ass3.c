/* Write a C function to return the index of LAST occurrence of
a number in a given array. Array index start from 0. If the item
is not in the list return -1
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 5 */

#include <stdio.h>
#include "operation.h"
//i will use operation.c to store my functions


//we can write the function in 2 ways
//we can start a for loop from size and decrement i to 0
//or store index in a variable and use return after the for loop to run full iterations and get last index value
//ill use second way

void main()
{
	int array[6] = {11, 66, 33, 44, 66, 66};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	int index_found, search_number;
	//let search number be 66 as it's repeated 3 times
	printf("Enter a number to search for: ");
	scanf("%d", &search_number);
	index_found = search_last_occ(array, sizeofarray, search_number);
	if(index_found == -1)
	{
		printf("Number not found");
	}
	else
	{
		printf("Index of last occurance of the number in the array is: %d", index_found);
	}
}