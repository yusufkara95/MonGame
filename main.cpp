#include <iostream>

#include "battle.h"
#include "mymonster.h"
#include "enemymonster.h"
#include "player.h"
#include "item.h"
#include "market.h"

using namespace std;

int main()
{

    MyMonster* wassiris = new MyMonster("Wassiris", 30, "Wasser", 8, 16, 4, "blau");
    MyMonster* flanzoros = new MyMonster("Flanzoros", 34, "Pflanze", 8, 16, 4, "gruen");
    MyMonster* feuerpol = new MyMonster("Feuerpol", 40, "Feuer", 8, 16, 4, "rot");

    EnemyMonster* ofenos = new EnemyMonster("Ofenos", 20, "Dunkelheit", 8, 12, 2, "rot");


    MyTeam* playerTeam = new MyTeam();
    //Inventory* playerInventory = new Inventory();

    Market* market = new Market("MonMarket");
    Item* potion = new Item("Trank", 20, 50);
    Item* monball = new Item("Monball", 0, 25);

    Player* player = new Player("Yuga", "m", 100, *playerTeam);

    Battle* battleStation = new Battle();

    market->addItem(potion);
    market->addItem(monball);

    //market->printMarket();

    playerTeam->addMonster(*wassiris);


    std::cout << "-------------------------------------------" << std::endl;
    player->printPlayer();
    std::cout << "-------------------------------------------" << std::endl;
    playerTeam->printMyTeam();
    std::cout << "-------------------------------------------" << std::endl;


    battleStation->startBattle(*flanzoros, *ofenos);



    delete wassiris;
    delete feuerpol;
    delete flanzoros;

    delete market;
    delete potion;
    delete monball;

    delete player;
    delete playerTeam;

}

/*TODO:
 * + Alle in eine Liste packen und Speicher freigeben
 * + Smart pointer einbauen
 *
 *
 *
 *
 *
 * Monstermarkt:
 * - Bestand
 *
 * + Prüfen, ob man auf die Daten-Member von Item zugreifen kann, da diese private sind.
*/

