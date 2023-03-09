#include "myteam.h"
#include "mymonster.h"

#include <iostream>

MyTeam::MyTeam() {}

void MyTeam::addMonster(MyMonster &m)
{
    m_myTeamList.push_back(m);
    //std::cout << "Ein Monster (" << m.getName() << ") wurde zu deinem Team hinzugefuegt." << std::endl;
}

void MyTeam::deleteMonster(MyMonster m)
{
    std::vector<MyMonster>::iterator iter = m_myTeamList.begin();
    std::vector<MyMonster>::iterator endIter = m_myTeamList.end();

    for(;iter != endIter; ++iter)
    {
        if(iter->getName() == m.getName())
        {
           m_myTeamList.erase(iter);
        }
    }

    std::cout << "Ein Monster (" << m.getName() << ") wurde aus deinem Team entfernt." << std::endl;
}

void MyTeam::printMyTeam()
{
    std::cout << "Mein Team:" << std::endl;
    for ( auto & val: m_myTeamList)
    {
        std::cout<<val.getName()<<"\n";
    }
}

int MyTeam::printCountMonster()
{
    return m_myTeamList.size();
}

std::vector<MyMonster> MyTeam::getMyTeamList() const
{
    return m_myTeamList;
}

void MyTeam::setMyTeamList(const std::vector<MyMonster> &newMyTeamList)
{
    m_myTeamList = newMyTeamList;
}

std::ostream& operator <<( std::ostream& out, const MyMonster& myT) {
    out << myT.getName() << " - " << myT.getCategory();
    return out;
}
