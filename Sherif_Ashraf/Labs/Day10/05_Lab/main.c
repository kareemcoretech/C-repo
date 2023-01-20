#include<stdio.h>
#include"datatypes.h"


#define set_bit(num,bit) 	(num |(1 << bit))
#define clear_bit(num,bit)  (num &~(1 << bit))
#define read_bit(num,bit) 	((num >> bit)&1)
#define toggle_bit(num,bit) (num ^(1 << bit))


void main(void)
{
	printf("%d",set_bit(0,0));
	printf("%d",read_bit(2,1));
	printf("%d",clear_bit(1,0));
	printf("%d",toggle_bit(1,0));
}
