#include<stdio.h>
int main()
{
	char c;
	char x;
	printf("Enter Lowercase Letter: ");
	scanf(" %c",&c);
	x=c-32;
	printf("The Uppercase of This letter : %c",x);
}