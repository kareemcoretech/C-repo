/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to insert a node after a certain node
value in a doubly linked list, the function shall work well even if 
it is required to insert after the last node, if the required node 
value isn't found in the list, it shall print that the value isn't 
found.
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

void Display(void){
	NODE *print = Head;
	while(print != NULL){
		printf("%d\n", print->Data);
		print = print->Next;
	}
}

int main(){
	CreatDLL(50);
	InsertAtFirst(40);
	InsertAtFirst(30);
	InsertAtFirst(20);
	InsertAtFirst(10);
	Display();
}