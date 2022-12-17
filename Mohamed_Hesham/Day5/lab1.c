#include <stdio.h>

int main(){
	int array[10];
	int size = sizeof(array)/sizeof(array[0]);
	
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);
		
	}
	
	int limit = 0;
	
	printf("The Values in Reversed Order: \n");
	for(int i = size-1; i >= limit; i--){
		printf("%d \n", array[i]);
		
	}
	
}