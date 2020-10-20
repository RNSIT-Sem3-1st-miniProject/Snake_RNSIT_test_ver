#pragma once

#include "../headder/Food.h"
//#include "../headder/helper.h"

/*
* food is generated randomly in the box (boundry)
* there are 3 types of food:
*	1> "+" : this appres reguraly inside the box,
*		if the snake eats this food, the snake grown by 1 unit,
*		and the score is incresed by 2 points.
*	2> "-" : this is bit unregural than "+",
*		if the snake eats this food, the snake srenks by 3-4 units,
*		but the score is decresed by 5-6 points.
*	3> "*" : this is the rarest of three food,
*		if the snake eats this, the snake grows by 2 units,
*		and the score is incresed by 10-12 points (but the life span of the food will be too small)
*/


Food::Food(int max_x, int max_y) {
	int x, y;
	bool pass = false;
	do {
		x = getRandomNumber(max_x);
		y = getRandomNumber(max_y);
		if ((x != 0) && (x < max_x) && (y != 0) && (y < max_y)) {

		}
	} while (!pass);
	this->pos = Vector2d(x, y);
}

