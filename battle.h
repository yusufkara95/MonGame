#ifndef BATTLE_H
#define BATTLE_H

#include "mymonster.h"
#include "enemymonster.h"

class Battle
{
public:
    Battle();

    void startBattle(MyMonster myMonster, EnemyMonster enemyMonster);

    bool getIsBattleFinished() const;
    void setIsBattleFinished(bool newIsBattleFinished);

private:
    bool isBattleFinished;
};

#endif // BATTLE_H
