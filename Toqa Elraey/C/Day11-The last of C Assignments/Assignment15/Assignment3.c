/*
Author: Toqa Amir Elraey
Version: "UNDONE"
Task: Write a C function to delete a certain node value from a 
doubly linked list, the function shall work well even if the node 
to be deleted is at first or end or between or the only node in 
the list, if the required node value isn't found in the list, it shall 
print that the value isn't found.
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

u8 Delete(u8 SearchData){
	u8 flag = 0;
	NODE* check = Head;
	NODE *nextNode = Head;
	NODE *prevNode = Head;
	
	while(check != NULL){
		nextNode = check->Next;
		if(check->Data == SearchData){
			if(check->Prev == NULL){
				Head = nextNode;
				nextNode -> Prev = NULL;
				free(check);
				flag = 1;
				break;
			}
			else if(check->Next == NULL){
				prevNode -> Next = NULL;
				free(check);
				flag = 1;
				break;
			}
			else{
				prevNode -> Next = nextNode;
				nextNode -> Prev = prevNode;
				free(check);
				flag = 1;
				break;
			}
			prevNode = check;
			check = check -> Next;
		}
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
	printf("Please enter the value you want to delete: ");
	scanf("%d", &searchData);
	u8 check = Delete(searchData);
	if(check == 1){
		Display();
	}
	else{
		printf("The value isn't found.");
	}
}
