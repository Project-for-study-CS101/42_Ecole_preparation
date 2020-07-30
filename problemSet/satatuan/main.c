#include <stdio.h>
#include <stdlib.h>
#include "satatuan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// TODO
int main(int argc, char *argv[]) {
	
	// data preparation
	int floor;
	
	//object declaration
	
	
	scanf("%d", &floor);
	
	printf("Base = %d\n", BaseStair(floor));
	printf("Pole = %d\n", PoleLength(floor));
	
	return 0;
}

