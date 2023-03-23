#include <stdio.h>

void scanArray(int Array[], int size);
void sorting(int Array[], int size);
int BinarySearch(int Array[], int size, int value);

int main(){
	int x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	int Numbers[x];
	int SIZE = sizeof(Numbers) / sizeof(Numbers[0]);
	
	scanArray(Numbers, SIZE);
	
	sorting(Numbers, SIZE);
	
	int val;
	printf("Please enter the number your number: ");
	scanf("%d", &val);
	
	int FLAG = BinarySearch(Numbers, SIZE, val);
	
	if(FLAG == 1){
		printf("FOUND");
	}
	else{
		printf("NOT FOUND");
	}
}

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}

void sorting(int Array[], int size){
	int temp;
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array[j] > Array[j + 1]){
				temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}

int BinarySearch(int Array[], int size, int value){
	int high = size - 1;
	int low = 0;
	int mid;
	mid = (low + high) / 2;
	int flag = 0;
	
	while(low < high || low == high){
		mid = (low + high) / 2;
		
		if(value == Array[mid]){
			flag = 1;
			break;
		}
		
		else if(value > Array[mid]){
			low = mid + 1;
		}
		
		else if(value < Array[mid]){
			high = mid - 1;
		}
	}
	return flag;
}