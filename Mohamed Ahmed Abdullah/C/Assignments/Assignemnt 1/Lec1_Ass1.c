#include <stdio.h>

int main(){
	int num1;
	int num2;
	
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	
	int result = ((num1 + num2) * 3) - 10;
	
	printf("Result = %d", result);
	
	return 0;
}