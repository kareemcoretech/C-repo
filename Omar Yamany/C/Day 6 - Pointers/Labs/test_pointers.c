#include<stdio.h>

void main()
{
	int x=10, y=20;
	int *ptr = &x;
	*ptr = y;
	printf("Value in ptr is: %d\n", *ptr);
	printf("Value in x is: %d\n", x);
	printf("Address of &ptr is: %p\n", &ptr);
	printf("Address of ptr is: %p\n", ptr);
	printf("Address of x is: %p", ptr);
	
}