#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int m;
	int n;
	int b;
	int a;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	z=x+y;
	printf("x+y=%d \n",z);
	m=x-y;
	printf("x-y=%d \n",m);
	n=x&y;
	printf("x&y=%d \n",n);
	b=x|y;
	printf("x|y=%d \n",b);
	a=x^y;
	printf("x^y=%d",a);
}