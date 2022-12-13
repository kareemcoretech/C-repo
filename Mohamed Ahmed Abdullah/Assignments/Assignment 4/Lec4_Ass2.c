/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022

    Description of task: 
        Write a C Function that returns the addition or subtraction 
        or multiplication or division for two numbers. The function 
        should take the required operation and two numbers as 
        arguments. It also should check that the input operation is one 
        of those operation that mentioned before and if not it should 
        return error. The function should be implemented using switch 
        case.
*/

#include <stdio.h>
#include "AssignmentsLibrary.h"

int ERR = -999999;
void main(void){
    int x; 
    scanf("%d", &x);

    char operation; 
    scanf(" %c", &operation);

    int y; 
    scanf("%d", &y);

    int result = calculator(operation, x, y);
    if(result != ERR){
        printf("%d", result);
    }else{
        printf("Error");
    }
}