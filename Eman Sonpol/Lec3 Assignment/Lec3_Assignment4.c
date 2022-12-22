#include<stdio.h>
int main()
{
	int x;
	int y;
	int r;
	printf("Enter the number:");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
		r=r*10+y;
		x/=10;
	}
	printf("The Reverse of the number is:%d",r);
}