
void prime (int num1 ,int num2 )
{
	int i,j,flag ;
	printf("Enter a positive 1st number : ");
	scanf("%d",&num1);
	printf("Enter a positive sec number : ");
	scanf("%d",&num2);
	for (i=num1;i<num2;i++)
	for (j=2;j<i;i++)
	{    flag = i%j;
        if (flag!=0){
	    	printf("%d is a prime number ",i);
	break;
	}
	
		 

}
}