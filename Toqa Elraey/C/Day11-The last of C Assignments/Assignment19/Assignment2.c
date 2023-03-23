/*
Author: Toqa Amir Elraey
Version: "UNDONE"
Task: Implement priority queue using single linked list.
Date: 4/1/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"

typedef struct t{
	u8 Data;
	u8 priority;
	struct t *Next;
}NODE;

NODE *Head = NULL;

void CreatTheQueue(u8 CopyData, u8 P){
	NODE *first = (NODE*)malloc(sizeof(NODE));
	first -> Next = NULL;
	first -> Data = CopyData;
	first -> priority = P;
}

void AddToQueue(u8 CopyData, u8 P){
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	NODE *check = Head;
	u8 flag = 0;
	
	while(check != NULL){
		if(check -> priority > P || check -> priority == P){
			newNode -> Next = check;
			newNode -> priority = P;
			newNode -> Data = CopyData;
			flag = 1;
			break;
		}
		check = check -> Next;
	}
	if(flag == 0){
		newNode -> Next = NULL;
		newNode -> priority = P;
		newNode -> Data = CopyData;
	}
}

void Display(void){
	NODE *print = Head;
	while(print != NULL){
		printf("%d\n", print->Data);
		print = print->Next;
	}
}

int main(){
	u8 nodeData, p;
	u8 flag = 0;
	printf("Please enter the value of the first Node: ");
	scanf("%d", &nodeData);
	printf("Please enter the Priority of the first Node: ");
	scanf("%d", &p);
	CreatTheQueue(nodeData, p);
	while(1){
		printf("Please enter 1 for adding a NODE and 0 for stop inserting: ");
		scanf("%d", &flag);
		if(flag == 1){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &nodeData);
			printf("Please enter the Priority of the Node: ");
        	scanf("%d", &p);
			AddToQueue(nodeData, p);
		}
		else{
			break;
		}
	}
	printf("The QUEUE: \n");
    Display();	
}