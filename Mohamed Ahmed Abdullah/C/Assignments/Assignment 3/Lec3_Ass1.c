/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 

    Description of task: 
        Write a program that reads a positive integer and 
        checks if it is a prime number.
*/

#include <stdio.h>

int main(){
    int number;

    printf("Enter a prime: ");
    scanf("%d", &number);
    
    int c = 0;
    for (int i = number; i >= 1; i--)
    {
        if (number % i == 0){
            c++;
        }
    }

    printf("%d \n", c);
    if (c == 2){
        printf("Number %d is prime", number);
    }else{
        printf("Number %d is not prime", number);
    }
    
	return 0;
}