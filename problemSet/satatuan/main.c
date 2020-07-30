#include <stdio.h>
#include <stdlib.h>
#include "satatuan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// data preparation
	int floor;
	int base, pole;
	//object declaration
	
	
	scanf("%d", &floor);
	
	base = BaseStair(floor);
	pole = PoleLength(floor);
	
	return 0;
}

