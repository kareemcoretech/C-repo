#include<stdio.h>
int main()
{
	int a,y;
	float x;
	printf("Enter A number : ");
	scanf("%d",&a);

	x=sqrt((double)a);
	y=x;
	if(y==x){
		printf("\n%d is a perfect square\n",a);

	}
	else
	{
		printf("\n%d is not a perfect square\n",a);
	}

}
