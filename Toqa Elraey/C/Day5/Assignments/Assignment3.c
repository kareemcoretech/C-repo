/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to return the index of LAST occurrence of 
a number in a given array. Array index start from 0. If the item 
is not in the list return -1
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 5
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment3_func.h"

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
	
	//Asking for a number:
	int y;
	printf("Please enter the number you want to look for: ");
	scanf("%d", &y);
	
	//Searching for the Last Occurrence of this number:
	int INDEX = LastOccurrence(Number, SIZE, y);
	
	if(INDEX == -1){
		printf("NOT FOUND");
	}
	else{
		printf("It found in element number: %d", INDEX);
	}
}