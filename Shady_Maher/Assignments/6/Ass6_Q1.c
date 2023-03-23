#include <stdio.h>
 
int Q1 (char string[]);

int main()
{
	char String[10];
	int flag=0;
	printf("Enter a String\n");
	scanf("%s", &String);
	
	flag = Q1(String);
	
	if (flag == 0)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
}

int Q1 (char string[])
{
	int flag=0;
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			if (string[i] == string[j] && i!=j && string[i] != 0 )
			{
				flag=1;
			}
		}
	}
	return flag;
}