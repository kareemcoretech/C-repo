#include <stdio.h>

int main()
{

	char Name[10] = "kareem";
	
	  // way 1 to print string
	//printf("%s",Name);
	
	
	//way 2 to print string
	for(char i=0 ; Name[i]!='\0' ; i++ )
	{
		printf("%c",Name[i]);
	}
}