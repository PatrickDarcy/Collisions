#ifndef CIRCLE_H
#define CIRCLE_H

#include <State.h>
#include"Debug.h"

class State;

class Circle : public State
{
public:
	Circle();
	~Circle();

	void update() {};
	void handleInput() {};
};

#endif // !CIRCLE_H
