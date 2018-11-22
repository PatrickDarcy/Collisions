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

	void aabbNPC(NPCFSM* a)
	{
		DEBUG_MSG("1");
	}
	void circleNPC(NPCFSM* a)
	{
		DEBUG_MSG("2");
	}
	void rayNPC(NPCFSM* a)
	{
		DEBUG_MSG("3");
	}
	void capsuleNPC(NPCFSM* a)
	{
		DEBUG_MSG("4");
	}
	void polygonNPC(NPCFSM* a)
	{
		DEBUG_MSG("5");
	}

};

#endif // !POLYGON_H