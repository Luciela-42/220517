#pragma once
//Character Ŭ������ ��� �޾Ƽ� ����ϴ� �θ� Ŭ����
//���� ���� Ŭ����, �߻� Ŭ����
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

