int countHoles(int x){
	int holes = 0;
	int number;
	
	while(x > 0){
		number = x % 10;
		if(number == 1 || number == 2 || number == 3 || number == 5 || number == 7){
			    holes = holes + 0;
		    }
		else if(number == 0 || number == 4 || number == 6 || number == 9){
            	holes = holes + 1;
	    }
	    else if(number == 8){
    			holes = holes + 2;
	    }
		x = x - number;
		x = x / 10;
	}
	
	return holes;
}