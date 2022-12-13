// Write a C Function that prints the cube of any number

#include <stdio.h>
#include "operation.h"


int main()
{
	int x;
	printf("Enter a number to get it's cube: ");
	scanf("%d", &x);
	Get_Cube(x);
}

