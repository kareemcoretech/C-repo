/*Assignment Lec (6)
(6) Write a function to find the length of a string. */
#include <stdio.h>

int size (char *arr,int x);

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

   int z= size(arr,x);

    printf("The Length of the string is : %d",z);

}
int size (char *arr,int x)
{   int i,z=0;
    for(i=0;i<=x;i++)
    {
        if(arr[i]>65&arr[i]<122) //Using SizeOf function is not working so I made it with a counter which counts the alphabets
        {
            z++;
        }
    }

    return z;
}
