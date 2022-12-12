#include <stdio.h>

int main()
{
	printf("Please enter a positive integer: ");
	int x, flag;
	scanf("%d", &x);
	for(int i=0;i<x;i++)
	{
		if(x==i*i)
		{
			printf("Number is a perfect square");
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("Number is not a perfect square");
	}
}