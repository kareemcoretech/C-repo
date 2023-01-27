#include<stdio.h>

void main()
{
	int x=10;
	printf("X before change is: %d\n", x);
	int *ptr = &x;
	*ptr = 20;
	printf("X after change is: %d\n", x);
	printf("------------\n");
	printf("Address of X: %p\n", &x);
	printf("Address of pointer: %p\n", ptr);
	printf("------------\n");
	printf("Value of X: %d\n", x);
	printf("Value of pointer: %d", *ptr);
}