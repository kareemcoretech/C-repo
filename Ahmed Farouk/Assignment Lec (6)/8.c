/*Assignment Lec (6)
(8) Write a function to reverse a string passed to it.*/

#include <stdio.h>

void rev (char *arr,int x);

void main ()
{
    int x,i;
    printf("Please Enter number of characters : ");
    scanf("%d",&x);
    char arr[x];
    printf("\nPlease Enter the characters : \n");
    for(i=0;i<=x;i++)
    {
        scanf("%c",&arr[i]);

    }
    rev(arr,x);
    for(i=0;i<x;i++)
    {
        printf("\t\t%c",arr[i]);

    }

}
void rev (char *arr,int x)
{   int i,temp[x];
    for(i=0;i<=x;i++)
    {
        temp[x-i]=arr[i];

    }
    for(i=0;i<=x;i++)
    {
        arr[i]=temp[i];

    }


}
