#ifndef POLYGON_H
#define POLYGON_H

#include <State.h>
#include "Debug.h"

class State;

class Polygon : public State
{
public:
	Polygon();
	~Polygon();

	void update() {};
	void handleInput() {};
};

#endif // !POLYGON_H