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
	
	if(operation == '+'){
		result = number1 + number2;
	}else if(operation == '-'){
		result = number1 - number2;
	}else if(operation == '*'){
		result = number1 * number2;
	}else if(operation == '/'){
		result = number1 / number2;
	}
	
	printf("%f", result);
	
	return 0;
}