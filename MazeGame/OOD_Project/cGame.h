#pragma once

#include "cMaze.h";
#include "Player.h";
class cGame
{
public:
	cGame();
	~cGame();

	cMaze* maze;

	void StartGame();

	void GetInput();
};

