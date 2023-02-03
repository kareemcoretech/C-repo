#include<stdio.h>
void main()
{
	int n1=0, n2=1, n3, n;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fibonacci Series: ");
	for(int i=1;i<=n;i++)
	{
		printf("%d ", n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;		
	}
}