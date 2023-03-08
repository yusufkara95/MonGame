#include "myteam.h"
#include "mymonster.h"

#include <iostream>

MyTeam::MyTeam()
{

}

void MyTeam::addMonster(MyMonster &m)
{
    myTeamList.push_back(m);
    std::cout << "Ein Monster (" << m.getName() << ") wurde zu deinem Team hinzugefuegt." << std::endl;
}

void MyTeam::deleteMonster(MyMonster m)
{
    std::vector<MyMonster>::iterator iter = myTeamList.begin();
    std::vector<MyMonster>::iterator endIter = myTeamList.end();

    for(;iter != endIter; ++iter)
    {
        if(iter->getName() == m.getName())
        {
            myTeamList.erase(iter);
        }
    }

    std::cout << "Ein Monster (" << m.getName() << ") wurde aus deinem Team entfernt." << std::endl;
}

void MyTeam::printMyTeam()
{
    std::cout << "Mein Team:" << std::endl;
    for ( auto & val: myTeamList)
    {
        std::cout<<val.getName()<<"\n";
    }
}

std::ostream& operator <<( std::ostream& out, const MyMonster& myT) {
    out << myT.getName() << " - " << myT.getCategory();
    return out;
}
