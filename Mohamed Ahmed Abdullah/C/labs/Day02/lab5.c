#include <stdio.h>

int main(){
	int number;
	
	int value;
	int listOfNumbers[10];
	
	int index;
	
	for(int i = 0; i < 10; i++){
		printf("Enter Number %d: ",i+1);
		scanf("%d", &number);
		listOfNumbers[i] = number;
	}
	
	printf("Enter the value to search: ");
	scanf("%d", &value);
	
	for(int i = 0; i < 10; i++){
		if (listOfNumbers[i] == value){
			index = i+1;
		}
	}
	
	printf("Value is exist at element number %d", index);
	
	return 0;
}