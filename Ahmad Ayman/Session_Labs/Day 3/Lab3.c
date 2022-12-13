#include <stdio.h>
int main()
{
	float sum,avg;
	int num;

   printf("Enter the 10 numbers :\n");
   for (int i=1 ; i<=10 ; i++)
   {
	   printf("Number %d ",i);
	   scanf("%d",&num);
	   sum+=num;
	   
   }
   avg=sum/10;
   printf("The sum of the 10 numbers is: %f \n",sum);
   printf("The average of the 10 numbers is: %f",avg);
   
   
}