#include <stdio.h>

int main(){
	int number1;
	int number2;
	char operation;
	
	printf("Please Enter number1: ");
	scanf("%d", &number1);
	
	printf("Please Enter number2: ");
	scanf("%d", &number2);
	
	printf("Please Enter operator: ");
	scanf(" %c", &operation);
	
	printf("%d %c %d = ", number1, operation, number2);
	
	int result = 0;
	
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
	printf("%d", result);
	
	return 0;
}