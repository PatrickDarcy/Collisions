#ifndef CAPSULE_H
#define CAPSULE_H

#include<State.h>
#include"Debug.h"

class State;

class Capsule : public State
{
public:
	Capsule();
	~Capsule();


	void update() {};
	void handleInput() {};
};


#endif // !CAPSULE_H
