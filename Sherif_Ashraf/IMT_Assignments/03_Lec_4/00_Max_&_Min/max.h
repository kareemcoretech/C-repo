#include<stdio.h>

void max(int a,int b,int c,int d)
{
	if((a>b) && (a>c) && (a>d))
	{
		printf("Max Number = %d \n",a);
	}
	else if((b>a) && (b>c) && (b>d))
	{
		printf("Max Number = %d \n",b);
	}
	else if((c>a) && (c>b) && (c>d))
	{
		printf("Max Number = %d \n",c);
	}
	else
	{
		printf("Max Number = %d \n",d);	
	}
}