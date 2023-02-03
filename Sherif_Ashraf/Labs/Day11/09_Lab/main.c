#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	u8 data;
	u8 *next;
}node;

void main(void)
{
	node *ptr = (node*)malloc(node);

	ptr->data = 5;
	ptr->next = NULL;
}