#include <stdio.h>
void main()
{
    int i,j,z;

    printf("Please Enter The Base number : ");
    scanf("%d",&z);

    for(i=z;i>=1;i--)
    {
        for (j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }



}
