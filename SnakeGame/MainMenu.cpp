#include "MainMenu.hpp"

MainMenu::MainMenu()
{}

void MainMenu::init(GameState& gameState)
{
	m_font.loadFromFile("res/fonts/youngserif-regular.ttf");

	m_title.setFont(m_font);
	m_title.setCharacterSize(80);
	m_title.setFillColor(sf::Color(255, 255, 255));
	m_title.setPosition(sf::Vector2f(1920.0f / 2.0f, 80.0f));
	m_title.setString("Snake Game");

	m_play.setFont(m_font);
	m_play.setCharacterSize(60);
	m_play.setFillColor(sf::Color(255, 255, 255));
	m_play.setPosition(sf::Vector2f(1920.0f / 2.0f, 180.0f));
	m_play.setString("1. Play");

	m_options.setFont(m_font);
	m_options.setCharacterSize(60);
	m_options.setFillColor(sf::Color(255, 255, 255));
	m_options.setPosition(sf::Vector2f(1920.0f / 2.0f, 260.0f));
	m_options.setString("2. Options");

	m_exit.setFont(m_font);
	m_exit.setCharacterSize(60);
	m_exit.setFillColor(sf::Color(255, 255, 255));
	m_exit.setPosition(sf::Vector2f(1920.0f / 2.0f, 340.0));
	m_exit.setString("3. Exit");
}

void MainMenu::update(GameState& gameState)
{}

void MainMenu::draw(GameState& gameState, sf::RenderWindow& window)
{
	window.draw(m_title);
	window.draw(m_play);
	window.draw(m_options);
	window.draw(m_exit);
}