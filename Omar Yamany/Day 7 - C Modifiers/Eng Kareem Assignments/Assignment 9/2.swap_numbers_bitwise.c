/*C function to swap two numbers using bitwise operation
and call it using pointer to function.*/

#include<stdio.h>
void swap_two_numbers(int *n1, int *n2);
void main()
{
	int n1=50, n2=100;
	printf("Before swapping:\n");
	printf("Number 1: %d\nNumber 2: %d", n1, n2);
	void (*fun_swap) (int *, int *) = swap_two_numbers; // now we can use fun_swap to use the function swap_two_numbers
	fun_swap(&n1, &n2); //call the function and sending two arguments using function pointer
	printf("\n\nAfter swapping:\n");
	printf("Number 1: %d\nNumber 2: %d", n1, n2);
}

void swap_two_numbers(int *n1, int *n2)
{
	*n1 ^= *n2;
	*n2 ^= *n1;
	*n1 ^= *n2;
}