#include <stdio.h>

//(str[i] >= 'A' && str[i] <= 'Z') || str[i] == 0

int main()
{
	char str[20]={0};
	printf("Enter a String\n");
	scanf("%s",&str);
	
	printf("\nResultant String : ");

	for(int i = 0; i<20; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
		{
			printf("%c",str[i]);
		}
	}
	
	//printf("%s",str);

}
	
