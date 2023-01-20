#include<stdio.h>
#include<string.h>
void func(char str[],int length);
int main()
{
	char str[100];
	printf("Enter you word:");
	scanf("%s",str);
	int length=strlen(str);
	func(str,length);
	printf("the word after removing characters except Alphapet:");
	printf("%s",str);
}
void func(char str[],int length)
{
	int flag;
	for(int i=0;i<length;i++)
	{
		flag=0;
		if(str[i]>='a'&& str[i]<='z')
		{
			flag=1;
		}
		if(flag==0)
	   {
		str[i]=' ';
	   }
	}
	
	
}