#include <stdio.h>


void main(void)
{
	int x = 10 , y = 20 ;
	const int *ptr = &x ;   // const data only 
	
	
	// *ptr = 1000 ; // ERROR
	 ptr = &y ;   // Valid
	
	printf("%d",*ptr); // print value of y by pointer
}

//not
/* Two way to do constant data*/
/*
    const int *ptr = &x ;  
    int const *ptr = &x ;
*/