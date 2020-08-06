// Function for satatuan 
#include "satatuan.h"

Satatuan sat;

void setupSata(Satatuan* ptrSat){
	
	ptrSat->Head = '^';
	ptrSat->body = '#';
	ptrSat->left = '/';
	ptrSat->right = '\\';
	ptrSat->Base = '_';

}

void printStair(int blank, int base, int stair, Satatuan* ptrSat){	
	/*
	 * Rule 
	 * 0 -> Head
	 * 1 -> Base
	 * 2 -> caseStep
	 */

	int i, printBody = base - blank;

	switch (stair) {

	case 0 :
		
		for (i = 0; i < blank; i++) {

			printf(" ");
		}
		for (i = 0; i < printBody; i++) {

			if (i == 0) {

				printf("%c", ptrSat->left);

			} else {
				printf("%c", ptrSat->Head);
			}
		}
		for (i = 0; i < ( printBody -1 ); i++) {

			if (i == (printBody - 2)) {
				printf("%c", ptrSat->right);
			} else {
				printf("%c", ptrSat->Head);
			}
			
		}
		break; /*stop case 0*/
	
	case 1 : 

		for (i = 0; i < ((base * 2) -1); i++) {

			printf("%c", ptrSat->Base);
		}
		break;

	case 2 :
		
		for (i = 0; i < blank; i++) {
			printf(" ");
		}

		for (i = 0; i < printBody; i++) {
			
			if (i ==0 || i==1){
				printf("%c", ptrSat->Base);
			} else {
				printf("%c", ptrSat->body);
			}

		}

		for (i= 0; i < (printBody-1); i++) {

			if ( i == (printBody-3) || (i == (printBody-2))) {

				printf("%c", ptrSat->Base);

			} else {

				printf("%c", ptrSat->body);
			}

		}
		break;

	default:

		for (i = 0; i < blank; i++) {

			printf(" ");
		}
		for (i = 0; i < printBody; i++) {

			if (i == 0) {

				printf("%c", ptrSat->left);

			} else {
				printf("%c", ptrSat->body);
			}
		}
		for (i = 0; i < ( printBody -1 ); i++) {

			if (i == (printBody - 2)) {
				printf("%c", ptrSat->right);
			} else {
				printf("%c", ptrSat->body);
			}
			
		}
		break;
	}
	
	

	
	printf("\n");
}

int BaseLength(int floor){
	
	return (5 * floor) - 1;	

}

int PoleLength(int floor) {
	
	return ((floor / 2.0) * (4 + (floor - 1 ))) + (2 +(floor -1 ));
}





