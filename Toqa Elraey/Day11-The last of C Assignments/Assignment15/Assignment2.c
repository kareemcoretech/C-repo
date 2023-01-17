/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to insert a node before a certain node
value in a doubly linked list, the function shall work well even if 
it is required to insert before the first node, if the required 
node value isn't found in the list, it shall print that the value 
isn't found.
Date: 4/1/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"

typedef struct t{
	u8 Data;
	struct t *Next;
	struct t *Prev;
}NODE;

NODE *Head = NULL;

void CreatDLL(u8 CopyData){
	NODE *first = (NODE*)malloc(sizeof(NODE));
	first -> Data = CopyData;
	first -> Next = NULL;
	first -> Prev = NULL;
	Head = first;
}

void InsertAtFirst(u8 CopyData){
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	NODE *nextNode = Head;
	
	newNode -> Data = CopyData;
	newNode -> Next = Head;
	nextNode -> Prev = newNode;
	newNode -> Prev = NULL;
	Head = newNode;
}

u8 InsertBeforeANODE(u8 CopyData, u8 SearchData){
	NODE *node = (NODE*)malloc(sizeof(NODE));
	NODE *previousNode = Head;
	NODE *nextNode = Head;
	u8 flag = 0;
	
	while(nextNode != NULL){
		nextNode = previousNode -> Next;
		if(nextNode -> Data == SearchData){
			node -> Data = CopyData;
			node -> Next = nextNode;
			node -> Prev = previousNode;
			nextNode -> Prev = node;
			previousNode -> Next = node;
			flag = 1;
			break;
		}
		previousNode = previousNode -> Next;
	}
	return flag;
}

void Display(void){
	NODE *print = Head;
	while(print != NULL){
		printf("%d\n", print->Data);
		print = print->Next;
	}
}

int main(){
	u8 nodeData, searchData;
	u8 flag = 0;
	printf("Please enter the value of the first Node: ");
	scanf("%d", &nodeData);
	CreatDLL(nodeData);
	while(1){
		printf("Please enter 1 for adding a Node and 0 for stop inserting: ");
		scanf("%d", &flag);
		if(flag == 1){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &nodeData);
			InsertAtFirst(nodeData);
		}
		else{
			break;
		}
	}
	printf("Please enter the value you want to insert a node before: ");
	scanf("%d", &searchData);
	printf("Please enter the value of the new node: ");
	scanf("%d", &nodeData);
	u8 check = InsertBeforeANODE(nodeData, searchData);
	if(check == 1){
		Display();
	}
	else{
		printf("The value isn't found.");
	}
}