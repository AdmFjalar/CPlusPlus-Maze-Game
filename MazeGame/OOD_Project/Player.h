#pragma once

#include "cVector2.h";
class Player
{
public:
	cVector2 coordinates;

	int lives = 3;
	bool hasWon = false;

	Player();
	Player(cVector2 StartPos);
	~Player();
};

