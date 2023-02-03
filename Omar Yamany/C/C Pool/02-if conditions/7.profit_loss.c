#include <stdio.h>

void main()
{
	int cost,selling,profloss;
	printf("Enter cost price: ");
	scanf("%d", &cost);
	printf("Enter selling price: ");
	scanf("%d", &selling);
	if(cost>selling)
	{
		profloss = cost-selling;
		printf("Loss = %d", profloss);
	}
	else
	{
		profloss = selling - cost;
		printf("Profit = %d", profloss);
	}
}