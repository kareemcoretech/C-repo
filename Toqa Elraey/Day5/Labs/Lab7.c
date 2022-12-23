#include <stdio.h>

void scanArray(int Array1[], int Array2[], int Array3[], int size);
void sortArray(int Array1[],int Array2[], int Array3[], int size);
int passedStudents(int Array1[],int Array2[], int Array3[], int size);
void getHighestLowest(int Array1[], int Array2[], int size);
float Average(int Array1[], int Array2[], int Array3[], int size);

int main(){
	int class1[10];
	int class2[10];
	int class3[10];
	int size = sizeof(class1) / sizeof(class1[0]);
	
	//Scanning the grades from the user:
	scanArray(class1, class2, class3, size);
	
	//Sorting The Arrays:
	sortArray(class1, class2, class3, size);
	
	//Counting the Passed Students:
	int passed = passedStudents(class1, class2, class3, size);
	int failed = (size * 3) - passed;
	
	//Putting the highest and lowest grades of 3 classes in new arrays:
	int Highest[3] = {class1[size-1], class2[size-1], class3[size-1]};
	int Lowest[3] = {class1[0], class2[0], class3[0]};
	int size2 = sizeof(Highest) / sizeof(Highest[0]);
	
	//Getting Highest and Lowest Grades:
	getHighestLowest(Highest, Lowest, size2);
	
	//Getting the Average Grade:
	float average = Average(class1, class2, class3, size);
	
	
	printf("Number of Passed Students is: %d\n", passed);
	printf("Number of Failed Students is: %d\n", failed);
	printf("The Highest Grade is: %d\n", Highest[size2-1]);
	printf("The Lowest Grade is: %d\n", Lowest[0]);
	printf("The Average grade is: %d\n", average);
	
	
	
}

//Scanning function for the Three Arrays:
void scanArray(int Array1[], int Array2[], int Array3[], int size){
	printf("Please enter the grades of First Class: \n");
	for(int i = 0; i < size; i++){
		scanf("%d" , &Array1[i]);
	}
	
	printf("Please enter the grades of Second Class: \n");
	for(int i = 0; i < size; i++){
		scanf("%d" , &Array2[i]);
	}
	
	printf("Please enter the grades of Third Class: \n");
	for(int i = 0; i < size; i++){
		scanf("%d" , &Array3[i]);
	}
}

//Sorting function:
void sortArray(int Array1[], int Array2[], int Array3[], int size){
	int temp1, temp2, temp3;
	
	//Sorting the first Array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array1[j] > Array1[j + 1]){
				temp1 = Array1[j];
				Array1[j] = Array1[j+1];
				Array1[j+1] = temp1;
			}
		}
	}
	
	//Sorting the second Array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array2[j] > Array2[j + 1]){
				temp2 = Array2[j];
				Array2[j] = Array2[j+1];
				Array2[j+1] = temp2;
			}
		}
	}
	
	//Sorting the third Array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array3[j] > Array3[j + 1]){
				temp3 = Array3[j];
				Array3[j] = Array3[j+1];
				Array3[j+1] = temp3;
			}
		}
	}
}

//Passed Students function:
int passedStudents(int Array1[], int Array2[], int Array3[], int size){
	int count = 0;
	
	//Counting the passed students in class1
	for(int i = 0; i < size; i++){
		if(Array1[i] > 50 || Array1[i] == 50){
			count++;
		}
	}
	
	//Counting the passed students in class2
	for(int i = 0; i < size; i++){
		if(Array2[i] > 50 || Array2[i] == 50){
			count++;
		}
	}
	
	//Counting the passed students in class3
	for(int i = 0; i < size; i++){
		if(Array3[i] > 50 || Array3[i] == 50){
			count++;
		}
	}
	
	return count;
}

//Get the Highest and Lowest grades by sorting these arrays:
void getHighestLowest(int Array1[], int Array2[], int size){
	int temp1, temp2;

	//sorting Highest grades array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array1[j] > Array1[j + 1]){
				temp1 = Array1[j];
				Array1[j] = Array1[j+1];
				Array1[j+1] = temp1;
			}
		}
	}
	
	//sorting lowest grades array
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(Array2[j] > Array2[j + 1]){
				temp2 = Array2[j];
				Array2[j] = Array2[j+1];
				Array2[j+1] = temp2;
			}
		}
	}
}

//Average grade function:
float Average(int Array1[], int Array2[], int Array3[], int size){
	int sum = 0;
	float av;
	
	//get the sum of first array
	for(int i = 0; i < size; i++){
		sum = sum + Array1[i];
	}
	
	//get sum of second array
	for(int i = 0; i < size; i++){
		sum = sum + Array2[i];
	}
	
	//get sum of third array
	for(int i = 0; i < size; i++){
		sum = sum + Array3[i];
	}
	av = sum / (size * 3);
	return av;
}

