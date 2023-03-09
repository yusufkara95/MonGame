#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "inventory.h"
#include "market.h"
#include "mymonster.h"
#include "enemymonster.h"
#include "myteam.h"

class Player : public MyTeam
{
public:
    Player(std::string name, std::string m_gender, int money, MyTeam myPlayerTeam);

    void printPlayer();
    void printPlayerTeam();

    void buyItem(Market market, Item item);
    void useItem(Inventory inventory);

    void releaseMonster(MyMonster m);
    void renameMonster(MyMonster& m, std::string name);
    void catchMonster(EnemyMonster em);

    std::string getName() const;
    void setName(const std::string &newName);

    std::string getGender() const;
    void setGender(const std::string &newGender);

    int getMoney() const;
    void setMoney(int newMoney);

    friend std::ostream& operator <<( std::ostream& out, const MyMonster& myMonster);

protected:
    std::vector<MyTeam> m_myPlayerTeamList;

private:
    std::string m_name;
    std::string m_gender;

    int m_money;

};

#endif // PLAYER_H
