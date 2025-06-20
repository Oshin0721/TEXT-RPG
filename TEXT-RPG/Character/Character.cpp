#include "Character.h"
#include <iostream>
#include <iomanip>
#include "Shop.h"

Character* Character::instance = nullptr; // �̱��� �ν��Ͻ� �ʱ�ȭ

// ������: �̸��� �޾Ƽ� �ʱⰪ ����
Character::Character(std::string name)
    : name(name), level(1), health(200), maxHealth(200), attack(30),
    experience(0), gold(0) {
}

// �̱��� �ν��Ͻ� ��ȯ �Լ�
Character* Character::getInstance(std::string name)
{
    if (!instance)
    {
        instance = new Character(name);
        std::cout << "ĳ���� " << name << " ���� �Ϸ�! ����: 1, ü��: 200, ���ݷ�: 30" << std::endl;
    }
    return instance;
}

// ĳ���� ���� ��� �Լ�
void Character::displayStatus() const
{
    std::cout << "==== ĳ���� ���� ====" << std::endl;
    std::cout << "�̸�: " << name << " | ����: " << level
        << " | ü��: " << health << "/" << maxHealth
        << " | ���ݷ�: " << attack << std::endl;
    std::cout << "����ġ: " << experience << "/100"
        << " | ���: " << gold << std::endl;
    std::cout << "�κ��丮: " << inventory.size() << "�� ������ ����" << std::endl;
}

// ������ �Լ�
void Character::levelUp()
{
    if (level >= 10) return;

    level++;
	maxHealth += level * 20; // ������ �ִ� ü�� ����
	attack += level * 5; // ������ ���ݷ� ����
	health = maxHealth; // ������ �� ü�� ȸ��
	experience = 0; // ������ �� ����ġ �ʱ�ȭ

    std::cout << "[������!] ���� ����: " << level << " | ü��: "
        << health << " | ���ݷ�: " << attack << std::endl;
}

//����ġ ȹ�� �Լ�
void Character::addExperience(int exp)
{
    experience += exp;
    std::cout << "[����ġ ȹ��] + " << exp << " EXP (����: " << experience << "/100)" << std::endl;
    while (experience >= 100 && level < 10)
    {
        experience -= 100;
        levelUp();
    }
}

// ��� ȹ�� �Լ�
void Character::addGold(int amount)
{
    gold += amount;
    std::cout << "[��� ȹ��] +" << amount << " G (��: " << gold << " G)" << std::endl;
}

// �������� �޴� ���� ó�� �Լ�
void Character::takeDamage(int damage)
{
    health -= damage;
    if (health < 0) health = 0;
}

// ���ظ� �޾��� �� ���� ���
bool Character::isDead() const
{
    return health <= 0;
}

// ������ ȹ�� �Լ�
void Character::addItem(Item* item)
{
    inventory.push_back(item);
    std::cout << "[������ ȹ��] " << item->getName() << " ȹ��!" << std::endl;
}

// ������ ��� �Լ�
void Character::useItem(int index)
{
    if (index < 0 || index >= inventory.size())
    {
        std::cout << "�߸��� �ε����Դϴ�." << std::endl;
        return;
    }
    Item* item = inventory[index];
	item->use(*this); // ������ ��� �� Character ��ü�� ������ �ѱ�
    delete item;
    inventory.erase(inventory.begin() + index);
}

// ���� �湮 �Լ�
void Character::visitShop()
{
	Shop shop; // Shop Ŭ������ �ν��Ͻ� ����
    shop.displayItems();
	shop.interact(this); // Character ��ü�� ������ �Ѱ� ������ ��ȣ�ۿ�
}

std::string Character::getName() const { return name; } // ĳ���� �̸� ��ȯ
int Character::getHealth() const { return health; } // ���� ü�� ��ȯ
int Character::getAttack() const { return attack; } // ���� ���ݷ� ��ȯ
int Character::getLevel() const { return level; } // ���� ���� ��ȯ 
int Character::getGold() const { return gold; } // ���� ��� ��ȯ
int Character::getExperience() const { return experience; } // ���� ����ġ ��ȯ
int Character::getInventorySize() const { return inventory.size(); } // �κ��丮 ũ�� ��ȯ 
Item* Character::getItem(int index) // �κ��丮���� ������ ��ȯ
{
	if (index < 0 || index >= inventory.size()) return nullptr; // �ε����� ��ȿ���� ������ nullptr ��ȯ
    return inventory[index];
}
