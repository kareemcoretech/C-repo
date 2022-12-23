#include<stdio.h>
int main()
{
	int n;
	int p;
	int i;
	printf("Enter a Positive integer:");
	scanf("%d",&n);
	p=n/2;
	for(i=2;i<p;i++)
	{
		if(n%i==0)
		{
			printf("Number is not prime");
			break;
		}
		else
		{
			printf("Number is prime");
		}
	}
	
}