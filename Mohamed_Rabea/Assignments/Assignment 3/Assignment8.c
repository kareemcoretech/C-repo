#include<stdio.h>
int main ()
{
	int i,j,k;
	for (i=0; i<10;i++)	{
	    for(j=0; j<i; j++)
		{
		printf (" ");
			
		}
		for(j=0; j<i; j++){
			printf ("*");
			break;	
		}
		 for(j=10; j>i; j--)
		{
		printf ("  ");
			
		}
		for(j=0; j<i; j++){
			printf ("*");
			break;
		}

		printf("\n");

    }

     for (i=0; i<10;i++)	{
	    for(j=10; j>i; j--)
		{
		printf (" ");
			
		}
		
		for(j=100; j>i; j--){
			printf ("*");
			break;
		}
		
		 for(j=0; j<i; j++)
		{
		printf ("  ");
			
		}
		
		for(j=10; j>i; j--){
			printf ("*");
			
			break;			
		}
		
		printf("\n");

}
}
