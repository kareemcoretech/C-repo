#include <stdio.h>

void main()
{
	int n1,n2,n3,n4,n5;
	printf("Enter five numbers: \n");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	if(n1%3==0)
		printf("\n%d is divisble by 3\n", n1);
	if(n2%3==0)
		printf("%d is divisble by 3\n", n2);
	if(n3%3==0)
		printf("%d is divisble by 3\n", n3);
	if(n4%3==0)
		printf("%d is divisble by 3\n", n4);
	if(n5%3==0)
		printf("%d is divisble by 3\n", n5);
}