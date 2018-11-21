#ifndef RAY_H
#define RAY_H

#include<State.h>
#include"Debug.h"

class State;

class Ray : public State
{
public:
	Ray();
	~Ray();

	void update() {};
	void handleInput() {};
};

#endif // !RAY_H
