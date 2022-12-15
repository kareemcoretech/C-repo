#include<stdio.h>
void main()
{
    int a,b;
	printf("Please Enter The First Number : ");
	scanf("%d",&a);
	printf("Please Enter The Second Number : ");
	scanf("%d",&b);

	if (a%b==0)
    {
        printf("\nThe First is multiple of the Second\n");
    }
    else
    {
        printf("\nThe First is not multiple of the Second\n");
    }

}
