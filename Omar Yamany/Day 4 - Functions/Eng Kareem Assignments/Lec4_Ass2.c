// Write a calculator 

#include <stdio.h>
#include "operation.h"


void main()
{
	int x, y, result;
	char z;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	printf("Enter operation code: ");
	scanf(" %c", &z);
	if((z=='+')||(z=='-')||(z=='*')||(z=='/'))
	{
		result = Calc(x,y,z);
		printf("Result = %d", result);
	}
	else
	{
		printf("Invalid operation code!");
	}
}

