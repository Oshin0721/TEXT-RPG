#ifndef ATTACKBOOST_H_
#define ATTACKBOOST_H_

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
