#ifndef NPC_FSM_H
#define NPC_FSM_H

class NPCFSM
{

private:
	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	NPCFSM();
	~NPCFSM();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();

	void AABB();
	void Circle();
	void Ray();
	void Capsule();
	void Polygon();
	// Try uncommenting and comment the declaration above
	//private:
	//	class State* m_current;
};

#endif // !NPC_FSM_H