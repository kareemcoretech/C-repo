#include<stdio.h>

void func(int *ptr);

void main(void)
{
	int x = 10;
	int *ptr = &x;
	func(ptr);
	printf("%d",x);
}

void func(int *ptr)
{	
	*ptr = 20;
}