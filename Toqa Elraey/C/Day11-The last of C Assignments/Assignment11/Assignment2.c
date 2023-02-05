/*
Author: Toqa Amir Elraey
Version: 1
Task: C function to add two complex numbers by passing two 
structure to a function and display the results.
Date: 1/1/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

typedef struct{
	u8 real;
	u8 imagin;
}numbers;

numbers SUM(numbers n1, numbers n2){
	numbers result;
	result.real = n1.real + n2.real;
	result.imagin = n1.imagin + n2.imagin;
	return result;
}

int main(){
	numbers n1;
	numbers n2;
	
	printf("The first number: \n");
	printf("Please enter the real number: ");
	scanf("%d", &n1.real);
	printf("Please enter the imaginary number: ");
	scanf("%d", &n1.imagin);
	
	printf("The second number: \n");
	printf("Please enter the real number: ");
	scanf("%d", &n2.real);
	printf("Please enter the imaginary number: ");
	scanf("%d", &n2.imagin);
	
	numbers sum = SUM(n1, n2);
	printf("The sum is %d + i%d", sum.real, sum.imagin);
}