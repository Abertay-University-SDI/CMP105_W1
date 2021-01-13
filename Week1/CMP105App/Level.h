#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include <string.h>
#include <iostream>


class Level : BaseLevel{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	// Declare level variables here:
	sf::RectangleShape rect;
	sf::CircleShape circle;
};