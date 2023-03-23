#include <stdio.h>

void scanArray(int Array[], int size);
int linearSearch(int Array[], int size, int num);

int main(){
	
	int Number[10];
	int size = sizeof(Number)/sizeof(Number[0]);
	
	//scanning the array
	scanArray(Number, size);
	
	//taking user input
	int val;
	printf("Please enter a number: \n");
	scanf("%d", &val);
	
	//check if the number exists
	int counter = linearSearch(Number, size, val);
	
	
	if(counter != 0){
		printf("this number exists %d times.\n", counter);
	}
	else{
		printf("this number doesn't exist\n");
	}
}


int linearSearch(int Array[], int size, int num){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(Array[i] == num){
			count++;
		}
	}
	return count;
}

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element number %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}