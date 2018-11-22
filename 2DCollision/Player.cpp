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
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(m_currentRow));
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
		m_currentRow = 0;
		break;
	case Input::PlayerInput::P_CIRCLE:
		//std::cout << "Player Up" << std::endl;
		m_player_fsm.CirclePlayer();
		m_currentRow = 1;
		break;
	case Input::PlayerInput::P_RAY:
		//std::cout << "Player Left" << std::endl;
		m_player_fsm.RayPlayer();
		m_currentRow = 2;
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