#include<stdio.h>

int main()
{
	int x,z=1;
	scanf("%d",&x);
	while(x>=1)
	{
		z = x * z;
		x--;
	}
	printf("the factorial = %d\n",z);
		
}