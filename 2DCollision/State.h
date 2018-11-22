#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <NPCFSM.h>
#include <PlayerFSM.h>

#include <Debug.h>

class State
{
public:
	State() {};
	~State() {};

	virtual void handleInput() {}
	virtual void update() {}

	virtual void aabbPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("1");
	}
	virtual void circlePlayer(PlayerFSM* a)
	{
		DEBUG_MSG("2");
	}
	virtual void rayPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("3");
	}

	virtual void aabbNPC(NPCFSM* a)
	{
		DEBUG_MSG("1 NPC");
	}
	virtual void circleNPC(NPCFSM* a)
	{
		DEBUG_MSG("1 NPC");
	}
	virtual void rayNPC(NPCFSM* a)
	{
		DEBUG_MSG("1 NPC");
	}
	virtual void capsuleNPC(NPCFSM* a)
	{
		DEBUG_MSG("1 NPC");
	}
	virtual void polygonNPC(NPCFSM* a)
	{
		DEBUG_MSG("1 NPC");
	}

private:
};

#endif // ! ANIMATION_H

