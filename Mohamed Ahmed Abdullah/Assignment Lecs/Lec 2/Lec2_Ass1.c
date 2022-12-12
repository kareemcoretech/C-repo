#include <stdio.h>

int main(){
	int number;
	
	int value;
	int listOfNumbers[10];
	int numberNotFound = 0;
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
			numberNotFound = 0;
			break;
		}else{
			numberNotFound = 1;
		}
	}
	if(numberNotFound == 1){
		printf("number no exist");
	}else{
		printf("Value is exist at element number %d", index);	
	}
	
	return 0;
}