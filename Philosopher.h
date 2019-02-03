#pragma once
#include "Entity.h"
#include "TextureHolder.h"

class Philosopher : public Entity
{
public:
	explicit					Philosopher(const TextureHolder<std::string> &th);
	/*
	void						eat();
	void						think();
	*/


private:
	void						drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;
	
private:
	sf::Sprite mSprite;
};
