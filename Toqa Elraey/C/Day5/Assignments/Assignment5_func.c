void GeometricSeries(int Array[], int size){
	Array[0] = 1;
	for(int i = 1; i < size; i++){
		Array[i] = Array[i-1] * 3;
	}
}