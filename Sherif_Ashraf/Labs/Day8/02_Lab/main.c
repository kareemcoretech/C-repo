#include<stdio.h>

void main(void)
{
	int x = 100;
	char y = 55;
	double z = 5.5;
	float s = 6.6656;
	long int li = 100;
	long long lli = 100;
	short int si = 100;
	long double ld = 10.002;

	printf("int size = %d\n",sizeof(x));
	printf("char size = %d\n",sizeof(y));
	printf("double size = %d\n",sizeof(z));
	printf("floatn size = %d\n",sizeof(s));
	printf("short int size = %d\n",sizeof(si));
	printf("long int size = %d\n",sizeof(li));
	printf("long long int size = %d\n",sizeof(lli)); 
	printf("long double size = %d\n",sizeof(ld));
}