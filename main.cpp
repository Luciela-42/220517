#include <iostream>
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"
#include "Player.h"
#include "BossGoblin.h"
#include <vector>	//container STL, Standard Template Library	
#include <string>

using namespace std;

int main()
{

	//»ý¼º
	srand(static_cast<unsigned int>(time(nullptr)));

	Monster* NewMonster = new WildBoar;

	NewMonster->Move();

	vector<Monster*> Monsters;
	Monsters.push_back(new BossGoblin);

	//int SpawnCount = rand() % 3 + 1;
	//vector<Monster*> Monsters;
	//for (int i = 0; i < SpawnCount; ++i)
	//{
	//	Monsters.push_back(new Goblin);
	//}
	//
	//SpawnCount = rand() % 3 + 1;
	//for (int i = 0; i < SpawnCount; ++i)
	//{
	//	Monsters.push_back(new Slime);
	//}

	//SpawnCount = rand() % 3 + 1;
	//for (int i = 0; i < SpawnCount; ++i)
	//{
	//	Monsters.push_back(new WildBoar);
	//}
	
	//Tick
	for (int i = 0; i < Monsters.size(); ++i)
	{
		Monsters[i]->Move();
	}

	for (int i = 0; i < Monsters.size(); ++i)
	{
		delete Monsters[i];
	}

	return 0;
}