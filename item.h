#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item(std::string name, int value, int saleValue);

    void printItem();

private:
    std::string m_name;
    int m_value;
    int m_saleValue;
};

#endif // ITEM_H
