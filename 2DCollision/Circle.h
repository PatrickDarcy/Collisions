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


	void aabbPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("1");
	}
	void circlePlayer(PlayerFSM* a)
	{
		DEBUG_MSG("2");
	}
	void rayPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("3");
	}

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

#endif // !CIRCLE_H
