#include<stdio.h>

int Get_max(int n1,int n2);
int Get_min(int n1,int n2);

void main()
{
	int n1, n2, max, min;
	printf("Enter two numbers: \n");
	scanf("%d%d", &n1, &n2);
	
	max = Get_max(n1,n2);
	min = Get_min(n1,n2);
	
	printf("Maximum = %d\n", max);
	printf("Minimum = %d", min);
}

int Get_max(int n1,int n2)
{
	if(n1>n2)
		return n1;
	else
		return n2;
}

int Get_min(int n1,int n2)
{
	if(n1<n2)
		return n1;
	else
		return n2;
}