#include<stdio.h>
void main()
{
	int number, shift_value, direction;
	printf("Enter the number: ");
	scanf("%d", &number);
	printf("Enter the value of shifting: ");
	scanf("%d", &shift_value);
	printf("Enter the direction of shifting: \n(right=0\tleft=1)\n");
	scanf("%d", &direction);
	switch(direction)
	{
		case 0:
		number >>= shift_value;
		printf("Number after shifting: %d", number);
		break;
		
		case 1:
		number <<= shift_value;
		printf("Number after shifting: %d", number);
		break;
	}
}