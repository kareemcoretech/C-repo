#include <stdio.h>
int main()
{
	float x,y,z;
	int m;
	printf("please enter the two float numbers\n");
	scanf("%f%f",&x,&y);
	m=z=x+y;
	if(z>=(m+0.5))
	{
		printf("result = %d\n",m+1);
	}
	else
	{
		printf("result = %d\n",m);
	}
	
	
}