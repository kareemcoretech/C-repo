/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to create a circular linked list.
Date: 4/1/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"

typedef struct t{
	u8 Data;
	struct t *Next;
}NODE;

NODE *Last = NULL;

void CreatCL(u8 CopyData){
	NODE *first = (NODE*)malloc(sizeof(NODE));
	first -> Data = CopyData;
	first -> Next = first;
	Last = first;
}

void InsertAtLast(u8 CopyData){
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	newNode -> Data = CopyData;
	newNode -> Next = Last -> Next;
	Last -> Next = newNode;
	Last = newNode;
}

void Display(void){
	NODE *print = Last -> Next;
	printf("%d\n", print -> Data);
	print = print -> Next;
	while(print != Last -> Next){
		printf("%d\n", print -> Data);
		print = print -> Next;
	}
}

int main(){
	u8 data;
	u8 flag = 0;
	printf("Please enter the value of first node: ");
	scanf("%d", &data);
	CreatCL(data);
	while(1){
		printf("Please enter 1 for adding a Node and 0 for stop inserting: ");
		scanf("%d", &flag);
		if(flag == 1){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &data);
			InsertAtLast(data);
		}
		else{
			break;
		}
	}
	printf("The List: \n");
	Display();
}
