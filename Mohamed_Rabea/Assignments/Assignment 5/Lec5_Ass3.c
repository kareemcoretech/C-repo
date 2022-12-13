/*Write a C function to return the index of LAST occurrence of 
a number in a given array. Array index start from 0. If the item 
is not in the list return -1
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 5
*/

#include <stdio.h>

int Index( int Array[],int Array_size, int number);

int main()
{   int result,num;
	int Arr[6]={1,2,3,4,4,4};
	int size = sizeof Arr  /sizeof Arr[0];
	printf("Enter a number:");
    scanf("%d",&num);
	result = Index( Arr, size,num);
	printf("Index is : %d",result);
	
	
}

int Index( int Array[],int Array_size, int number)
{ int check1,check2,check3;

  for (int i=0; i<Array_size ; i++)
  {      if ( Array[i]==number )
		  {
			  check1 = i;
		  break;
		  }
		    else check1 = -1;
  }
	
	for (int j=Array_size-1; j>=0; j--)
  {      if ( Array[j]==number )
		  {
			  check2 = j;
		  break;
		  }	
		    else check2 = -1;
  }		  
		  
		  if (check2 >= check1)
		  {
			  check3=check2;
			  
		  }
		
	  
  
 
  return check3 ;
}