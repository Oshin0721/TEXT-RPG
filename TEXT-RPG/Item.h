#ifndef ITEM_H_
#define ITEM_H_

#include <string>

class Character; //������ Character Ŭ���� ������ �ϱ����� ����

class Item //��� ������ ���� �������̽� ����(�߻�Ŭ����)
{
public:
	virtual ~Item() {} //�Ҹ���(�޸� ���� ����)
	virtual std::string getName() const = 0; //������ �̸��� ��ȯ�ϴ� ���� ���� �Լ�
	virtual void use(Character* character) = 0; //ĳ���Ϳ��� �������� ����� �� ȣ��Ǵ� �Լ�
};


#endif