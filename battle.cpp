#include "battle.h"

#include <iostream>

Battle::Battle()
{

}

void Battle::startBattle(MyMonster myMonster, EnemyMonster enemyMonster)
{

    std::cout << "Battle startet:" << std::endl;

    std::cout << "Mein Mon:" << myMonster.getName() << " --- " << "Enemy Mon: " << enemyMonster.getName() << std::endl;


    while(!getIsBattleFinished())
    {

    }

}

bool Battle::getIsBattleFinished() const
{
    return isBattleFinished;
}

void Battle::setIsBattleFinished(bool newIsBattleFinished)
{
    isBattleFinished = newIsBattleFinished;
}


