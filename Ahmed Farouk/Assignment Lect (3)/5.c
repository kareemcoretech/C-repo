#include <stdio.h>
void main()
{
    int i,j,z;

    printf("Please Enter The Base number : ");
    scanf("%d",&z);

    for(i=1;i<=z;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }



}
