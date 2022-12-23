/*
Author: Toqa Amir Elraey
Version: 2
Task: Write a function called total, which totals the sum of an 
integer array passed to it (as the first parameter) and returns 
the total of all the elements as an integer. Let the second 
parameter to the function be an integer which contains the 
number of elements of the array.
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment1_func.h"

int main(){
	
	//Ask for the Array's size:
	int x;
	printf("Please enter the Array's Size: ");
	scanf("%d", &x);
	
	//the Declaration of the Array:
	int Number[x];
	int SIZE = sizeof(Number) / sizeof(Number[0]);
	
	//Scanning Array's elements:
	scanArray(Number, SIZE);
	
	//Adding these elements:
	int SUM = total(Number, SIZE);
	
	printf("The sum of all elements is: %d ", SUM);
}