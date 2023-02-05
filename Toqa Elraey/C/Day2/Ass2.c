#include <stdio.h>

int main(){
	float x, y, z;
	char op;
	
	printf("Please enter first number: ");
	scanf("%f", &x);
	printf("Please enter second number: ");
	scanf("%f", &y);
	printf("Please the operation: ");
	scanf(" %c", &op);
	
	switch(op){
		case '+':
		z = x + y;
		printf("The result is: %f", z);
		break;
		
		case '-':
		z = x - y;
		printf("The result is: %f", z);
		break;
		
		case '*':
		z = x * y;
		printf("The result is: %f", z);
		break;
		
		case '/':
		z = x / y;
		printf("The result is: %f", z);
		break;
	}
}