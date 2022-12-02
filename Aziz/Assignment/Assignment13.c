#include <stdio.h>
int main()
{
	float x,y,z,b;
	int a;
	printf("enter your numbers\n");
	scanf("%f%f",&x,&y);
	z=x+y;
	a=z;
	b=a+0.5;
	
	if (z>=b)
	{
		
		printf("the value will be %d\n",a+1);
	}
	else 
	{
		printf("the value will be %d\n",a);
	}
}