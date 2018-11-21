#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum PlayerInput
	{
		P_AABB,
		P_CIRCLE,
		P_RAY
	};

	enum NPCInput
	{
		N_AABB,
		N_CIRCLE,
		N_RAY,
		N_CAPSULE,
		N_POLYGON,
	};

	void setPCurrent(PlayerInput s);
	void setNCurrent(NPCInput s);

	NPCInput getNPCCurrent();
	PlayerInput getPlayerCurrent();

private:
	PlayerInput m_currentPlayer;
	NPCInput m_currentNPC;
};
#endif