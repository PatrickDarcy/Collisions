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

	virtual void aabb(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a box");
	}
	virtual void circle(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a circle");
	}
	virtual void ray(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a ray");
	}

};

#endif // ! ANIMATION_H

