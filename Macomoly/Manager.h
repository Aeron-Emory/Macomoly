#include "Player.h"
#pragma once
class Manager
{
private:
	int currentPlayer;
	vector<Player> playerList;
	Property propertyList[40];
public:
	Manager();
	void CheckPos();
	void DiceRoll();
	bool CheckDouble();
	void UpdatePlayer();
	void MovePlayer();
	void SpotAction();
	void CheckBankrupt();
	void CurrentPlayerOption();
};

