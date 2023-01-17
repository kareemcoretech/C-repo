#include<stdio.h>

int power(int n, int p);

void main()
{
	int base, exponent;
	printf("Enter base: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exponent);
	printf("Result = %d", power(base,exponent));
}

int power(int n, int p)
{
	if(p>=1)
	{
		return n*power(n,(p-1));
	}
	else
	{
		return 1;
	}
}