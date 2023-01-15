/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program (5): Create Union type called family_name it shall have two members first_name and last_name. The two members are
array of characters with same size 30. Try to write string in the  first member first_name then print the second member
last_name plus print the size of the union.
*/

#include <stdio.h>
#include "types.h"
typedef union 
{
	u8 first_name[30];
	u8 last_name[30];
}family_name;

int main()
{
	family_name family[2];
	for (u8 i; i<1; i++)
	{   
		scanf("%[^\n]%*c",family[i].first_name);
		scanf("%[^\n]%*c",family[i].last_name);
	}
	for (u8 i; i<2; i++)
	{   printf("%s\n",family[i].first_name);
		printf("%s\n",family[i].last_name);
	}
	printf("%d",sizeof(family_name));
}