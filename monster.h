#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster
{
public:
    Monster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue);
    ~Monster();

    void attack();
    void printMonster();


    std::string getName() const;
    void setName(const std::string &newName);

    std::string getGender() const;
    void setGender(const std::string &newGender);

    std::string getCategory() const;
    void setCategory(const std::string &newCategory);

    int getAttackValue() const;
    void setAttackValue(int newAttackValue);

    int getDefenseValue() const;
    void setDefenseValue(int newDefenseValue);

    int getInitValue() const;
    void setInitValue(int newInitValue);

private:
    std::string m_name;
    std::string m_gender;
    std::string m_category;

    int m_attackValue;
    int m_defenseValue;
    int m_initValue;
};

#endif // MONSTER_H
