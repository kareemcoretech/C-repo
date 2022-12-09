int GetMax(int x, int y, int z, int k){
	int max;
	if(x > y){
		if(x > z){
			if(x > k){
				max = x;
			}
			else{
				max = k;
			}
		}
		else if(z > k){
			max = z;
		}
	}
	else if(y > z){
		if( y > k){
			max = y;
		}
		else{
			max = k;
		}
	}
	else if(z > k){
		max = z;
	}
	else{
		max = k;
	}
	return max;
}