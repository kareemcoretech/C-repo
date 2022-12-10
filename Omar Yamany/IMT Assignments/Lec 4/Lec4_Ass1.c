#include <stdio.h>

int a, b, c, d, max, min;
void get_max(int a, int b, int c, int d);
void get_min(int a, int b, int c, int d);

void main()
{
	printf("Enter 4 numbers: \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	get_max(a,b,c,d);
	get_min(a,b,c,d);
	printf("Maximum number = %d\n", max);
	printf("Minimum number = %d\n", min);
}

void get_max (int a, int b, int c, int d)
{
	if ((a>b)&&(a>c)&&(a>d))
	{
		max = a;
	}
	else if((b>a)&&(b>c)&&(b>d))
	{
		max = b;
	}
	else if((c>a)&&(c>b)&&(c>d))
	{
		max = c;
	}
	else
	{
		max = d;
	}
	
}

void get_min (int a, int b, int c, int d)
{
	if ((a<b)&&(a<c)&&(a<d))
	{
		min = a;
	}
	else if((b<a)&&(b<c)&&(b<d))
	{
		min = b;
	}
	else if((c<a)&&(c<b)&&(c<d))
	{
		min = c;
	}
	else
	{
		min = d;
	}
	
}