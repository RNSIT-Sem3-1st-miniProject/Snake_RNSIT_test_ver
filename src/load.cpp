
#include "../headder/load.h"

// expermenting ;>
// written by vasu

#define boardWidht 75
#define boardHeight 75

namespace func {
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

	struct Vector2d {
		int x, y;

		Vector2d(int x, int y) {
			this->x = x;
			this->y = y;
		}

		Vector2d() {
			this->x = 0;
			this->y = 0;
		}
	};

	bool operator== (func::Vector2d& pos1, func::Vector2d& pos2) {
		if ((pos1.x == pos2.x) && (pos1.y == pos2.y))
			return true;
		else
			return false;
	};

	int operator$(func::Vector2d& pos1, func::Vector2d& pos2) {
		return sqrt(pow((pos1.x + pos2.x), 2) + pow((pos1.y + pos2.y), 2));
	};
};

//#define Random func::random
#define Vector func::Vector2d


