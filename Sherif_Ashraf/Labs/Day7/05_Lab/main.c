#include<stdio.h>

int add_by_address(int *ptr1 , int *ptr2);

void main(void)
{
	int x,y,sum,*ptrx,*ptry;
	printf("enter two numbers \n");
	scanf("%d %d",&x,&y);
	ptrx = &x;
	ptry = &y;
	sum = add_by_address(ptrx,ptry);
	printf("sum = %d",sum);
}


int add_by_address(int *ptr1 , int *ptr2)
{
	int res;
	res = *ptr1 + *ptr2;
	return res;
}