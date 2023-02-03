#include <stdio.h>

int countHoles(int num);

// Driver code
int main()
{  
    
	int num;
	printf("Please Enter The Number : ");
	scanf("%d",&num);
int holes = countHoles (holes);
	printf("Number of holes is = %d",holes);

	return 0;
}
int countHoles(int num)
{
	
	int holes = 0;

	while (num > 0) {
static int hole[] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };
		// Last digit in num
		int d = num % 10;

		// Update holes
		holes += hole[d];

		// Remove last digit
		num /= 10;
	}

	// Return the count of holes
	// in the original num
	return holes;
}
