#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int mseconds) {
	clock_t goal = mseconds + clock();
	while (goal > clock());
}

int main() {
	int numberOfPorts;

	printf("\nInitializing DSB... \n");
	delay(3 * CLOCKS_PER_SEC);
	printf("\nInitialization successful! \n");
	delay(1 * CLOCKS_PER_SEC);
	printf("\nDetecting USB ports...\n");
	delay(3 * CLOCKS_PER_SEC);

	srand(time(NULL));
	numberOfPorts = (rand() % 10) + 1;

	printf("\n%d %s\n", numberOfPorts, "USB ports found\n");

	return 0;
}