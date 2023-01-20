#include<stdio.h>
#include<string.h>
void func (char str[],int length);
int main()
{
	char str[100];
	printf("type the word:");
	scanf("%s",str);
	int length=0;
	length=strlen(str);
	func(str,length);
	printf("the word after the change:");
	printf("%s",str);
}
void func (char str[],int length)
{
	for(int i=0;i<length;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
}