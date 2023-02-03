#include <stdio.h>
#include "datatypes.h"

typedef struct
{
	f32 real;
	f32 imag;
	
}complex;

complex adding(complex n1, complex n2);


int main()
{
	complex n1, n2, result;
	printf("First complex: \n");
	printf("Enter the real and imaginary parts: ");
	scanf("%f %f", &n1.real, &n1.imag);
	printf("Second complex: \n");
	printf("Enter the real and imaginary parts: ");
	scanf("%f %f", &n2.real, &n2.imag);
	
	result = adding(n1, n2);
	
	printf("sum = %.1f + %.1fi",result.real, result.imag);
	
	
}

complex adding(complex n1, complex n2)
{
	complex temp;
	temp.real= n1.real+n2.real;
	temp.imag= n1.imag+n2.imag;
	return temp;
}