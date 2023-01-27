#include<stdio.h>

int get_fact(int number);
int ncr(int n, int r);
int npr(int n, int r);

void main()
{
	int n, r, result_ncr, result_npr;
	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter the value of r: ");
	scanf("%d", &r);
	result_ncr = ncr(n,r);
	result_npr = npr(n,r);
	printf("\n%dC%d = %d\n", n, r, result_ncr);
	printf("%dP%d = %d", n, r, result_npr);
}

int ncr(int n, int r)
{
	int x = get_fact(n); //n!
	int y = get_fact(n-r); //(n-r)!
	int z = get_fact(r); //r!
	return (x/(y*z));
}

int npr(int n, int r)
{
	int x = get_fact(n); //n!
	int y = get_fact(n-r); //(n-r)!
	return (x/y);
}

int get_fact(int number)
{
	int fact=1;
	for(int i=1;i<=number;i++)
	{
		fact *= i;
	}
	return fact;
}