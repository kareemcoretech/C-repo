#include<stdio.h>
int main()
{
	int beg,end,f,temp,i,j;
	printf("Enter the Begining Number :");
	scanf("%d",&beg);
	printf("\nEnter the last Number :");
	scanf("%d",&end);
	printf("\nPrime Numbers are :\n");
	for(j=beg;j<=end;j++)
	{
		f=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			f=f+1;
		}
		if(f==0)
		printf("\n %d",j);
	}
	
	return (0);
}