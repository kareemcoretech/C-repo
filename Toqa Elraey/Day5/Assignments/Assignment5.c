/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a program that computes the nth term of the 
geometric series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.
Date: 13/12/2022
*/

#include <stdio.h>
#include "Assignment5_func.h"

int main(){
	//Asking for the term:
	int n;
	printf("Please enetr the term you want to compute: ");
	scanf("%d", &n);
	
	//Making the term number is the Array size:
	int Series[n];
	int SIZE = sizeof(Series) / sizeof(Series[0]);
	
	//Putting the Geometric Series in the Array's elements:
	GeometricSeries(Series, SIZE);
	
	printf("The %dth element of the geometric series is: %d", n, Series[n-1]);
	
}