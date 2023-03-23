/*
Author: Toqa Amir Elraey
Version: 1
Task: The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
Fibonacci numbers, each is the sum of the preceding 2. 
Write a program which given n, returns the nth Fibonacci 
number.
- with for/while
- with recursion --> not covered yet
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment6_func.h"

int main(){
	//Asking for the term:
	int n;
	printf("Please enetr the term you want to compute: ");
	scanf("%d", &n);
	
	//Making the term number is the Array size:
	int Series[n];
	int SIZE = sizeof(Series) / sizeof(Series[0]);
	
	//Putting the Fibonacci numbers in the Array's elements:
	FibonacciSequance(Series, SIZE);
	
	printf("The %dth element of the Fibonacci numbers is: %d", n, Series[n-1]);
	
}