#ifndef HEALTHPOTTION_H_
#define HEALTHPOTTION_H_

#include "Item.h"

class HealthPotion : public Item
{
private:
	std::string name;       //������ �̸�
	int healthRestore;      //ȸ���� ��ġ

public:
	HealthPotion();         //������
	std::string getName() const override;  //�̸� ��ȯ
	void use(Character* character) override;
};

#endif