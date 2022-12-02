#include<stdio.h>

int main()
{
	int x,y,sum,sub,and,or,xor;
	printf("please enter your two number\n");
	scanf("%d%d",&x,&y);
	sum = x+y;
	sub = x-y;
	and = x&y;
	or  = x|y;
	xor = x^y;
	printf("the sumation = %d\nthe submation = %d\nthe andding = %d\nthe oring = %d\nthe xoring = %d\n",sum,sub,and,or,xor);
}