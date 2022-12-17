#include <stdio.h>
int nthTerm(int x);


void main(void)
{
    int x,o;
   printf("Please Enter a number to compute : ");
   scanf("%d",&x);
   o= nthTerm(x);
   printf("\nThe %dth term of the arithmetic series is %d\n", x,o);

}
int nthTerm(int x)
{
    int z;
    z = (1+ (x - 1) * 2);

   return z;
}
