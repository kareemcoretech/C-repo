#include<stdio.h>
void main()
{
	int user, usage;
	float cost;
	printf("Enter customer no.: ");
	scanf("%d", &user);
	printf("Enter usage: ");
	scanf("%d", &usage);
	
	if(usage<=200)
		cost = 0.5*usage;
	else if(usage<=400)
		cost = 100 + (0.65*(usage-200));
	else if(usage<=600)
		cost = 230 + (0.8*(usage-400));
	else
		cost = 390 + (1*(usage-600));
	
	printf("\n\nCustomer No.: %d", user);
	printf("\nCharges: %.2f", cost);
}