/*
Author: Toqa Amir Elraey
Version: 3
Task: Write a C Function that returns the data of the middle node 
in a linked list and in case the linked list contains only one node
return the data inside this node.
Date: 4/1/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

u8 returnData(void){
	u8 count = 0;
    NODE *check = Head;
    u8 CopyData;
	if(check == NULL){
		CopyData = check->Data;
	}
	else{
    	while(check != NULL){
    		count++;
    		check = check->Next;
    	}
		u8 counter = roundf(count/2);
		count = 0;
		check = Head;
		while(check != NULL){
			count++;
			if(count == counter){
				CopyData = check->Data;
				break;
			}
			check = check->Next;
		}
	}
	
	return CopyData;
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
	u8 MiddleNodeData = returnData();
	printf("The Data in the middle node is: %d", MiddleNodeData);
}