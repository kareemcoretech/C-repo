#include<stdio.h>

int main(){
	int x , f;
	
	printf("Please Enter Degree in Celisus ",x);
	scanf("%d",&x);
	
	f = (x *  (9/5) ) + 32;
	printf("Degree in Fahrenheit = %d ",f);
}