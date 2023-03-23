#include <stdio.h>

int main()
{
	char str1[20];
	char str2[20];
	char conc[40]={0};
	int count1, count2;
	
	
	printf("Enter string one: ");
	scanf("%s", str1);
	
	while (str1[count1] != 0)
		count1++;
	
	
	printf("Enter string two: ");
	scanf("%s", str2);
	
	while (str1[count2] != 0)
		count2++;
	
	for (int i = 0; i<count1 ; i++)
	{
		conc[i]= str1[i];
	}
	
	printf("string after concentration: %s\n",conc);

	for (int i = count1; i<count1+count2 ; i++)
	{
		conc[i]= str2[i-count1];
	}
	
	printf("string after concentration: %s",conc);
	
}