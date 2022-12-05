
int count_holes(int a)
{
	int digit,res=0;

	while(a!=0)
	{
		digit = a%10;
		a /=10;
		if((digit == 0)|| (digit == 4) || (digit == 6) || (digit == 9))
		{
			res+=1;
		}
		else if(digit == 8)
		{
			res +=2;
		}
	}
	return res;
}