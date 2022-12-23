#include <stdio.h>

void main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	

	if(number&1)
		printf("Number is odd");
	else
		printf("number is even");

}