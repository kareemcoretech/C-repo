#include<stdio.h>
int main()
{
	int x;
	printf("Enter Your First Number:");
	scanf("%d",&x);
	int y;
	printf("Enter Your Second Number:");
	scanf("%d",&y);
	char z;
	printf("Enter Your Operation:");
	scanf(" %c",&z);
	int d;
	switch(z)
	{
		case '+':
		d=x+y;
		printf("Your Final Result is:%d",d);
		break;
		case'-':
		d=x-y;
		printf("Your Final Result is:%d",d);
		break;
		case'*':
		d=x*y;
		printf("Your Final Result is:%d",d);
		break;
		case'/':
		printf("Your Final Result is:%d",d);
		break;


	}
}