#include<stdio.h>
//question: search for how to find if stack overflow happens
void print(void)
{
	int x=100;
	printf("%d", x);
	print();
}

int main()
{
	print();
}