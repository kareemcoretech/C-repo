#include<stdio.h>
#include<string.h>
void func (char str[],int length);
int main()
{
	char str[100];
	int length;
	printf("Enter your word:");
	scanf("%s",str);
	func(str,length);
	
}
void func (char str[],int length)
{
	length=0;
	length=strlen(str);
	printf("the length of the array is:%d",length);
}