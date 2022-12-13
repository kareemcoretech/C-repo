/*The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
Fibonacci numbers, each is the sum of the preceding 2. 
Write a program which given n, returns the nth Fibonacci 
number.
- with for/while
- with recursion*/

#include <stdio.h>
#include "operation.h"
//i will use operation.c to save my functions

//Fibonacci series works when first 2 numbers are initialized, and the third number is the sum of the first 2
//, the 4th number is the sum of 2nd and 3rd, 5th number is sum of 3rd and 4th and so on
void main()
{
	int n, result;
	printf("program gets nth term of fibonacci series, enter n: ");
	scanf("%d", &n);
	result = fibon_series(n);
	printf("Result with for loop = %d\n", result);
	//sending n-1 because we don't have a for loop (so we can't end it with i<iterations condition)
	result = fibon_series_recursion(n-1);
	printf("Result with recursion = %d", result);
}

//Fibonacci series = {0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040}