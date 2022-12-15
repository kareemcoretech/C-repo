#include <stdio.h>

void Reverse(int array[], int size);

int main(){
	int array[7] = {1,3,5,4,6,8,2};
	int size = sizeof(array)/sizeof(array[0]);
	
	Reverse(array, size);
}

void Reverse(int array[], int size){
	int temp;
	// int ptr1 = 0; 
	
	int ptr2 = size - 1;  
	int ptr_limit = ptr2 / 2; 
	for (int ptr1 = 0; ptr1 <= ptr_limit; ptr1++){
		temp = array[ptr1];
		array[ptr1] = array[ptr2];
		array[ptr2] = temp;
		ptr2--;		
	}
	
	printf("Array Reversed will be: \n");
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}

}

