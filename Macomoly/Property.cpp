#include "Property.h"

Property::Property()
{
	isProperty = false;
	owner = "";
	name = "";
	color = "";
	price = 0;
	house = 0;
	housePrice = 0;
	Mortgage = 0;
	spot = 0;
	hotelPrice = 0;
	for (int i = 0; i < 5; i++)
	{
		rentPrice[i] = 0;
	}
}

Property::Property(string name, string color, int price, int housePrice, double hotelPrice, double rentPrice[5], int spot)
{
	isProperty = true;
	owner = "";
	this->name = name;
	this->color = color;
	this->price = price;
	this->housePrice = housePrice;
	this->spot = spot;
	this->hotelPrice = hotelPrice;
	for (int i = 0; i < 5; i++)
	{
		this->rentPrice[i] = rentPrice[i];
	}
	house = 0;
	Mortgage = price / 2;
}
