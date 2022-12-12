#include <stdio.h>

int x=10, y=20;

void swap(int a, int b);

int main()
{
	printf("X before swap = %d\n", x);
	printf("Y before swap = %d\n\n\n", y);
	swap (x,y);
	printf("X after swap = %d\n", x);
	printf("Y after swap = %d\n", y);
	
}

void swap(int a, int b)
{
	x=b;
	y=a;

}