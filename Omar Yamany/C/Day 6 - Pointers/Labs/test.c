#include<stdio.h>

void main()
{
	int x;
	int *ptr=&x;
	++*ptr;
	printf("%d",x);
}