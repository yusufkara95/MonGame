#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item(std::string name, int value, int saleValue);

    void printItem();

    std::string getName() const;
    void setName(const std::string &newName);

    int getValue() const;
    void setValue(int newValue);

    int getSaleValue() const;
    void setSaleValue(int newSaleValue);

private:
    std::string m_name;
    int m_value;
    int m_saleValue;
};

#endif // ITEM_H
