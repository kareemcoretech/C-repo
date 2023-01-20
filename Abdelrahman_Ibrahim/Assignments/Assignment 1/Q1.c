#include<stdio.h>

int main(){
	int x , y , Result;
	
	printf("Please Enter Number 1 : ",x);
	scanf("%d",&x);
	
	printf("Please Enter Number 2 : ",y);
	scanf("%d",&y);
	
	Result = ((x + y)*3)-10;
	printf("result = %d ",Result);
}