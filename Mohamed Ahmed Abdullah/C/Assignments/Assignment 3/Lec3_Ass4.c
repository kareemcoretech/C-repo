/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 
    
    Description of task: 
        Write a program to reverse a number.
*/

#include <stdio.h>

int power(int n, int power);

void main(void){
   int number;
   printf("Enter number: ");
   scanf("%d", &number);

   int reverseNumber = 0;
   int numberOfDigits = 0;
   int n = number;
   while(n != 0){
      n = n / 10;
      numberOfDigits++;
   }

   int i = numberOfDigits - 1;
   int digit;
   while(number != 0){
      digit = number / power(10,i);
      number -= digit * power(10,i);
      reverseNumber += digit * power(10,numberOfDigits-i-1);
      i--;
   }  

   printf("reverse number = %d \n", reverseNumber);

}

int power(int n, int power){
   int result = 1;
   for (int i = 0; i < power; i++)
   {
      result *= n;
   }
   return result;
}