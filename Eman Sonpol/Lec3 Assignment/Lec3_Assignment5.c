#include<stdio.h>
int main()
{
	int i;
	int l;
	int r;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(l=1;l<=i;l++){
			printf("* ");
		}
		printf("\n");
	}
}