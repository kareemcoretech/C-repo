/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 
    
    Description of task: 
        Write a program to calculate the power of a number. 
         The number and its power are input from user.
*/

#include <stdio.h>

void main(void){
   int number;
   int power;

   printf("Enter number: ");
   scanf("%d", &number);
   
   printf("Enter power:  ");
   scanf("%d", &power);

   int result = 1;
   for (int i = 0; i < power; i++)
   {
      result *= number;
   }
   printf("%d", result);  
}