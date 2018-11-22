#ifndef PLAYER_FSM_H
#define PLAYER_FSM_H

class PlayerFSM
{

private:
	class State* m_currentPlayer; // note order of m_current is 
							// prior to setCurrent
	class State* m_previousPlayer;
public:
	PlayerFSM();
	~PlayerFSM();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();

	void AABBPlayer();
	void CirclePlayer();
	void RayPlayer();
// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !PLAYER_FSM_H
