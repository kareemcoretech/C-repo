/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a program that computes the nth term of the 
        arithmetic series: 1, 3, 5, 7, 9, ... 
        Run the program to compute the 100th term of the given series 
*/

#include <stdio.h>
#include "ArrayOperations.h"

void main(void){
    int number;
    scanf("%d", &number);

    oddArithmeticSeries(number);
}