#include<stdio.h>
int main()
     {
	int x=7;
	int y=4;
	int z=x&y;
	int k=x|y;
	int m=x^y;
	int l=x>>1;
    int n=y<<2;
	printf("z=%d\nk=%d\nm=%d\nl=%d\nn=%d",z,k,m,l,n);
	}