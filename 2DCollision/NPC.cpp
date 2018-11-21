#include <iostream>
#include <NPC.h>
#include <AABB.h>
#include <Debug.h>

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
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void NPC::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getNPCCurrent())
	{
	case Input::NPCInput::N_AABB:
		//std::cout << "NPC is a Square" << std::endl;
		m_npc_fsm.AABB();
		break;
	case Input::NPCInput::N_CAPSULE:
		//std::cout << "NPC is a Capsule" << std::endl;
		m_npc_fsm.Capsule();
		break;
	case Input::NPCInput::N_CIRCLE:
		//std::cout << "NPC is a circle" << std::endl;
		m_npc_fsm.Circle();
		break;
	case Input::NPCInput::N_POLYGON:
		//std::cout << "NPC is a Polygon" << std::endl;
		m_npc_fsm.Polygon();
		break;
	case Input::NPCInput::N_RAY:
		//std::cout << "NPC is a ray" << std::endl;
		m_npc_fsm.Ray();
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