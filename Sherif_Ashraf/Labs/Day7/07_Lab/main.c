#include<stdio.h>

void calc_by_address(int *x, int y);

void main(void)
{
	int x,y,sum,sub;
	printf("enter two numbers \n");
	scanf("%d %d",&x,&y);
	calc_by_address(&x,y);
	printf("sum = %d",x);
}


void calc_by_address(int *x, int y)
{
	*x = *x + y;
}