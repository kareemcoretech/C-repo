int check (int num1)
{    int flag, i;
      int check1=1;
	  int check2=1;
	printf("enter a number ");
	scanf("%d",&num1);
	
	
	for (i=0;i<num1;i++){
		check1*=2;
		check2*=3;
		if (check1 == num1 ){
			flag=1;
			
			break;
		}

		else if (check2 == num1 ){
			
			flag=0;
			break;
		}
		else{
			
			flag=-1;
		}
	}
return flag ;
} 