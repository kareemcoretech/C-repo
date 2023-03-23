/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 1 1 2023 

- Description of task: Assignment 1
	Complete lab 2 by adding a new function that allow the user to delete certain 
    node. The user shall enter a value then the code shall delete any node that holds 
    this value.
*/


#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h" // Relative path 

typedef struct node
{
    u8 data;
    struct node* next;
} node;

node* Head = NULL;

void create_linked_list(u8 copy_data);
void insert_at_first(u8 data);
void insert_at_last(u8 data);
void delete_node(u8 data);
void insert(u8 data, u16 index);
u8 search(u8 data);
void display(void);

void main(void){
    u8 choose;
	u8 val;
	
	printf("To add node enter at last 0 \n");
	printf("To add node enter at first 1 \n");
	printf("To delete node enter 2 \n");
    printf("To search node enter 3 \n");
	printf("To print the linked list enter 4 \n");
	printf("To exit press 5 \n");
	do{
		printf("Your Choice: ");
		scanf("%d", &choose);
		
		if(choose == 0){
			printf("Please Enter Node Value: ");
			scanf(" %d",&val);
			insert_at_last(val);
			printf("Node Added Thank You\n");
		}
		else if(choose == 1){
			printf("Please Enter Node Value: ");
			scanf(" %d",&val);
			insert_at_first(val);
			printf("Node Added Thank You\n");
		}
		else if(choose == 2){
			printf("Please Enter Node Value: ");
			scanf("%d",&val);
			delete_node(val);
		}
		else if(choose == 3){
			printf("Please Enter Node Value: ");
			scanf("%d",&val);
			u8 exist = search(val);
			if(exist){
				printf("Found\n");
			}else{
				printf("Not Found\n");
			}
		}
		else if(choose == 4){
			display();	
		}
		else if(choose == 5){
			continue;
		}else{
			printf("Invalid Choice please try again\n");
		}
	}while(choose != 5);
	
	printf("Thank You\n");
	printf("Good Bye");
    return;
}

void create_linked_list(u8 data){
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    Head = n;
}

void insert_at_first(u8 data){
	if(Head == NULL){
		create_linked_list(data);
		return;
	}
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = Head;
	Head = n;
}

void insert_at_last(u8 data){
	if(Head == NULL){
		create_linked_list(data);
		return;
	}
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
	
	node *ptr = Head; 
    while (ptr->next)
    {
         ptr = ptr->next ;
    }
	ptr->next = n;

}

void insert(u8 data, u16 index){
	node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
	
	node *ptr = Head; 
	for(int i=0;i<index;i++){
		if(ptr->next)
		{
			 ptr = ptr->next ;
		}
	}
	ptr->next = n;
}

void delete_node(u8 data){
    node *prev = NULL;
    node *curr = Head; 

    if (!Head)
        return;

    while (Head && Head->data == data)
        Head = Head->next;
    
    while (curr) {
        if (curr->data == data){
            prev->next = curr->next;
        }
        else{
            prev = curr;
        }          
        curr = curr->next;
    }
}

u8 search(u8 data){
	u8 found = 0;
	node *ptr = Head; 
	while (ptr)
    {
		if(ptr->data == data){
			found = 1;
			return found;
		}
		ptr = ptr->next ;
    }
	return found;
}


void display(){
	printf("----------------\n");
	node *ptr = Head; 
	if(!ptr){
		printf("List is Empty\n");
	}
	
	u8 i = 0;
    while (ptr)
    {
		printf("Node number %d = %d\n", i, ptr->data);
        ptr = ptr->next;
		i++;
    }
	printf("----------------\n");
}