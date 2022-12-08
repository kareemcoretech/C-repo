/*
 ============================================================================
 Name        : EX04_Check_Leap_Year.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year;
	printf("Enter year: \n");
	fflush(stdout);
	scanf("%d",&year);
	(year%4 == 0 && year%100 != 0)?printf("Leap Year"):(year%400 == 0 )?
			printf("Leap Year"):printf("Common Year");
}
