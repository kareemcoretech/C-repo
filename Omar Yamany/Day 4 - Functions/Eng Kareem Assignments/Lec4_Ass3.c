//write a C Function that display Prime Numbers between Intervals (two numbers).

#include <stdio.h>
#include "operation.h"



void main()
{
	//b must be bigger than a for this code to work 
	printf("Enter starting number for the interval: ");
	int a, b;
	scanf("%d", &a);
	printf("Enter ending number for the interval: ");
	scanf("%d", &b);
	
	check_prime(a,b);
}

