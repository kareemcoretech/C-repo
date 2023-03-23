#include<stdio.h>

void print_number(int low, int up);

void main()
{
	int lower_limit, upper_limit;
	printf("Enter lower limit: ");
	scanf("%d", &lower_limit);
	printf("Enter upper limit: ");
	scanf("%d", &upper_limit);
	printf("\nAll natural numbers from 0 to 10 are: ");
	print_number(lower_limit,upper_limit);
}

void print_number(int low, int up)
{
	printf("%d, ", low);
	if(low!=up)
	{
		print_number(low+1,up);
	}
}