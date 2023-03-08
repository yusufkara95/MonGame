#ifndef MYMONSTER_H
#define MYMONSTER_H

#include "monster.h"

class MyMonster : public Monster
{
public:
    MyMonster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue, std::string color);

    std::string getColor() const;
    void setColor(const std::string &newColor);

private:
    std::string m_color;
};

#endif // MYMONSTER_H
