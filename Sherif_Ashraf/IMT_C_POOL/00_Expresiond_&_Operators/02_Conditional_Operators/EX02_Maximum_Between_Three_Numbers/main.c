#include <stdio.h>
#include <stdlib.h>

void main(void) {
	float x=0.0 , y=0.0 , z=0.0;
	printf("Enter Three Numbers \n");
	scanf("%f %f %f",&x,&y,&z);

	((x>y)&&(x>z)) ? printf("Largest Number Is : %f",x):
	((y>x)&&(y>z)) ? printf("Largest Number Is : %f",y):
	((z>x)&&(z>y)) ? printf("Largest Number Is : %f",z):printf("");
}
