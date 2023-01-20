#include<stdio.h>
#include<stdlib.h>
#include"datatypes.h"

typedef struct n 
{
	u8 data;
	struct n *next;
}NODE;

NODE *head = NULL;
 
void createLinkedList(u8 insertedData);

void insertInFirstLinkedList(u8 newData);

void insertInLasttLinkedList(u8 newData);

void displayLinkedList(void);

void main(void)
{
	createLinkedList(10);
	insertInFirstLinkedList(50);
	insertInLasttLinkedList(20);
	displayLinkedList();
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


void insertInLasttLinkedList(u8 newData)
{
	if(head == NULL)
	{
		createLinkedList(newData);
	}
	else
	{
		NODE *tail =head;
		NODE *newN = (NODE*)malloc(sizeof(NODE));
		while(tail->next!=NULL)
		{
			tail = tail->next;
		}
		tail->next=newN;
		newN->next = NULL;
		newN->data=newData;
	}
}

void displayLinkedList(void)
{	
	NODE *print = head;
	while(print!=NULL)
	{
		printf("%d\n",print->data);
		print = print->next;
	}
}