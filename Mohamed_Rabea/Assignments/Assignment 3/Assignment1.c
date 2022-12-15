#include <stdio.h>
int main ()
{
	int i, x, flag ;
	printf("Enter a positive number: ");
	scanf("%d",&x);
	for (i=2;i<x;i++)
	{    flag = x%i;
        if (flag==0){
	    	printf("%d is Not a prime number ",x);
	break;
	}
		else {
			printf("%d is a prime number ",x);
		 break;
		 }

}