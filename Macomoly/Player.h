#include "Property.h"
#pragma once
class Player
{
private:
	bool isBankrupt, inJail;
	int Money, spot, getOutOfGo;
	vector<Property> properties;
public:
	Player();
	int getPos() const;
	void updatePos(int newPos);
	void setBankrupt();
	void addProperty(Property p);
	void removeProperty(Property p);
	void setJail(bool jail);
	bool jailStatus() const;
};

