#include <iostream>
#include <NPC.h>
#include <AABB.h>
#include <Debug.h>

NPC::NPC() : GameObject()
{
	m_player_fsm.setCurrent(new AABB());
	m_player_fsm.setPrevious(new AABB());
}

NPC::NPC(const AnimatedSprite& s) : GameObject(s)
{
	m_player_fsm.setCurrent(new AABB());
	m_player_fsm.setPrevious(new AABB());
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

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_player_fsm.AABB();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_player_fsm.();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_player_fsm.jumping();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_player_fsm.jumping();
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