#include<stdio.h>

void divide(void)
{
	int a,b,res;
	printf("Enter Two Operands \n");
	scanf("%d %d",&a,&b);
	res = a/b;
	printf("%d / %d = %d",a,b,res);
}
