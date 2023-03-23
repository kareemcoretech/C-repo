#include <stdio.h>

int main(){
	int h;
	int count = 0;
	printf("Please enter the hieght of the pyramid: ");
	scanf("%d", &h);
	
	for(int i = 1; i <= h; i++){
		for(int j = h - i; j > 0; j-- ){
			printf(" ");
		}
		for(int k = 1; k <= i + count; k++){
			printf("*");
		}
		for(int j = h - 1; j > 0; j-- ){
			printf(" ");
		}
		printf("\n");
		count++;
	}
}