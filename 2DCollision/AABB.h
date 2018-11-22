#ifndef AABB_H
#define AABB_H

#include "State.h"
#include "Debug.h"
#include <SFML/Graphics.hpp>
class State;

class AABB : public State
{
public:
	AABB();
	~AABB();

	void update() {};
	void handleInput() {};

	void aabbPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("Player is an AABB");
	}
	void circlePlayer(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a circle");
	}
	void rayPlayer(PlayerFSM* a)
	{
		DEBUG_MSG("Player is a ray");
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

private:

	sf::RectangleShape m_AABB;
	sf::CircleShape m_Circle;
	sf::VertexArray m_Ray;
	sf::Vertex m_RayStart;
	sf::Vertex m_RayEnd;
};

#endif // !AABB_H