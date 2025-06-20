#pragma once
#include <string>
#include <vector>
#include "Item.h" // ������ Ŭ���� ��� ���ؼ�

class Character {
private:
	static Character* instance; // �̱��� �ν��Ͻ�
    std::string name;
    int level;
    int health;
    int maxHealth;
    int attack;
    int experience;
    int gold;
	std::vector<Item*> inventory; // ������ �κ��丮

    Character(std::string name); // private ������, �̸� �޾Ƽ� �ʱⰪ ����

public:
	static Character* getInstance(std::string name = ""); // �̱��� �ν��Ͻ� ��ȯ, �̸��� ������ ���� ����

    void displayStatus() const;
    void levelUp();
    void addExperience(int exp);
    void addGold(int amount);
    void takeDamage(int damage);
    bool isDead() const;

    void addItem(Item* item);
    void useItem(int index);
    void visitShop();

    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getLevel() const;
    int getGold() const;
    int getExperience() const;
    int getInventorySize() const;
    Item* getItem(int index);
};
