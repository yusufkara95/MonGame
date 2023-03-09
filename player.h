#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "inventory.h"
#include "market.h"
#include "mymonster.h"
#include "enemymonster.h"
#include "myteam.h"

class Player
{
public:
    Player(std::string name, std::string m_gender, int money, Inventory inventory, MyTeam myPlayerTeam);

    void printPlayer();

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

    MyTeam getMyPlayerTeamList() const;
    void setMyTeamList(const MyTeam &newMyTeamList);

private:
    std::string m_name;
    std::string m_gender;

    int m_money;

    Inventory m_inventoryList;
    MyTeam m_playerTeamList;
};

#endif // PLAYER_H
