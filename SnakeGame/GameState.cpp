#include "GameState.hpp"

GameState::GameState() : m_state{nullptr}
{
}

GameState::~GameState()
{
	delete m_state;
}

void GameState::changeState(State* state)
{
	delete m_state;
	m_state = m_state;
}

void GameState::initState()
{
	m_state = new MainMenu();
	m_state->init(*this);
}

void GameState::init()
{
	m_state->init(*this);
}

void GameState::update()
{
	m_state->update(*this);
}

void GameState::draw(sf::RenderWindow& window)
{
	m_state->draw(*this, window);
}