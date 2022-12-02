#include <stdio.h>
int main ()
{
	int y,z;
	char x;
	printf("Please enter the charter\n");
	scanf("%c",&x);
	if (x>='A' && x<='Z')
	{	
		y= x - 'A';
		z='a'+y;
		printf("%c",z);
	}
	else if(x>='a' &&x<='z')
	{
		y= x - 'a';
		z='A'+y;
		printf("%c",z);
	}
	else 
	{
		printf("the character not alphabet");
	}
}