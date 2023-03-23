#include <stdio.h>

int main(){
	int h;
	printf("Please enter the height of the Pyramid: ");
	scanf("%d", &h);
	
	for(int i = 1; i <= h; i++){
		for(int j = 0; j < i; j++ ){
			printf("*");
		}
		printf("\n");
	}
	
}