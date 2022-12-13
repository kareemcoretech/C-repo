#include <stdio.h>

int main(){
	int hour_rate = 50;
	int working_hours;
	int salary;
	
	printf("Please Enter your Working Hours: ");
	scanf("%d", &working_hours);
	
	if (working_hours < 40){
		salary = working_hours * hour_rate * 0.9;
		printf("Your Salary is %d", salary);
	}
	else{
		salary = working_hours * hour_rate;
		printf("Your Salary is %d", salary);
	}
	
	
}