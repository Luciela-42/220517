#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() : HP(0), MP(0), Gold(0)
{

	std::cout << "Player ������" << std::endl;
}

Player::Player(int NewHP, int NewMP, int NewGold)
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;

	cout << "Player ������ ����" << endl;
}

Player::~Player()
{
	cout << "Player �Ҹ���" << endl;
}

void Player::Move()
{
	cout << "Player �̵�" << endl;
}

void Player::Attack()
{
}

void Player::PickupGold()
{
}
