#include<stdio.h>
#include<string.h>
void func (char str[],int length);
int main()
{
	char str[100];
	printf("Enter your String:");
	scanf("%s",str);
	int length=0;
	length=strlen(str);
	func(str,length);
}
void func (char str[],int length)
{
	for(int i=length-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
