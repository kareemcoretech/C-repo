/*
Author: Toqa Amir Elraey
Version: 1
Task:  Write a function which, given a string, converts all upper
case letters to lowercase, leaving the others unchanged.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void UpperCase(char Array[], int size);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	
	UpperCase(str, size);
	
	printf("After Upper Casing: %s", str);
	
	
}

int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

void UpperCase(char Array[], int size){
	for(int i = 0; i < size; i++){
		if(Array[i] > 96 && Array[i] < 123){
			Array[i] = Array[i] - 32;
		}
	}
}

