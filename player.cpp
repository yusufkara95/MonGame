#include "player.h"

#include <iostream>

Player::Player(std::string name, std::string gender, int money, MyTeam myPlayerTeam) : m_name(name), m_gender(gender), m_money(money) {}

void Player::printPlayer()
{
    std::cout << "Spieler: " << getName() << ", Geschlecht: (" << getGender() << "), Geld: " << getMoney() << std::endl;
}

void Player::printPlayerTeam()
{
    std::cout << "Mein Team:" << std::endl;
    for(const auto& v : m_myPlayerTeamList){
        std::cout << &v << '\n';
    }
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
