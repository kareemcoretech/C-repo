#include <stdio.h>


int main()
{
	char str[50]={0};
	char x;
	int count=0;
	
	printf("Enter a string\n");
	scanf("\n");
	scanf("%[^\n]s",&str);
	
	printf("Enter a Charater\n");
	scanf("\n");
	scanf("%c",&x);
	
	for (int i=0 ; i<50 ; i++)
	{
		if (x==str[i])
			count++;
	}
	printf("the frequency of %c: %d",x,count);
	
}