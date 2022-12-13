#include<stdio.h>
void main()
{
int i,a;
printf("Note that 0 and 1 are not prime numbers\nPlease Enter a Number that is not 0 or 1 : ");
scanf("%d",&a);

for(i=2;i<=a/2;i++)
  {
    if(a%i==0)
    {
    printf("Number %d is not prime",a);
    break;
    }
    else
    {
    printf("Number %d Is Prime",a);
    break;
    }
  }


 }
