#include "Manager.h"

Manager::Manager(int TP)
{
	totalPlayer = TP;
	currentPlayer = 0;
}

void Manager::CheckPos()
{
	switch (playerList[currentPlayer].getPos())
	{
	case 0:
		cout << "You are on Go!" << endl;
		break;
	case 1:
		cout << "You are on Mediterranean Avenue!" << endl;
		break;
	case 2:
		cout << "You are on Community Chest!" << endl;
		break;
	case 3:
		cout << "You are on Baltic Avenue!" << endl;
		break;
	case 4:
		cout << "You are on Income Tax!" << endl;
		break;
	case 5:
		cout << "You are on Reading Railroad!" << endl;
		break;
	case 6:
		cout << "You are on Oriental Avenue!" << endl;
		break;
	case 7:
		cout << "You are on Chance!" << endl;
		break;
	case 8:
		cout << "You are on Vermont Avenue!" << endl;
		break;
	case 9:
		cout << "You are on Connecticut Avenue!" << endl;
		break;
	case 10:
		cout << "You are on Jail!" << endl;
		playerList[currentPlayer].setJail(true);
		break;
	case 11:
		cout << "You are on St. Charles Place!" << endl;
		break;
	case 12:
		cout << "You are on Electric Company!" << endl;
		break;
	case 13:
		cout << "You are on States Avenue!" << endl;
		break;
	case 14:
		cout << "You are on Virginia Avenue!" << endl;
		break;
	case 15:
		cout << "You are on Pennsylvania Railroad!" << endl;
		break;
	case 16:
		cout << "You are on St. James Place!" << endl;
		break;
	case 17:
		cout << "You are on Community Chest!" << endl;
		break;
	case 18:
		cout << "You are on Tennessee Avenue!" << endl;
		break;
	case 19:
		cout << "You are on New York Avenue!" << endl;
		break;
	case 20:
		cout << "You are on Free Parking!" << endl;
		break;
	case 21:
		cout << "You are on Kentucky Avenue!" << endl;
		break;
	case 22:
		cout << "You are on Chance!" << endl;
		break;
	case 23:
		cout << "You are on Indiana Avenue!" << endl;
		break;
	case 24:
		cout << "You are on Illinois Avenue!" << endl;
		break;
	case 25:
		cout << "You are on B. & O. Railroad!" << endl;
		break;
	case 26:
		cout << "You are on Atlantic Avenue!" << endl;
		break;
	case 27:
		cout << "You are on Ventnor Avenue!" << endl;
		break;
	case 28:
		cout << "You are on Water Works!" << endl;
		break;
	case 29:
		cout << "You are on Marvin Gardens!" << endl;
		break;
	case 30:
		cout << "You are on Go To Jail!" << endl;
		break;
	case 31:
		cout << "You are on Pacific Avenue!" << endl;
		break;
	case 32:
		cout << "You are on North Carolina Avenue!" << endl;
		break;
	case 33:
		cout << "You are on Community Chest!" << endl;
		break;
	case 34:
		cout << "You are on Pennsylvania Avenue!" << endl;
		break;
	case 35:
		cout << "You are on Short Line!" << endl;
		break;
	case 36:
		cout << "You are on Chance!" << endl;
		break;
	case 37:
		cout << "You are on Park Place!" << endl;
		break;
	case 38:
		cout << "You are on Luxury Tax!" << endl;
		break;
	case 39:
		cout << "You are on Boardwalk!" << endl;
		break;
	}
}

void Manager::DiceRoll(int& dice1, int& dice2)
{
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	cout << "You rolled a " << dice1 << " and a " << dice2 << "!" << endl;
	CheckPos();
}

void Manager::DoTurn()
{
	int dice1, dice2;
	if (playerList[currentPlayer].jailStatus())
	{
		cout << "You are in Jail!" << endl;
		waitForEnter();
	}
	else
	{
		DiceRoll(dice1, dice2);
		if (CheckDouble(dice1, dice2))
		{
			cout << "You rolled a double! Roll again!" << endl;
			waitForEnter();
			DiceRoll(dice1, dice2);
			playerList[currentPlayer].updatePos(dice1 + dice2);
			if (CheckDouble(dice1, dice2))
			{
				cout << "You rolled a double again! Roll again!" << endl;
				waitForEnter();
				DiceRoll(dice1, dice2);
				playerList[currentPlayer].updatePos(dice1 + dice2);
				if (CheckDouble(dice1, dice2))
				{
					cout << "You rolled a double again! Go to Jail!" << endl;
					playerList[currentPlayer].updatePos(10);
					playerList[currentPlayer].setJail(true);
				}
			}
		}
		playerList[currentPlayer].updatePos(dice1 + dice2);
	}
}

bool Manager::CheckDouble(int dice1, int dice2)
{
	if (dice1 == dice2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Manager::waitForEnter()
{
	cout << "Press Enter to continue...";
	cin.ignore();
	cin.get();
}
