#include<stdio.h>
#include"types.h"
typedef struct
{
	f32 real;
	f32 imaginary;
}Numbers;
void add(Numbers x,Numbers y);
int main()
{
	Numbers x;
	Numbers y;
	Numbers Result;
	printf("Enter the real and imaginary parts for the 1st complex number:");
	scanf("%f %f",&x.real,&x.imaginary);
	printf("Enter the real and imaginary parts for the 2nd number:");
	scanf("%f %f",&y.real,&y.imaginary);
	add(x,y);
}
void add(Numbers x,Numbers y)
{
	Numbers temp;
	temp.real=x.real + y.real;
	temp.imaginary=x.imaginary + y.imaginary;
	printf("The result is:%.1f+%.1fi",temp.real,temp.imaginary);
	
}