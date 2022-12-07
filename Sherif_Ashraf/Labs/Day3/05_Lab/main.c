#include<stdio.h>

int main()
{
	int num,fac=1;
	printf("Enter The Number\n");
	scanf("%d",&num);
	for(int i = 1; i<=num;i++)
	{
		fac *= i;
	}
	printf("Factorial = %d\n",fac);
}