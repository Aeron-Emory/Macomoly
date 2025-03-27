#include "Player.h"
#pragma once
class Manager
{
private:
	int currentPlayer, totalPlayer;
	vector<Player> playerList;
	Property propertyList[40];
public:
	Manager(int totalPlayer);
	void playerSetup();
	void CheckPos();
	void DiceRoll(int&, int&);
	void DoTurn();
	bool CheckDouble(int, int);
	void UpdatePlayer();
	void MovePlayer();
	void SpotAction();
	void CheckBankrupt();
	void CurrentPlayerOption();
	void waitForEnter();
};

