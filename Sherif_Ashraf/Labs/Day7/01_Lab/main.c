#include<stdio.h>

int func(int x);

void main(void)
{
	int x = 10;
	int r = func(x);
	printf("%d",r);
}

int func(int x)
{
	x=20;
	return x;
}