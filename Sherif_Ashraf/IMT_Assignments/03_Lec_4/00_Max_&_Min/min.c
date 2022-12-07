#include<stdio.h>


void min(int a,int b,int c,int d)
{
	if((a<b) && (a<c) && (a<d))
	{
		printf("Min Number = %d \n",a);
	}
	else if((b<a) && (b<c) && (b<d))
	{
		printf("Min Number = %d \n",b);
	}
	else if((c<a) && (c<b) && (c<d))
	{
		printf("Min Number = %d \n",c);
	}
	else
	{
		printf("Min Number = %d \n",d);	
	}
}