#include <stdio.h>

int main(){
	float number1;
	float number2;
	char operation;
	
	printf("Please Enter number1: ");
	scanf("%f", &number1);
	
	printf("Please Enter number2: ");
	scanf("%f", &number2);
	
	printf("Please Enter operator: ");
	scanf(" %c", &operation);
	
	printf("%f %c %f = ", number1, operation, number2);
	
	float result = 0;
	
	switch(operation){
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		case '*':
			result = number1 * number2;
			break;
	}
	printf("%f", result);
	
	return 0;
}