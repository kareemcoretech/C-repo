/*
 ============================================================================
 Name        : EX01_Maximum_Between_Two_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0.0 , y=0.0;
	printf("Enter Two Numbers \n");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	(x>y) ? printf("Largest Number Is : %f",x):printf("Largest Number Is : %f",y);
}
