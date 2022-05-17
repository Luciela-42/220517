#pragma once
//Character 클래스는 상속 받아서 사용하는 부모 클래스
//순수 가상 클래스, 추상 클래스
class Character
{
public:
	Character();
	virtual ~Character();

	int HP;
	int Gold;

	//pure virtual funtion
	virtual void Move() = 0;
	virtual void Attack() = 0;
};

