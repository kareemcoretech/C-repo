/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: Lab(4) 
	Write a C code calculates factorial of a number 
	entered by the user using recursive function.
*/

#include <stdio.h>
#include "labs.h"

void main(void){
int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = factorial(number);
    
    printf("Factorial = %d", result);
    return;


	return;
}