#include<stdio.h>
#include <math.h>
int main()
{
	float v,temp,wci;
	printf("Enter wind speed in mph (-1 to stop)");
	scanf("%f", &v);
	if(v==-1)
		return 0;
	printf("Enter Tempreature in Fahrenheit: ");
	scanf("%f", &temp);
	
	if((v>=0) && (v<=4))
	{
		wci = temp;
	}
	else if(v>=45)
	{
		wci = (1.6*temp)-55;
	}
	else
	{
		wci = 91.4 + (91.4-temp)*(0.0203*v) - (0.304*(pow(v,0.5))) - 0.474;
	}
	
	printf("Wind Chill Index is: %.2f", wci);
}