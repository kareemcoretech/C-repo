#include<stdio.h>
int main()
{
	char x;
	printf("Please enteryour character\n");
	scanf(" %c",&x);
	if(x>='A' && x<='Z' || x>='a' && x<='z')
	{
		printf("the character is alphabet\n");
	}
	else 	
		{
			printf("the character is not alphabet\n");
		}
	
}