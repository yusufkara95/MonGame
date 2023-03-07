#include "abstractmonster.h"

AbstractMonster::AbstractMonster(std::string name, std::string gender, std::string category, int attackValue, int defenseValue, int initValue)
{
    name = m_name;
    gender = m_gender;
    category = m_category;
    attackValue = m_attackValue;
    defenseValue = m_defenseValue;
    initValue = m_initValue;
}
