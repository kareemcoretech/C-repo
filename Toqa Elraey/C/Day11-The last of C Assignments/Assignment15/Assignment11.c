/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function to insert a node before a certain node 
value in a circular linked list, if the required node value isn't 
found in the list, it shall print that the value isn't found.
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

u8 InsertBeforeNODE(u8 searchval, u8 CopyData){
	NODE *n = (NODE*)malloc(sizeof(NODE));
	NODE *prev = Last -> Next;
	NODE *NEXT = Last -> Next;
	u8 flag = 0;
	
	NEXT = prev -> Next;
	if(NEXT -> Data == searchval){
		prev -> Next = n;
		n -> Next = NEXT;
		n -> Data = CopyData;
		flag = 1;
	}
	else{
		prev = prev -> Next;
		NEXT = prev -> Next;
		while(NEXT != Last -> Next){
			if(NEXT -> Data == searchval){
				prev -> Next = n;
	        	n -> Next = NEXT;
        		n -> Data = CopyData;
        		flag = 1;
				break;
			}
			prev = prev -> Next;
			NEXT = prev -> Next;
		}
	}
	return flag;
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
	u8 data, nodeVal;
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
	printf("Please enter the value you want to insert after: ");
	scanf("%d", &nodeVal);
	printf("Please enter the value of new node: ");
	scanf("%d", &data);
	u8 check = InsertBeforeNODE(nodeVal, data);
	if(check == 1){
		printf("The New List: \n");
		Display();
	}
	else{
		printf("The value isn't found.");
	}
}