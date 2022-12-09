#include <stdio.h>

int main()
{
 int x;
 printf("Enter the number to display its multiplication table: ");
 scanf("%d",&x);
 int i=1;
 int y;

 while (i<10)
 {
	 y=x*i;
	 printf("%d x %d = %d \n",x,i,y);
	 
	 i++;
 }
 
	
}