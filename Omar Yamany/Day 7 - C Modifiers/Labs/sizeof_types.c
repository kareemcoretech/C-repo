#include<stdio.h>

void main()
{
	int a=sizeof(int);
	int b=sizeof(char);
	int c=sizeof(float);
	int d=sizeof(double);
	printf("Size of char is: %d\n", b);
	printf("Size of int is: %d\n", a);
	printf("Size of short int is: %d\n", sizeof(short int));
	printf("Size of long int is: %d\n", sizeof(long int));
	printf("Size of long long int is: %d\n", sizeof(signed long long int));
	printf("Size of float is: %d\n", c);
	printf("Size of double is: %d\n", d);
	printf("Size of long double is: %d\n", sizeof(long double));
}