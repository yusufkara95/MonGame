#include "enemymonster.h"

#include <iostream>

EnemyMonster::EnemyMonster(std::string name, int health, std::string category, int attackValue, int defenseValue, int initValue, std::string color)
    : Monster(name, health, category, attackValue, defenseValue, initValue), m_color(color) {
    color = m_color;
}

std::string EnemyMonster::getColor() const
{
    return m_color;
}

void EnemyMonster::setColor(const std::string &newColor)
{
    m_color = newColor;
}
