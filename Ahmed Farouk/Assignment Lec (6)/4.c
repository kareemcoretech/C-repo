/*Assignment Lec (6)
(4) Write a function which, given a string, converts all upper case letters to lowercase, leaving the others unchanged. */

#include <stdio.h>
void up2low (char *arr ,int x);
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
    up2low(arr,x);

    for(i=0;i<=x;i++)
    {
        printf("\t\t%c",arr[i]);
    }
}
void up2low (char * arr,int x)
{
    int i;
    for (i=0;i<=x;i++)
    {
        if(arr[i]>=65&arr[i]<=90)
        {
            arr[i]=arr[i]+32;
        }
    }

}

