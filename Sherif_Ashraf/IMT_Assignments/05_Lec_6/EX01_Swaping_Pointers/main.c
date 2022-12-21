#include<stdio.h>

void main(void)
{
	int x = 1,y = 2,z = 3;
	int *p = &x;
	int *q = &y;
	int *r = &z;

	printf("X : %d\n",x);
	printf("Y : %d\n",y);
	printf("Z : %d\n",z);
	printf("P : %d\n",p);
	printf("Q : %d\n",q);
	printf("R : %d\n",r);
	printf("*P : %d\n",*p);
	printf("*Q : %d\n",*q);
	printf("*R : %d\n",*r);
	printf("Swapping Pointers \n");
	r=p;
	p=q;
	q=r;
	printf("X : %d\n",x);
	printf("Y : %d\n",y);
	printf("Z : %d\n",z);
	printf("P : %d\n",p);
	printf("Q : %d\n",q);
	printf("R : %d\n",r);
	printf("*P : %d\n",*p);
	printf("*Q : %d\n",*q);
	printf("*R : %d\n",*r);
}