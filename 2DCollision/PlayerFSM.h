#ifndef PLAYER_FSM_H
#define PLAYER_FSM_H

class PlayerFSM
{

private:
	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	PlayerFSM();
	~PlayerFSM();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();

	void AABB();
	void Circle();
	void Ray();
// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !PLAYER_FSM_H
