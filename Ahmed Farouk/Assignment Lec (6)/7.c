/*Assignment Lec (6)
(7) Write a function to remove all characters in a string expect alphabets*/
#include <stdio.h>

void rem (char *arr,int x);

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
    rem(arr,x);
    for(i=0;i<=x;i++)
    {
        printf("\t\t%c",arr[i]);

    }

}
void rem (char *arr,int x)
{   int i,z=0;
    for(i=0;i<=x;i++)
    {
        if(arr[i]<65|arr[i]>122)
        {
            arr[i]=NULL;

        }
    }


}
