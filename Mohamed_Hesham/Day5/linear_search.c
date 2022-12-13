#include <stdio.h>



void Linear_Search(int array[], int size, int x){
	
	int flag = 0;
	
	for(int i = 0; i < size; i++){
		if (x == array[i]){
			printf("Value %d is found in index: %d\n", array[i], i);
			flag = 1;
		}
		
	}
	if (flag == 0){
		printf("Value %d is not found in the array\n", x);
	}
}

//gcc lab11.c linear_search.c -o lab11.exe