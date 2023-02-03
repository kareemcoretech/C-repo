#include <stdio.h>
#include "datatypes.h"

typedef struct
{
	u8 Name[20];
	u16 ID;
	u8 Grade;
	
}info;

void  entering ( info students [] );


int main()
{
	info students[10]={0};

	entering(students);
	
	for(u8 i = 0; i<10 ; i++)
	{
		printf("name %d: %s\n",i+1,students[i].Name);
		printf("id: %d\n",students[i].ID);
		printf("grade: %d\n",students[i].Grade);
		
	}
}


void  entering ( info students [] )
{
	for(u8 i = 0; i<10 ; i++)
	{
		printf("Enter student name\n");		//name
				scanf("\n");
				scanf("%[^\n]s", &students[i].Name );
				
		printf("Enter student ID\n");				//Age
				scanf("%d", &students[i].ID);
				
		printf("Enter student Grade\n");		//Grade
				scanf("%d", &students[i].Grade);
	}
}