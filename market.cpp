#include <iostream>

#include "market.h"

Market::Market(std::string name) : m_name(name)
{
    std::cout << "Ein Supermarkt wurde erstellt!" << std::endl;

}

void Market::addItem(Item* item)
{
    marketItems.push_back(*item);
    std::cout << "Ein Item (" << item->getName() << ") wurde zum Shop hinzugefuegt." << std::endl;
}

void Market::printMarket()
{
    std::cout << getName() << std::endl;
    for ( auto & val: marketItems)
    {
        std::cout << val.getName() << ", Kosten: " << val.getSaleValue() << std::endl;
    }
}

std::string Market::getName() const
{
    return m_name;
}

void Market::setName(const std::string &newName)
{
    m_name = newName;
}

