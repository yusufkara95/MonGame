#ifndef ENEMYMONSTER_H
#define ENEMYMONSTER_H

#include <string>

class EnemyMonster
{
public:
    EnemyMonster(std::string name, int health, std::string category, int attackValue, int defenseValue, int initValue, std::string color);

    void printMonster();

    std::string getColor() const;
    void setColor(const std::string &newColor);

private:
    std::string m_color;
};

#endif // ENEMYMONSTER_H
