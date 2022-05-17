#pragma once
#include "Monster.h"

using namespace std;

class Goblin : public Monster
{
public:
	Goblin();
	virtual ~Goblin();

	virtual void Move() override;
};


