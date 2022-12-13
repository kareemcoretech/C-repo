#include <stdio.h>

void prime (int x);



void main ()
{
	int x,y;

	printf("Note that 0 and 1 are not prime numbers\n");
	printf("Please Enter the first number : ");
    scanf("%d",&x);
    printf("Please Enter the second number : ");
    scanf("%d",&y);
	prime(x);
	prime(y);



}
void prime (int x)
{
    int i;
for( i=2;i<=x/2;i++)
  {
    if(x%i==0)
    {
    printf("Number %d is not prime\n",x);
    break;
    }
    else
    {
    printf("Number %d is prime\n",x);
    break;
    }
  }

}

