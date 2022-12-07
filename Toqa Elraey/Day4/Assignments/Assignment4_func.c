#include <math.h>

int countHoles(float x){
	int holes = 0;
	float number;
	
	if(x > 1000 && x < 10000){
		for(int i = 1000; i > 0; i /= 10){
			number = truncf(x / i);
			if(number == 1 || number == 2 || number == 3 || number == 5 || number == 7){
			    holes = holes + 0;
		    }
		    else if(number == 0 || number == 4 || number == 6 || number == 9){
            	holes = holes + 1;
	    	}
	    	else if(number == 8){
    			holes = holes + 2;
	     	}
			x = x - (number * i);
		}
	}
	
	if(x > 100 && x < 1000){
		for(int i = 100; i > 0; i /= 10){
			number = truncf(x / i);
			if(number == 1 || number == 2 || number == 3 || number == 5 || number == 7){
			    holes = holes + 0;
		    }
		    else if(number == 0 || number == 4 || number == 6 || number == 9){
            	holes = holes + 1;
	    	}
	    	else if(number == 8){
    			holes = holes + 2;
	     	}
			x = x - (number * i);
		}
	}
	
	if(x > 10 && x < 100){
		for(int i = 10; i > 0; i /= 10){
			number = truncf(x / i);
			if(number == 1 || number == 2 || number == 3 || number == 5 || number == 7){
			    holes = holes + 0;
		    }
		    else if(number == 0 || number == 4 || number == 6 || number == 9){
            	holes = holes + 1;
	    	}
	    	else if(number == 8){
    			holes = holes + 2;
	     	}
			x = x - (number * i);
		}
	}
	
	if(x > 0 && x < 10){
		if(x == 1 || x == 2 || x == 3 || x == 5 || x == 7){
			holes = holes + 0;
		}
		else if(x == 0 || x == 4 || x == 6 || x == 9){
			holes = holes + 1;
		}
		else if(x == 8){
			holes = holes + 2;
		}
	}
	return holes;
}