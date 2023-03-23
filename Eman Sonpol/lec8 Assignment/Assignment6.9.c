#include<stdio.h>
void func (char str1[],char str2[]);
int main()
{
	char str1[100];
	printf("Enter the first string:");
	scanf("%s",str1);
	char str2[100];
	printf("Enter the second string:");
	scanf("%s",str2);
	func(str1,str2);
}
void func (char str1[],char str2[])
{
	printf("%s",str1);
	printf("%s",str2);
}