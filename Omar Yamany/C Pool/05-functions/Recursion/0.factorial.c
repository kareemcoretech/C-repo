#include<stdio.h>

int get_fact(int number);

void main()
{
	int number;
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	printf("Factorial of %d is %d", number, get_fact(number));
}

int get_fact(int number)
{
	if(number>=1)
	{
		return number*get_fact(number-1);
	}
	else
	{
		return 1;
	}
}