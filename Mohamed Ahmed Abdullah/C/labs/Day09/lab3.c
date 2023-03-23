#include <stdio.h>
#include "STD_TYPES.h"

typedef struct student{
	u32 id;
	u8 math;
	u8 language;
	u8 physics;
	u8 chemistry;
} student;

void printStudent(student student1);
	
void main(void){
	student school[10]={
		{1 ,100,30 ,23,100},
		{2 ,90 ,10 ,64,90},
		{3 ,80 ,90 ,23,80},
		{4 ,95 ,95 ,89,32},
		{5 ,79 ,100,72,63},
		{6 ,26 ,99 ,30,54},
		{7 ,65 ,98 ,46,97},
		{8 ,60 ,70 ,74,32},
		{9 ,70 ,60 ,90,79},
		{10,97 ,96 ,85,99},
	};
	
	u8 schoolSize = sizeof(school)/sizeof(school[0]);
	
	u32 id;
	printf("Please Enter Student ID: ");
	scanf("%d", &id);
	
	int flag = 0;
	for(int i=0; i<schoolSize;i++){
		if(id == school[i].id){
			printStudent(school[i]);
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("Student Id is not correct");
	}
	
}

void printStudent(student student1){
	printf("Math Grade: %d \n", student1.math);
	printf("Language Grade: %d \n", student1.language);
	printf("Physics Grade: %d \n", student1.physics);
	printf("Chemistry Grade: %d \n", student1.chemistry);
}