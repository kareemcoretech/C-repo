#include<stdio.h>
#include<math.h>

void main(void)
{
	int base,exponent,res;
	printf("Enter Base Then Exponent\n");
	scanf("%d %d",&base,&exponent);

	res = pow(base,exponent);
	printf("%d ^ %d = %d\n",base,exponent,res);
}