#include <stdio.h>
int main ()
{
	int x,y;
	printf("enter your numbers\n");
	scanf("%d%d",&x,&y);
	
	if (x%y==0)
	{
		printf("the first number is multibel of second\n");
	}
	else 
	{
		printf("the first number is not multibel of second\n");
	}
}