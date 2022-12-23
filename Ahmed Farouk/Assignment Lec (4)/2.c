#include <stdio.h>

int sumfnc (int x,int y);
int subfnc(int x,int y);
int mulfnc(int x,int y);
int divfnc(int x,int y);


void main ()
{
	int x,y,m;
	char p;
	printf("Please Enter the first number : ");
    scanf("%d",&x);
    printf("Please Enter the second number : ");
    scanf("%d",&y);
	printf("\n Please Choose the operation\na for add\ns for sub\nm for multiply \nd for division\n ");
	scanf(" %c",&p);
	switch (p)
	{
	case 'a' :
	 m = sumfnc(x,y);
	 printf("\n the result is %d",m);
	break;

	case 's':
	 m = subfnc (x,y);
	 printf("\n the result is %d",m);
	break;

	case 'm':
	    m=mulfnc(x,y);
	    printf("\n the result is %d",m);
	    break;
    case 'd':
        m=divfnc(x,y);
        printf("\n the result is %d",m);
        break;
	}


}

int	sumfnc (int x,int y)
{

	int z=x+y;
	return z ;
}
int	subfnc (int x,int y)
{

	int z=x-y;
	return z ;
}
int	mulfnc (int x,int y)
{

	int z=x*y;
	return z ;
}
int	divfnc (int x,int y)
{

	int z=x/y;
	return z ;
}
