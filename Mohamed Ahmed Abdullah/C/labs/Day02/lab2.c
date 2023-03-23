#include <stdio.h>

int main(){
	int number;
	printf("Please Enter number: ");
	scanf("%d",&number);
		
	if(number % 2 == 0){
		printf("Number is even");
	}else if(number % 2 == 1){
		printf("Number is odd");
	}
	
	return 0;
}