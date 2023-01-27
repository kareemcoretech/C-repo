#include<stdio.h>
void main()
{
	printf("Enter two positive integers: \n");
	int n1, n2, gcd, lcm;
	scanf("%d %d",&n1,&n2);
	
	for(int i=1;(i<=n1) && (i<=n2);i++)
	{
		if((n1%i==0) && (n2%i==0))
		{
			gcd = i;
		}
	}
	lcm = (n1*n2)/gcd;
	printf("The LCM of two numbers %d and %d is: %d", n1, n2, lcm);
}