#include <stdio.h>
void main()
{
    int i=0,j;
    int a[i];
    printf("Please Enter Number of digits : ");
    scanf("%d",&j);
    printf("Please Enter the Number : \n");
    for(i=1;i<=j;i++)
    {
     scanf("%d",&a[i]);
    }
    for (i=j;i>=1;i--)
    {
       printf("%d",a[i]);
    }


}
