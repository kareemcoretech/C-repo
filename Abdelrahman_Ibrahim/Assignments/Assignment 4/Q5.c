#include <stdbool.h>
#include <stdio.h>

/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n);
bool isPower_of_Three(long long n);
// Driver code
int main()
{     	int num1;
    printf("Please Enter The Number : ");
	scanf("%d",&num1);
		
	// Function call
	
    isPower_of_Three( num1) ? printf("Number is Power of 3\n") :  printf("Number is not Power of 3\n");
    
	isPowerOfTwo(num1) ? printf("Number is Power of 2\n") : printf("Number is not Power of 2\n");

    	return 0;    
}
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return 0;
	while (n != 1) {
		if (n % 2 != 0)
			return 0;
		n = n / 2;
	}
	return 1;
}
bool isPower_of_Three(long long n)
{
    if (n <= 0)
        return false;
    if (n % 3 == 0)
        return isPower_of_Three(n / 3);
    if (n == 1)
        return true;
    return false;
}


