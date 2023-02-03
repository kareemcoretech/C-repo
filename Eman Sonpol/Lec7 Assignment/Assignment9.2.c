#include<stdio.h>
void func (int *ptr1, int *ptr2);
int main()
{
	int x;
	int y;
	printf("Enter the first number:");
	scanf("%d",&x);
	printf("Enter the second number:");
	scanf("%d",&y);
	
	func(&x,&y);	
}
void func (int *ptr1, int *ptr2)
{
	*ptr1^=*ptr2;
	*ptr2^=*ptr1;
	*ptr1^=*ptr2;
	printf("the numbers after swaping\n");
	printf("the first number:%d\n",*ptr1);
	printf("the second number:%d",*ptr2);
}
/*C function to swap two numbers using bitwise operation 
and call it using pointer to function.