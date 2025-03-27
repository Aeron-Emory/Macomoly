#include "Property.h"

class Player
{
private:
	bool isBankrupt, inJail;
	int Money, spot, getOutOfGo;
	string name;
	vector<Property> properties;

public:
	Player(string name);
	int getPos() const;
	void updatePos(int newPos);
	void setBankrupt();
	void addProperty(Property p);
	void removeProperty(Property p);
	void setJail(bool jail);
	bool jailStatus() const;
};

