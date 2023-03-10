#include <iostream>

#include "battle.h"
#include "player.h"

using namespace std;

int main()
{

    Monster flanzoros ("Flanzoros", 44, "Pflanze", 7, 16, 4);
    Monster ofenos ("Ofenos", 30, "Dunkelheit", 5, 12, 2);

    MyTeam playerTeam;
    Player player("Yuga", "m", 100, playerTeam);


    std::cout << "-------------------------------------------" << std::endl;
    player.printPlayer();
    std::cout << "-------------------------------------------" << std::endl;

    Battle* battleStation = new Battle();
    battleStation->startBattle(flanzoros, ofenos);

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

