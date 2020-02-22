#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Player
{
public:
	Player();
	~Player(); 


	void handleInput(float dt);

private:


	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	Player* playerObject;

};

