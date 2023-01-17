#include <stdio.h>

int main(){
	int x , y , remainder;
	
	printf("Please Enter First Number : ");
	scanf("%d",&x);
	
	printf("Please Enter Second Number : ");
	scanf("%d",&y);
	
	remainder = x % y ;
	
	if (remainder == 0){
		printf("First is multiple of second");
	}
	else{
		printf("First is Not multiple of second");
	}
}