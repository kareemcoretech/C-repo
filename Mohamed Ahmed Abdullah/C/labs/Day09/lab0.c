#include <stdio.h>
#include "STD_TYPES.h"

typedef struct student{
	u32 id;
	f32 grade;
	u32 group;
} universityStudent;

typedef struct test{
	u8 * x;
	u8 y;
} test;


void readStudent(universityStudent *student);
void printStudent(universityStudent student);	

void main(void){
	
	universityStudent Arr[3];
	printf("size of struct = %d \n", sizeof(Arr[0]));
	
	u8 size = sizeof(Arr)/sizeof(Arr[0]);
	
	for(int i=0; i<size; i++){
		readStudent(&Arr[i]);
	}
	
	for(int i=0; i<size; i++){
		printStudent(Arr[i]);
	}
	
	test x;
	printf("%d", sizeof(x));
}

void readStudent(universityStudent *student){
	printf("student id: ");
	scanf("%d", &student->id);
	printf("student grade: ");
	scanf("%f", &student->grade);
	printf("student group: ");
	scanf("%d", &student->group);
}

void printStudent(universityStudent student){
	printf("information:\n");
	printf("Id: %d \n", student.id);
	printf("Grade: %f \n", student.grade);
	printf("Group: %d \n", student.group);
}