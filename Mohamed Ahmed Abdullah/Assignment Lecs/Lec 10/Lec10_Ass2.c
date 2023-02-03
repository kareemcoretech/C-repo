/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 1 1 2023 

- Description of task: Assignment 2
	Complete lab 2 by adding a new function that allows the user to add a new node 
	at a certain position. The code shall ask the user to enter a value of the node and 
	the node index. the code shall add the new node to the received index and shift 
	all nodes to right.
*/


#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h" // Relative path 

typedef struct node
{
    u16 data;
    struct node* next;
} node;

node* Head = NULL;

void create_linked_list(u16 data);
void insert_at_first(u16 data);
void insert_at_last(u16 data);
void delete_node(u16 data);
void insert_at_index(u16 data, u16 index);
u16 search(u16 data);
void display(void);

void main(void){
    u16 choose = 0;
	u16 value = 1;
	u16 index = 1;
	
	do{
		printf("\nTo add node at last enter 0 \n");
		printf("To add node at first enter 1 \n");
		printf("To add node at specific index enter 2 \n");
		printf("To delete node enter 3 \n");
		printf("To search node enter 4 \n");
		printf("To print the linked list enter 5 \n");
		printf("To exit press 6 \n\n");
		printf("Your Choice: ");
		scanf("%d", &choose);
		
		if(choose == 0){
			printf("Please Enter Node Value: ");
			scanf("%d",&value);
			insert_at_last(value);
			printf("Node Added Thank You\n");
		}
		else if(choose == 1){
			printf("Please Enter Node Value: ");
			scanf("%d", &value);
			insert_at_first(value);
			printf("Node Added Thank You\n");
		}
		else if(choose == 2){
			printf("Please Enter Node Value&Index: ");
			scanf("%d %d",&value,&index);
			insert_at_index(value, index); // Error->value always = zero !
		}
		else if(choose == 3){
			printf("Please Enter Node Value: ");
			scanf("%d",&value);
			delete_node(value);
		}
		else if(choose == 4){
			printf("Please Enter Node Value: ");
			scanf("%d",&value);

			u16 exist = search(value);
			if(exist){
				printf("Found\n");
			}else{
				printf("Not Found\n");
			}
		}
		else if(choose == 5){
			display();	
		}
		else if(choose == 6){
			continue;
		}else{
			printf("Invalid Choice please try again\n");
		}
	}while(choose != 6);
	
	printf("Thank You\n");
	printf("Good Bye");
    return;
}

void create_linked_list(u16 data){
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    Head = n;
}

void insert_at_first(u16 data){
	if(Head == NULL){
		create_linked_list(data);
		return;
	}
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = Head;
	Head = n;
}

void insert_at_last(u16 data){
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

void insert_at_index(u16 data, u16 index){
	if(Head == NULL){
		create_linked_list(data);
		return;
	}

	node *n = (node*)malloc(sizeof(node));
    n->data = data;
	
	node *ptr = Head; 
	for(int i=1;i<index;i++){
		if(ptr->next)
		{
			 ptr = ptr->next;
		}
	}
	n->next = ptr->next;
	ptr->next = n;
}

void delete_node(u16 data){
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

u16 search(u16 data){
	u16 found = 0;
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
	
	u16 i = 0;
    while (ptr)
    {
		printf("Node number %d = %d\n", i, ptr->data);
        ptr = ptr->next;
		i++;
    }
	printf("----------------\n");
}