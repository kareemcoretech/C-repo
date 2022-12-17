#include <stdio.h>
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