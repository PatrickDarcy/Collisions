#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <AABB.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void AABB(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a box");
	}
	virtual void polyon(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a polygon");
	}
	virtual void circle(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a circle");
	}
	virtual void 
};

#endif // ! ANIMATION_H

