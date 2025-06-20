// Monsters.cpp
#include "Monster.h"
#include <random>

using namespace std;

// ���� ���� ���� �Լ�
// ���� ������ ĳ���� ������ ����ؼ� �����ϰ� �����ؾ��ϱ� ������ �ʿ�
int getRandomInRange(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());                          // ���� ������
    std::uniform_int_distribution<> dist(min, max);         // �յ� ����
    return dist(gen);
}

// Goblin
Goblin::Goblin(int level) {
    name = "Goblin";
    health = getRandomInRange(level * 20, level * 30);
    attack = getRandomInRange(level * 5, level * 10);
}

std::string Goblin::getName() const { return name; }
int Goblin::getHealth() const { return health; }
int Goblin::getAttack() const { return attack; }

void Goblin::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

//Item* Goblin::dropItem() {
//    return new Item("Goblin Tooth");
//}

// Orc
Orc::Orc(int level) {
    name = "Orc";
    health = getRandomInRange(level * 20, level * 30);
    attack = getRandomInRange(level * 5, level * 10);
}

std::string Orc::getName() const { return name; }
int Orc::getHealth() const { return health; }
int Orc::getAttack() const { return attack; }

void Orc::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

//Item* Orc::dropItem() {
//    return new Item("Orc Axe");
//}

// Troll
Troll::Troll(int level) {
    name = "Troll";
    health = getRandomInRange(level * 20, level * 30);
    attack = getRandomInRange(level * 5, level * 10);
}

std::string Troll::getName() const { return name; }
int Troll::getHealth() const { return health; }
int Troll::getAttack() const { return attack; }

void Troll::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

//Item* Troll::dropItem() {
//    return new Item("Troll Club");
//}

// BossMonster
BossMonster::BossMonster(int level) {
    name = "BossMonster";
    health = getRandomInRange(level * 30, level * 40); 
    attack = getRandomInRange(level * 10, level * 15);
}

std::string BossMonster::getName() const { return name; }
int BossMonster::getHealth() const { return health; }
int BossMonster::getAttack() const { return attack; }

void BossMonster::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

//Item* BossMonster::dropItem() {
//    return new Item("Boss Core");
//}
