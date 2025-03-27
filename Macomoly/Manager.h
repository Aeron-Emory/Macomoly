#include "Player.h"
#pragma once
class Manager
{
private:
	int currentPlayer, totalPlayer;
	vector<Player> playerList;
	Property propertyList[40];
public:
	Manager(int);
	void CheckPos();
	void DiceRoll();
	bool CheckDouble();
	void UpdatePlayer();
	void MovePlayer();
	void SpotAction();
	void CheckBankrupt();
	void CurrentPlayerOption();
};

