#include<stdio.h>
int Index( int Array[],int Array_size, int number)
{ int check;

  for (int i=0; i<Array_size ; i++)
  { 
    if(number==Array[i])
   {
	  check=i;
	  break;
   }
	else
	{
		  check=-1;
    }
  }	
  return check;
}
