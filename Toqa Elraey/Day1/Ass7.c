#include <stdio.h>
#include <math.h>

int main(){
	float num1 , num2, sum;
	
	printf("Please enter the first number: ");
	scanf("%f", &num1);
	
	printf("Please enter the second number: ");
	scanf("%f", &num2);
	
	sum = num1 + num2;
	
	printf("The integer floor of the sum is: %f", truncf(sum));
}