#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int amount = 0;
	int note500=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
	printf("Enter The Amount : ");
	scanf("%d",&amount);
	if(amount>=500)
	{
		note500 = amount/500;
		amount -= note500 * 500;
	}
	if(amount>=100)
	{
		note100 = amount/100;
		amount -= note100 * 100;
	}
	if(amount>=50)
	{
		note50 = amount/50;
		amount -= note50 * 50;
	}
	if(amount>=20)
	{
		note20 = amount/20;
		amount -= note20 * 20;
	}
	if(amount>=10)
	{
		note10 = amount/10;
		amount -= note10 * 10;
	}
	if(amount>=5)
	{
		note5 = amount/5;
		amount -= note5 * 5;
	}
	if(amount>=2)
	{
		note2 = amount/2;
		amount -= note2 * 2;
	}
	if(amount>=1)
	{
		note10 = amount;
	}
	printf("Total Number Of Notes = \n");
	printf("500 = %d\n", note500);
	printf("100 = %d\n", note100);
	printf("50 = %d\n", note50);
	printf("20 = %d\n", note20);
	printf("10 = %d\n", note10);
	printf("5 = %d\n", note5);
	printf("2 = %d\n", note2);
	printf("1 = %d\n", note1);
}
