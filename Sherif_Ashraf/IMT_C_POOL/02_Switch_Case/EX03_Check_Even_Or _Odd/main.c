
#include <stdio.h>

void main(void)
{
    int num;
    printf("Enter Number \n");
    scanf("%d",&num);

    switch(num % 2)
    {
        case 0: 
            printf("Number Is Even \n");
            break;
        case 1: 
            printf("Number is Odd \n");
            break;
    }
}