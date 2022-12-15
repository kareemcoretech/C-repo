#include <stdio.h>
int total (int x, int y);
int y;
int arr[10];

void main()
{
    int i,z;

printf("please enter array size : ");
scanf("%d",&y);
printf("\nPlease enter the array digit by digit : \n");
for (i=0;i<y;i++)
{
    scanf("%d", &arr[i]);
    z=total(arr[i],y);
  }
    printf("\nThe total sum : %d\n",z);


}
int total (int x, int y)
{
    int z=0,i;
    for (i=0;i<y;i++)
    {
        z=z+arr[i];
    }


    return z;
}
