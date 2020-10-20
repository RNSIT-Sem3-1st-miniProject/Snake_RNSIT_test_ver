#pragma once

#include "load.h"
#include "Position.h"

class Snake
{
private:
	struct Body {
		Position pos;
		Body* nxt;
	};
	struct Head {
		Position pos;
		char facing; // E => East, W => West, N => North, S => South;
		Body* nxt;
	}head;
	int size;
	Body* tail;
public:
	Snake();
};

