#include "battle.h"

#include <iostream>

Battle::Battle() {}

void Battle::startBattle(Monster myMonster, Monster enemyMonster)
{

    std::cout << "Das Battle startet!" << std::endl;

    std::cout << "Mein Mon:" << myMonster.getName() << " --- " << "Enemy Mon: " << enemyMonster.getName() << std::endl;

    while(!myMonster.isDefeated() || !enemyMonster.isDefeated())
    {
        myMonster.attack(enemyMonster);
        enemyMonster.attack(myMonster);
        std::cout << "----------" << std::endl;
        enemyMonster.printMonster();
        myMonster.printMonster();
    }




}

/* TODO

  - Zwischenstand der Healthpoints anzeigen

*/
