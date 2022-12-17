#include<stdio.h>

int main()
{
	int x = 7;
	// int set_bit,clear_bit,toggle_bit,read_bit;

	x |= (1<<3);

	x &= ~(1<<2);

	x ^= (1<<1);

	printf("%d \n",x);
	x = (x>>4) & 1;
	printf("Read : %d",x);

}