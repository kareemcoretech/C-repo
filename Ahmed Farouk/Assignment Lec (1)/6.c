#include <stdio.h>
void main ()
{
	int a , b;
	printf("Please Enter Two numbers : \n");
	scanf("%d%d",&a,&b);
	printf("Their sum : %d\nTheir Sub : %d\nTheir And : %d\nTheir Or : %d\nTheir XOR : %d",a+b,a-b,a&b,a|b,a^b);

}
