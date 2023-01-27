#include<stdio.h>
int sqr(int n);
void main()
{
	int n, sqrt;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	sqrt = sqr(n);
	if(sqrt!=0)
		printf("result = %d", sqrt);
	else
		printf("no square root");
	
}

int sqr(int n)
{
	for(int i=1;i<n;i++)
	{
		if((i*i)==n)
			return i;
	}
	return 0;
}