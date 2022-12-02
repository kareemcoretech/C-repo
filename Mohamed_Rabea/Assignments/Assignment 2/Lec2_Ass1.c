#include<stdio.h>
#include<math.h>
int main ()
{
	int x,y;
	printf("enter an integer :");
	scanf("%d",&x);
	y=sqrt(x);
	if (x%y==0)
	{
		printf("%d is a perfect square integer",x);
	}
	else 
	{
		printf("%d isn't a perfect square integer",x);
	}
}