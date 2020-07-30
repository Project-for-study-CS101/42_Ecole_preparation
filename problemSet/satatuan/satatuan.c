#include "satatuan.h"


Door DgetElement() {
	
	Door door;
	
	door.base = '_' ;
	
	door.key = '+';
	
	door.left = '|';
	
	door.right = '|';
	
	door.top = '_' ;
	
	return door;
	
}
	
Satatuan SgetElement() {
	
	Satatuan sat;
	
	sat.Base = '_';
	sat.body = '#';
	sat.Head = '*';
	sat.left = '/';
	sat.right = '\\';

	return sat;
}


int BaseStair(int floor) {
	/*
	Find Base 
	
	------|  ( | core base )
	*/
	
	int i, BaseLength = 0;
	
	for (i = 0; i < floor; i++ ) {
		
		BaseLength += 3;
		
		if ( i != (floor - 1)) {
			
			BaseLength += 2;
			
		} else {
			
			BaseLength += 1;
		}
	}
	
	return BaseLength;
}

int PoleLength(int floor) {
	
	int i, pole = 0;
	
	
	pole += 2 + (floor - 1);
	
	for (i = floor; i > 0; i-- ){
		
		pole += i + 1;
	}
	
	return pole;
}

void print_stateFloor(int base, int pole) {
	
	int i, x, y, sbase;
	
	Door dr = DgetElement();
	Satatuan st = SgetElement();
	
	
	
	//  pole
	for (i = 0; i < pole; i ++) {
	    
	    // Head
	    if (i == 0) {
	    	
			// TODO
	    	for (sbase = 0; sbase < base; sbase++) {
	    		
	    		
		    }
	    	
	    	
	    }
	    //left side
	    
	    //right	side
	    //base
	}
	
}
