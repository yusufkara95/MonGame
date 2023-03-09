#include <iostream>

#include "mymonster.h"
#include "myteam.h"
#include "player.h"
#include "item.h"
#include "market.h"
#include "inventory.h"

using namespace std;

int main()
{

    std::cout << "---------------" << std::endl;

    MyMonster* wassiris = new MyMonster("Wassiris", "m", "Wasser", 8, 16, 4, "blau");
    MyMonster* flanzoros = new MyMonster("Flanzoros", "m", "Pflanze", 8, 16, 4, "gruen");
    MyMonster* feuerpol = new MyMonster("Feuerpol", "m", "Feuer", 8, 16, 4, "rot");

    MyTeam* playerTeam = new MyTeam();
    Inventory* playerInventory = new Inventory();

    Market* market = new Market("MonMarket");
    Item* potion = new Item("Trank", 20, 50);
    Item* monball = new Item("Monball", 0, 25);

    Player* player = new Player("Yuga", "m", 100, *playerInventory, *playerTeam);


    market->addItem(potion);
    market->addItem(monball);

    market->printMarket();

    std::cout << "---------------" << std::endl;

    playerTeam->addMonster(*wassiris);
    playerTeam->addMonster(*flanzoros);
    playerTeam->addMonster(*feuerpol);

    std::cout << "---------------" << std::endl;

    //player->printPlayer();

    std::cout << "---------------" << std::endl;

    playerTeam->deleteMonster(*feuerpol);
    playerTeam->deleteMonster(*flanzoros);

    std::cout << "---------------" << std::endl;

    player->renameMonster(*wassiris, "Waterpol");

    playerTeam->printMyTeam();


    std::cout << "---------------" << std::endl;

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

