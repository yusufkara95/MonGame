#include "player.h"

#include <iostream>

Player::Player(std::string name, std::string gender, int money) : m_name(name), m_gender(gender), m_money(money) {}

void Player::printPlayer()
{
    std::cout << "Spieler: " << getName() << ", Geschlecht: (" << getGender() << "), Geld: " << getMoney() << std::endl;
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
