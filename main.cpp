#include <iostream>

#include "mymonster.h"
#include "myteam.h"

using namespace std;

int main()
{

    MyMonster* wassiris = new MyMonster("Wassiris", "m", "Wasser", 8, 16, 4, "blau");
    MyMonster* flanzoros = new MyMonster("Flanzoros", "m", "Pflanze", 8, 16, 4, "gruen");
    MyMonster* feuerpol = new MyMonster("Feuerpol", "m", "Feuer", 8, 16, 4, "rot");

    MyTeam* myTeam = new MyTeam();

    std::cout << "---------------" << std::endl;

    myTeam->addMonster(*wassiris);
    myTeam->addMonster(*flanzoros);
    myTeam->addMonster(*feuerpol);

    std::cout << "---------------" << std::endl;

    myTeam->deleteMonster(*flanzoros);

    std::cout << "---------------" << std::endl;

    myTeam->printMyTeam();

    std::cout << "---------------" << std::endl;

}

/*TODO:
 * + Alle in eine Liste packen und Speicher freigeben
 * + Smart pointer einbauen
*/

