#include<stdio.h>
void main()
{
	printf("Enter n: \n");
	int n;
	float sum=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		sum = sum + 1/(float)i;
		printf("\n%d  %f",i,sum);
	}
}