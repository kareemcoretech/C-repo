
// implemantaion of first occurrence function

int first_occurrence(int arr[],int size,int target)
{
	int flag=0;

	//for loop to cheack each element in the array

	for(int i=0;i<size;i++)
	{
		// condition to check if element equal to target number or not
		if(target == arr[i])
		{
			// if condtion is true
			// rise flag to know that the condtion is true
			flag=1;
			// return index of the element
			return i;
			// then break the loop because we want first occurence only
			break;
		}
	}
	// condtion to check if the flag is not raised  
	if(flag==0)
	{
		// condtion is true then their is element not found in the array
		return -1;
	}
}