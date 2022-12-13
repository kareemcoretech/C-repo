/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 

    Description of task: 
        Write a C Function that prints the cube of any number.
*/

#include <stdio.h>
#include "AssignmentsLibrary.h"

int main(){
    int x; 
    printf("Enter a number: ");
    scanf("%d", &x);
    
    int result = cube(x);
    printf("%d", result);
    
	return 0;
}