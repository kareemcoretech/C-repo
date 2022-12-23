/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function that takes an array as input and reverse
it without creating another array.
Example:
Input : 1,2,3,4,5
Output: 5,4,3,2,1
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment8_func.h"

int main(){
	//Asking for the size of Array:
	int x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	int Numbers[x];
	int SIZE = sizeof(Numbers) / sizeof(Numbers[0]);
	
	//Scanning numbers in the Array:
	scanArray(Numbers, SIZE);
	
	//Reversing the elements:
	Reversing(Numbers, SIZE);
	
	//Printing the Array after Reversing:
	printArray(Numbers, SIZE);
}