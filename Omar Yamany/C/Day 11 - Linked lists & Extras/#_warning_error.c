#include<stdio.h>
#define system1 1
#define system2 2
#define mode system1
#if mode == system1
#warning "System 1 activated!"
#elif mode == system2
#error "System 2 activated! Aborting..."
#endif

void main()
{
	printf("print in main!");
}