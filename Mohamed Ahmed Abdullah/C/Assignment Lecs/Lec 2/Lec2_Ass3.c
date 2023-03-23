#include <stdio.h>

int main(){
	int num1;
	int num2;
	int num3;
	
	int maximum;
	
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	printf("Enter number 3: ");
	scanf("%d", &num3);
	
	if(num1>num2){
		maximum = num1;
	}else{
		maximum = num2;
	}
	
	if(maximum < num3){
		maximum = num3;
	}
	
	printf("Maximum number is %d", maximum);
	return 0;
}