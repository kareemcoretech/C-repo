#include <stdio.h>

int main(){
	int x;
	
	printf("Please enter the answer of 3 * 4: ");
	scanf("%d", &x);
	
	if(x == 12){
		printf("Thank you");
	}
	else{
		while(x != 12){
			printf("Not correct, try again: ");
			scanf("%d", &x);
		}
		printf("Thank you");
	}
}