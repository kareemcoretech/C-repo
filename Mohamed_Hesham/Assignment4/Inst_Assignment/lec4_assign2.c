#include <stdio.h>

void calculator(int number_1, int number_2, char operation){
	int result;
	
	switch(operation)
	{
	case '+':
		result = number_1 + number_2;
		printf("Your Final Value is: %d", result);
		break;
		
	case '-':
		result = number_1 - number_2;
		printf("Your Final Value is: %d", result);
		break;
		
	case '*':
		result = number_1 * number_2;
		printf("Your Final Value is: %d", result);
		break;
		
	case '/':
		result = number_1 / number_2;
		printf("Your Final Value is: %d", result);
		break;
		
	default:
		printf("Required Operation is not available");

	}
	

}

int main(){
	int num1;
	int num2;
	char oper;
	
	printf("Please Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Please Enter Second Number: ");
	scanf("%d",&num2);
	
	printf("Please Specify the Operation: ");
	scanf(" %c",&oper);
	
	calculator(num1, num2, oper);
	
	
}