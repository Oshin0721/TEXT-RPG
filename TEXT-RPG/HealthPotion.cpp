#include "HealthPotion.h"
#include //ĳ���� Ŭ���� �Լ�

#include <iostream>

using namespace std;

HealthPotion::HealthPotion()
	: name("ȸ�� ǥ��"), healthRestore(50) {} //�ʱⰪ

string HealthPotion::getName() const
{
	return name;
}

void HealthPotion::use(Character* character)
{
	character->restoreHealth(healthRestore); // ĳ���� ü�� �����ε� ���� ����
	cout << name << "���!" << healthRestore << "HP ȸ��" << endl;
}