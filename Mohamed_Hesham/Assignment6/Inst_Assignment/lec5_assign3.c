#include <stdio.h>

int searchArray(int array[], int size, int number);
int main(){
	int array[6] = {1,2,3,4,4,4};
	int size = sizeof(array)/sizeof(array[0]);
	int number = 4;
	int index = searchArray(array, size, number);
	printf("Number %d is Occurred Firstly at index: %d\n", number, index);
	
}

int searchArray(int array[], int size, int number){
	int i;
	int loc;
	for(i = 0; i < size; i++){
		if( number == array[i]){
			loc = i;
		}
	}

	return loc;
	
}