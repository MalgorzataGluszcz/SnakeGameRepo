#pragma once
#include "State.hpp"
#include "MainMenu.hpp"

class GameState
{
public:
	GameState();
	~GameState();
	void changeState(State *state);
	void initState();
	void init();
	void update();
	void draw(sf::RenderWindow& window);

private:
	State* m_state;
};