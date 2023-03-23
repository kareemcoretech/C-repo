#include <stdio.h>

//void Q6 ()

int main()
{
	int arr[20];
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Enter String: ");
	scanf("\n");
	scanf("%[^\n]s",&arr);
		
	printf("%s\n", arr);
	
	int length;
	
	for (int i=0 ; i<size ; i++)
	{
		if ( arr[i] != NULL )
		{
			length++;
		}
	}
	
	printf("Length = %d", length);
}

	