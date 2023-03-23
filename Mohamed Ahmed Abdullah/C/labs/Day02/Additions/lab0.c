#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	if(x > 10){
		printf("X is bigger than 10");
	}else if(x < 10){
		printf("X is less than 10");
	}else if(x == 10) {
		printf("X is equal to 10");
	}
	return 0;
}