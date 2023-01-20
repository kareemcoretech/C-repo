#include<stdio.h>
#include<stdlib.h>
#include"datatypes.h"

typedef struct
{
	u8 data;
	u8 *next;
}NODE;

NODE *head = NULL;
 
void createLinkedList(u8 insertedData);

void insertInFirstLinkedList(u8 newData);

void main(void)
{
	createLinkedList(20);
	insertInFirstLinkedList(50);
}

void createLinkedList(u8 insertedData)
{
	NODE *n = (NODE*)malloc(sizeof(NODE));
	n->data = insertedData;
	n->next = NULL;
	head = n;
}

void insertInFirstLinkedList(u8 newData)
{
	if(head == NULL)
	{
		createLinkedList(newData);
	}
	else
	{
		NODE *newN = (NODE*)malloc(sizeof(NODE));
		newN->data = newData;
		newN->next = head;
		head = newN;	
	}
}