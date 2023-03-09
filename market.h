#ifndef MARKET_H
#define MARKET_H

#include "item.h"

#include <vector>

class Market
{
public:
    Market(std::string name);

    void addItem(Item* item);
    void printMarket();

    std::string getName() const;
    void setName(const std::string &newName);

    std::vector<Item> getMarketItems() const;
    void setMarketItems(const std::vector<Item> &newMarketItems);

private:
    std::vector<Item> marketItems;
    std::string m_name;

};

#endif // MARKET_H
