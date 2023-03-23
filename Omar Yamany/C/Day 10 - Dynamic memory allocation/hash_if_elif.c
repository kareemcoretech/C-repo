#include<stdio.h>
#define system1 0
#define system2 1
#define system3 2

#define mode system3
void main()
{
#if mode == system1
printf("Mode 1");
#elif mode == system2
printf("Mode 2");
#elif mode == system3
printf("Mode 3");
#endif
}