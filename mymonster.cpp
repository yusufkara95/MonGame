#include "mymonster.h"

#include <iostream>

MyMonster::MyMonster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue, std::string color)
    : Monster(name, gender, category, attackValue, defenseValue, initValue), m_color(color) {}


std::string MyMonster::getColor() const
{
    return m_color;
}

void MyMonster::setColor(const std::string &newColor)
{
    m_color = newColor;
}
