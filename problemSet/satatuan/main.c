#include "satatuan.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	
	// data preparation
	int floor, stair, blank;
	int base, pole;
	//object declaration
	extern Satatuan sat;


	setupSata(&sat);
	scanf("%d", &floor);
	
	base = BaseLength(floor);
	pole = PoleLength(floor);
		
	int i, j, stack = 2;
	
	blank = base - 2;
	printStair(blank, base, 0, &sat);

	for (i=0; i < floor; i++){

		for (j = 1; j <= stack; j++) {

			printStair(--blank, base, -1, &sat);
		}

		if (i != (floor-1)) {

			blank = blank - 2;
			printStair(blank, base, 2, &sat);
			stack++;
		}
	
	}

	printStair(blank, base, 1, &sat);

	return EXIT_SUCCESS;
}
