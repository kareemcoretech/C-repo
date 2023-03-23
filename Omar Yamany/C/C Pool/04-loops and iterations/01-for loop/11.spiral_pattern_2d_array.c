#include <stdio.h>

void main()
{
	int size=10,n,left,top;
	int board[size][size];
	
	left=0;
	top=size-1;
	n=1;
	
	for(int i=1;i<size;i++,left++,top--)
	{
		for(int j=left;j<=top;j++,n++)
		{
			board[left][j]=n;
		}
		
		for(int j=left+1;j<=top;j++,n++)
		{
			board[j][top]=n;
		}
		
		for(int j=top-1;j>=left;j--,n++)
		{
			board[top][j]=n;
		}
		
		for(int j=top-1;j>=left+1;j--,n++)
		{
			board[j][left]=n;
		}
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}