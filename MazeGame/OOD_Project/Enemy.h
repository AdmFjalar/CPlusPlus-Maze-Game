#pragma once
#include "cVector2.h";
class Enemy
{
public:
	cVector2 coordinates;

	bool changedDirection = false;

	Enemy();
	~Enemy();

	void Move(cVector2 NewPos);
};

