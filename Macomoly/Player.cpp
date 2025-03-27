#include "Player.h"

Player::Player(string n)
{
	isBankrupt = false;
	Money = 0;
	spot = 0;
	inJail = false;
	name = n;
	getOutOfGo = 0;
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

bool Player::jailStatus() const
{
	return inJail;
}
