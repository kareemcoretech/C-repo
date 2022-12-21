#include<stdio.h>
int main()
{
	
	int sum;
	int avr;
	int n;
	 printf("enter 10 number \n");
	
	for(int i=0;i<=10;i++)
	{  
       printf("nmber-  %d",i);
	    scanf("%d",&n);
		sum+=n;
	}
	    
		avr=sum/10;
		printf("the sum of 10 no is : %d\n the average is :%f\n",sum,avr);
}