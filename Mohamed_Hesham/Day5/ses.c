#include <stdio.h>

int main(){
	// kda l values fl 2 indices lli fadla htb2a b 0
	int arr[4] = {2, 1};
	
	// kda kol l values htb2a b garbage value
	int arrr[4];
	
	
	int array[5] = {1, 5, 5, 6, 8};
	// size l array kolha(no. of elements in array * size of one element) / size element wa7d
	int size = sizeof(array)/sizeof(array[0]);
	//          5*4       /    size of one element (4) 
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	int arrayy[] = {1, 5, 5, 6, 8, 6, 6, 952, 64, 245, 5585};
	// size l array kolha(no. of elements in array * size of one element) / size element wa7d
	int sizze = sizeof(arrayy)/sizeof(arrayy[0]);
	//          5*4       /    size of one element (4) 
	for(int i = 0; i < sizze; i++){
		printf("%d ", arrayy[i]);
		
	}
	
}