#pragma once


class Player
{
public:
	Player();
	Player(int NewHP, int NewMP, int NewGold);
	~Player();

	void Move();
	void Attack();
	void PickupGold();

	int HealthPoint;
	int MagicPoint;
	int Gold;
};
