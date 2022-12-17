#include<stdio.h>

void main()
{
	int x=10;
	int y=20;
	//constant address pointer
	int * const ptr1 = &x;
	*ptr1=100;
	// ptr1=&y; gives error
	
	//constant value pointer
	int const *ptr2 = &x;
	// *ptr2 = 200; gives error
	ptr2 = &y;
	
	//constant value and address pointer
	int const *const ptr3 = &x;
	// ptr = &y; gives error
	// *ptr = 100; gives error
	x=100; //works
}