#include <stdio.h>
#include "operation.h"

void main()
{
	int numarray[10] = {5, 7, 10, 13, 20, 22, 33, 41, 46, 51};
	int sizeofarray = sizeof(numarray)/sizeof(numarray[0]);
	int search_number, found;
	printf("Enter a number to search for: ");
	scanf("%d", &search_number);
	found = binary_search(numarray, sizeofarray, search_number);
	if(found == 1)
	{
		printf("Value Found.");
	}
	else
	{
		printf("Value Not Exist");
	}
}