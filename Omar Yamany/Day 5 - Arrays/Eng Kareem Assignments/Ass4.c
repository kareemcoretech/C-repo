/* Write a program that computes the nth term of the
arithmetic series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series */

#include <stdio.h>
#include "operation.h"
//i will use operation.c to store my functions

//for that arithmetic series, start is 1, number of iterations is 100, step size is 2

void main()
{
	int step_size=2, iterations = 100, start = 1, result;
	result = arithmatic_series(start, step_size, iterations);
	printf("The %dth term = %d", iterations, result);
}