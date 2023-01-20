/*Assignment Lec (6)

(2)Write a C function that use the bubble sorting algorithm to
sort an integer array in descending order.*/
#include <stdio.h>

void bubble(int *x);

void main ()
{
    int i;
    int str[5];
    printf("Please Enter 5 numbers : \n");
    for (i=0;i<5;i++)
    {
    scanf("%d",&str[i]);
    }
    bubble(str);
    for (i=0;i<5;i++)
    {
    printf("\n\t%d\n",str[i]);
    }

}
void bubble(int *x)
{
    int i,j,temp;
    for(j=0;j<4;j++)
    {

    for (i=0;i<4-j;i++)
    {
        if (x[i]<x[i+1])
        {
           temp=x[i+1];
           x[i+1]=x[i];
           x[i]=temp;
        }
    }
    }
}
