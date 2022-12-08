#include<stdio.h>

void main(void)
{
	float arabic,math,computer,sports,art,total,avrage,percantage;

	printf("Enter Mark Of All Subjects Sequantial [arabic,math,computer,sports,art] \n");
	scanf("%f %f %f %f %f",&arabic,&math,&computer,&sports,&art);

	total = arabic + math + computer + sports + art;
	avrage = total / 5;
	percantage = (total/500) * 100;

	printf("Total = %0.2f \nAvrage = %0.2f \nPercantage = %0.2f",total,avrage,percantage);

}