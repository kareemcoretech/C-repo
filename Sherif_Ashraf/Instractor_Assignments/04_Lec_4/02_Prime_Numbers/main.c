#include <stdio.h>
#include "prime.h"


void main(void)
{
    int num1,num2;
    printf("Enter two number low then high to print prime numbers: ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    prime(num1,num2);
}