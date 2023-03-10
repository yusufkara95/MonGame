#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster
{
public:
    Monster(std::string name, int health, std::string category, int attackValue, int defenseValue, int initValue);
    ~Monster();

    void attack(Monster& enemyMonster);
    void printMonster();

    std::string getName() const;
    void setName(const std::string &newName);

    int getHealth() const;
    void setHealth(const int &newHealth);

    std::string getCategory() const;
    void setCategory(const std::string &newCategory);

    int getAttackValue() const;
    void setAttackValue(int newAttackValue);

    int getDefenseValue() const;
    void setDefenseValue(int newDefenseValue);

    int getInitValue() const;
    void setInitValue(int newInitValue);

    friend std::ostream& operator <<( std::ostream& out, const Monster& m);

    bool isDefeated();

private:
    std::string m_name;
    int m_health;
    std::string m_category;

    int m_attackValue;
    int m_defenseValue;
    int m_initValue;
};

#endif // MONSTER_H
