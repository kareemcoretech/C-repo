#include<stdio.h>
#include<stdlib.h>
#include"datatypes.h"

typedef struct n 
{
	u8 data;
	struct n *next;
}NODE;

NODE *head = NULL;
NODE *tail = NULL;
 
void createLinkedList(u8 insertedData);

void insertInFirstLinkedList(u8 newData);

void insertInLasttLinkedList(u8 newData);

void main(void)
{
	createLinkedList(10);
	insertInFirstLinkedList(50);
	insertInLasttLinkedList(20);
}

void createLinkedList(u8 insertedData)
{
	NODE *n = (NODE*)malloc(sizeof(NODE));
	n->data = insertedData;
	n->next = NULL;
	tail = n;
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


void insertInLasttLinkedList(u8 newData)
{
	NODE *newN = (NODE*)malloc(sizeof(NODE));
	newN->data = newData;
	newN->next = tail;
	tail = newN;
}