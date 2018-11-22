#ifndef PLAYER_H
#define PLAYER_H

#include <GameObject.h>
#include <Input.h>
#include <PlayerFSM.h>
#include <AnimatedSprite.h>

class Player : public GameObject
{

public:
	Player();
	~Player();
	Player(const AnimatedSprite&);
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();

private:

	int m_currentRow = 0;

};

#endif // !PLAYER_H
