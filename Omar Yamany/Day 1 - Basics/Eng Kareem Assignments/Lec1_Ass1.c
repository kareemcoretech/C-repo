#include <stdio.h>

int main()
{
	int x,y, result;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	result = ((x+y)*3)-10;
	printf("Result: %d\n", result);
}