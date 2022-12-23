#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int y;
	float x;
	printf("Enter A number=");
	scanf("%d",&n);
	
	x=sqrt((double)n);
	y=x;
	if(y==x){
		printf("%d is a perfect square",n);
		
	}
	else
	{
		printf("%d is not a perfect square");
	}
	
}