#pragma once

#include "load.h"
#include "Vector.h"

class Snake {
private:
	struct Body {
		Vector2d pos = Vector2d();
		Body* nxt;
	};
	struct Head {
		Vector2d pos = Vector2d();
		char facing; // E => East, W => West, N => North, S => South;
		Body* nxt;
	}head;
	int size;
	Body* tail;
public:
	Snake();
};
