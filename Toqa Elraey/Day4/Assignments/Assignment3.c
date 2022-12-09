#include <stdio.h>
#include "Assignment3_func.h"

int main(){
	int num1, num2;
	printf("Please enter the Interval start: ");
	scanf("%d", &num1);
	printf("Please enter the Interval end: ");
	scanf("%d", &num2);
	PrimeNumbers(num1, num2);
}