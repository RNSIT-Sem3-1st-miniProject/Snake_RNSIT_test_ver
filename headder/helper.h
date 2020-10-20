#pragma once

#include "load.h"

unsigned int getRandonSeed() {
	time_t timeSeed = time(NULL);
	return timeSeed;
}

void setRandomSeed(unsigned int timeSeed) {
	srand(timeSeed);
}

int getRandomNumber(int max) {
	return ((rand() % max) - 1);
}
