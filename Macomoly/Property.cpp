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

Property::Property(string newName, string newColor, int newPrice, int newHousePrice, double newHotelPrice, double newRentPrice[5], int newSpot)
{
	isProperty = true;
	owner = "Bank";
	name = newName;
	color = newColor;
	price = newPrice;
	housePrice = newHousePrice;
	spot = newSpot;
	hotelPrice = newHotelPrice;

	for (int i = 0; i < 5; i++)
	{
		rentPrice[i] = newRentPrice[i];
	}

	house = 0;
	Mortgage = price / 2;
}
