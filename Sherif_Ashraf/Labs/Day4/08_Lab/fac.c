
int fac(int n) 
{
    if (n>=1)
        return n*fac(n-1);
    else
        return 1;
}