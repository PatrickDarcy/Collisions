#ifndef AABB_H
#define AABB_H

#include "State.h"
#include "Debug.h"
class State;

class AABB : public State
{
public:
	AABB();
	~AABB();

	void update() {};
	void handleInput() {};

	//void aabb(PlayerFSM* a)
	//{
	//	DEBUG_MSG("Player is an AABB");
	//}
	//void circle(PlayerFSM* a)
	//{
	//	DEBUG_MSG("Player is a circle");
	//}
	//void ray(PlayerFSM* a)
	//{
	//	DEBUG_MSG("Player is a ray");
	//}
};

#endif // !AABB_H