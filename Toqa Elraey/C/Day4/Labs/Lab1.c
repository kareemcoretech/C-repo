#include <stdio.h>

int GetMax(int x, int y);

int main(){
		int num1, num2;
	
	printf("Please enter ther first number: ");
	scanf("%d", &num1);
	printf("Please enter ther second number: ");
	scanf("%d", &num2);
	
	int max = GetMax(num1, num2);
	
	printf("The maximum is: %d",max);
}

int GetMax(int x, int y){
	if (x > y){
		return x;
	}
	else{
		return y;
	}
}
