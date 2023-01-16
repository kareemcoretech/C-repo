#include<stdio.h>
#include"types.h"
#define set(number,bit_number) number|(1<<bit_number)
#define clear(number,bit_number) number & ~(1<<bit_number)
#define toggle(number,bit_number) number ^ (1<<bit_number)
#define read(number,bit_number) (number>>bit_number)&1
void main()
{
	u8 x = 10;
	x = set(x,2);
	printf("%d\n", x);
	x = clear(x,2);
	printf("%d\n", x);
	x = toggle(x,1);
	printf("%d\n", x);
	printf("%d", read(x,2));
}