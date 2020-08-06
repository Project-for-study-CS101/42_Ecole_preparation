#ifndef SATAUAN_H

#define SATATUAN_H

typedef struct {
	  
	  char top ;
	  
	  char left ;
	  
	  char right ;
	  
	  char base ;
	  
	  char key ;
	  
} Door;

typedef struct {
	// satatuan 
	char Head ;
	
	char body ;
	
	char left  ;
	
	char right ; 
	
	char Base  ;
} Satatuan;


int BaseLength(int floor);
int PoleLength(int floor);
void printStair(int blank, int base, int stair, Satatuan* ptrSat);

void setupSata(Satatuan* ptrSat);


#endif /* SATATUAN_H */

#ifdef SATATUAN_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#endif /* SATATUAN_H */
