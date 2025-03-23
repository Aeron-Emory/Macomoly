#include <iostream>
#include <string>
#include <random>
#include <vector>
using namespace std;
#pragma once
class Property
{
private:
	bool isProperty;
	string owner, name, color;
	int price, house, housePrice, Mortgage, spot;
	double hotelPrice, rentPrice[5];
public:
	Property();
	Property(string name, string color, int price, int housePrice, double hotelPrice, double rentPrice[5], int spot);
};

