#include <stdio.h>
int main()
{
	char x;
	int y,z;
	printf("please enter your character\n");
	scanf("%c",&x);
	if(x>='A' && x<='Z')
	{
		y= x - 'A';
		z= y + 'a';
		printf("%c",z);
	}
	else if (x>='a' && x<='z')
	{
		y= x - 'a';
		z= y + 'A';
		printf("%c",z);
	}

}