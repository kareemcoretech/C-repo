int GetMin(int x, int y, int z, int k){
	int min;
	if(x < y){
		if(x < z){
			if(x < k){
				min = x;
			}
			else{
				min = k;
			}
		}
		else if(z < k){
			min = z;
		}
	}
	else if(y < z){
		if( y < k){
			min = y;
		}
		else{
			min = k;
		}
	}
	else if(z < k){
		min = z;
	}
	else{
		min = k;
	}
	return min;
}