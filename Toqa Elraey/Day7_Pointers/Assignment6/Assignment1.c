/*
Author: Toqa Amir Elraey
Version: 3
Task: Write a function which, given a string, return TRUE if all
characters are distinct and FALSE if any character is repeated.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	
	//check if the characters are distinct or not:
	int flag = 0;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(str[i] == str[j]){
				flag = 1;
			}
		}
	}
	
	if(flag == 0){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}