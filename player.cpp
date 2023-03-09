#include "player.h"

#include <iostream>

Player::Player(std::string name, std::string gender, int money, Inventory inventory, MyTeam myPlayerTeam) : m_name(name), m_gender(gender), m_money(money), m_inventoryList(inventory), m_playerTeamList(myPlayerTeam) {}

void Player::printPlayer()
{
    std::cout << "Spieler: " << getName() << ", Geschlecht: (" << getGender() << "), Geld: " << getMoney() << std::endl;
}

void Player::buyItem(Market market, Item item)
{

}

void Player::useItem(Inventory inventory)
{

}

void Player::releaseMonster(MyMonster m)
{
    getMyPlayerTeamList().deleteMonster(m);
}

void Player::renameMonster(MyMonster &m, std::string newName)
{
    std::vector<MyMonster>::iterator iter = m_playerTeamList.getMyTeamList().begin();
    std::vector<MyMonster>::iterator endIter = getMyPlayerTeamList().getMyTeamList().end();

    for(;iter != endIter; ++iter)
        {
            if(iter->getName() == m.getName())
            {
                m.setName(newName);
            }
        }
}

void Player::catchMonster(EnemyMonster em)
{

}

std::string Player::getName() const
{
    return m_name;
}

void Player::setName(const std::string &newName)
{
    m_name = newName;
}

std::string Player::getGender() const
{
    return m_gender;
}

void Player::setGender(const std::string &newGender)
{
    m_gender = newGender;
}

int Player::getMoney() const
{
    return m_money;
}

void Player::setMoney(int newMoney)
{
    m_money = newMoney;
}

MyTeam Player::getMyPlayerTeamList() const
{
    return m_playerTeamList;
}

void Player::setMyTeamList(const MyTeam &newMyTeamList)
{
    m_playerTeamList = newMyTeamList;
}
