#include <stdio.h>
#include <stdlib.h>

void main(void) {
	float x=0.0 , y=0.0;
	printf("Enter Two Numbers \n");
	scanf("%f %f",&x,&y);
	(x>y) ? printf("Largest Number Is : %f",x):printf("Largest Number Is : %f",y);
}
