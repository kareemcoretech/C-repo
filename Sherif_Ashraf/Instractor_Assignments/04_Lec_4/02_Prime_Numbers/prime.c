#include<stdio.h>


int check_num(int num)
{
    int i;

    for(i=2;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


void get_prime(int a, int b)
{
    printf("Prime Number Between %d And %d Are \n",a,b);
    while(a<=b)
    {
        if(check_num(a))
        {
            printf("%d \t",a);
        }
        a++;
    }
}