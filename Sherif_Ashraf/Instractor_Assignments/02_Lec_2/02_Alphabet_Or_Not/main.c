#include <stdio.h>

int main()
{
	char ch;

	printf("Enter Char To Chack If It Is Alphapet Or Not \n");
	scanf(" %c",&ch);

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("Char %c Is Alphapet\n",ch);
	} 
	else
	{
	   printf("Char %c Is Not Alphapet\n",ch);	
	}
}