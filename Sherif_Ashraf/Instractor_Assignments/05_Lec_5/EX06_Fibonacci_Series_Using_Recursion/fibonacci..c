
// implemantation of function
int fibonacci(int n)
{
	// condation to check if the counter(n) is equal 1 or 0 
	if(n == 0 || n == 1)
	{
		//if true return the value of counter(n)
		return n;
	}
	else
	{
		//if false call the fibonacci function and pass n-1 + fibonacci function and pass n-2 
		return(fibonacci(n-1) + fibonacci(n-2));
	}
}