/*
Author: Toqa Amir Elraey
Version: 1
Task: Implement Deque data structure which supports insertion 
and deletion at both ends using doubly linked list.
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

void InsertAtLast(u8 CopyData){
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	NODE *prevNode = Head;
	
	while(prevNode -> Next != NULL){
		prevNode = prevNode -> Next;
	}
	
	prevNode -> Next = newNode;
	newNode -> Next = NULL;
	newNode -> Prev = prevNode;
	newNode -> Data = CopyData;
}

void DeleteAtFirst(void){
	NODE *check = Head;
	NODE *next = check -> Next;
	
	Head = next;
	next -> Prev = NULL;
	free(check);
}

void DeleteAtLast(void){
	NODE *check = Head;
	NODE *prevNode = Head;
	
	while(check -> Next != NULL){
		check = check -> Next;
	}
	prevNode = check -> Prev;
	prevNode -> Next = NULL;
	free(check);
}

void Display(void){
	NODE *print = Head;
	while(print != NULL){
		printf("%d\n", print->Data);
		print = print->Next;
	}
}

int main(){
	u8 nodeData;
	u8 flag = 0;
	printf("Please enter the value of the first Node: ");
	scanf("%d", &nodeData);
	CreatDLL(nodeData);
	while(1){
		printf("Please enter 1 for adding a Node at First 2 for adding NODE at Last and 0 for stop inserting: ");
		scanf("%d", &flag);
		if(flag == 1){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &nodeData);
			InsertAtFirst(nodeData);
		}
		else if(flag == 2){
			printf("Please enter the value of the NODE: ");
			scanf("%d", &nodeData);
			InsertAtLast(nodeData);
		}
		else{
			break;
		}
	}
	Display();
	flag = 0;
	while(1){
		printf("Please enter 1 for deleting a Node at First 2 for deleting NODE at Last and 0 for stop deleting: ");
		scanf("%d", &flag);
		if(flag == 1){
			DeleteAtFirst();
			Display();
		}
		else if(flag == 2){
			DeleteAtLast();
			Display();
		}
		else{
			break;
		}
	}
	
	
}