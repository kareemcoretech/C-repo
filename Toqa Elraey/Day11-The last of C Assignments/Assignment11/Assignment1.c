/*
Author: Toqa Amir Elraey
Version: 1
Task: C Program to store information (name, roll and marks) for a 
student using structure and display it.
Date: 1/1/2022
*/


#include <stdio.h>
#include "TypeDefs.h"

typedef struct{
	u8 name[20];
	u8 roll[20];
	u8 marks;
}student;

int main(){
	student S1 = {"toqa", "student", 40};
	printf("%s\n", S1.name);
	printf("%s\n", S1.roll);
	printf("%d\n", S1.marks);
}
