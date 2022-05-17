#pragma once
using namespace std;

class Monster
{
public:
	Monster();
	virtual ~Monster();

	int HealtPoint;
	int Gold;

	virtual void Move();
	virtual void Attack();
	virtual void DropGold();
};



