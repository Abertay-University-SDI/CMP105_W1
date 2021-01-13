#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}
