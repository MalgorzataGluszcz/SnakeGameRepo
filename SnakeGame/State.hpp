#pragma once
#include <SFML/Graphics.hpp>

class GameState;
	
class State
{
public:
	virtual ~State() {}
	virtual void init(GameState& gameState) = 0;
	virtual void update(GameState& gameState) = 0;
	virtual void draw(GameState& gameState, sf::RenderWindow& window) = 0;
};