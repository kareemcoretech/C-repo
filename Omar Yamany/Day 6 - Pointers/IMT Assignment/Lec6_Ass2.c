#include <stdio.h>

void main()
{
	int x,y,z;
	int *p,*q,*r;
	x=10;
	y=20;
	z=30;
	p = &x;
	q = &y;
	r = &z;
	
	printf("\nValue of x is: %d\n", x);
	printf("Value of y is: %d\n", y);
	printf("Value of z is: %d\n", z);
	printf("Value of p is: %d\n", p);
	printf("Value of q is: %d\n", q);
	printf("Value of r is: %d\n", r);
	printf("Value of *p is: %d\n", *p);
	printf("Value of *q is: %d\n", *q);
	printf("Value of *r is: %d\n", *r);
	
	printf("---------------\nSwapping pointers\n---------------");
	
	*r = *p;
	*p = *q;
	*q = *r;
	
	printf("\nValue of x is: %d\n", x);
	printf("Value of y is: %d\n", y);
	printf("Value of z is: %d\n", z);
	printf("Value of p is: %d\n", p);
	printf("Value of q is: %d\n", q);
	printf("Value of r is: %d\n", r);
	printf("Value of *p is: %d\n", *p);
	printf("Value of *q is: %d\n", *q);
	printf("Value of *r is: %d\n", *r);
}