#include<stdio.h>

int main()
{
	int x = 0;
	printf("Enter Number \n");
	scanf("%d",&x);

	if(x>10)
	{
		printf("x > 10");
	}
	else if(x<10)
	{
		printf("x < 10");
	}
	else if(x == 10)
	{
		printf("x = 10");
	}
}