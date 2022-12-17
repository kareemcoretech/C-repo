#include<stdio.h>
#include"fac.h"


void main(void) 
{
    int num;
    printf("Enter A Positive Integer \n");
    scanf("%d",&num);
    printf("Factorial Of %d = %d", num,fac(num));
}


