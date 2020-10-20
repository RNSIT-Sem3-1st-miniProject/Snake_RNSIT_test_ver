#pragma once

#include "load.h"
#include "Vector.h"
//#include "Snake.h"
#include "Random.h"

class Food {
private:
	Vector2d pos = Vector2d();
	char type;
	int points;
	int timmer;
public:
	Food(int max_x,int max_y);
};
