#include<stdio.h>

void calc_by_address(int x, int y,int *sum,int *sub);

void main(void)
{
	int x,y,sum,sub;
	printf("enter two numbers \n");
	scanf("%d %d",&x,&y);
	calc_by_address(x,y,&sum,&sub);
	printf("sum = %d\n",sum);
	printf("sub = %d\n",sub);
}


void calc_by_address(int x, int y,int *sum,int *sub)
{
	*sum = x+y;
	*sub = x-y;
}