/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 

    Description of task: 
        Write a C Function that display Prime Numbers between 
        Intervals (two numbers). 
*/

#include <stdio.h>
#include "AssignmentsLibrary.h"

int main(){
    int a; 
    int b;
    printf("Enter a first number: ");
    scanf("%d", &a);

    printf("Enter a second number: ");
    scanf("%d", &b);
    
    printPrimes(a,b);
    
	return 0;
}