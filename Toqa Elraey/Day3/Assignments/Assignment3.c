#include <stdio.h>

int main(){
	int num, power;
	int result = 1;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Please enter the power: ");
	scanf("%d", &power);
	
	for(int i = 1; i <= power; i++){
		result = result * num;
	}
	printf("%d", result);
}