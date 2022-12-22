#include<stdio.h>
int main()
{
	int x;
	int i;
	while(i!=12)
	{    
         printf("%d \n",x);
		 scanf("%d",&x);
		 if(x==12)
		 {printf("thank yot");
	      break;
		 }
		
		else
		{
			printf("not correct please try again");
		}
	}
}