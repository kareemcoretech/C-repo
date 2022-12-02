#include <stdio.h>
int main()
{
	int x,y,sum,sub,and,or,xor;
    printf ("enter first number\n");
    scanf ("%d",&x);
    printf ("enter second number\n");
    scanf("%d",&y);
	sum = x+y;
	sub = x-y;
	and = x&y;
	or = x|y;
	xor = x^y;
	printf("summation=%d\nsubtraction=%d\nanding=%d\noring=%d\nxoring=%d",sum,sub,and,or,xor);
}