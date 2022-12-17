#include <stdio.h>



int main(){
	int star_count = -1;
	int space_count = 5;
	for (int i = 0; i < 6; i++){
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
