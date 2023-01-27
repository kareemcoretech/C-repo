#include<stdio.h>

void main()
{
	int number, first, last, sum;
	printf("Enter any number: ");
	scanf("%d", &number);
	
	//store last number
	last = number%10;
	
	//while loop to get first number
	while(number>=10)
	{
		number = number/10;
		first = number;
	}
	
	sum = first+last;
	printf("Sum of first and last digit: %d", sum);
}