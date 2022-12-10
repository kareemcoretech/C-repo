#include <stdio.h>
int Q1 ( void );
int Q2 ( void );
int Q3 ( void );
int Q4 ( void );
int Q5 ( void );

int main()
{
	//int holes = Q4();
	//printf("%d", holes);
	
	int power = Q5();
	printf("%d", power);
}

int Q1 ( void )
{
	int x, cube = 1;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	for ( int i = 0 ; i < 3 ; i++ )
		cube *= x;
	
	printf("the cube is %d", cube);
}

int Q2 ( void )
{
	char operator;
	int first, second;
	
	printf("Enter operator: ");
	scanf("%c", &operator);
	
	printf("Enter first numbers: ");
	scanf("%d", &first);
	
	printf("Enter second numbers: ");
	scanf("%d", &second);
	
	switch(operator)
	{
		case '+':
		int sum = first + second;
		printf("= %d",sum);
		break;
		
		case '-':
		int sub = first - second;
		printf("= %d",sub);
		break;
		
		case '*':
		int mult = first * second;
		printf("= %d",mult);
		break;
		
		case '/':
		int div = first / second;
		printf("= %d",div);
		break;
	}
}

int Q3 ( void )
{
	int x, y, flag1 = 0, flag2 = 0;
	
	printf("Enter two positive intergers: ");
	scanf("%d",&x);
	scanf("%d",&y);
	
	if ( x==1 || x==0 )
		flag1 = 1;
			
	if ( y==1 || y==0 )
		flag2 = 1;
	
	for( int i = 2 ; i <= x / 2 ; i++ )
	{
		if ( x % 2 == 0);
		flag1 = 1;
		break;
	}
	
	for( int i = 2 ; i <= y / 2 ; i++ )
	{
		if ( y % 2 == 0);
		flag2 = 1;
		break;
	}
	
	if ( flag1 == 0 )
		printf("(%d)\n", x);
	else if ( flag1 == 1 )
		printf("%d\n", x);
	
	
	if ( flag1 == 0 )
		printf("(%d)\n", y);
	else if ( flag2 == 1 )
		printf("%d\n", y);
}

int Q4 ( void )      //check code
{
	int num, last, rem, shag, holes = 0;
	printf("Enter a number: ");
	scanf("%d", &num );
	
	rem = num % 10;			//right num
	last = rem;
	if (last == 0 || last == 4 || last == 6 || last == 9)
			holes += 1;
	else if (last == 8)
			holes += 2;
	
	rem = num % 100;
	shag = rem % 10;			// middle
	last = (rem - shag)/10;
	if (last == 0 || last == 4 || last == 6 || last == 9)
			holes += 1;
	else if (last == 8)
			holes += 2;
		
	rem = num % 100;		// left
	last = (num - rem)/100;
	if (last == 0 || last == 4 || last == 6 || last == 9)
			holes += 1;
	else if (last == 8)
			holes += 2;
	
	return holes;
	
	/*do
	{
		rem = num % shag;   	//num 4
		last = (num - rem)/shag;
		shag /= 10;
		
		if (last == 0 || last == 4 || last == 6 || last == 9)
			holes += 1;
		else if (last == 8)
			holes += 2;
		
	} while ( rem > 10 );*/
}

int Q5 ( void )
{
	int x, y = 1, z = 1;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	while( x > y || x > z )
	{
		y *= 2;
		z *= 3;
		if ( x == y )
		{
			return 1;
			break;
		}
		else if ( x == z )
		{
			return 0;
			break;
		}
	}
	return -1;
}