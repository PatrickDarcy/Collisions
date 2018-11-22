#include <iostream>
#include <Player.h>
#include <AABB.h>
#include <Ray.h>
#include <Circle.h>
#include <Debug.h>

Player::Player() : GameObject()
{
	m_player_fsm.setCurrent(new AABB());
	m_player_fsm.setPrevious(new AABB());
}

Player::Player(const AnimatedSprite& s) : GameObject(s)
{
	m_player_fsm.setCurrent(new AABB());
	m_player_fsm.setPrevious(new AABB());
}

Player::~Player()
{
}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getPlayerCurrent())
	{
	case Input::PlayerInput::P_AABB:
		//std::cout << "Player Idling" << std::endl;
		m_player_fsm.AABBPlayer();
		break;
	case Input::PlayerInput::P_CIRCLE:
		//std::cout << "Player Up" << std::endl;
		m_player_fsm.CirclePlayer();
		break;
	case Input::PlayerInput::P_RAY:
		//std::cout << "Player Left" << std::endl;
		m_player_fsm.RayPlayer();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}