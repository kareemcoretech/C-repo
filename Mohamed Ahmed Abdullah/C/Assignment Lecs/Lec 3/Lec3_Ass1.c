/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 15 12 2022 

    Description of task: 
        Write a C program that ask the user to 
        enter two numbers and print their 
        summation, this program should never 
        ends until the user close the window
*/

#include <stdio.h>

void main(void){
    int number1;
    int number2;
    int result;

    while (1)
    {   
        printf("Please enter first number ");
        scanf("%d", &number1);
        printf("Please enter second number ");
        scanf("%d", &number2);

        result = number1 + number2;

        printf("The result is %d \n\n", result);
    }
}