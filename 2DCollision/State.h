#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	State() {};
	~State() {};

	virtual void handleInput() {}
	virtual void update() {}

private:

	//virtual void aabb(PlayerFSM* a)
	//{
	//	DEBUG_MSG("1");
	//}
	//virtual void circle(PlayerFSM* a)
	//{
	//	DEBUG_MSG("2");
	//}
	//virtual void ray(PlayerFSM* a)
	//{
	//	DEBUG_MSG("3");
	//}

};

#endif // ! ANIMATION_H

