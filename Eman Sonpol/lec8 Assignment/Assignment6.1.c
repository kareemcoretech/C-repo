#include<stdio.h>
#include<string.h>
void  Character (char str[],int length);
int main()
{
	char str[100];
	scanf("%s",str);
	int length=0;
	length=strlen(str);
	Character(str,length);
	 
}
void Character (char str[], int length)
{
	int flag=0;
		for(int i=0;i<length-1;i++)
	{
		for(int j=0;j<length;j++)
		{
			if(str[i]==str[j])
			{
				flag=1;
				break;
			}
		}
	}
	
	if(flag==0)
	{
		printf("True");
	}
	else if(flag==1)
	{
		printf("False");
	}
	
}