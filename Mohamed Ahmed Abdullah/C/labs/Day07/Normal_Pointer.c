#include <stdio.h>

void main(void)
{
	int x = 10 , y = 20 ;
	
	int *ptr = &x ;
	
	*ptr = 55 ;  //change value of x to 55 by pointer
	
	ptr = &y  ;  // change content of pointer from addres x to addres y
	
	*ptr = 60 ;  // change value of y to 60 by pointer 
	
	printf("%p\n",&x); // Addres of x 
	printf("%p\n",&y); // Addres of y
	
	printf("%d\n",*ptr); // content of addres the pointer point to it.
	printf("%p\n",ptr);  // content of pointer.
	
	printf("%p\n",&ptr); // Addres of pointer
	
	
}