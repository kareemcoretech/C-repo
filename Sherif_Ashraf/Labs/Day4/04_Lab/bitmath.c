

int set_bit(int num , int bit)
{
	return(num |= (1 << bit));
}

int clear_bit(int num , int bit)
{
	return(num &= ~(1 << bit));
}

int read_bit(int num , int bit)
{
	return(num = (num >> bit)&1);
}

int toggle_bit(int num , int bit)
{
	return(num ^= (1 << bit));
}