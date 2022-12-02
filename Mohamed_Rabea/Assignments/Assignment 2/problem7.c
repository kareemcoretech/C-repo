
#include<stdio.h>
#include<math.h>


void main( )
{

  float num1,num2,sum;
 
  
  printf("Enter first number: ");
  scanf("%f",&num1);

  printf("Enter second number: ");
  scanf("%f",&num2); 

  sum=floor(num1+num2);

  printf("Sum of two numbers = %0.f",sum);
 
}