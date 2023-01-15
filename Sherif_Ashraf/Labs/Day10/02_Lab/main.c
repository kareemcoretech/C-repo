#include<stdio.h>


enum days
{
	fri,
	sat,
	sun,
	mon,
	tue,
	wed,
	the
};


void main(void)
{
	for(int i=0;i<8;i++)
	{
		printf("%d\n",fri+i);
	}

	printf("\n \n");
	for(int i=fri;i<=the;i++)
	{
		printf("%d\n",i);
	}

	printf("\n \n");

	int x = fri;
	int y = mon;
	printf("%d",x);
	printf("%d",y);
}