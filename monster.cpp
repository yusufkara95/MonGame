#include "monster.h"

#include <iostream>

Monster::Monster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue)
    : m_name(name), m_gender(gender), m_category(category), m_attackValue(attackValue), m_defenseValue(defenseValue), m_initValue(initValue)
{

}

Monster::~Monster()
{
    std::cout << "Monster is destroyed!" << std::endl;
}

void Monster::printMonster()
{
    std::cout << "Pokemon: " << getName() << ", Gender: (" << getGender() << "), Category: " << getCategory() << std::endl;
}

std::string Monster::getName() const
{
    return m_name;
}

void Monster::setName(const std::string &newName)
{
    m_name = newName;
}

std::string Monster::getGender() const
{
    return m_gender;
}

void Monster::setGender(const std::string &newGender)
{
    m_gender = newGender;
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
