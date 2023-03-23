#include <stdio.h>

void main()
{
	int x=10;
	int *ptr=NULL;
	//ptr=&x;
	*ptr=10;
	printf("%d", x);
}