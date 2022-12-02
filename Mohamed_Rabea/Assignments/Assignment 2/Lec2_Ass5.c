#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter a number :");
	scanf("%d",&x);
	printf("Enter a number to chek if it's a multiple of the first num :");
	scanf("%d",&y);
	if (y%x==0)
	{
		printf("%d is a multiple of %d",y,x);
		
	}
	else 
		printf("%d isn't a multiple of %d",y,x);
	
}