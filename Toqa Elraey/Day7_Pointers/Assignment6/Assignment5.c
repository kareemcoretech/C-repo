/*
Author: Toqa Amir Elraey
Version: 4
Task: Write a function that prints the frequency of a certain
character in a string.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void Frequancy(char Array[], int size, char let);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	
	char letter;
	printf("Please enter the character: ");
	scanf(" %c", &letter);
	
	Frequancy(str, size, letter);
	
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

//to print the frequancy:
void Frequancy(char Array[], int size, char let){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(Array[i] == let){
			count++;
		}
	}
	printf("%d ", count);
}

