#include <stdio.h>


void Letters (void);


int main()
{
	Letters();
}

void Letters (void)
{
	char str[20]={0};
	printf("Enter a String\n");
	scanf("\n");
	scanf("%[^\n]s",&str);
	
	for (int i=0 ; i<20 ; i++)
	{
		if ( str[i]>=65 && str[i]<=90 )
		{
			str[i] += 32;
			
		}
		printf("%c",str[i]);
	}
}