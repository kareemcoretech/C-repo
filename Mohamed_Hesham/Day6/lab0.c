#include <stdio.h>


/*


30  40  50  60  65

low = array[0]
high = array[size-1]
mid = (low + high)/2

// search for 20

30  40  50  60  65
low    mid      high

low = array[0]     0
high = array[size-1]  1
mid = (low + high)/2  0

30           40   50  60  65
low,mid     high 


low = array[0]     0
high = array[size-1]  -1        high < low (break, not found)
mid = (low + high)/2  




*/

void Binary_Search(int array[], int size, int number);

int main(){
	
	int array[11];
	
	int size = sizeof(array)/sizeof(array[0]);
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);	
	}
	
	int number;
	
	printf("Please Enter number you want to search: ");
	scanf("%d", &number);
	
	Binary_Search(array, size, number);
	
	
}

void Binary_Search(int array[], int size, int number){
	
	int flag = 0;
	
	int low = 0;
	int high = size - 1;
	int mid = (low + high) / 2;
	
	while(low <= high){
		int mid = (low + high) / 2;
		if(number == array[mid]){
			printf("It's Found at Index: %d", mid);
			flag = 1;
			break;
		}
		else if(number < array[mid]){
			high = mid - 1;
		}
		else if(number > array[mid]){
			low = mid + 1;
		}
	}
	
	if (flag == 0){
		printf("It's not Found");
	}
	
}