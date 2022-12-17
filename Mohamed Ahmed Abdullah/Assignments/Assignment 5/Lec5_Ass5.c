/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a program that computes the nth term of the 
        geometric series: 1, 3, 9, 27, ... 
        Run the program to compute the 10th term of the given series. 
*/

#include <stdio.h>
#include "ArrayOperations.h"

int main(){
    int number;
    scanf("%d", &number);

    geometricSeries(number);
	return 0;
}