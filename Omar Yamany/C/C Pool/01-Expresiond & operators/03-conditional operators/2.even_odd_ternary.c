#include <stdio.h>

void main()
{
	int number;
	printf("Enter a number to check even or odd: ");
	scanf("%d", &number);
	
	(number%2)?printf("Number is odd"):printf("Number is even");
}