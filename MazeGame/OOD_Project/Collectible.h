#pragma once
#include "cVector2.h";
class Collectible
{
public:
	cVector2 coordinates;

	int value = 25;
	char displayCharacter = 'X'; //The character displayed in the maze (can be changed to be able to differentiate between different collectible objects).

	Collectible();
	Collectible(cVector2 StartPos);
	Collectible(int _value, char Character);
	Collectible(int _value, cVector2 StartPos, char Character);
	~Collectible();
};

