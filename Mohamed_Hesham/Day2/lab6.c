#include <stdio.h>

int main(){
	int num1;
	int num2;
	char operation;
	int result;
	
	printf("Please Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Please Enter Second Number: ");
	scanf("%d",&num2);
	
	printf("Please Specify the Operation: ");
	scanf(" %c",&operation);
	
	switch (operation)
	{
	
	case '+':
		result = num1 + num2;
		printf("Your Final Value is: %d", result);
		break;
	
	case '-':
		result = num1 + num2;
		printf("Your Final Value is: %d", result);
		break;
		
	case '*':
		result = num1 + num2;
		printf("Your Final Value is: %d", result);
		break;
		
	case '/':
		result = num1 / num2;
		printf("Your Final Value is: %d", result);
		break;
		
	}
	
}