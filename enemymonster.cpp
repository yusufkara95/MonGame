#include "enemymonster.h"

#include <iostream>

EnemyMonster::EnemyMonster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue, std::string color)
    : Monster(name, gender, category, attackValue, defenseValue, initValue), m_color(color) {
    color = m_color;
}


void EnemyMonster::printMonster()
{
    std::cout << "Pokemon: " << getName() << ", Gender: (" << getGender() << "), Category: " << getCategory() << std::endl;
    std::cout << "-> ANG: " << getAttackValue() << ", DEF: " << getDefenseValue() << ", INIT: " << getInitValue() << std::endl;
}

std::string EnemyMonster::getColor() const
{
    return m_color;
}

void EnemyMonster::setColor(const std::string &newColor)
{
    m_color = newColor;
}
