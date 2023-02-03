#include<stdio.h>
#include"types.h"

struct car
{
	u8 S;
	u8 K;
	u16 q;
	u32 A;
	u16 w;
	u32 z;
};

struct X
{
	u8 *name;
	f64 k;
};

void main()
{
	struct car test;
	struct X pp;
	int size = sizeof(pp);
	printf("%d", size);
}