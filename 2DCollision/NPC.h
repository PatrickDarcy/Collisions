#ifndef NPC_H
#define NPC_H

#include <GameObject.h>
#include <Input.h>
#include <NPCFSM.h>
#include <AnimatedSprite.h>

class NPC : public GameObject
{

public:
	NPC();
	~NPC();
	NPC(const AnimatedSprite&);
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();

private:
	int m_currentRow = 0;
};

#endif // !NPC_H
