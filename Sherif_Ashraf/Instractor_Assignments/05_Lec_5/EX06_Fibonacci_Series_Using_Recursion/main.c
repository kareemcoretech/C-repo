/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : " Write a program which given n, returns the nth Fibonacci number".

*/

#include<stdio.h>
#include"fibonacci.h"

void main(void)
{
	int num,counter=0;
	printf("Enter number \n");
	// scan how many time will loop
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		//call function and pass counter to the function then increment it
		printf("%d \n",fibonacci(counter));
		counter++;
	}
}


