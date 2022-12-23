#include <stdio.h>
int Q1 ( void );
int Q2 ( void );
int Q3 ( void );
int Q4 ( void );
int Q5 ( void );
int Q6 ( void );
int Q7 ( void );

int main()
{
	Q7();
	
}

int Q1 ( void )     // not working
{
	int x, flag = 0;
	printf("Enter a positive interger: ");
	scanf("%d", &x );
	
	if ( x==1 || x==0 )
		flag = 1;

	for( int i = 2 ; i <= x / 2 ; i++ )
	{
		if ( x % 2 == 0);
		{
		flag = 1;
		break;
		}
	}
	
	if ( flag == 0 )
		printf("Prime");
	else if ( flag == 1 )
		printf("Not Prime");
}

int Q2 ( void )
{
	for ( int i = 'A' ; i <= 'Z' ; i++ )
	{
		printf("%c", i );
	}
}

int Q3 ( void )
{
	int x, y, r = 1;
	printf("Enter the Number: ");
	scanf("%d",&x);
	printf("Enter its power: ");
	scanf("%d",&y);
	for ( y ; y >= 1 ; y-- )
	{
		r *= x;
	}
	/*while ( y != 0 )
	{
		r *= x;
		y--;
	}*/
	printf("= %d",r);
}

int Q4 ( void ) 			//reverse numbers
{
	int num, rev , rem;
	printf("Enter number: ");
	scanf("%d",& num);
	while ( num != 0 )
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num /= 10;
	}
	printf("The reverse= %d", rev);
}

int Q5 ( void )
{
	int h,j;
	printf("Enter number of lines: ");
	scanf("%d",& h);
	for ( int i = 0 ; i < h ; i++ )
	{
		for( j = 0 ; j < ( i + 1 ) ; j++ )
		{
		printf("*");	
		}
		for( j = 0 ; j < ( h - 1 - i ) ; j++  )
		{
		printf(" ");	
		}
		printf("\n");
	}
}

int Q6 ( void )
{
	int h,j;
	printf("Enter number of lines: ");
	scanf("%d",& h);
	for ( int i = 0 ; i < h ; i++ )
	{
		for( j = 0 ; j < ( h - i ) ; j++ )
		{
		printf("*");	
		}
		for( j = 0 ; j < ( i + 1 ) ; j++ )
		{
		printf(" ");	
		}
		printf("\n");
	}
}

int Q7 ( void )
{
	int h , i , j;
	printf("Please Enter the height of pyramid: ");
	scanf("%d", &h);
	
	for ( i = 0 ; i < h ; i++ )
	{
		for ( j = 0 ; j < h ; j++ )
		{
			if ( i == j || j == ( h - i - 1 ) )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}