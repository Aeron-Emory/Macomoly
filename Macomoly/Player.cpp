#include "Player.h"

Player::Player()
{
	isBankrupt = false;
	Money = 0;
	spot = 0;
}

int Player::getPos() const
{
	return spot;
}
