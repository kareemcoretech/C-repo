#include <stdio.h>

int main()
{
	int str[20];
	int last[3];
	
	int end=0;
	printf("Enta a string: ");
	scanf("\n");
	scanf("%[^\n]s",&str);

	for (int i=0 ; i<20 ; i++)
	{
		if (str[i] != NULL )
		{
			end++;
		}
	}
	printf("%s",str);
	
	last[0]= str[end];
	last[1]= ' ';
	last[2]= str[end-1];
	
	printf("%s",last[0]);
	
}