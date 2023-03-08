#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
    Player(std::string name, std::string m_gender, int money);

    void printPlayer();

    //Player createPlayer();

    std::string getName() const;
    void setName(const std::string &newName);

    std::string getGender() const;
    void setGender(const std::string &newGender);

    int getMoney() const;
    void setMoney(int newMoney);

private:
    std::string m_name;
    std::string m_gender;

    int m_money;

};

#endif // PLAYER_H
