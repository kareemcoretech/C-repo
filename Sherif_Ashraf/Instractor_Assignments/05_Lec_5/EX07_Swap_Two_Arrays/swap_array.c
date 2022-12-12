
#include<stdio.h>

// implemantation of swap function

void swap_array(void)
{
	// initialize two array
	int arr1[5]={0};
	int arr2[5]={0};
	int arr1_size,arr2_size;
	// get size of both of arrays to use in loops
	arr1_size = sizeof(arr1) / sizeof(arr1[0]);
	arr2_size = sizeof(arr2) / sizeof(arr2[0]);

	printf("First Array\n\n");
	// loop to scan first array
	for(int i = 0;i<arr1_size;i++)
	{
		printf("Enter Element Number : %d \n",i);
		scanf("%d",&arr1[i]);
	}
	// loop to scan second array
	printf("Second Array\n\n");

	for(int i = 0;i<arr2_size;i++)
	{
		printf("Enter Element Number : %d\n",i);
		scanf("%d",&arr2[i]);
	}
	// loop to print first array before swaping it
	printf("Frist Array Before Swaping\n");

	for(int i = 0;i<arr1_size;i++)
	{
		printf("%d \t",arr1[i]);
	}
	printf("\n");
	//loop to print second array before swaping it
	printf("Second Array Before Swaping\n");

	for(int i = 0;i<arr2_size;i++)
	{
		printf("%d \t",arr2[i]);
	}
	printf("\n");
	//loop to swap first array and second array using bitwaise operation xor 
	for(int i = 0;i<arr1_size;i++)
	{
		arr1[i]^=arr2[i];
		arr2[i]^=arr1[i];
		arr1[i]^=arr2[i];
	}
    //loop to print first array After swaping it
	printf("Frist Array After Swaping\n");

	for(int i = 0;i<arr1_size;i++)
	{
		printf("%d \t",arr1[i]);	
	}
	printf("\n");
	//loop to print second array After swaping it
	printf("Second Array After Swaping\n");

	for(int i = 0;i<arr2_size;i++)
	{
		printf("%d \t",arr2[i]);
	}
	printf("\n");

}