/*Write a C function that returns 1 if the input number is a
power of 2 and return 0 if the input number is power of 3,
otherwise it shall return -1.*/

#include <stdio.h>
#include "operation.h"


void main()
{
	int num, output;
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	output = checkpower(num);
	printf ("System returned %d", output);
}

