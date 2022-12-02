#include<stdio.h>

int main()
{
	int x,y,i=1;
	
	
	printf("Please enter your ID\n");
	scanf("%d",&x);
	if(x==1234)
	{
		while(i<=3)
		{
			printf("Please enter your password\n");
			scanf("%d",&y);
				if(y==7788)
				{
					printf("Welcome Ahmed\n");
					break ;
				}
				i++;
			printf("incorrect enter your password\n");
		}
		
	}
	else if(x==5678)
	{
		while(i<=3)
		{
			printf("Please enter your password\n");
			scanf("%d",&y);
				if(y==5566)
				{
					printf("Welcome amr\n");
					break ;
				}
				i++;
			printf("incorrect enter your password\n");
		}
		
	}
	else if(x==9870)
	{
		while(i<=3)
		{
			printf("Please enter your password\n");
			scanf("%d",&y);
				if(y==1122)
				{
					printf("Welcome weal\n");
					break ;
				}
				i++;
			printf("incorrect enter your password\n");
		}
		
	}
	else 
	{
		printf("incorrent Id \n");
	}
}