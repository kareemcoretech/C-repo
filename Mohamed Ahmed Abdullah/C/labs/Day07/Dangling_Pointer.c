#include <stdio.h> // standard library

int *Func(void); // Daclration of fucntion 

void main(void) // Entry point 
{
	int *ptr = NULL ; // NULL pointer. 
	
	ptr = Func(); // pointer receive the addres of count from function 
	printf("Value  of Count by ptr = %d\n",*ptr); // print content of count 
	printf("Addres of Count by ptr = %p\n",ptr);  // print addres of count 
	
	ptr = Func();
	printf("Value  of Count by ptr = %d\n",*ptr);
	printf("Addres of Count by ptr = %p\n",ptr);
	
	ptr = Func();
	printf("Value  of Count by ptr = %d\n",*ptr);
	printf("Addres of Count by ptr = %p\n",ptr);
	
	
}



/* Implementation of funciotn  */
int *Func(void) // Function retunr type is pointer meaning addres.
{
	//int Count = 0 ; // Local Variable without static 
	//static int Count = 0 ; // Local Variable with stdio
	
	Count ++ ;
	printf("Count = %d\n", Count);
	
	return &Count ; // return the addres of local variable 
}