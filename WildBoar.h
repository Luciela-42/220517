#pragma once
#include "Monster.h"

using namespace std;

class WildBoar : public Monster
{
public:
	WildBoar();
	virtual ~WildBoar();

	void Move();
};