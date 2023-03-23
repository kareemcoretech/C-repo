#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h" // Relative path 

typedef struct linkedList{
	u8 Data;
	u8* Next;
} node;

void main(void){
	node * ptr = (node*)malloc(sizeof(node));
	ptr->Data = 5;
	ptr->Next = NULL;
	
	
}