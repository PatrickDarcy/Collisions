#include <AABB.h>


AABB::AABB()
{
	m_AABB.setFillColor(sf::Color::White);
	m_AABB.setSize({ 50,50 });
	
	m_Circle.setRadius(25);
	m_Circle.setFillColor(sf::Color::White);

	m_Ray.append(m_RayStart);
	m_Ray.append(m_RayEnd);
	
}

AABB::~AABB()
{

}
