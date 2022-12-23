#include<stdio.h>
int main()
    {int num,fac=1;
	printf("enter the number\n");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
    fac*=i;
	}
	printf("factorial=%d\n",fac);
     }