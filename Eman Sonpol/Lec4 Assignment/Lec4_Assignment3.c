#include<stdio.h>
void Get_Prime(int x, int y);
int main()
{
	int x;
	int y;
	printf("Enter the start of the interval:");
	scanf("%d",&x);
	printf("Enter the end of the interval:");
	scanf("%d",&y);
	printf("The prime number in the interval are=");
	Get_Prime(x,y);
}
void Get_Prime(int x, int y)
{
	for(int i=x+1;i<y;i++)
	{
		int flag=0;
		for(int j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				
			 flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d \n",i);
		}
		
	}
}
