#include "Collectible.h"

Collectible::Collectible()
{
}

Collectible::Collectible(cVector2 StartPos)
{
	coordinates = StartPos;
}

Collectible::Collectible(int _value, char Character)
{
	value = _value;
	displayCharacter = Character;
}

Collectible::Collectible(int _value, cVector2 StartPos, char Character)
{
	coordinates = StartPos;
	value = _value;
	displayCharacter = Character;
}

Collectible::~Collectible()
{
}
