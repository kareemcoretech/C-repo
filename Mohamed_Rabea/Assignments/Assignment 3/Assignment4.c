#include<stdio.h>
int main ()
{
	int number,reminder,reverse=0 ;
	printf("Enter a number: ");
	scanf("%d",&number);
	while (number!=0){
		reminder=number%10;
		reverse=reminder+reverse*10;
		number=number/10;
		
		
	}
	printf("reverse= %d",reverse);
}