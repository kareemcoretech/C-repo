#include<stdio.h>

int main()
{
	int n1,n2,n3,x;
	printf("please enter your numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
		x=n1;
	}
	else 
	{
		x=n2;
	}
	if(n3>x)
	{
		x=n3;
	}
	else
	{
		x=x;
	}
	printf("the maximum number is %d\n",x);
}