#include <stdio.h>

int cube(int x);

void main ()
{
    int x;
    printf("Please Enter a Number : ");
    scanf("%d",&x);
    int z=cube(x);
    printf("\nThe Cube of number %d is %d\n",x,z);


}
int cube(int x)
{
    int z = x*x*x;
    return z;
}
