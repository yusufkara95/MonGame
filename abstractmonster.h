#ifndef ABSTRACTMONSTER_H
#define ABSTRACTMONSTER_H

#include <string>

class AbstractMonster
{
public:
    AbstractMonster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue);


protected:
    std::string m_name;
    std::string m_gender;
    std::string m_category;

    int m_attackValue;
    int m_defenseValue;
    int m_initValue;


    virtual void attack() = 0;
    virtual void printMonsterStatus();

    virtual ~AbstractMonster();
};

#endif // ABSTRACTMONSTER_H
