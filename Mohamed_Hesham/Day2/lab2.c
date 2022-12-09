#include <stdio.h>

int main(){
	int number;
	
	printf("Please Enter your Number: ");
	scanf("%d", &number);
	
	if (number % 2 == 0){
		printf("Your Number is Even");
	}
	else if (number % 2 == 1){
		printf("Your Number is Odd");
	}
	
	
}