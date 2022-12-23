#include<stdio.h>
int main()
{
	int o,a,b,z;
	printf("Please Enter Type of operation \n 1 for +\n 2 for -\n 3 for *\n 4 for /\n");
	scanf("%d",&o);
	printf("Please Enter The first number : ");
	scanf("%d",&a);
	printf("Please Enter The second number : ");
	scanf("%d",&b);
	switch(o)
	{
    case 1:
        z=a+b;
        printf("\nThe Result is : %d\n",z);
        break;
    case 2:
        z=a-b;
        printf("\nThe Result is : %d\n",z);
        break;
    case 3:
        z=a*b;
        printf("\nThe Result is : %d\n",z);
        break;
    case 4:
        z=a/b;
        printf("\nThe Result is : %d\n",z);
        break;

	}

}
