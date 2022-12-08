/*
 ============================================================================
 Name        : EX03_Check_Even_Or_Odd_Number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	printf("Enter The Integer You Want To Check \n");
	fflush(stdout);
	scanf("%d",&x);
	(x % 2 == 0) ? printf("%d Is Even",x) : printf("%d Is Odd",x);
}
