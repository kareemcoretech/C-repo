#include <stdio.h>
void main()
{
    int i,j,z,k;

    printf("Please Enter The Base number : ");
    scanf("%d",&z);
    k=z+1;

    for(i=0;i<k;i++)
    {
        for (j=0;j<z;j++)
        {
            printf(" ");

        }
        for (j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
        z--;

    }



}
