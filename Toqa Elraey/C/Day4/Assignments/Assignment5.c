#include <stdio.h>
#include "Assignment5_func.h"

int main(){
	float num;
	int out;
	
	printf("Please enter a number: ");
	scanf("%f", &num);
	
	out = roots(num);
	if(out == 1){
		printf("Number %f is a power of 2.", num);
	}
	else if(out == 0){
		printf("Number %f is a power of 3.", num);
	}
	else{
		printf("Number %f is not a power of 2 or 3.", num);
	}
}