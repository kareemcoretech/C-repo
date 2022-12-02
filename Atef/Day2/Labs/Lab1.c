#include<stdio.h>

int main ()
{
	int x,y,z;
	printf("please enter your the working hour  \n");
	scanf("%d",&x);
	if(x<40)
	{
		z=x*50;
		y=z*.9;
	}
	else 
	{
		y=x*50;
	}
	printf("Your salary = %d",y);
}