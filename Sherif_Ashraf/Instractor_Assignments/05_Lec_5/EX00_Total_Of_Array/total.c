

 // implemntation of total function

int total(int arr[],int size)
{
	int sum=0;

	// create loop to looping on array

	for(int i = 0;i<size;i++)
	{
		// add each element to sum variable

		sum+=arr[i];
	}
	
	// return sum variable to main function

	return sum;
}