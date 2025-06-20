#ifndef ITEM_ATTACKBOOST_H
#define ITEM_ATTACKBOOST_H

#include "Item.h"

class AttackBoost : public Item
{
private:
	std::string name;     //������ �̸�
	int attackIncrease;    //���ݷ� ���� ��ġ

public:
	AttackBoost();                           //������
	std::string getName() const override;    //�̸� ��ȯ
	void use(Character* character) override; //ȿ�� ����
};

#endif
