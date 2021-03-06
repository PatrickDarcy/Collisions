#include <iostream>
#include <NPC.h>
#include <AABB.h>
#include <Debug.h>
#include <Circle.h>
#include <Ray.h>
#include <Capsule.h>
#include <Polygon.h>

NPC::NPC() : GameObject()
{
	m_npc_fsm.setCurrent(new AABB());
	m_npc_fsm.setPrevious(new AABB());
}

NPC::NPC(const AnimatedSprite& s) : GameObject(s)
{
	m_npc_fsm.setCurrent(new AABB());
	m_npc_fsm.setPrevious(new AABB());
}

NPC::~NPC()
{
}

AnimatedSprite& NPC::getAnimatedSprite()
{
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(m_currentRow));
	return m_animated_sprite;
}

void NPC::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getNPCCurrent())
	{
	case Input::NPCInput::N_AABB:
		//std::cout << "NPC is a Square" << std::endl;
		m_npc_fsm.AABBNPC();
		m_currentRow = 0;
		break;
	case Input::NPCInput::N_CAPSULE:
		//std::cout << "NPC is a Capsule" << std::endl;
		m_npc_fsm.CapsuleNPC();
		m_currentRow = 1;
		break;
	case Input::NPCInput::N_CIRCLE:
		//std::cout << "NPC is a circle" << std::endl;
		m_npc_fsm.CircleNPC();
		m_currentRow = 2;
		break;
	case Input::NPCInput::N_POLYGON:
		//std::cout << "NPC is a Polygon" << std::endl;
		m_npc_fsm.PolygonNPC();
		m_currentRow = 3;
		break;
	case Input::NPCInput::N_RAY:
		//std::cout << "NPC is a ray" << std::endl;
		m_npc_fsm.RayNPC();
		m_currentRow = 4;
		break;
	default:
		break;
	}
}

void NPC::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}