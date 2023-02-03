#include<stdio.h>
void main()
{
	int n, count;
	float sum, term, x;
	
	printf("Enter value of x: ");
	scanf("%f", &x);
	n=sum=term=count=1;
	while(n<=100)
	{
		term = term * x/n;
		sum = sum + term;
		count++;
		if(term<0.0001)
			n=999;
		else
			n++;
	}
	printf("Terms = %d\t Sum = %.2f", count, sum);
}