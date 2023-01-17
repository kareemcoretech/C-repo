/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C function to swap two numbers using bitwise operation 
        and call it using pointer to function.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

void main(void){
    int a, b;
    void (*fun_ptr)(int*,int*) = &swap;

    // Get two numbers from user
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    // Print numbers before and after swap
    printf("Before swap: a = %d, b = %d \n", a, b);
    (*fun_ptr)(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);
}

void swap(int *a, int *b){
    *a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}