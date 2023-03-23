#include <stdio.h>

void main(void)
{
	int x = 10 , y = 20 ;
	const int * const ptr =  &x ; // Constant data and addres
	
	// *ptr = 30 ; // ERROR 
	//  ptr = &z ; // ERROR
	 
	 printf("%d",*ptr); // print value of x by pointer
}