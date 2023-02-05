/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to swap the contents of two arrays with
the same length.
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment7_func.h"

int main(){
	//Asking for the size of Array:
	int x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	//Making an original Array and another one withe the same size"
	int Original[x];
	int SIZE = sizeof(Original) / sizeof(Original[0]);
	int SWAP[SIZE];
	
	//Scanning numbers in the Original Array:
	scanArray(Original, SIZE);
	
	//Swapping the elements between 2 arrays:
	SwapArrays(Original, SWAP, SIZE);
	
	//Printing the Array After Swapping:
	printArray(SWAP, SIZE);
}