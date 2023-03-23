#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h" // Relative path 

void main(void){
	u8 *ptr1 = (u8*)malloc(10*sizeof(u8));
	u8 *ptr2 = (u8*)calloc(10,sizeof(u8));
	
	for(int i=0; i < 10; i++){
		ptr1[i] = i + 20;
	}
	
	for(int i =0; i < 10;i++){
		printf("%d ", ptr1[i]);
	}
	printf("\n");
	
	for(int i=0; i < 10; i++){
		ptr2[i] = i + 25;
	}
	printf("\n");

	for(int i =0; i < 10;i++){
		printf("%d ", ptr2[i]);
	}
	printf("\n");
	
	realloc(ptr2,20*sizeof(u8));
	for(int i =0; i < 20;i++){
		printf("%d ", ptr2[i]);
	}
	

	printf("\n");
	realloc(ptr1,20*sizeof(u8));
	for(int i =0; i < 20;i++){
		printf("%d ", ptr1[i]);
	}

	printf("\n");

	free(ptr1);
	for(int i =0; i < 20;i++){
		printf("%d ", ptr1[i]);
	}

	printf("\n");
	for(int i =0; i < 20;i++){
		ptr1[i] = i + 1;
	}
}