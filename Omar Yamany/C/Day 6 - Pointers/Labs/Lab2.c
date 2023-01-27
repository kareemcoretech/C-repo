#include<stdio.h>

int pass_by_value(int);
void pass_by_reference(int*);

void main()
{
	int x=10;
	int r = pass_by_value(x);
	printf("\nX after using pass by value is: %d\n", r);
	pass_by_reference(&x);
	printf("\nX after using pass by reference is: %d\n", x);
}

int pass_by_value(int x)
{
	x=20;
	return x;
}

void pass_by_reference(int *x)
{
	*x = 20;
}