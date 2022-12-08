/*
 ============================================================================
 Name        : EX02_Maximum_Between_Three_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0.0 , y=0.0 , z=0.0;
	printf("Enter Three Numbers \n");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	((x>y)&&(x>z)) ? printf("Largest Number Is : %f",x):
	((y>x)&&(y>z)) ? printf("Largest Number Is : %f",y):
	((z>x)&&(z>y)) ? printf("Largest Number Is : %f",z):printf("");
}
