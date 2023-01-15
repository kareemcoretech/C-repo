#include<stdio.h>

void main(void)
{
	int x=10;
	int *ptr = &x;

	printf("before change %d\n",x);

	*ptr = 20;
		
	printf("after change %d\n",x);

	printf("%p\n",&x);
	printf("%p\n",ptr);
	printf("%d\n",x);
	printf("%d\n",*ptr);	
}