#include <stdio.h>

void main()
{
	int number, order,number_of_leading_zeroes;
	printf("Enter any number: ");
	scanf("%d", &number);
	for(int i=0;i<31;i++)
	{
		if(number & 1<<i)
			order=i;

	}
	number_of_leading_zeroes = 31 - order;
	printf("Total number of leading zeroes in %d is %d", number, number_of_leading_zeroes);
}
