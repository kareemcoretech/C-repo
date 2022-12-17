#include<stdio.h>
void main()
{
    int a;
    printf("Please Enter Temp. Value : ");
    scanf("%d",&a);
    if (a>=0&a<30)
    {
        printf("\nThe Required Heating time is 7 mins\n");
    }
    else if (a>30&a<60)
    {
        printf("\nThe Required Heating time is 5 mins\n");
    }
    else if (a>60&a<90)
    {
        printf("\nThe Required Heating time is 3 mins\n");
    }
    else if(a>90&a<100)
    {
        printf("\nThe Required Heating time is 1 mins\n");
    }
    else if (a>=100)
    {
        printf("\nInvalid Input\n");
    }
    else
    {
        printf("\nYou've Entered a Critical Value, Please try again\n");
    }

}
