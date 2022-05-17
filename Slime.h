#pragma once
#include "Monster.h"

using namespace std;

class Slime : public Monster
{
public:
	Slime();
	virtual ~Slime();

	void Move();
};

