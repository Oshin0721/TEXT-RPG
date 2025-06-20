#pragma once
// #include "Item.h"
#include <string>

using namespace std;

class Monster {                                     // Monster�� �߻� Ŭ����(��� ������ ���� ���)
public:
    virtual std::string getName() const = 0;        // �̸�
    virtual int getHealth() const = 0;              // ü��
    virtual int getAttack() const = 0;              // ���ݷ�
    virtual void takeDamage(int damage) = 0;        // ������ ó��
    // virtual Item* dropItem() = 0;                   // ��� ������ ��ȯ
    virtual ~Monster() = default;                   // �������� ���� ���� �Ҹ���
};

// Goblin, Orc, Troll, BossMonster Ŭ���� �����
// �� Ŭ������ Monster�� ����ϸ� ������ ������ ����
// ���� ������� �����Ǳ� ������ �����ڿ� int level ����
class Goblin : public Monster {
public:
    Goblin(int level);
    std::string getName() const override;
    int getHealth() const override;
    int getAttack() const override;
    void takeDamage(int damage) override;
    // Item* dropItem() override;

private:
    std::string name;
    int health;
    int attack;
};

class Orc : public Monster {
public:
    Orc(int level);
    std::string getName() const override;
    int getHealth() const override;
    int getAttack() const override;
    void takeDamage(int damage) override;
    // Item* dropItem() override;

private:
    std::string name;
    int health;
    int attack;
};

class Troll : public Monster {
public:
    Troll(int level);
    std::string getName() const override;
    int getHealth() const override;
    int getAttack() const override;
    void takeDamage(int damage) override;
    // Item* dropItem() override;

private:
    std::string name;
    int health;
    int attack;
};

class BossMonster : public Monster {
public:
    BossMonster(int level);
    std::string getName() const override;
    int getHealth() const override;
    int getAttack() const override;
    void takeDamage(int damage) override;
    // Item* dropItem() override;

private:
    std::string name;
    int health;
    int attack;
};
