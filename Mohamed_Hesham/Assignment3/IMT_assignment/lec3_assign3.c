#include <stdio.h>



int main(){
	int height;
	printf("Please Enter Pyramid's Height: ");
	scanf("%d", &height);
	int star_count = -1;
	int space_count = height-1;
	for (int i = 0; i < height; i++){
		star_count += 2;
		for (int j = 0; j < space_count; j++){
			printf(" ");
		}
		for (int j = 0; j < star_count; j++){
			printf("*");
		}
		printf("\n");
		space_count--;
		
			
	}
	
}
