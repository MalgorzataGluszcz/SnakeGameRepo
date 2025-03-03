#include "SnakeGame.hpp"

SnakeGame::SnakeGame() : m_window(sf::VideoMode(1920, 1080), "Snake Game")
{
	m_gameState.initState();
}

void SnakeGame::run()
{
	sf::Clock clock;

	while (m_window.isOpen())
	{
		eventHandle();
		if (clock.getElapsedTime().asMilliseconds() > 100)
		{
			updateAll();
			clock.restart();
		}

		windowClear();
		drawToWindow();
		displayToWindow();
	}
}

void SnakeGame::eventHandle()
{
	sf::Event ev;
	while (m_window.pollEvent(ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		m_window.close();
}

void SnakeGame::updateAll()
{
	m_gameState.update();
	m_snake.update();
}

void SnakeGame::windowClear()
{
	m_window.clear();
}

void SnakeGame::drawToWindow()
{
	m_gameState.draw(m_window);
	m_snake.draw(m_window);
}

void SnakeGame::displayToWindow()
{
	m_window.display();
}