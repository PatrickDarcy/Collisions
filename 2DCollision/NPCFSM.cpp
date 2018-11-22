#include "NPCFSM.h"

NPCFSM::NPCFSM()
{
}

NPCFSM::~NPCFSM()
{
}

void NPCFSM::setCurrent(State * s)
{
	m_currentNPC = s;
}

void NPCFSM::setPrevious(State * s)
{
	m_previousNPC = s;
}

State * NPCFSM::getCurrent()
{
	return m_currentNPC;
}

State * NPCFSM::getPrevious()
{
	return m_previousNPC;
}

void NPCFSM::AABBNPC()
{
	m_currentNPC->circlePlayer(this);
}

void NPCFSM::CircleNPC()
{
}

void NPCFSM::RayNPC()
{
}

void NPCFSM::CapsuleNPC()
{
}

void NPCFSM::PolygonNPC()
{
}
