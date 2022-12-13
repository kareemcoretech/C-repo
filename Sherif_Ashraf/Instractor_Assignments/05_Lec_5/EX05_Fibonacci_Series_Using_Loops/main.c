/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : " program which given n, returns the nth Fibonacci number".

*/

#include<stdio.h>
#include"fibonacci.h"

void main(void)
{
	int num;

	printf("Enter number :");
	// scan number from user and pass it to the function
	scanf("%d",&num);
	// calling the function and store the return value in res variable
	fibonacci(num);
}