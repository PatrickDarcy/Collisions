#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include <vector>
#include <Debug.h>

using namespace std;
using namespace sf;

class AnimatedSprite : public Sprite {
public:
	AnimatedSprite();
	AnimatedSprite(const Texture&);
	AnimatedSprite(const Texture&, const IntRect&);
	~AnimatedSprite();

	const vector<IntRect>& getFrames();
	const IntRect& getFrame(int);
	void addFrame(IntRect&);
	const int getCurrentFrame();
	void setShape(int a);
	void update();
	
private:

	vector<IntRect> m_frames;
	unsigned int m_current_frame;
};

#endif // !ANIMATED_SPRITE_H
