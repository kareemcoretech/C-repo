#include <stdio.h>

void main()
{
	int length, width;
	float perimeter;
	printf("Enter number 1: ");
	scanf("%d", &length);
	printf("Enter number 2: ");
	scanf("%d", &width);
	perimeter = 2*(length+width);
	printf("Result = %f", perimeter);
}