/*
Author: Toqa Amir Elraey
Version: 1
Task: C Function to store information (name, id and grade) for 10
students in array of structures using pointers and another
function to print all the structures using pointers
Date: 1/1/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

typedef struct{
	u8 name[20];
	u16 ID;
	u8 grade;
}Student;

int main(){
	Student Class[5];
	for(int i = 0; i < 5; i++){
		printf("Please enter your name: ");
		scanf("%s", &Class[i].name);
		printf("Please enter you ID: ");
		scanf("%d", &Class[i].ID);
		printf("Please enter your Grade: ");
		scanf("%d", &Class[i].grade);
	}
	printf("-----------");
	for(int i = 0; i < 5; i++){
		printf("Your name is: %s\n", Class[i].name);
		printf("Your ID is: %d\n", Class[i].ID);
		printf("Your grade is: %d\n", Class[i].grade);
	}
}