#include <stdio.h>

int main(){
	int h;
	printf("Please enter the height of the Pyramid: ");
	scanf("%d", &h);
	
	for(int i = h; i > 0; i--){
		for(int j = i; j > 0; j-- ){
			printf("*");
		}
		printf("\n");
	}
	
}