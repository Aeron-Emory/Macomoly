#include <iostream>
#include <string>
#include <random>

struct player;
struct spot;
using namespace std;

int diceRoll();

void gameLoop(player* players, spot boardSpot[], int numPlayers);

struct price {
	double retailPrice;
	double housePrice;
	double HotelPrice;
	double rentPrice[5];
};
struct spot {
	string name;
	//price prices;
};
struct player {
	string name;
	int money;
	int position;
	int properties[40];
	void checkPosition(player);
	bool bankrupt;
};


int main() {
	int numPlayers = 0;
	spot spots[40];
	player* players;
	while (numPlayers <= 0)
	{
		cout << "How many players are there?" << endl;
		cin >> numPlayers;
	}


	players = new player[numPlayers];

	for (int i = 0; i < numPlayers; i++) {
		string response;
		while (toupper(response[0]) != 'Y')
		{
			response = "";
			players[i].name = "";

			while (players[i].name == "")
			{
				cout << "What is player " << i + 1 << "'s name?" << endl;
				cin >> players[i].name;
			}

			cout << "Are you sure you want " << players[i].name << " as your name?" << endl;
			cin >> response;
		}
		
		cin >> players[i].name;
		players[i].money = 1500;
		players[i].position = 0;
		players[i].bankrupt = false;
	}
	return 0;
}

void player::checkPosition(player p) {
	if (p.position >= 40) p.position -= 40;
	switch (p.position)
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

int diceRoll()
{
	int roll;
	roll = rand() % 6 + 1;
	roll += rand() % 6 + 1;
	return roll;
}

void gameLoop(player *players, spot boardSpot[], int numPlayers)
{
	bool exit = false;

	while (!exit)
	{
		for (int i = 0; i < numPlayers; i++)
		{
			int roll = diceRoll();
			cout << players[i].name << " rolled a " << roll << endl;
			players[i].position += roll;
			players[i].checkPosition(players[i]);
		}
	}
}