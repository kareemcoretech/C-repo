/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function that returns the sum of all the nodes in
linked list
Date: 4/1/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"

typedef struct t{
	u8 Data;
	struct t *Next;
}NODE;

NODE *Head = NULL;

void CreatLinkedList(u8 CopyData){
	NODE *first = (NODE*)malloc(sizeof(NODE));
	first -> Data = CopyData;
	first -> Next = NULL;
	Head = first;
}

void InsertAtLast(u8 CopyData){
	NODE *last = (NODE*)malloc(sizeof(NODE));
	NODE *check = Head;
	while(check->Next != NULL){
		check = check->Next;
	}
	last -> Data = CopyData;
	check -> Next = last;
	last -> Next = NULL;
}

u16 Max(void){
	u16 max = 0;
	NODE *check = Head;
	while(check != NULL){
		if(check->Data >= max){
			max = check->Data;
		}
		check = check->Next;
	}
	return max;
}

int main(){
	u8 Data;
	u8 flag = 0;
	printf("Please enter the Value of first Node: ");
	scanf("%d", &Data);
	CreatLinkedList(Data);
	while(1){
		printf("Please enter 1 for adding a Node and 0 for stop inserting: ");
		scanf("%d", &flag);
		if(flag == 1){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &Data);
			InsertAtLast(Data);
		}
		else{
			break;
		}
	}
	u16 result = Max();
	printf("The maximum value in the list: %d", result);
}