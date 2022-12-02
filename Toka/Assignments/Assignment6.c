#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Please enter first number: ");
	scanf("%d", &num1);
	
	printf("Please enter second number: ");
	scanf("%d", &num2);
	
	printf("The result of Adding them is: %d\n", num1+num2);
	printf("The result of Subtracting them is: %d\n", num1-num2);
	printf("The result of Anding them is: %d\n", num1&num2);
	printf("The result of Oring them is: %d\n", num1|num2);
	printf("The result of Xoring them is: %d\n", num1^num2);
}