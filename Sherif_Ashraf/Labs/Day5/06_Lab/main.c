#include<stdio.h>

void sorting_class1_array(int class1_arr[],int class1_arr_size);
void sorting_class2_array(int class2_arr[],int class2_arr_size);
void sorting_class3_array(int class3_arr[],int class3_arr_size);

int no_of_Pased_student=0,no_of_falied_student=0,highest_grade=0,lowest_grade=0,average_grade=0,total_grade=0,no_of_all_student=30;

void main(void)
{
	int arr1[10]={50,55,100,90,40,65,75,25,75,70};
	int arr2[10]={22,49,90,95,42,85,25,11,0,20};
	int arr3[10]={4,99,15,90,40,100,34,27,45,100};

	int arr1_size,arr2_size,arr3_size;

	arr1_size = sizeof(arr1)/sizeof(arr1[0]);
	arr2_size = sizeof(arr2)/sizeof(arr2[0]);
	arr3_size = sizeof(arr3)/sizeof(arr3[0]);

	sorting_class1_array(arr1,arr1_size);
	sorting_class2_array(arr2,arr2_size);
	sorting_class3_array(arr3,arr3_size);

	average_grade = total_grade/no_of_all_student;

	printf("Number Of Passed Student : %d \n",no_of_Pased_student);
	printf("Number Of Falied Student : %d \n",no_of_falied_student);
	printf("Highest Grade : %d \n",highest_grade);
	printf("Lowest Grade : %d \n",lowest_grade);
	printf("Average Grade : %d \n",average_grade);



}

void sorting_class1_array(int class1_arr[],int class1_arr_size)
{
	int class1_arr_temp;

	printf("Class 1 arr Before Sorting \n");
	for(int i = 0;i<class1_arr_size;i++)
	{
		printf("%d \t",class1_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class1_arr_size-1;i++)
	{
		for(int j = 0;j<class1_arr_size-1-i;j++)
		{
			if(class1_arr[j]>class1_arr[j+1])
			{
				class1_arr_temp = class1_arr[j];
				class1_arr[j] = class1_arr[j+1];
				class1_arr[j+1] = class1_arr_temp;
			}
		}
	}

	printf("Class 1 arr After Sorting \n");
	for(int i = 0;i<class1_arr_size;i++)
	{
		printf("%d \t",class1_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class1_arr_size;i++)
	{
		if(class1_arr[i]>=50)
		{
			no_of_Pased_student++;
		}
		else
		{
			no_of_falied_student++;
		}	
	}
	if(class1_arr[class1_arr_size-1]>highest_grade)
	{
		highest_grade = class1_arr[class1_arr_size-1];
	}
	if(class1_arr[0]<lowest_grade)
	{
		lowest_grade = class1_arr[0];
	}
	for(int i = 0;i<class1_arr_size;i++)
	{
		total_grade+=class1_arr[i];	
	}
}

void sorting_class2_array(int class2_arr[],int class2_arr_size)
{
	int class2_arr_temp;

	printf("Class 2 arr Before Sorting \n");
	for(int i =0;i<class2_arr_size;i++)
	{
		printf("%d \t",class2_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class2_arr_size;i++)
	{
		for(int j=0;j<class2_arr_size-1-i;j++)
		{
			if(class2_arr[j]>class2_arr[j+1])
			{	
				class2_arr_temp = class2_arr[j];
				class2_arr[j] = class2_arr[j+1];
				class2_arr[j+1] = class2_arr_temp;
			}	
		}
	}

	printf("Class 2 arr After Sorting \n");
	for(int i =0;i<class2_arr_size;i++)
	{
		printf("%d \t",class2_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class2_arr_size;i++)
	{
		if(class2_arr[i]>=50)
		{
			no_of_Pased_student++;
		}
		else
		{
			no_of_falied_student++;
		}	
	}
	if(class2_arr[class2_arr_size-1]>highest_grade)
	{
		highest_grade = class2_arr[class2_arr_size-1];
	}
	if(class2_arr[0]<lowest_grade)
	{
		lowest_grade = class2_arr[0];
	}
	for(int i = 0;i<class2_arr_size;i++)
	{
		total_grade+=class2_arr[i];	
	}
}

void sorting_class3_array(int class3_arr[],int class3_arr_size)
{
	int class3_arr_temp;

	printf("Class 3 arr Before Sorting \n");
	for(int i =0;i<class3_arr_size;i++)
	{
		printf("%d \t",class3_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class3_arr_size;i++)
	{
		for(int j=0;j<class3_arr_size-1-i;j++)
		{
			if(class3_arr[j]>class3_arr[j+1])
			{
				class3_arr_temp = class3_arr[j];
				class3_arr[j] = class3_arr[j+1];
				class3_arr[j+1] = class3_arr_temp;
			}
		}
	}

	printf("Class 3 arr After Sorting \n");
	for(int i =0;i<class3_arr_size;i++)
	{
		printf("%d \t",class3_arr[i]);
	}
	printf("\n");

	for(int i = 0;i<class3_arr_size;i++)
	{
		if(class3_arr[i]>=50)
		{
			no_of_Pased_student++;
		}
		else
		{
			no_of_falied_student++;
		}	
	}
	if(class3_arr[class3_arr_size-1]>highest_grade)
	{
		highest_grade = class3_arr[class3_arr_size-1];
	}
	if(class3_arr[0]<lowest_grade)
	{
		lowest_grade = class3_arr[0];
	}
	for(int i = 0;i<class3_arr_size;i++)
	{
		total_grade+=class3_arr[i];	
	}
}