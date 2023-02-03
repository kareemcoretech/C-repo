#include <stdio.h>


void main(void) // Entry point 
{
	int x = 10 ;
	
	int *ptr1  = &x ;
	int **ptr2 = NULL  ; // (Pointer to pointer) NULL 
	ptr2 = &ptr1 ;
	
	printf("%p\n",&x); // print addres of x 
	printf("%d\n",x);  // print value  of x
	
	printf("%d\n",*ptr1); // print value  of x by pointer
	printf("%p\n",ptr1);  // print addres of x by pointer
	printf("%p\n",&ptr1); // print addres of pointer itself
	
	
	printf("%d\n",**ptr2);// print value  of x by pointer to pointer
	printf("%p\n",ptr2);  // print addres of pointer by (pointer to pointer)
	printf("%p\n",&ptr2); // print addres of (pointer to pointer) itself
}


// Real using pointer to pointer
// use when pass pointer to function
//EX....

/*
int Func(int **ptr); 

void main(void)
{
	int x = 10;
	int *ptr1 = &x ;
	Func(&ptr1);
	printf("3 = %d\n",x);
}

int Func(int **ptr)
{
	printf("1 = %d\n",**ptr);
	**ptr  = 100 ;
	printf("2 = %d\n",**ptr);
}

*/