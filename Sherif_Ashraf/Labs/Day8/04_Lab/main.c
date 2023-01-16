#include<stdio.h>

const int x = 10;
void main(void)
{
	
	printf("%d\n",x);
	x = 20;
	printf("%d\n",x);[]
	int *ptr = &x;
	*ptr = 22;
	printf("%d\n",x);
}