/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: Lab(2) 
	Write a c code implement a fuction to swap
	2 global variables.
*/

#include <stdio.h>
int x;
int y;

void swap();
void main(void){

	printf("x before swap: ");
	scanf("%d",&x);
	printf("y before swap: ");
	scanf("%d",&y);

	printf("\n \n");
	swap();

	printf("x after swap: %d \n",x);
	printf("y after swap: %d \n",y);

	return;
}

void swap(){
	int temp = x;
	x = y;
	y = temp;
}