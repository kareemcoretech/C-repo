int Operation(int x, int y, char z){
	int result;
	switch(z){
		case('+'):
		result = x + y;
		break;
		
		case('-'):
		result = x - y;
		break;
		
		case('*'):
		result = x * y;
		break;
		
		case('/'):
		result = x / y;
		break;
		
		default:
		result = 0;
		break;
	}
	return result;
}