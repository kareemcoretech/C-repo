/* Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values.
*/

#include <stdio.h>
#include "operation.h"
//i will use operation.c to store my functions

void main()
{
	int numbers[10];
	int sizeofarray = sizeof(numbers)/sizeof(numbers[0]);
	printf("Enter 10 values: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &numbers[i]);
	}
	Get_Max(numbers, sizeofarray);
	Get_Min(numbers, sizeofarray);
}