/*
Author: Toqa Amir Elraey
Version: 3
Task:Write a C function to reverse a doubly linked list.
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

void InsertAtLast(u8 CopyData){
	NODE *last = (NODE*)malloc(sizeof(NODE));
	NODE *prevNode = Head;
	
	while(prevNode->Next != NULL){
		prevNode = prevNode -> Next;
	}
	last -> Data = CopyData;
	last -> Next = NULL;
	last -> Prev = prevNode;
	prevNode -> Next = last;
}

void reverse(void){
	NODE *temp = NULL; 
    NODE *check = Head;
      
     while (check !=  NULL)
     {
       temp = check->Prev;
       check->Prev = check->Next;
       check->Next = temp;             
       check = check->Prev;
     }     
      
     if(temp != NULL )
        Head = temp->Prev;
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
			InsertAtLast(nodeData);
		}
		else{
			break;
		}
	}
	printf("The Original List: \n");
	Display();
	
	reverse();
	printf("The reversed List: \n");
	Display();
	
}