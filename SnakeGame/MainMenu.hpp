#pragma once
#include "State.hpp"

class MainMenu : public State
{
public:
	MainMenu();
	~MainMenu() {}

	void init(GameState& gameState) override;
	void update(GameState& gameState) override;
	void draw(GameState& gameState, sf::RenderWindow& window) override;

private:
	sf::Font m_font;

	sf::Text m_title;
	sf::Text m_play;
	sf::Text m_options;
	sf::Text m_exit;
};