#include <stdio.h>

int main ()
{
	int num1,x=0,y;
	
	printf("please enter the number  \n");
	scanf("%d",&num1);
	x=num1%2;
	if(x==0)
	{
		printf("the number is Even\n");
		
	}
	else
	{
		
		printf("the number is odd\n");
		
	}
}