#include <iostream>

#include "mymonster.h"

using namespace std;

int main()
{

    MyMonster* monsterOne = new MyMonster("Pickachu", "m", "Thunder", 12, 6, 8, "blue");

    monsterOne->printMonster();

    monsterOne->setName("Juckachu");

    monsterOne->printMonster();


    delete monsterOne;
}
