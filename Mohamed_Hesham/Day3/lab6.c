#include <stdio.h>

int main(){
	int value;
	int result = 1;
	printf("Enter the number: ");
	scanf("%d", &value);
	int count = value;
	
	while (count != 0){
		result *= count--;
	}
	printf("Factorial of %d is: %d", value, result);
}