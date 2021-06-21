#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

/// <summary>
/// Sets the coordinates to a new position.
/// </summary>
/// <param name="NewPos"></param>
void Enemy::Move(cVector2 NewPos)
{
	coordinates = NewPos;
}
