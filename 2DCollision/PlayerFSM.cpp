#include <PlayerFSM.h>
#include <AABB.h>

PlayerFSM::PlayerFSM()
{
}

PlayerFSM::~PlayerFSM() {}

void PlayerFSM::setCurrent(State* s)
{
	m_current = s;
}

State* PlayerFSM::getCurrent()
{
	return m_current;
}

void PlayerFSM::setPrevious(State* s)
{
	m_previous = s;
}

State* PlayerFSM::getPrevious()
{
	return m_previous;
}

void PlayerFSM::AABB()
{
}

void PlayerFSM::Circle()
{
}

void PlayerFSM::Ray()
{
}

