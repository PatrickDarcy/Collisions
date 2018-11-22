#include <PlayerFSM.h>
#include <AABB.h>

PlayerFSM::PlayerFSM()
{
}

PlayerFSM::~PlayerFSM() {}

void PlayerFSM::setCurrent(State* s)
{
	m_currentPlayer = s;
}

State* PlayerFSM::getCurrent()
{
	return m_currentPlayer;
}

void PlayerFSM::setPrevious(State* s)
{
	m_previousPlayer = s;
}

State* PlayerFSM::getPrevious()
{
	return m_previousPlayer;
}

void PlayerFSM::AABBPlayer()
{
	m_currentPlayer->aabbPlayer(this);
}

void PlayerFSM::CirclePlayer()
{
	m_currentPlayer->circlePlayer(this);
}

void PlayerFSM::RayPlayer()
{
	m_currentPlayer->rayPlayer(this);
}

