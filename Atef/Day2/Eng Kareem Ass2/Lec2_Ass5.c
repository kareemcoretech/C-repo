#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Please enter number 1 \n");
	scanf("%d",&x);
	printf("Please enter number 2 \n");
	scanf("%d",&y);
	z=x%y;
	if(z==0)
	{
		printf("the first is multiple of the second\n");
	}
	else
	{
		printf("the first isn't multiple of the second\n");
		
	}
	
}