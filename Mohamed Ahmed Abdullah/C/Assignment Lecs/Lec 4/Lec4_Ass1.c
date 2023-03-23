/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 15 12 2022 

- Description of task: Assignment 1
	Write a C program that implement 2 function:
	
	1- Function to get the maximum of 4 values
	2- Function to get the minimum of 4 values

	The program will ask the user first to enter
	4 values, then print the maximum number and
	minimum number of them.
*/

#include <stdio.h>
#include "labs.h"

void main(void){
	int n1;
	int n2;
	int n3;
	int n4;

	printf("Enter number 1: ");
	scanf("%d", &n1);

	printf("Enter number 2: ");
	scanf("%d", &n2);

	printf("Enter number 3: ");
	scanf("%d", &n3);

	printf("Enter number 4: ");
	scanf("%d", &n4);

	int max = maxNumber(n1,n2,n3,n4);
	int min = minNumber(n1,n2,n3,n4);

	printf("\n");

	printf("max = %d \n", max);
	printf("min = %d \n", min);
	return;
}