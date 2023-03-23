/*
Write a program that computes the nth term of the
geometric series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.
*/

#include <stdio.h>
#include "operation.h"

//for the given series, equation is a*r^x
//a is start, r is multiplier, x is power of multiplier
//a = 1, multiplier is 3, x is increments from 0 to 10

void main()
{
	int a=1, m=3, inc=10, result;
	result = geometric_series(a, m, inc);
	printf("Result for %dth term = %d", inc, result);
}