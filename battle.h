#ifndef BATTLE_H
#define BATTLE_H

#include "monster.h"

class Battle
{
public:
    Battle();

    void startBattle(Monster myMonster, Monster enemyMonster);

    bool isMonsterDefeated();

private:
};

#endif // BATTLE_H
