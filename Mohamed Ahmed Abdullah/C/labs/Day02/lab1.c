#include <stdio.h>

int main(){
	int workingHours;
	printf("Please Enter your working hours: ");
	scanf("%d",&workingHours);
	
	int salary;
	
	if(workingHours < 40){
		salary = workingHours * 50;
		salary = salary * 0.9;
	}else{
		salary = workingHours * 50;
	}
	
	printf("Your Salary is %d", salary);
	return 0;
}