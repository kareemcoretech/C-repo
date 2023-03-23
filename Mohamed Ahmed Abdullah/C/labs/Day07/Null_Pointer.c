#include <stdio.h> // standard library


void main(void) // Entry point 
{
	int x = 10 , y = 20 ;
	int *ptr = NULL ; // NULL pointer 
	
	ptr = &x ; // pointer point to the addres of x.
	printf("%d\n",*ptr); // print content of x by pointer.
	
	ptr = &y ; // pointer point to the addres of y.
	printf("%d\n",*ptr); // print content of y by pointer.
}