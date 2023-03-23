/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a function to remove all characters in a string expect
alphabets.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void RemovingChar(char Array[], int size);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	
	RemovingChar(str, size);
	
	printf("%s", str);
	
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

void RemovingChar(char Array[], int size){
	int flag;
	for(int i = 0; i < size; i++){
		flag = 0;
		if(Array[i] > 64 && Array[i] < 91){
			flag = 1;
		}
		else if(Array[i] > 96 && Array[i] < 123){
			flag = 1;
		}
		
		if(flag == 0){
			Array[i] = ' ';
		}
	}
}