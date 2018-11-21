#include <Input.h>

Input::Input() 
{
	m_currentPlayer = PlayerInput::P_AABB;
	m_currentNPC = NPCInput::N_AABB;
}
Input::~Input() {}

void Input::setPCurrent(PlayerInput s)
{
	m_currentPlayer = s;
}

void Input::setNCurrent(NPCInput s)
{
	m_currentNPC = s;
}

Input::NPCInput Input::getNPCCurrent()
{
	return m_currentNPC;
}

Input::PlayerInput Input::getPlayerCurrent() 
{
	return m_currentPlayer;
}
