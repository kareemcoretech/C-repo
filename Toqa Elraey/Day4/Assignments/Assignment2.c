#include <stdio.h>
#include "Assignment2_func.h"

int main(){
	int num1, num2, out;
	char op;
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	printf("Please enter the Operation: ");
	scanf(" %c", &op);
	
	out = Operation(num1, num2, op);
	
	if(out == 0){
		printf("Error");
	}
	else{
		printf("The Result is: %d", out);
	}
}