#include<stdio.h>

int main()
{
	int x = 0;
	printf("Enter Number \n");
	scanf("%d",&x);

	if(x % 2 == 0)
	{
		printf("Number %d Is Even",x);
	}
	else if(x % 2 != 0)
	{
		printf("Number %d Is Odd",x);
	}
}