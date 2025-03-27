#include "Player.h"

Player::Player()
{
	isBankrupt = false;
	Money = 0;
	spot = 0;
	inJail = false;
}

int Player::getPos() const
{
	return spot;
}

void Player::updatePos(int newPos)
{
	spot = newPos;
}

void Player::setJail(bool jail)
{
	inJail = jail;
}
