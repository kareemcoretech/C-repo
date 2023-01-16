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

void main(void)
{

}

void createLinkedList(u8 insertedData)
{
	NODE *n = (NODE*)malloc(sizeof(NODE));
	n->data = insertedData;
	n->next = NULL;
	head = n;
}