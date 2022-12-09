#include <stdio.h>

int main(){
	int x, i;
	int count = 0;
	printf("Please enter a number: ");
	scanf("%d", &x);
	
	for(i = 0; i < x; i++){
		if(i != 0){
			for(int j = 0; j < i; j++){
				printf(" ");
			}
		}
		printf("*");
		for(int k = (x-i)*2; k > 0; k--){
			printf(" ");
		}
		printf("*\n");
	}
	
	while(count < 1){
		for(int z = i; z>0; z--){
			printf(" ");
		}
		printf("**\n");
		count++;
	}
	
	for(i; i >= 0; i--){
		if(i != 0){
			for(int j = i; j > 0; j--){
				printf(" ");
			}
		}
		printf("*");
		for(int k = (x-i)*2; k > 0; k--){
			printf(" ");
		}
		printf("*\n");
	}
}