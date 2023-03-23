#include<stdio.h>

const int x = 10; // global to protect it

void main()
{

	// x=22; will give error
	int *ptr = &x;
	*ptr = 22;
	printf("%d", x);
}