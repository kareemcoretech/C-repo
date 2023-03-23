#include <stdio.h>

int main(){
	float num1;
    float num2;

    printf("Enter the number 1: ");
    scanf("%f",&num1);

    printf("Enter the number 2: ");
    scanf("%f",&num2);

    int result = (int)(num1 + num2);

    printf("Result = %d", result);
	return 0;
}