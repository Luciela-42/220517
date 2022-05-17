#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() : HealthPoint(0), MagicPoint(0), Gold(0)
{

	std::cout << "Player 생성자" << std::endl;
}

Player::Player(int NewHP, int NewMP, int NewGold)
{
	HealthPoint = NewHP;
	MagicPoint = NewMP;
	Gold = NewGold;

	cout << "Player 생성자 있음" << endl;
}

Player::~Player()
{
	std::cout << "Player 소멸자" << std::endl;
}

void Player::Move()
{
}

void Player::Attack()
{
}

void Player::PickupGold()
{
}
