#ifndef NPC_FSM_H
#define NPC_FSM_H

class NPCFSM
{

private:
	class State* m_currentNPC; // note order of m_current is 
							   // prior to setCurrent
	class State* m_previousNPC;
public:
	NPCFSM();
	~NPCFSM();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();

	void AABBNPC();
	void CircleNPC();
	void RayNPC();
	void CapsuleNPC();
	void PolygonNPC();
	// Try uncommenting and comment the declaration above
	//private:
	//	class State* m_current;
};

#endif // !NPC_FSM_H