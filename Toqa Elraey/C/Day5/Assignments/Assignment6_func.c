void FibonacciSequance(int Array[], int size){
	Array[0] = 1;
	Array[1] = 1;
	for(int i = 2; i < size; i++){
		Array[i] = Array[i-1] + Array[i-2];
	}
}