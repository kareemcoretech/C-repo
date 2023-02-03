#include<stdio.h>
void main()
{
	int units;
	float bill;
	printf("Enter total units consumed: ");
	scanf("%d", &units);
	
	if(units<=50)
		bill=units*0.5;
	else if(units<=150)
		bill=units*0.75;
	else if(units<=250)
		bill=units*1.2;
	else
		bill=units*1.5;
	//apply surcharge
	bill *= 1.2;
	printf("Electricity bill = Rs. %.2f", bill);
}