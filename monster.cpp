#include "monster.h"

#include <iostream>

Monster::Monster(std::string name, int health, std::string category, int attackValue, int defenseValue, int initValue)
    : m_name(name), m_health(health), m_category(category), m_attackValue(attackValue), m_defenseValue(defenseValue), m_initValue(initValue)
{

}

Monster::~Monster()
{
    //std::cout << "Monster " << getName() << " is destroyed!" << std::endl;
}

void Monster::attack(Monster &enemyMonster)
{
    enemyMonster.setHealth(enemyMonster.getHealth() - this->getAttackValue());
}

void Monster::printMonster()
{
    std::cout << "Monster: " << getName() << ", HP: (" << getHealth() << " HP)" << std::endl;
}

bool Monster::isDefeated()
{
    if(getHealth() <= 0){
        return true;
    } else {
        return false;
    }
}

std::string Monster::getName() const
{
    return m_name;
}

void Monster::setName(const std::string &newName)
{
    m_name = newName;
}

int Monster::getHealth() const
{
    return m_health;
}

void Monster::setHealth(const int &newHealth)
{
    m_health = newHealth;
}

std::string Monster::getCategory() const
{
    return m_category;
}

void Monster::setCategory(const std::string &newCategory)
{
    m_category = newCategory;
}

int Monster::getAttackValue() const
{
    return m_attackValue;
}

void Monster::setAttackValue(int newAttackValue)
{
    m_attackValue = newAttackValue;
}

int Monster::getDefenseValue() const
{
    return m_defenseValue;
}

void Monster::setDefenseValue(int newDefenseValue)
{
    m_defenseValue = newDefenseValue;
}

int Monster::getInitValue() const
{
    return m_initValue;
}

void Monster::setInitValue(int newInitValue)
{
    m_initValue = newInitValue;
}

std::ostream& operator <<( std::ostream& out, const Monster& m) {
    out << "Monster: " << m.getName() << ", " << m.getHealth() << " HP";
    return out;
}
