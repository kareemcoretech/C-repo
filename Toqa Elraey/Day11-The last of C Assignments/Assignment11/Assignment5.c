/*
Author: Toqa Amir Elraey
Version: 1
Task: Create Union type called family_name it shall have two
members first_name and last_name. The two members are
array of characters with same size 30. Try to write string in the 
first member first_name then print the second member
last_name plus print the size of the union.
Date: 1/1/2022
*/


#include <stdio.h>
#include "TypeDefs.h"

typedef union{
	u8 firstName[30];
	u8 lastName[30];
}familyName;

int main(){
	familyName member = {"ToqaAmirIbrahimElraey"};
	printf("%s\n", member.lastName);
	printf("%d", sizeof(member));
}