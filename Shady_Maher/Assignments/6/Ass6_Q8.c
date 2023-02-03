#include <stdio.h>

int main()
{
	char str[20]={0}, rev[20];
	int begin, end, count =0;
	
	printf("Enter a String to be reversed\n");
	scanf("\n");
	scanf("%[^\n]s",&str);
	
	while (str[count] != 0)
		count++;
	
	end = count -1;
	
	for (begin = end ; begin>=0 ; begin--)
	{
		printf("%c",str[begin]);
		//rev[begin] = str[end];
		//end--;

	}
	//printf("%s", rev);
}