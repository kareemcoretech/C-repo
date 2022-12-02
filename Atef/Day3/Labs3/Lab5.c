#include<stdio.h>

int main ()
{
	int x,i,z;
	scanf("%d",&x);
	for( i=x;i>=1;i--)
	{
		z=x*i;
		printf("%d*%d = %d\n",x,i,z);
	}
}