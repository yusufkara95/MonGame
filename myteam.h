#ifndef MYTEAM_H
#define MYTEAM_H

#include "mymonster.h"
#include <vector>

class MyTeam
{
public:
    MyTeam();

    void addMonster(MyMonster& m);
    void deleteMonster(MyMonster m);

    void printMyTeam();

    friend std::ostream& operator <<( std::ostream& out, const MyTeam& myT);

    std::vector<MyMonster> getMyTeamList() const;
    void setMyTeamList(const std::vector<MyMonster> &newMyTeamList);

private:
    std::vector<MyMonster> m_myTeamList;
};

#endif // MYTEAM_H
