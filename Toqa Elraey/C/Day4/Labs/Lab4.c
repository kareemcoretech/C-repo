#include <stdio.h>

int factorial(int x);

int main(){
	int num, result;
	printf("Please a number: ");
	scanf("%d", &num);
	if(num > 0){
		result = factorial(num);
		printf("The Factorial of %d is: %d", num, result);
	}
	else{
		printf("%d is a negative number.", num);
	}
}

int factorial(int x){
	if(x == 0){
		return 1;
	}
	else{
		return x * factorial(x - 1);
	}
}