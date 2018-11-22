#include <AnimatedSprite.h>

AnimatedSprite::AnimatedSprite() 
{
	m_current_frame = 0;
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t) : Sprite(t), m_current_frame(0) {}

AnimatedSprite::AnimatedSprite(const sf::Texture& t, const sf::IntRect& rect) : Sprite(t), m_current_frame(0) 
{
	m_frames.push_back(rect);
}

AnimatedSprite::~AnimatedSprite() {}

const vector<IntRect>& AnimatedSprite::getFrames() {
	return m_frames;
}

const IntRect& AnimatedSprite::getFrame(int n) {
	return m_frames[n];
}

void AnimatedSprite::addFrame(IntRect& frame) {
	m_frames.push_back(frame);
}

const int AnimatedSprite::getCurrentFrame() 
{
	return m_current_frame;
}

void AnimatedSprite::setShape(int a)
{
	m_current_frame = a;
}

void AnimatedSprite::update()
{
}

