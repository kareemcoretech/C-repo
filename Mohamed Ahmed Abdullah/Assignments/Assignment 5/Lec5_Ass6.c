/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        The sequence of numbers 1, 1, 2, 3, 5, 8, 13, ... is called 
        Fibonacci numbers, each is the sum of the preceding 2.  
        Write a program which given n, returns the nth Fibonacci 
        number. 
        - with for/while 
        - with recursion 
*/

#include <stdio.h>
#include "ArrayOperations.h"

void main(void){
    int number;
    scanf("%d", &number);

    int result1 = fibonacciSeriesWhile(number);
    int result2 = fibonacciSeriesRec(number);

    printf("%d %d", result1, result2);
}