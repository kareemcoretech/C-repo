/*Assignment Lec (6)
(9) Write a function to concatenate two strings*/

#include <stdio.h>

void concatenate (char *arr,int x,char *outarr);

void main ()
{
    int x,i;
    printf("Please Enter number of characters : ");
    scanf("%d",&x);
    char inarr[x];
    char outarr[x];
    printf("\nPlease Enter the characters : \n");
    for(i=0;i<=x;i++)
    {
        scanf("%c",&inarr[i]);

    }
    concatenate(inarr,x,outarr);
    for(i=0;i<=2*x;i++)
    {
        printf("%c",outarr[i]);

    }

}
void concatenate (char *arr,int x,char *outarr)
{   int i,temp[x];

    printf("\nPlease Enter the second characters : \n");
    for(i=0;i<=x;i++)
    {
        scanf("%c",&temp[i]); //we can use outarr[i+x] instead of temp[i]
        outarr[i]=arr[i]; //assigning the first part of output array = input array
         outarr[i+x]=temp[i]; //assigning the second part of output array = input array
    }



}
