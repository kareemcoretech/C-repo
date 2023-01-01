#include <stdio.h>


void main(void)
{
	int x = 10 , y = 20 ;
	
	int *const ptr = &x ;   // constant addres
	 
	
	*ptr = 1000 ; // Valid
	// ptr = &y ;   // ERROR 
	
	printf("%d",*ptr); // print content of x by pointer
}
