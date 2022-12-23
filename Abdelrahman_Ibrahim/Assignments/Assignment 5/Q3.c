#include <stdio.h>
 
// Function to find the last occurrence of a given number in a sorted integer array

 int findLastOccurrence(int nums[], int n, int target);
 
int main(void)
{
    int nums[] =  {1,2,3,4,4,4};
    int n = sizeof(nums)/sizeof(nums[0]);
 
    int target;
	printf("Enter the 1st Number :");
	scanf("%d",&target);
 
    int index = findLastOccurrence(nums, n, target);
 
    if (index != -1)
    {
        printf("The last occurrence of element %d is located at index %d",
                target, index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}
int findLastOccurrence(int nums[], int n, int target)
{
    // search space is nums[low…high]
    int low = 0, high = n - 1;
 
    // initialize the result by -1
    int result = -1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and compares it with the target
        int mid = (low + high)/2;
 
        // if the target is located, update the result and
        // search towards the right (higher indices)
        if (target == nums[mid])
        {
            result = mid;
            low = mid + 1;
        }
 
        // if the target is less than the middle element, discard the right half
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        // if the target is more than the middle element, discard the left half
        else {
            low = mid + 1;
        }
    }
 
    // return the leftmost index, or -1 if the element is not found
    return result;
}