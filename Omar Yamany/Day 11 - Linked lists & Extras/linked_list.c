#include<stdio.h>
#include<stdlib.h>
#include"types.h"

void create_linkedlist(u8 sent_data);
void insert_at_first(u8 sent_data);
void insert_at_last(u8 sent_data);
void display(void);
int search(u8 search_number);

typedef struct n
{
	u8 Data;
	struct n *Next; //it will give warning if we use u8, because pointer must be same data type of pointed variable
}Node;
Node *head = NULL;

void main()
{
	u8 n;
	create_linkedlist(20);
	insert_at_first(10);
	insert_at_first(3);
	insert_at_first(2);
	display();
	printf("\n");
	insert_at_first(60);
	insert_at_last(50);
	display();
	printf("\nEnter a number to search for: ");
	scanf("%d", &n);
	search(n);
}

void create_linkedlist(u8 sent_data)
{
	Node *n = (Node*)malloc(sizeof(Node));
	n->Data = sent_data;
	n->Next = NULL;
	head = n;
}

void insert_at_first(u8 sent_data)
{
	Node *n = (Node*)malloc(sizeof(Node));
	n->Data = sent_data;
	if(head == NULL)
	{
		n->Next = NULL; //to use this function to create new Node
	}
	else
	{
		n->Next = head;
	}
	head = n;
}

void display(void)
{
	Node *print = head;
	while(print != NULL)
	{
		printf("%d ", print->Data);
		print = print->Next;
	}
}

void insert_at_last(u8 sent_data)
{
	Node *n = (Node*)malloc(sizeof(Node));
	Node *tail = head;
	while(tail->Next != NULL)
	{
		tail = tail->Next;
	}
	tail->Next = n;
	n->Next = NULL;
	n->Data = sent_data;
}

int search(u8 search_number)
{
	Node *index = head;
	while(index!=NULL)
	{
		if(index->Data == search_number)
		{
			printf("Number found");
			return 0;
		}
		index = index->Next;
	}
	printf("Number not found");
	return 0;
}