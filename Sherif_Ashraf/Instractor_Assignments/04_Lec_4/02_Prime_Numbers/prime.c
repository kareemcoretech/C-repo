#include<stdio.h>

void prime(int a,int b)
{
    int isPrime=1;
    while(a<b)
    {
        if(a<1)
        {
            ++a;
            continue;
        } 
        for(int i=2; i<=a/2; i++)
        {
            if(a%i==0)
            {
                isPrime = 0;
                break;
            }
        } 
        if (isPrime == 1)
        {
            printf("%d",a);   
        }
        
        ++a;
    }
}

