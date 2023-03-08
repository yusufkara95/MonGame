#ifndef MARKET_H
#define MARKET_H

#include "item.h"

#include <vector>

class Market
{
public:
    Market();

    void addItem();

private:
    std::vector<Item> marketItems;

};

#endif // MARKET_H
