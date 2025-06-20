#ifndef ITEM_HEALTHPOTION_H
#define ITEM_HEALTHPOTION_H

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