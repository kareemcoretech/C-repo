/*Assignment Lec (6)
(5) Write a function that prints the frequency of a certain character in a string. */

#include <stdio.h>
char frequency (char *arr ,int x,int *l);
void bubble(char *m,int x);

void main ()
{
    int x,i,n=0;
    printf("Please Enter number of characters : ");
    scanf("%d",&x);
    char arr[x];
    printf("\nPlease Enter the characters : \n");
    for(i=0;i<=x;i++)
    {
        scanf("%c",&arr[i]);

    }
    bubble(arr,x);
   char z= frequency(arr,x,&n);

    printf("The Character %c repeated %d times",z,n+1);

}
char frequency (char * arr,int x,int *l)
{
    int i,z;

    for (i=0;i<=x;i++)
    {
        if(arr[i]==arr[i+1])
        {
            *l=*l+1;
            z=arr[i];

        }
    }

    return z;
}
void bubble(char *m,int x)
{
    char i,j,temp;
    for(j=0;j<x;j++)
    {

    for (i=0;i<x-j;i++)
    {
        if (m[i]<m[i+1])
        {
           temp=m[i+1];
           m[i+1]=m[i];
           m[i]=temp;
        }
    }
    }
}

