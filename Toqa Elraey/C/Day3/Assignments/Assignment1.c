#include <stdio.h>

int main(){
	int num;
	int count = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			count++;
		}
		else{
			continue;
		}
	}
	if(count == 2){
		printf("Number %d is a prime number.", num);
	}
	else{
		printf("Number %d isn't a prime number.", num);
	}
}