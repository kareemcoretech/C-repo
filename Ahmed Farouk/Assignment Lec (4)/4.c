#include <stdio.h>
int holes (void);
int x;
void main ()
{
	int z;



	printf("Please Enter the number of digits : ");
    scanf("%d",&x);
    printf("Please Enter the number digit by digit : \n");

z=holes();

        printf("\nThe number of holes = %d\n",z);





}
int holes (void)
{   int holes=0,i;
    int arr[10];
    for (i=0;i<x;i++)
    {
         scanf("%d",&arr[i]);

        if (arr[i]==0|arr[i]==4|arr[i]==6|arr[i]==9)
        {
            holes++;
        }

        else if (arr[i]==8)
        {
            holes++;
            holes++;
        }
    }
    return holes;
}
