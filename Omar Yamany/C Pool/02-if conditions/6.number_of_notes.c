#include <stdio.h>

void main()
{
	int amount, fivehundred=0, hundred=0, fifty=0, twenty=0, ten=0, five=0, two=0, one=0;

	printf("Enter amount: ");
	scanf("%d", &amount);
	
	if(amount>=500)
	{
		fivehundred = amount/500;
		amount -= fivehundred * 500;
	}
	if(amount>=100)
	{
		hundred = amount/100;
		amount -= hundred*100;
	}
	if(amount>=50)
	{
		fifty = amount/50;
		amount -= fifty*50;
	}
	if(amount>=20)
	{
		twenty = amount/20;
		amount -= twenty*20;
	}
	if(amount>=10)
	{
		ten = amount/10;
		amount -= ten*10;
	}
	if(amount>=5)
	{
		five = amount/5;
		amount -= five*5;
	}
	if(amount>=2)
	{
		two = amount/2;
		amount -= two*2;
	}
	if(amount>=1)
	{
		one = amount/1;
		amount -= one*1;
	}
	printf("Total number of notes : \n");
	printf("500\t=\t%d\n", fivehundred);
	printf("100\t=\t%d\n", hundred);
	printf("50\t=\t%d\n", fifty);
	printf("20\t=\t%d\n", twenty);
	printf("10\t=\t%d\n", ten);
	printf("5\t=\t%d\n", five);
	printf("2\t=\t%d\n", two);
	printf("1\t=\t%d\n", one);

}