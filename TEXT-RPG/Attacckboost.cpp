#include "AttackBoost.h"
#include ""//���� ĳ���� Ŭ������ ����

#include <iostream>

using namespace std;

AttackBoost::AttackBoost()
	: name("���ݷ� ����"), attackIncrease(10) {} // ���ݷ� ���� �ʱⰪ

string AttackBoost::getName() const // ������ �̸� ��ȯ
{
	return name;
}

void AttackBoost::use(Character* character)
{
	character->increaseAttack(attackIncrease); //���ݷ�����
	cout << name << "��� +" << attackIncrease << "���ݷ� ���� �Ϸ�" << endl;
}