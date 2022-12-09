#include<stdio.h>

int main()
{
		int ahmedId = 1234 , ahmedPass = 7788 , amrId = 5678 , amrPass = 5566 , waelId = 9870 , waelPass = 1122 , inputId = 0 , inputPass = 0;
		while(1)
		{
			int i = 1;
			printf("Enter Your Id \n");
			scanf("%d",&inputId);

			if((inputId == ahmedId) || (inputId == amrId) || (inputId == waelId))
			{
				do
				{
					printf("Enter Your Password\n");
					scanf("%d",&inputPass);
					if((inputPass == ahmedPass) || (inputPass == amrPass) || (inputPass == waelPass))
					{
						printf("Welcome %d\n",inputId);
					}
					i++;
					if(i > 3)
					{
						printf("No More Tries \n");
					}
				}
				while(i<=3);
			}
			else
			{
				printf("You Are Not Registered \n");
			}
		} 		
}