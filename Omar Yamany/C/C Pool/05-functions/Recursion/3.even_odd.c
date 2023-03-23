#include<stdio.h>

void print_even(int low, int up);

void main()
{
	int lower_limit, upper_limit;
	printf("Enter lower limit: ");
	scanf("%d", &lower_limit);
	printf("Enter upper limit: ");
	scanf("%d", &upper_limit);
	printf("\nEven numbers from 0 to 10 are: ");
	print_even(lower_limit,upper_limit);
}

void print_even(int low, int up)
{
	if(low%2==0)
	{
		printf("%d, ", low);
	}
	if(low!=up)
	{
		print_even(low+1,up);
	}
}