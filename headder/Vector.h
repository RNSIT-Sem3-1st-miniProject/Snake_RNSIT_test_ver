#pragma once

#include "load.h"

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

	bool operator==(Vector2d& other) {
		if ((x == other.x) && (y == other.y))
			return true;
		else
			return false;
	}
};

int distanceBetween(Vector2d& pos1, Vector2d& pos2) {
	return sqrt(pow((pos1.x + pos2.x), 2) + pow((pos1.y + pos2.y), 2));
}
