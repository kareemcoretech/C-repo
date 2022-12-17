#include <stdio.h>
int main()
{
	int x,i,y;
	
	printf("Enter an intger : ");
	scanf("%d",&x);
	i=x;
	while (i!=0)
	{
	y=x*i;
	i--;
	}
	printf("Factorial=%d",y);
}