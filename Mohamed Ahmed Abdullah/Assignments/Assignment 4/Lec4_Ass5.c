/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 

    Description of task: 
        Write a C function that returns 1 if the input number is a 
        power of 2 and return 0 if the input number is power of 3, 
        otherwise it shall return -1. 
*/

#include <stdio.h>
#include "AssignmentsLibrary.h"

int main(){
    int n; 
    int b;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int res = powerOfWhat(n);
    printf("%d", res);

	return 0;
}