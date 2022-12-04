#include <stdio.h>
int main ()
{
	float r,area,cir;
	printf("please enter the radius\n");
	scanf(" %f",&r);
	area=(22/7)*r*r;
	cir=2*(22/7)*r;
	printf("area=%f\ncircumference=%f",area,cir);

}