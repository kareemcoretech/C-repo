/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: Lab(1) 
	Write a c code that will ask the user to
	enter 2 numbers, them the main function
	will call function named Get_Max...
*/

#include <stdio.h>
#include "labs.h"

int Get_Max(int x, int y);

void main(void){
	int number1;
	int number2;

	printf("Please Enter Value 1: ");
	scanf("%d",&number1);
	printf("Please Enter Value 2: ");
	scanf("%d",&number2);

	int max = Get_Max(number1, number2);
	printf("The Maximum value is %d", max);	
	return;
}

int Get_Max(int x, int y){
    int max;
    if (x > y)
    {
        max = x;
    }else{
        max = y;
    }
    return max;
}