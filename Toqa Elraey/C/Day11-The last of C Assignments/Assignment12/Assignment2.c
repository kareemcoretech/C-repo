/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a program that allows the user to enter students’ 
names followed by their test scores and outputs the following 
information (assume that maximum number of students is 50:
a. The average score.
b. Names of all students whose test scores are below the 
average, with an appropriate message.
c. Highest test score and the name of all students having the 
highest score
Date: 3/1/2022
*/

#include <stdio.h>
#include "TypeDefs.h"
#define ArraySize 5

typedef struct{
	u8 name[20];
	u8 score;
}student;

int main(){
	u8 count = 0;
	s8 flag = 0;
	student Array[ArraySize];
	for(u8 i = 0; i < ArraySize; i++){
		count++;
		printf("Please enter your name: ");
		scanf("%s", &Array[i].name);
		printf("Please enter your score: ");
		scanf("%d", &Array[i].score);
		printf("Enter 0 for continue, -1 for stop: ");
		scanf("%d", &flag);
		if(flag == -1){
			break;
		}
	}
	
	printf("==========Report==========\n");
	printf("Student Name:       Score:\n");
	for(u8 i = 0; i < count; i++){
		printf("%s          %d\n", Array[i].name, Array[i].score);
	}
	u16 sum = 0;
	f32 average;
	for(u8 i = 0; i < count; i++){
		sum = sum + Array[i].score;
	}
	average = (float)sum / (float)count;
	
	printf("Number of Students are: %d\n", count);
	printf("The Average Score of this class is: %f\n", average);
	
	printf("==========================\n");
	printf("Below the Average Students:\n");
	printf("==========================\n");
	for(u8 i = 0; i < count; i++){
		if(Array[i].score <= average){
			printf("%s          %d\n", Array[i].name, Array[i].score);
		}
	}
	
	printf("==========================\n");
	printf("Top Scorer Student:\n");
	printf("==========================\n");
	u8 max = 0;
	for(u8 i = 0; i < count; i++){
		if(Array[i].score > Array[i+1].score){
			max = Array[i].score;
		}
	}
	
	for(u8 i = 0; i < count; i++){
		if(Array[i].score == max){
			printf("%s          %d\n", Array[i].name, Array[i].score);
		}
	}
}