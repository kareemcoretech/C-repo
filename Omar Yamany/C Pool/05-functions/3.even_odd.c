#include<stdio.h>

int check_even(int n);

void main()
{
	printf("Enter any number: ");
	int x;
	scanf("%d", &x);
	if(check_even(x))
		printf("Number is even");
	else
		printf("Number is odd");
}

int check_even(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}