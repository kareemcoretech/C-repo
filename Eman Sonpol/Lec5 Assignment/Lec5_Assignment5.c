#include<stdio.h>
#include<math.h>
int Get_Term(int x, int y, int z);
int main()
{
	int x;
	int y;
	int z;
	printf("Enter the first number:");
	scanf("%d",&x);
	printf("Enter the Ratio:");
	scanf("%d",&y);
	printf("Enter the term to be found:");
	scanf("%d",&z);
	int Result = Get_Term(x,y,z);
	printf("The value of the %d th term is %d",z,Result);
}
int Get_Term(int x, int y, int z)
{
	int r;
	r= x*(pow(y,z-1));
	return r;
}
