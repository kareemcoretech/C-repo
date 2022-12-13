/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a program that computes the nth term of the 
arithmetic series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment4_func.h"

int main(){
	
	//Asking for the term:
	int n;
	printf("Please enetr the term you want to compute: ");
	scanf("%d", &n);
	
	//Making the term number is the Array size:
	int Series[n];
	int SIZE = sizeof(Series) / sizeof(Series[0]);
	
	//Putting the Arithmetic Series in the Array's elements:
	ArithmeticSeries(Series, SIZE);
	
	printf("The %dth element of the arithmetic series is: %d", n, Series[n-1]);
}