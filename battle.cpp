#include "battle.h"

#include <iostream>

Battle::Battle() {}

void Battle::startBattle(Monster myMonster, Monster enemyMonster)
{

    std::cout << "Das Battle startet!" << std::endl;

    std::cout << "Mein Monster:" << myMonster.getName() << " - (" << myMonster.getHealth() << " HP) " << " --- " << "Enemy Mon: " << enemyMonster.getName() << " - (" << enemyMonster.getHealth() << " HP) " << std::endl;

    while(!(myMonster.isDefeated() || enemyMonster.isDefeated()))
    {
        myMonster.attack(enemyMonster);
        enemyMonster.attack(myMonster);
        std::cout << "----------" << std::endl;
        myMonster.printMonster();
        enemyMonster.printMonster();
    }




}

/* TODO

  - Zwischenstand der Healthpoints anzeigen

*/
