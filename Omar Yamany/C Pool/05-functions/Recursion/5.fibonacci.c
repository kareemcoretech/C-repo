#include<stdio.h>

int fibonacci(int n1, int n2, int n);

void main()
{
	int n1=0, n2=1, stop;
	printf("Enter any number to find nth fibonacci term: ");
	scanf("%d", &stop);
	printf("%d fibonacci term is: %d", stop, fibonacci(n1,n2,stop));
}

int fibonacci(int n1, int n2, int n)
{
	if(n>=1)
	{
		return fibonacci(n2,n1+n2,n-1);
	}
	
}