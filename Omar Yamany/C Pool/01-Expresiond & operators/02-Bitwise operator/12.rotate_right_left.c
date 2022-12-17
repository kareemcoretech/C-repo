#include <stdio.h>
#define SIZE sizeof(int)*8

void main()
{
	int number, rotations, rotate_left, rotate_right;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("Enter number of rotations: ");
	scanf("%d", &rotations);
	rotate_left = number << rotations;
	rotate_right = number >> rotations;
	printf("%d left rotated %d times = %d\n", number, rotations, rotate_left);
	printf("%d right rotated %d times = %d", number, rotations, rotate_right);
}