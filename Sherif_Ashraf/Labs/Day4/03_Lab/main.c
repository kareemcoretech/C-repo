#include<stdio.h>

int func(void);

int x = 10;

int main()
{
	x =30;
	printf("%d \n",x);
	int res = func();
	printf("%d \n",res);
	printf("%d \n",x);
}

int func(void)
{
	x = 20;
	int z = x+3;
	printf("%d \n",x);
	return z;
}